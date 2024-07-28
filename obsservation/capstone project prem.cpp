#include <iostream>
#include <string>

using namespace std;
class Car {
private:
    string make;
    string model;
    int year;
    double price;
public:
    Car(string _make, string _model, int _year, double _price) {
        make = _make;
        model = _model;
        year = _year;
        price = _price;
    }

    string getMake() const {
        return make;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    double getPrice() const {
        return price;
    }
};

class RentalSystem {
public:
    void rentCar(const Car& car, int days) {
        double totalPrice = car.getPrice() * days;
        cout << "Rental Details:" << endl;
        cout << "Make: " << car.getMake() << endl;
        cout << "Model: " << car.getModel() << endl;
        cout << "Year: " << car.getYear() << endl;
        cout << "Price per day: $" << car.getPrice() << endl;
        cout << "Number of days rented: " << days << endl;
        cout << "Total Price: $" << totalPrice << endl;
    }
};

int main() {
        Car car("Toyota", "Corolla", 2020, 50.0);
        RentalSystem rentalSystem;
        int days;
    cout << "Enter number of days to rent the car: ";
    cin >> days;
    rentalSystem.rentCar(car, days);

    return 0;
}
