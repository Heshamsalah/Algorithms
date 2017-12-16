class Circle:
    PI = 3.14159265

    def __init__(self, radius):
        self._radius = radius

    def getArea(self):
        area = self.PI * self._radius * self._radius
        return int(round(area))

class Rectangle:
    def __init__(self, width, height):
        self._width = width
        self._height = height

    def getArea(self):
        area = self._width * self._height
        return int(round(area))

class Square:
    def __init__(self, width):
        self._width = width

    def getArea(self):
        area = self._width * self._width
        return int(round(area))
