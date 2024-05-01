#include <iostream>
#include <string>
#include "Car.h"
#include "Bus.h"

using namespace std;

int main() {
    string brand;
    int power, cylinders, seats;
    Car car;
    cout << "Enter car details (brand cylinders power): ";
    cin >> car;
    cout << car << endl << endl;

    Bus bus("Mercedes-Benz", 4, 129, 24);
    cout << "Тепер для бусіка: " << endl << string(bus) << endl << endl;

    cout << "Вкажіть нові значення: " << endl;
    cout << "Марка: "; cin >> brand;
    cout << "Циліндри: "; cin >> cylinders;
    cout << "Потужність: "; cin >> power;
    cout << "Сидіння: "; cin >> seats;
    bus.setBrand(brand);
    bus.setCylinders(cylinders);
    bus.setPower(power);
    bus.setSeats(seats);

    cout << "Марка: " << bus.getBrand() << ", Циліндри: " << bus.getCylinders() << ", Потужність: " << bus.getPower() << ", Місця: " << bus.getSeats() << endl;

    //cout << "control: "; cin >> bus;
    //cout << bus;
}