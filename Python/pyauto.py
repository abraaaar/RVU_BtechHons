import pyautogui
import time


print("5seconds")
time.sleep(5)


paragraph = """The picture shows a visual representation of online shopping. Two computer screens face each other. From the left screen, a hand is holding out a credit card, while from the right screen, another hand is offering a small shopping bag. This symbolizes the digital transaction process in online shopping, where one person pays using a card and receives goods virtually. It highlights the convenience and simplicity of e-commerce, where purchases can be made from anywhere with just a few clicks.

Yes, online shopping could lead to the decline of physical stores in the future. First, online platforms offer convenience—people can shop anytime without leaving their homes. This saves time and energy, which is highly appealing in today’s fast-paced world. Second, online stores often have lower operational costs and can offer better discounts and a wider range of products than physical shops. This makes them more attractive to budget-conscious customers. However, physical stores may still survive by offering unique in-store experiences and personalized customer service that online shopping lacks."""

pyautogui.typewrite(paragraph)

