import random
import pyautogui as pg
import time

animal_names = ["Lion", "Elephant", "Giraffe", "Tiger", "Kangaroo"]

for i in range(10):
    time.sleep(2)
    a = random.choice(animal_names)
    pg.typewrite("You are a " + a)
    time.sleep(2)
    pg.press("enter")

print("Done")