class A:
    value = 0

    def __init__(self, value):
        self.value = value

    def display(self):
        print("Value:", self.value)

    def increment(self, amount):
        self.value += amount
        print("Incremented  Value by", amount)

    def multiply(self, f):
        self.value *= f
        print("Multiplied  Value by", f)


obj = A(5)
obj.display()

obj.increment(10)
obj.display()

obj.multiply(2)
obj.display()
