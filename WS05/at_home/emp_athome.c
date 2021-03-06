//==============================================
// Name:           Yujin Won
// Student Number: 153565197
// Email:          ywon9@myseneca.ca
// Section:        NGG
// Workshop:       5 (at-home)
//==============================================

// Copy your source code from in_lab file to here
// Expand the option list to include option 3 & 4 after 
// option 2. as following
// "3. Update Employee Salary"
// "4. Remove Employee"

// Create two switch-cases for option 3 & 4 after case 2. 
// Implement "Update Salary" and "Remove Employee" 
// functionality as per instructions
// inside the relevant case statements

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 4

struct employee
{
	int id;
	int age;
	double salary;
	
};

int main(void)
{
	int option = 0;
	
	struct employee emp[SIZE] = { {0,0,0} };

	printf("---=== EMPLOYEE DATA ===---\n\n");

	do
	{
		
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");

		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");

		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		
		scanf("%d", &option);
		printf("\n");

		switch (option)
		{
		case 0:	

			printf("Exiting Employee Data Program. Good Bye!!!\n");

			break;

		case 1: 

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			int i;

			for (i = 0; i < SIZE; i++)
			{
				
				if (emp[i].id > 0)
				{
					printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
				}

			}

			printf("\n");

			break;

		case 2:	

			printf("Adding Employee\n");
			printf("===============\n");


			int add_index = -1;
			int l;

			for (l = 0; l < SIZE; l++)
			{
			
				if (emp[l].id == 0)
				{
					add_index = l;
					break;
				}
			}


			if (add_index == -1)
			{
				printf("ERROR!!! Maximum Number of Employees Reached\n");
			}

			else
			{
				printf("Enter Employee ID: ");
				scanf("%d", &emp[add_index].id);

				printf("Enter Employee Age: ");
				scanf("%d", &emp[add_index].age);

				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[add_index].salary);
			}
			

			printf("\n");


			break;


		case 3:

			printf("Update Employee Salary\n");
			printf("======================\n");

			int emp_index = -1;
			double new_salary;

			do
			{
				int update_id;
				
				printf("Enter Employee ID: ");
				scanf("%d", &update_id);

				int j;

				for (j = 0; j < SIZE; j++)
				{
					if (update_id == emp[j].id)
					{
						emp_index = j;
						break;
					}
				}
				
				if (emp_index == -1)
				{
					printf("*** ERROR: Employee ID not found! ***\n");
				}
				
			} while (emp_index == -1); 

			printf("The current salary is %.2lf\n", emp[emp_index].salary);

			printf("Enter Employee New Salary: ");
			scanf("%lf", &new_salary);

			emp[emp_index].salary = new_salary;

			printf("\n");

			break;

		case 4:

			printf("Remove Employee\n");
			printf("===============\n");
		
			int remove_emp_index = -1;

			do
			{
				int k;
				int remove_id;

				printf("Enter Employee ID: ");
				scanf("%d", &remove_id);

				for (k = 0; k < SIZE; k++)
				{
					if (remove_id == emp[k].id)
					{
						remove_emp_index = k;
						break;
					}
				}

				if (remove_emp_index == -1)
				{
					printf("*** ERROR: Employee ID not found! ***\n");
				}

			} while (remove_emp_index == -1);


			printf("Employee %d will be removed\n", emp[remove_emp_index].id);

			emp[remove_emp_index].id = 0;

			printf("\n");
				
			break;

		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);

	return 0;
}



// PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 5

ERROR: Incorrect Option: Try Again

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 222
Enter Employee Age: 22
Enter Employee Salary: 22222.22

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 333
Enter Employee Age: 33
Enter Employee Salary: 33333.33

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 444
Enter Employee Age: 44
Enter Employee Salary: 44444.44

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 555
Enter Employee Age: 55
Enter Employee Salary: 55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
333       33   33333.33
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 3

Update Employee Salary
======================
Enter Employee ID: 123
*** ERROR: Employee ID not found! ***
Enter Employee ID: 321
*** ERROR: Employee ID not found! ***
Enter Employee ID: 333
The current salary is 33333.33
Enter Employee New Salary: 99999.99

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
333       33   99999.99
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 4

Remove Employee
===============
Enter Employee ID: 789
*** ERROR: Employee ID not found! ***
Enter Employee ID: 987
*** ERROR: Employee ID not found! ***
Enter Employee ID: 333
Employee 333 will be removed

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 666
Enter Employee Age: 66
Enter Employee Salary: 66666.66

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
666       66   66666.66
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!

*/
