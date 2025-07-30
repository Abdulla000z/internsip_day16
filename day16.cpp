#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function for runtime polymorphism
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle." << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Triangle." << endl;
    }
};

int main() {
    // Base class pointer array
    Shape* shapes[3];

    // Pointing to different derived objects
    shapes[0] = new Circle();
    shapes[1] = new Rectangle();
    shapes[2] = new Triangle();

    // Loop through and call draw()
    for(int i = 0; i < 3; i++) {
        shapes[i]->draw(); // Calls the overridden methods (runtime polymorphism)
    }

    // Free allocated memory
    for(int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}
