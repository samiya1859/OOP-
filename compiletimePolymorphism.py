class Calculator:
    def add(self, a, b):
        return a + b
    

math = Calculator()

# Test the add method
print("Sum of 5 and 10 (int):", math.add(5, 10))
print("Sum of 5.5 and 10.5 (double):", math.add(5.5, 10.5))


# In python there is no compiletime polymorphism. methods are dynamically bound at runtime, and the type of arguments is determined at runtime as well.