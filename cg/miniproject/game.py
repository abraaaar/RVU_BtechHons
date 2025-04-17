from OpenGL.GL import *
from OpenGL.GLUT import *
from OpenGL.GLU import *
from PIL import Image
import random
import time

# Window size
win_width = 500
win_height = 700

# Car settings
car_width = 50
car_height = 80
car_x = win_width // 2 - car_width // 2
car_y = 50
car_speed = 5

# Obstacle settings
obs_width = 50
obs_height = 80
initial_obs_speed = 5
obs_speed = initial_obs_speed
obstacles = []

# Game state
move_left = move_right = move_up = move_down = False
line_offset = 0
game_over = False
last_difficulty_increase = time.time()
difficulty_interval = 5
max_obstacles = 1
score = 0

# Texture holder
textures = {}

# --- Load Textures ---
def load_texture(file):
    img = Image.open(file)
    img = img.transpose(Image.FLIP_TOP_BOTTOM)
    img_data = img.convert("RGBA").tobytes()
    width, height = img.size

    tex_id = glGenTextures(1)
    glBindTexture(GL_TEXTURE_2D, tex_id)
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0,
                 GL_RGBA, GL_UNSIGNED_BYTE, img_data)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR)

    return tex_id

# --- Drawing ---
def draw_textured_rect(x, y, width, height, tex_id):
    glEnable(GL_TEXTURE_2D)
    glBindTexture(GL_TEXTURE_2D, tex_id)
    glColor3f(1, 1, 1)

    glBegin(GL_QUADS)
    glTexCoord2f(0, 0); glVertex2f(x, y)
    glTexCoord2f(1, 0); glVertex2f(x + width, y)
    glTexCoord2f(1, 1); glVertex2f(x + width, y + height)
    glTexCoord2f(0, 1); glVertex2f(x, y + height)
    glEnd()

    glDisable(GL_TEXTURE_2D)

def draw_rect(x, y, width, height, color):
    glColor3f(*color)
    glBegin(GL_QUADS)
    glVertex2f(x, y)
    glVertex2f(x + width, y)
    glVertex2f(x + width, y + height)
    glVertex2f(x, y + height)
    glEnd()

def draw_centered_text(text, y, font=GLUT_BITMAP_HELVETICA_18, color=(1, 1, 1)):
    text_width = sum([glutBitmapWidth(font, ord(c)) for c in text])
    x = (win_width - text_width) // 2
    glColor3f(*color)
    glRasterPos2f(x, y)
    for c in text:
        glutBitmapCharacter(font, ord(c))

def draw_text_box(center_y, text_lines, box_color=(0.2, 0.2, 0.2), text_color=(1, 1, 1)):
    padding = 20
    line_height = 30
    max_text_width = max(sum([glutBitmapWidth(GLUT_BITMAP_HELVETICA_18, ord(c)) for c in line]) for line in text_lines)
    total_height = line_height * len(text_lines)

    box_x = (win_width - max_text_width - 2 * padding) // 2
    box_y = center_y - total_height // 2 - padding // 2

    draw_rect(box_x, box_y, max_text_width + 2 * padding, total_height + padding, box_color)

    for i, line in enumerate(text_lines):
        draw_centered_text(line, box_y + total_height - (i + 1) * line_height, GLUT_BITMAP_HELVETICA_18, text_color)

# --- Game logic ---
def draw_highway():
    global line_offset
    draw_rect(0, 0, win_width, win_height, (0, 0, 0))
    glColor3f(1.0, 1.0, 1.0)
    dash_height = 40
    gap = 30
    lane_width = win_width // 3
    for i in range(1, 3):
        x = i * lane_width
        y = -line_offset % (dash_height + gap)
        while y < win_height:
            glBegin(GL_LINES)
            glVertex2f(x, y)
            glVertex2f(x, y + dash_height)
            glEnd()
            y += dash_height + gap

def spawn_obstacle():
    x = random.randint(0, win_width - obs_width)
    y = random.randint(win_height, win_height + 300)
    tex = random.choice([textures['obs1'], textures['obs2'], textures['obs3']])
    obstacles.append({'x': x, 'y': y, 'scored': False, 'tex': tex})

def check_collision():
    global game_over
    for obs in obstacles:
        if (obs['y'] < car_y + car_height and
            obs['y'] + obs_height > car_y and
            obs['x'] < car_x + car_width and
            obs['x'] + obs_width > car_x):
            game_over = True

def display():
    glClear(GL_COLOR_BUFFER_BIT)
    glLoadIdentity()

    draw_highway()
    draw_textured_rect(car_x, car_y, car_width, car_height, textures['car'])

    for obs in obstacles:
        draw_textured_rect(obs['x'], obs['y'], obs_width, obs_height, obs['tex'])

    # Score
    draw_rect(10, win_height - 40, 120, 30, (0.2, 0.2, 0.2))
    glColor3f(1, 1, 1)
    glRasterPos2f(20, win_height - 30)
    for ch in f"Score: {score}":
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, ord(ch))

    if game_over:
        draw_text_box(win_height // 2, [
            "GAME OVER",
            f"Your Score: {score}",
            "Press R to Restart"
        ], box_color=(0.0, 0.0, 0.0), text_color=(1.0, 0.3, 0.3))

    glutSwapBuffers()

def update(value):
    global car_x, car_y, line_offset, obs_speed, last_difficulty_increase, max_obstacles, score

    if not game_over:
        if move_left:
            car_x = max(0, car_x - car_speed)
        if move_right:
            car_x = min(win_width - car_width, car_x + car_speed)
        if move_up:
            car_y = min(win_height - car_height, car_y + car_speed)
        if move_down:
            car_y = max(0, car_y - car_speed)

        for obs in obstacles:
            obs['y'] -= obs_speed
            if obs['y'] + obs_height < car_y and not obs['scored']:
                score += 10
                obs['scored'] = True

        line_offset += obs_speed
        obstacles[:] = [obs for obs in obstacles if obs['y'] + obs_height > 0]
        while len(obstacles) < max_obstacles:
            spawn_obstacle()

        if time.time() - last_difficulty_increase > difficulty_interval:
            obs_speed += 0.5
            max_obstacles += 1
            last_difficulty_increase = time.time()

        check_collision()

    glutPostRedisplay()
    glutTimerFunc(16, update, 0)

def reset_game():
    global car_x, car_y, obstacles, obs_speed, max_obstacles, line_offset, score, game_over, last_difficulty_increase
    car_x = win_width // 2 - car_width // 2
    car_y = 50
    obstacles = []
    obs_speed = initial_obs_speed
    max_obstacles = 1
    line_offset = 0
    score = 0
    game_over = False
    last_difficulty_increase = time.time()
    spawn_obstacle()

def key_down(key, x, y):
    if key == b'\x1b':
        glutLeaveMainLoop()
    elif key == b'r' and game_over:
        reset_game()

def special_key_down(key, x, y):
    global move_left, move_right, move_up, move_down
    if key == GLUT_KEY_LEFT:
        move_left = True
    elif key == GLUT_KEY_RIGHT:
        move_right = True
    elif key == GLUT_KEY_UP:
        move_up = True
    elif key == GLUT_KEY_DOWN:
        move_down = True

def special_key_up(key, x, y):
    global move_left, move_right, move_up, move_down
    if key == GLUT_KEY_LEFT:
        move_left = False
    elif key == GLUT_KEY_RIGHT:
        move_right = False
    elif key == GLUT_KEY_UP:
        move_up = False
    elif key == GLUT_KEY_DOWN:
        move_down = False

def key_up(key, x, y):
    pass

def init():
    glClearColor(0.1, 0.1, 0.1, 1.0)
    glMatrixMode(GL_PROJECTION)
    glLoadIdentity()
    gluOrtho2D(0, win_width, 0, win_height)
    glMatrixMode(GL_MODELVIEW)

    # Load textures
    textures['car'] = load_texture('cartop.png')
    textures['obs1'] = load_texture('obs1.png')
    textures['obs2'] = load_texture('obs2.png')
    textures['obs3'] = load_texture('obs3.png')

def main():
    glutInit()
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB)
    glutInitWindowSize(win_width, win_height)
    glutInitWindowPosition(100, 100)
    glutCreateWindow(b"2D Car Game with Textures")

    init()
    glutDisplayFunc(display)
    glutKeyboardFunc(key_down)
    glutKeyboardUpFunc(key_up)
    glutSpecialFunc(special_key_down)
    glutSpecialUpFunc(special_key_up)
    glutTimerFunc(0, update, 0)

    spawn_obstacle()
    glutMainLoop()

if __name__ == "__main__":
    main()
