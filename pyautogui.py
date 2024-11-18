import pyautogui
import time


print("10seconds")
time.sleep(10)


paragraph = """1. The image shows four individuals gathered around a table,
 engaged in a collaborative activity. They are looking at a laptop screen, 
 with one person pointing at the screen, possibly discussing or explaining 
 something. There is also a small drone on the table, suggesting that their 
 discussion might be related to technology or a project involving the drone. 
 The setting appears to be a modern office or meeting room. 2. Working together
   as a team is often better compared to working individually for several reasons.
     Teamwork allows for the pooling of diverse skills and perspectives, leading 
     to more innovative solutions. It also fosters a sense of shared responsibility
       and support, which can enhance motivation and productivity. Additionally, 
       collaboration can lead to better decision-making as team members can provide 
       feedback and challenge each other's ideas, ultimately leading to more refined
         and effective outcomes."""


pyautogui.typewrite(paragraph)

