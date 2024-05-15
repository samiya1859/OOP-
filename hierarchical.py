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


class Cycle(Vehicle):
    def __init__(self,model):
        super().__init__()
        self.model = model

obj = Car("Car")
obj.set_brand()


   