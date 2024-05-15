class Student:
    def __init__(self):
        self.name = ""
        self.roll = 0

    def display(self):
        print("Hey!")
    def __str__(self) -> str:
        return "this is student class"
    def __del__(self):
        print("Here terminates the code")

# obj = Student()
# obj.display()
# print(obj)

student1 = Student()
student1.name = "Samia"
student1.roll = 101

student2 = Student()
student2.name = "Sultana"
student2.roll = 102


print("Student 1: Name =", student1.name, ", Roll =", student1.roll)
print("Student 2: Name =", student2.name, ", Roll =", student2.roll)
