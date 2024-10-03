class Engine:
    def __init__(self, horsepower):
        self.horsepower = horsepower

    def start(self):
        print("Engine started with horsepower:", self.horsepower)

class Tires:
    def __init__(self, tire_type):
        self.tire_type = tire_type

    def inflate(self):
        print(f"{self.tire_type} tires inflated.")

class Car:
    def __init__(self, engine: Engine, tires: Tires):
        # Composing the Car class with Engine and Tires
        self.engine = engine
        self.tires = tires

    def drive(self):
        self.engine.start()  # Starting the engine
        self.tires.inflate()  # Inflating the tires
        print("Car is now driving.")

# Example usage
engine = Engine(horsepower=150)
tires = Tires(tire_type="All-Season")
car = Car(engine, tires)

car.drive()


"""
Engine started with horsepower: 150
All-Season tires inflated.
Car is now driving.
"""