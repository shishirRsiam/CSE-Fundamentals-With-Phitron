# https://refactoring.guru/design-patterns


"""
Design patterns are standard solutions to common software design problems. They provide a way to structure code and make it more maintainable, reusable, and flexible. Design patterns can be categorized into three main types: Creational, Structural, and Behavioral patterns.

1. Creational Patterns
Creational patterns deal with object creation mechanisms, trying to create objects in a manner suitable to the situation. They abstract the instantiation process, making it more flexible and efficient.

Key Creational Patterns:
Singleton: Ensures that a class has only one instance and provides a global point of access to it.

Use Case: Managing shared resources, such as configurations or connection pools.
Factory Method: Defines an interface for creating an object but allows subclasses to alter the type of objects that will be created.

Use Case: When a class can't anticipate the class of objects it needs to create.
Abstract Factory: Provides an interface for creating families of related or dependent objects without specifying their concrete classes.

Use Case: When the system needs to be independent of how its objects are created.
Builder: Separates the construction of a complex object from its representation, allowing the same construction process to create different representations.

Use Case: When an object requires multiple configurations or complex setup.
Prototype: Creates new objects by copying an existing object (prototype).

Use Case: When creating an object is costly, and a clone is sufficient.
2. Structural Patterns
Structural patterns deal with object composition, creating relationships between objects to form larger structures.

Key Structural Patterns:
Adapter: Allows incompatible interfaces to work together. It acts as a bridge between two incompatible interfaces.

Use Case: Integrating new functionalities into existing code.
Decorator: Adds new functionalities to an object dynamically without altering its structure.

Use Case: Enhancing functionalities of a class or object at runtime.
Facade: Provides a simplified interface to a complex subsystem, making it easier to use.

Use Case: Reducing complexity in system interactions.
Composite: Composes objects into tree structures to represent part-whole hierarchies. Clients can treat individual objects and composites uniformly.

Use Case: When you need to represent hierarchies of objects.
Proxy: Provides a surrogate or placeholder for another object to control access to it.

Use Case: Implementing lazy initialization, access control, or logging.
3. Behavioral Patterns
Behavioral patterns focus on communication between objects, defining how objects interact and share responsibilities.

Key Behavioral Patterns:
Observer: Defines a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.

Use Case: Implementing event handling systems or publish-subscribe mechanisms.
Strategy: Defines a family of algorithms, encapsulates each one, and makes them interchangeable. It lets the algorithm vary independently from clients that use it.

Use Case: When multiple algorithms are needed to perform a specific task.
Command: Encapsulates a request as an object, thereby allowing for parameterization of clients with queues, requests, and operations.

Use Case: Implementing undo/redo functionality.
State: Allows an object to alter its behavior when its internal state changes. The object will appear to change its class.

Use Case: Implementing finite state machines.
Chain of Responsibility: Passes a request along a chain of handlers. Each handler decides either to process the request or to pass it to the next handler in the chain.

Use Case: Implementing event handling systems with multiple levels of handlers.

"""