# Pet Adoption Center Simulation
## Project Description

## Overview
The Pet Adoption Center Simulation project is a simple system designed to simulate the operations of a pet adoption center. This system manages a collection of pets, allowing the addition of new pets and enabling users to view available pets for adoption. Each pet is represented as an object with attributes such as name, type, age, and adoption status. This project serves as a practical demonstration of key Object-Oriented Programming (OOP) concepts including classes, objects, the this pointer, encapsulation, inheritance, and polymorphism.

## Features
- Pet Class: Represents a pet with attributes like name, type, age, and adoption status. It includes methods to display pet details and mark a pet as adopted.
- AdoptionCenter Class: Manages an array of Pet objects, providing functionality to add new pets and display all available pets for adoption.
- Array of Objects: The AdoptionCenter class stores multiple Pet objects in an array, demonstrating the management of multiple instances.
- Adoption Functionality: Simulates the process of adopting a pet by changing its adoption status.
- Display Functionality: Displays the details of all pets available for adoption, updating the list as pets are adopted.


## Programming Language Used
- The project is implemented in C++.

## OOP Concepts Applied

- Classes and Objects:
 - Classes: The project defines two primary classes: Pet and AdoptionCenter. The Pet class encapsulates the attributes and behaviors of a pet, while the AdoptionCenter class manages a collection of pets.
 - Objects: Instances of the Pet class represent individual pets in the adoption center. The AdoptionCenter creates and manages multiple Pet objects.
 
- This Pointer:

 - The this pointer is used within the Pet class to differentiate between instance variables and method parameters when setting or getting the attributes of a Pet object.
 
- Four Building Blocks of OOP:
 - Encapsulation: Each class encapsulates its data (attributes) and functions (methods). For example, the Pet class encapsulates attributes like name, type, age, and adoption status, along with methods to manipulate these attributes.
 - Inheritance: This project can be extended by creating subclasses of Pet (e.g., Dog, Cat) that inherit from the base Pet class.
 - Polymorphism: If extended with inheritance, the project can demonstrate polymorphism by allowing different types of pets to be handled through a common interface (e.g., overriding methods in subclasses).
 - Abstraction: The project abstracts the concept of a pet and an adoption center, providing a simple interface for interacting with them. The internal details of how pets are managed are hidden from the user, who interacts only with the high-level functionalities.
 
## How to Run the Project
1. Clone the repository to your local machine.
2. Compile the project using a C++ compiler.
3. Run the executable to start the simulation.
4. Follow the prompts to add pets, view available pets, and simulate the adoption process.

## Future Enhancements
1. Implement inheritance by adding specific pet types like Dog and Cat.
2. Add a user interface to make the simulation more interactive.
3. Include additional features such as pet search functionality, adoption records, and user profiles.

## Conclusion
The Pet Adoption Center Simulation provides a practical application of OOP concepts in a creative and manageable way. It avoids conventional ideas while offering room for further extension and complexity.