from PIL import ImageGrab, ImageOps
import pyautogui
import time
import numpy as np

class Bot:
    """Bot for playing Chrome dino run game"""
    def __init__(self):
        self.restart_coords = (480, 503)
        self.dino_coords = (207, 534)  
        self.area = (self.dino_coords[0] + 90, self.dino_coords[1],
                     self.dino_coords[0] + 150, self.dino_coords[1] + 5)

def set_dino_coords(self, x, y):
    """
    Change default dino coordinates
    :param x: top right x coordinate (int)
    :param y: top right y coordinate (int)
    :return: None
    """
    self.dino_coords = (x, y)

def set_restart_coords(self, x, y):
    """
    Change default restart button coordinates
    :param x: center x coordinate (int)
    :param y: center y coordinate (int)
    :return: None
    """
    self.restart_coords = (x, y)

def restart(self):
    """
    Restart the game and set default crawl run
    :return: None
    """
    pyautogui.click(self.restart_coords)
    pyautogui.keyDown('down')

def jump(self):
    """
    Jump over the obstacle
    :return: None
    """
    pyautogui.keyUp('down')
    pyautogui.keyDown('space')
    time.sleep(0.095)
    pyautogui.keyUp('space')
    pyautogui.keyDown('down')

def detection_area(self):
    """
    Checks the area to have obstacles
    :return: float
    """
    image = ImageGrab.grab(self.area)
    gray_img = ImageOps.grayscale(image)
    arr = np.array(gray_img.getcolors())
    # print(arr.mean())
    return arr.mean()

def main(self):
    """
    Main loop of the playing
    :return: None
    """
    self.restart()
    while True:
        if self.detection_area() < 273:
            self.jump()

bot = Bot()
bot.main()