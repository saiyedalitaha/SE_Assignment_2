//17.WAP to show difference between Structure and Union.
//repeated questions miss/mister ?

#include <stdio.h>

// Structure definition
struct Employee {
    int empno;          // 4 bytes
    char empname[50];   // 50 bytes
    float salary;       // 4 bytes
};

// Union definition
union Data {
    int intValue;      // 4 bytes
    float floatValue;  // 4 bytes
    char charValue;    // 1 byte
};

int main() {
    struct Employee emp;
    union Data data;

    // Using structure
    emp.empno = 101;
    snprintf(emp.empname, sizeof(emp.empname), "Alice");
    emp.salary = 50000.50;

    printf("Structure Example:\n");
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Salary: %.2f\n", emp.salary);
    printf("Size of Structure: %zu bytes\n\n", sizeof(emp));

    // Using union
    data.intValue = 10; // Set int value
    printf("Union Example:\n");
    printf("Integer Value: %d\n", data.intValue);
    
    data.floatValue = 15.5; // Set float value (overwrites intValue)
    printf("Float Value: %.2f\n", data.floatValue);
    printf("After setting float, Integer Value: %d\n", data.intValue); // undefined behavior
    printf("Size of Union: %zu bytes\n", sizeof(data));

    return 0;
}

