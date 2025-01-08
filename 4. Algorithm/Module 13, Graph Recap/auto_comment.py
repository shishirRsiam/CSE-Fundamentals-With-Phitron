import random
import pyautogui as pg
import time

S_S = ("Sishir","Siam","World","C++","Python","auto comment")
Start = ("Hi","Hello")
time.sleep(2)
for i in range(100):
    a = random.choice(S_S)
    b = random.choice(Start)
    pg.write(b + " "+ a + " (" + str(i)+ ")")
    time.sleep(2)
    pg.press("enter") 

print("Message sent successfully!")