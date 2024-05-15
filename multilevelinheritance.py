class Vehicle:
    def __init__(self):
        self.model = ""
        self.price = 0

    def set_brand(self):
        print("Brand: Toyota")


class Car(Vehicle):
    def __init__(self, model):
        super().__init__()
        self.model = model


class MicroCar(Car):
    def __init__(self, model):
        super().__init__(model)


obj = Car("Car")
obj.set_brand()

obj2 = MicroCar("Cycle")
obj2.set_brand()
