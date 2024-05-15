class Student:
    def __init__(self, name, roll):
        self.name = name
        self.roll = roll


student1 = Student("Samia", 101)
student2 = Student("Sultana", 102)


print("Student 1: Name =", student1.name, ", Roll =", student1.roll)
print("Student 2: Name =", student2.name, ", Roll =", student2.roll)
