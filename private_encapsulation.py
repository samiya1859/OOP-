class A:
    _val = 10  #private variable
    def __init__(self,val) -> None:
        self._val=val

    def display(self):
        print(self._val)

obj = A(7)
obj.display()

obj._val = 18   # still we can access this cause python has dynamic nature like will will create this
obj.display()

print(obj.__dict__)