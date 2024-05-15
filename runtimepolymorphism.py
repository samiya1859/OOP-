class Shape:
    def area(self):
        pass


class Rectangle(Shape):
    def area(self, length, width):
        return length * width

class Triangle(Shape):
    def area(self, base, height):
        return 0.5 * base * height

rectangle = Rectangle()
triangle = Triangle()

 
shape1 = rectangle  
shape2 = triangle  

result1 = shape1.area(5) 
result2 = shape2.area(4, 6) 



print("Area of rectangle:", result1)
print("Area of triangle:", result2)
