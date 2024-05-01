#pragma once
#include <iostream>
#include <string>

using namespace std;

class Car{
    string brand;
    int cylinders;
    int power;

public:
    Car();
    Car(string b, int c, int p);
    void setBrand(string b);
    void setCylinders(int c);
    void setPower(int p);
    string getBrand() const;
    int getCylinders() const;
    int getPower() const;
    operator string() const;
    Car (const Car &car);
    Car &operator = (const Car &car);
    friend istream &operator>>(istream &in, Car &car);
    friend ostream &operator<<(ostream &out, const Car &car);
};