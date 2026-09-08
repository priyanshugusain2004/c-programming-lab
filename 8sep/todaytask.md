

last lab " python3 -c 'with open("Makefile", "w") as f: f.write("CC = gcc\nCFLAGS = -Wall\nTARGETS = 1 2 3 4 5 6\n\nall: $(TARGETS)\n\n%: exprement%.c\n\t$(CC) $(CFLAGS) $< -o $@\n\n%: experiment%.c\n\t$(CC) $(CFLAGS) $< -o $@\n\nrun:\n\t@echo -n \"Enter the experiment number to run (1-6): \"\n\t@read num; \\\n\tif [ -z \"$$num\" ]; then echo \"No number entered.\"; exit 1; fi; \\\n\tif [ ! -f \"exprement$$num.c\" ] && [ ! -f \"experiment$$num.c\" ]; then echo \"Error: File does not exist!\"; exit 1; fi; \\\n\tFILE=$$( [ -f \"exprement$$num.c\" ] && echo \"exprement$$num.c\" || echo \"experiment$$num.c\" ); \\\n\t$(CC) $(CFLAGS) \"$$FILE\" -o \"$$num\"; \\\n\techo -n \"Do you want to run with default test inputs? (y/n): \"; \\\n\tread choice; \\\n\techo \"=== Running Experiment $$num ===\"; \\\n\tif [ \"$$choice\" = \"y\" ] || [ \"$$choice\" = \"Y\" ]; then \\\n\t\tcase $$num in \\\n\t\t\t1) echo -e \"5\\n10\\n20\\n30\\n40\\n50\" | ./$$num ;; \\\n\t\t\t2) echo -e \"3\\n1\\n2\\n3\" | ./$$num ;; \\\n\t\t\t3) echo -e \"5\\n3\" | ./$$num ;; \\\n\t\t\t*) echo \"No default data saved for $$num, running blank:\" && ./$$num ;; \\\n\t\tesac; \\\n\telse \\\n\t\t./$$num; \\\n\tfi\n\nclean:\n\trm -f $(TARGETS)\n")'


" C Programming Lab Exercise
Intermediate Level | Duration: 2 Hours
Syllabus Coverage:
C program structure, variables and constants, data types, operators and expressions, precedence and associativity, typecasting, formatted/unformatted I/O, and identification/correction of programming errors.
General Instructions
1.	Write an algorithm/pseudocode before coding each problem. 
2.	Use meaningful identifiers and appropriate data types. 
3.	Use comments wherever necessary. 
4.	Compile and execute each program. 
5.	Test each program with at least two different sets of inputs. 
6.	Students should identify and correct errors where specifically asked. 
7.	Loops, arrays, user-defined functions, structures and pointers are not required in this exercise. 
 
Question 1 — Student Result and Performance Analysis
Time: 25 minutes | 20 Marks
Write a C program to accept the following information:
•	Roll number 
•	Student name 
•	Marks in Mathematics 
•	Marks in C Programming 
•	Marks in Computer Organization 
•	Marks in Mathematics Lab 
The program should calculate:
1.	Total marks 
2.	Percentage 
3.	Average marks 
4.	Whether the student has passed 
5.	Whether the student has obtained distinction 
Conditions
A student passes only when:
•	Marks in each subject ≥ 40, and 
•	Overall percentage ≥ 40% 
Distinction is awarded when:
•	The student passes, and 
•	Percentage ≥ 75% 
Display the result in a properly formatted form.
Additional Requirements
•	Use const for maximum marks. 
•	Use appropriate data types. 
•	Use logical and relational operators. 
•	Use typecasting wherever required to obtain a correct percentage. 
Sample Output
========================================
          STUDENT RESULT
========================================
Roll Number : 101
Name        : Rahul

Mathematics             : 78
C Programming           : 82
Computer Organization   : 69
Mathematics Lab         : 88

Total                   : 317
Percentage              : 79.25
Average                 : 79.25
Result                  : PASS
Distinction             : YES
========================================
Concepts: Variables, constants, data types, arithmetic operators, relational operators, logical operators, typecasting, printf(), scanf(), expressions.
 
Question 2 — Electricity Bill Calculation
Time: 25 minutes | 20 Marks
Write a C program to accept the consumer number, consumer name and number of electricity units consumed.
Calculate the electricity bill according to the following tariff:
Units Consumed	Rate per Unit
First 100 units	₹2.50
Next 100 units	₹4.00
Next 200 units	₹5.50
Above 400 units	₹7.00
In addition:
•	Fixed charge = ₹100 
•	Electricity duty = 5% of the energy charge 
•	Final bill = Energy charge + Fixed charge + Electricity duty 
Requirements
The program should display:
•	Consumer details 
•	Units consumed 
•	Energy charge 
•	Fixed charge 
•	Electricity duty 
•	Final bill 
Example
For 350 units, the energy charge should be calculated as:
100 × 2.50
+ 100 × 4.00
+ 150 × 5.50
Additional Requirement
Use the conditional operator to display:
HIGH CONSUMPTION
if consumption is greater than 400 units; otherwise display:
NORMAL CONSUMPTION
Concepts: Arithmetic expressions, relational operators, conditional operator, typecasting, constants, formatted I/O, operator precedence.
 
Question 3 — Simple Banking Transaction Calculator
Time: 20 minutes | 20 Marks
Write a C program that accepts:
•	Account holder's name 
•	Account number 
•	Current balance 
•	Deposit amount 
•	Withdrawal amount 
Calculate the final balance.
Rules
1.	Deposit amount must not be negative. 
2.	Withdrawal amount must not be negative. 
3.	Withdrawal is permitted only when sufficient balance is available. 
4.	A minimum balance of ₹1,000 must be maintained after withdrawal. 
5.	If the withdrawal cannot be processed, the balance should remain unchanged. 
Display
Account Holder : Amit
Account Number : 1025
Opening Balance: 15000.00
Deposit        : 3000.00
Withdrawal     : 5000.00
--------------------------------
Final Balance  : 13000.00
Transaction    : SUCCESS
If the transaction is unsuccessful:
Transaction : FAILED
Reason      : Minimum balance requirement not satisfied
Challenge Requirement
Use logical operators to combine the conditions for a valid withdrawal.
Concepts: Relational operators, logical operators, assignment operators, arithmetic expressions, conditional operator, float/double, formatted I/O.
 
Question 4 — Expression Evaluation and Type Conversion
Time: 20 minutes | 20 Marks
Write a C program to accept three integers:
a, b and c
and evaluate the following expressions:
E1 = a + b * c
E2 = (a + b) * c
E3 = a / b
E4 = (float)a / b
E5 = a % b
E6 = a > b && b > c
E7 = a > b ? a : b
Display the results of all expressions.
Tasks
After executing the program, answer:
1.	Why are E1 and E2 different? 
2.	Why can E3 and E4 produce different results? 
3.	What is the purpose of (float)a? 
4.	What type of result is produced by E6? 
5.	What does E7 represent? 
6.	Identify the operators according to their precedence. 
Example Input
Enter a: 20
Enter b: 6
Enter c: 3
The program should clearly display each expression and its result.
Concepts: Operator precedence, associativity, arithmetic operators, relational operators, logical operators, conditional operator, typecasting, expression evaluation.
 
Question 5 — Debug and Correct the Program
Time: 20 minutes | 20 Marks
The following program is intended to accept two numbers and calculate their sum, average and percentage. However, it contains several errors.
#include <stdio.h>

int main()
{
    int num1, num2;
    int sum;
    float average;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%d", num2);

    sum = num1 + num2;
    average = sum / 2;

    printf("Sum = %f\n", sum);
    printf("Average = %d\n", average);

    if (num1 = num2)
        printf("Both numbers are equal\n");
    else
        printf("Numbers are different\n");

    return 0;
}
Tasks
1.	Compile the program. 
2.	Identify all errors. 
3.	Classify each error as far as applicable: 
o	Syntax error 
o	Semantic/type-related error 
o	Logical error 
o	Runtime/undefined-behavior issue 
4.	Correct the program. 
5.	Execute the corrected program using at least two sets of input. 
Minimum Issues Students Should Investigate
Students should carefully examine:
•	Format specifiers 
•	Address operator & 
•	Integer versus floating-point division 
•	printf() format specifiers 
•	Assignment versus comparison 
•	Data types 
Concepts: Programming errors, format specifiers, scanf(), printf(), expressions, relational operators, assignment operator, type conversion.
 
Question 6 — Mini Integrated Problem
Time: 20 minutes | 20 Marks
Write a C program for a shopping bill calculator.
Accept:
•	Customer name 
•	Item 1 price 
•	Item 1 quantity 
•	Item 2 price 
•	Item 2 quantity 
•	Item 3 price 
•	Item 3 quantity 
Calculate:
1.	Cost of each item 
2.	Subtotal 
3.	Discount 
4.	GST 
5.	Final bill 
Discount Rules
Subtotal	Discount
Less than ₹1,000	0%
₹1,000–₹4,999	5%
₹5,000–₹9,999	10%
₹10,000 or above	15%
GST = 18% of the amount after discount
Output
Display an invoice similar to:
=============================================
              SHOPPING INVOICE
=============================================
Customer Name : Amit

Item        Price       Quantity       Amount
---------------------------------------------
Item 1      500.00         2          1000.00
Item 2      750.00         3          2250.00
Item 3      250.00         2           500.00
---------------------------------------------
Subtotal                             3750.00
Discount (5%)                         187.50
---------------------------------------------
Amount After Discount               3562.50
GST (18%)                            641.25
---------------------------------------------
FINAL BILL                          4203.75
=============================================
Additional Requirements
•	Use const for GST. 
•	Use the conditional operator or nested conditional expressions for determining the discount rate. 
•	Use appropriate floating-point calculations. 
•	Ensure that the output is displayed with two decimal places. 
Concepts: Variables, constants, arithmetic operators, relational operators, conditional operator, typecasting, formatted I/O, expressions and precedence.

