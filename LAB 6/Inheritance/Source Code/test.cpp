#include <iostream>
#include <string>

// Abstract base class Employee
class Employee {
public:
    Employee(const std::string& name, int employeeId)
        : name(name), employeeId(employeeId) {}

    virtual double calculatePay() const = 0; // Abstract method for calculating pay

    void displayDetails() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Employee ID: " << employeeId << std::endl;
        std::cout << "Pay: $" << calculatePay() << std::endl;
    }

protected:
    std::string name;
    int employeeId;
};

// Derived class HourlyEmployee
class HourlyEmployee : public Employee {
public:
    HourlyEmployee(const std::string& name, int employeeId, double hourlyRate, double hoursWorked)
        : Employee(name, employeeId), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

    double calculatePay() const override {
        return hourlyRate * hoursWorked;
    }

private:
    double hourlyRate;
    double hoursWorked;
};

// Derived class SalariedEmployee
class SalariedEmployee : public Employee {
public:
    SalariedEmployee(const std::string& name, int employeeId, double salary)
        : Employee(name, employeeId), salary(salary) {}

    double calculatePay() const override {
        return salary;
    }

private:
    double salary;
};

int main() {
    // Create instances of HourlyEmployee and SalariedEmployee
    HourlyEmployee hourlyEmployee("John Doe", 101, 15.0, 40.0);
    SalariedEmployee salariedEmployee("Alice Smith", 102, 50000.0);

    // Display details and calculate pay
    std::cout << "Hourly Employee Details:" << std::endl;
    hourlyEmployee.displayDetails();

    std::cout << "\nSalaried Employee Details:" << std::endl;
    salariedEmployee.displayDetails();

    return 0;
}

