import pygame
import os

# Pygame Initialization
pygame.init()

# Set the dimensions of the screen (width, height).
size = (700, 500)
screen = pygame.display.set_mode(size)

# Set the title of the window
pygame.display.set_caption("Differential Drive Robot Simulator")

# Loop until the user clicks the close button.
done = False

# Used to manage how fast the screen updates.
clock = pygame.time.Clock()

# Load the robot image
robot = pygame.image.load(os.path.join('robot.png'))

# Initial position of the robot
x = 350
y = 250

# Speed and direction of rectangle
change_x = 0
change_y = 0

# -------- Main Program Loop -----------
while not done:
    # --- Main event loop
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True

        # User pressed down on a key
        elif event.type == pygame.KEYDOWN:
            # Figure out if it was an arrow key. If so, adjust speed.
            if event.key == pygame.K_LEFT:
                change_x = -3
            elif event.key == pygame.K_RIGHT:
                change_x = 3
            elif event.key == pygame.K_UP:
                change_y = -3
            elif event.key == pygame.K_DOWN:
                change_y = 3

        # User let up on a key
        elif event.type == pygame.KEYUP:
            # If it is an arrow key, reset vector back to zero
            if event.key == pygame.K_LEFT or event.key == pygame.K_RIGHT:
                change_x = 0
            elif event.key == pygame.K_UP or event.key == pygame.K_DOWN:
                change_y = 0

    # --- Game logic should go here

    # Move the object according to the speed vector.
    x += change_x
    y += change_y

    # --- Drawing code should go here

    # First, clear the screen to light blue. Don't put other drawing commands above this.
    screen.fill((173,216,230))

    # Draw the robot at its current location
    screen.blit(robot, (x, y))

    # --- Go ahead and update the screen with what we've drawn.
    pygame.display.flip()

    # --- Limit frames per second
    clock.tick(60)

# Close everything down
pygame.quit()
