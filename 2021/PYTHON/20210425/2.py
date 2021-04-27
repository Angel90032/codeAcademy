
#overriding

class Animal:
    
    def __init__(self,name,age):
        self.name = name
        self.age = age
        
    def introduce_yourself(self):
        print(f"The animal said: I am a {self.age} year old animal called {self.name}")
            


class Dog(Animal):
    
    def __init__(self,name,age, breed):
        Animal.__init__(self, name, age)
        self.breed = breed
        
        
    
    def introduce_yourself(self):
        print(f"The dog said: I am a {self.age} year old {self.breed} called {self.name}")
    



an_animal = Animal("Ivan", 5)
a_dog = Dog("Sharo",2,"German Shepherd")


an_animal.introduce_yourself()
a_dog.introduce_yourself()
