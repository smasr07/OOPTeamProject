#include "Employee.h"
#include "Set.h"
#include <iostream>

void runTests() {
    // Test 1: Adding and displaying employees
    EmployeeSet empSet;
    Manager* m1 = new Manager(1, "Alice", 5000, 1000);
    Developer* d1 = new Developer(2, "Bob", 4000, 10);
    empSet.insert(m1);
    empSet.insert(d1);

    std::cout << "All Employees:\n";
    empSet.displayByRole("Manager");
    empSet.displayByRole("Developer");

    // Test 2: Polymorphism
    if (m1->calculateSalary() == 6000 && d1->calculateSalary() == 4500) {
        std::cout << "Polymorphism test passed!\n";
    } else {
        std::cout << "Polymorphism test failed!\n";
    }

    // Test 3: Edge case - empty set
    EmployeeSet emptySet;
    std::cout << "Empty Set (should show nothing):\n";
    emptySet.displayByRole("Manager");
}

int main() {
    runTests();
    return 0;
}