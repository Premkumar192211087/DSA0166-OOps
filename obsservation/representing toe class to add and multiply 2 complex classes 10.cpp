#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real;
        if (c.imag >= 0) {
            out << " + " << c.imag << "i";
        } else {
            out << " - " << -c.imag << "i";
        }
        return out;
    }
    friend istream& operator>>(istream& in, Complex& c) {
        cout << "Enter real part: ";
        in >> c.real;
        cout << "Enter imaginary part: ";
        in >> c.imag;
        return in;
    }
};

int main() {
    Complex c1, c2, sum, product;
    cout << "Enter first complex number:" << endl;
    cin >> c1;
    cout << "Enter second complex number:" << endl;
    cin >> c2;
    sum = c1 + c2;
    cout << "Sum: " << sum << endl;
    product = c1 * c2;
    cout << "Product: " << product << endl;

    return 0;
}
