# Cpp - 04

## About this Module

The Scope of this Module was to get to know C++ further and come in closer contact with inheritance for classes:

- **ex00: Polymorphism**
- **ex01: Creation of deep copies of classes**
- **ex02: Introduction of the abstract class**

All of those exercises are compilable with the `-std=c++98` flag, since this was a requirement for this project.
All exercises were compiled and tested on macOS Catalina 10.15.7 and Ubuntu 20.04.4 LTS.

All exercises can be compiled from the root of the exercise with `make`, `make all` or `make re`.
All exercises have a main function to demonstrate all the abilities of the subject.
After that, run the created executable like `./executable_to_run` (e.g., `ex00 ./Polymorphism`).

## Key Concepts and Code Examples

### ex00: Polymorphism

Polymorphism allows derived classes to override base class methods to provide specific implementations.

**Example:**
```cpp
#include <iostream>

class Animal {
public:
    virtual void makeSound() const {
        std::cout << "Some generic animal sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Bark" << std::endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->makeSound(); // Output: Bark
    delete animal;
    return 0;
}
```
ex01: Creation of Deep Copies of Classes

Deep copying involves creating a new object that is a copy of an existing object, including all dynamically allocated memory.

Example:

```c
#include <iostream>
#include <cstring>

class String {
private:
    char* str;
public:
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    String(const String& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    ~String() {
        delete[] str;
    }

    void print() const {
        std::cout << str << std::endl;
    }
};

int main() {
    String hello("Hello");
    String copy = hello;
    copy.print(); // Output: Hello
    return 0;
}
```
ex02: Introduction of the Abstract Class

Abstract classes serve as blueprints for derived classes and contain pure virtual functions.

Example:

```c
#include <iostream>

class Shape {
public:
    virtual double area() const = 0; // Pure virtual function
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shape* shape = new Circle(5.0);
    std::cout << "Area: " << shape->area() << std::endl; // Output: Area: 78.5398
    delete shape;
    return 0;
}
```



