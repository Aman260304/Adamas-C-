#include <iostream>
#include <string>

class Car
{
private:
    std::string brand;
    std::string model;
    int year;
    int mileage;

public:
    // Default constructor
    Car()
    {
        brand = "Unknown";
        model = "Unknown";
        year = 0;
        mileage = 0;
        std::cout << "Default constructor called." << std::endl;
    }

    // Parameterized constructor
    Car(std::string b, std::string m, int y, int mi)
    {
        brand = b;
        model = m;
        year = y;
        mileage = mi;
        std::cout << "Parameterized constructor called." << std::endl;
    }

    // Copy constructor
    Car(const Car &other)
    {
        brand = other.brand;
        model = other.model;
        year = other.year;
        mileage = other.mileage;
        std::cout << "Copy constructor called." << std::endl;
    }

    // Constructor with default argument (adjusted so it has a unique signature)
    Car(std::string b, std::string m, int y)
    {
        brand = b;
        model = m;
        year = y;
        mileage = 0; // Default value for mileage
        std::cout << "Constructor with default argument called." << std::endl;
    }

    // Destructor
    ~Car()
    {
        std::cout << "Destructor called." << std::endl;
    }

    // Method to display car information
    void displayCarInfo()
    {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Mileage: " << mileage << " miles" << std::endl;
    }
};

int main()
{
    // Create a default Car object
    Car defaultCar;
    defaultCar.displayCarInfo();

    // Create a Car object with parameters
    Car parameterizedCar("Toyota", "Camry", 2015, 50000);
    parameterizedCar.displayCarInfo();

    // Create a copy of a Car object
    Car copyCar(parameterizedCar);
    copyCar.displayCarInfo();

    // Create a Car object with default argument
    Car defaultMileageCar("Honda", "Civic", 2018);
    defaultMileageCar.displayCarInfo();

    return 0;
}

