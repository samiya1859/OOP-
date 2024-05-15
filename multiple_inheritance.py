class Vehicle:
    def __init__(self):
        self.model = ""

    def set_brand(self):
        print("Brand: Toyota")


class Car:
    def __init__(self, price):
        self.price = price


class Cycle:
    def __init__(self, model, price):
        self.vehicle = Vehicle()
        self.car = Car(price)
        self.model = model

    def set_brand(self):
        self.vehicle.set_brand()


obj = Cycle("Cycle", 1000)
obj.set_brand()
