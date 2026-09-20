#include <iostream>
#include <string>

struct Employee {
    std::string Name;
    int EmployeeID;
    double MonthlySalary;
    int YearOfService;

    void SetEmployeeInfo(const std::string& name, int id) {
        Name = name;
        EmployeeID = id;
        std::cout << "Enter Monthly Salary: ";
        std::cin >> MonthlySalary;
        std::cout << "Enter Years of Service: ";
        std::cin >> YearOfService;
    }

    void PrintEmployeeInfo() const {
        std::cout << "Employee Name: " << Name << "\nEmployee ID: " << EmployeeID
                  << "\nMonthly Salary: " << MonthlySalary << "\nYears of Service: " << YearOfService << "\n";
    }

    void EmployeeBonus();
};

struct BonusCalculator {
    static double CalculateBonus(double salary, int yearsOfService, double bonusPercentage) {
        if (yearsOfService > 3) {
            return salary * bonusPercentage / 100;
        } else {
            return 0.0;
        }
    }
};

void Employee::EmployeeBonus() {
    double bonus = 0.0;
    if (YearOfService >= 4) {
        bonus = BonusCalculator::CalculateBonus(MonthlySalary * 12, YearOfService, 10);
    } else if (YearOfService > 3) {
        bonus = BonusCalculator::CalculateBonus(MonthlySalary * 12, YearOfService, 25);
    } else if (YearOfService > 25) {
        bonus = BonusCalculator::CalculateBonus(MonthlySalary * 12, YearOfService, 27.34);
    }

    std::cout << "Bonus: $" << bonus << "\n";
}

int main() {
    Employee emp1, emp2;
    emp1.SetEmployeeInfo("Amit Hasan", 101);
    emp1.PrintEmployeeInfo();
    emp1.EmployeeBonus();

    emp2.SetEmployeeInfo("Emon Hasan", 102);
    emp2.PrintEmployeeInfo();
    emp2.EmployeeBonus();

    return 0;
}