import random
import numpy as np
import time
import cv2

try:
    import pygame
    from .sound import get_sound_list, SF
except ImportError:
    pygame = None


class DataSeq:
    WHITE = (255, 255, 255)
    RED = (0, 0, 255)
    BLACK = (0, 0, 0)
    YELLOW = (0, 127, 255)

    MAX_IM_SIZE = 500

    def __init__(self, Length, time_interval=1,
                 sort_title="Figure",
                 is_resampling=False,
                 is_sparse=False,
                 record=False,
                 sound=False, sound_interval=16,
                 fps=25):
        self.data = [x for x in range(Length)]
        if is_resampling:
            self.data = random.choice(self.data, k=Length)
        else:
            self.data = [x if random.random() < 0.3 else 0 for x in self.data]
