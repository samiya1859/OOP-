class Calculator:
    def __init__(self, val1, val2):
        self.val1 = val1
        self.val2 = val2
    
    # Method defined inside the class
    def add(self, val1, val2):
        print(val1 + val2) 
    
    # Method defined outside the class
    def temp(self, v):
        return v


obj = Calculator(3, 4)


print(obj.temp(5))
