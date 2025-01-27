/* Write a program to create a structure for Employees containing the
following data members: Employee ID, Employee Name, Age, Address,
Department and salary. Input data for 10 employees and display the
details of the employee using the employee ID given by the user. */

#include<stdio.h>
#include<string.h>
struct Employee
{
    int emp_id;
    char name[50];
    int age;
    char address[100];
    char department[50];
    float salary;
};
int main()
{
    struct Employee employees[10];
    int emp_id, i, found = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter details for employee %d\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &employees[i].emp_id);
        getchar();
        printf("Enter Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = 0;
        printf("Enter Age: ");
        scanf("%d", &employees[i].age);
        getchar();
        printf("Enter Address: ");
        fgets(employees[i].address, sizeof(employees[i].address), stdin);
        employees[i].address[strcspn(employees[i].address, "\n")] = 0;
        printf("Enter Department: ");
        fgets(employees[i].department, sizeof(employees[i].department), stdin);
        employees[i].department[strcspn(employees[i].department, "\n")] = 0;
        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);
        getchar();
    }
    printf("\nEnter Employee ID to display details: ");
    scanf("%d", &emp_id);
    for (i = 0; i < 10; i++)
    {
        if (employees[i].emp_id == emp_id)
        {
            printf("\nEmployee ID: %d\n", employees[i].emp_id);
            printf("Name: %s\n", employees[i].name);
            printf("Age: %d\n", employees[i].age);
            printf("Address: %s\n", employees[i].address);
            printf("Department: %s\n", employees[i].department);
            printf("Salary: %.2f\n", employees[i].salary);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("\nEmployee with ID %d not found.\n", emp_id);
    }
    return 0;
}