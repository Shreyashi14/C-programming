#include <iostream>
#include <string>

using namespace std;

class MyCar {
private:
    string brand;
    string registrationNumber;
    int count;

public:
    MyCar() {
        count = 0;
    }

    void setBrand(string b) {
        brand = b;
    }

    void setRegistrationNumber(string rn) {
        registrationNumber = rn;
    }

    void displayDetails(string ownerName, string color) {
        count++;
        cout << ownerName << ", your car " << color << " " << brand << " has registration number " << registrationNumber << "." << endl;
    }

    int getCount() {
        return count;
    }
};

void display(MyCar car, string ownerName, string color) {
    car.displayDetails(ownerName, color);
}

int main() {
    const string brand = readline();
    const string registrationNumber = readline();
    const string ownerName = readline();
    const string color = readline();
    MyCar car;
    car.setBrand(brand);
    car.setRegistrationNumber(registrationNumber);
    display(car, ownerName, color);
    const int count = car.getCount();
    if (count == 0) {
        cout << "Error: displayDetails function has not been called" << endl;
    }
    if (count > 1) {
        cout << "Error: displayDetails function has been called more than once" << endl;
    }
    return 0;
}