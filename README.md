C PROGRAMMING LAB EXERCISE

Level: Intermediate
Duration: 2 Hours
Language: C
Total Marks: 120

SYLLABUS COVERAGE

This lab exercise covers the following C programming concepts:

C program structure
Variables and constants
Data types
Operators and expressions
Operator precedence and associativity
Typecasting
Formatted and unformatted input/output
Identification and correction of programming errors
Conditional statements

Note: Loops, arrays, user-defined functions, structures, and pointers are not required for this exercise.

GENERAL INSTRUCTIONS
Write an algorithm or pseudocode before coding each question.
Use meaningful identifiers and appropriate data types.
Use comments wherever necessary.
Compile and execute each program.
Test each program with at least two different sets of inputs.
Identify and correct errors where specifically asked.
Follow all concepts and additional requirements mentioned in each question.
Ensure that the output is properly formatted and easy to read.
QUESTION 1 — STUDENT RESULT AND PERFORMANCE ANALYSIS

Time: 25 Minutes
Marks: 20

Problem Statement

Write a C program to accept the following information about a student:

Roll Number
Student Name
Marks in Mathematics
Marks in C Programming
Marks in Computer Organization
Marks in Mathematics Lab

The program should calculate and display:

Total Marks
Percentage
Average Marks
Whether the student has passed
Whether the student has obtained distinction
Pass Conditions

A student is considered PASS only when:

Marks in each subject are greater than or equal to 40.
Overall percentage is greater than or equal to 40%.
Distinction Condition

A student is awarded DISTINCTION when:

The student has passed.
Overall percentage is greater than or equal to 75%.
Additional Requirements
Use const for maximum marks.
Use appropriate data types.
Use relational and logical operators.
Use typecasting wherever required to obtain the correct percentage.
Display the result in a properly formatted manner.
Sample Output
========================================
           STUDENT RESULT
========================================
Roll Number : 101
Name        : Rahul

Mathematics           : 78
C Programming         : 82
Computer Organization : 69
Mathematics Lab       : 88

Total                 : 317
Percentage            : 79.25%
Average               : 79.25
Result                : PASS
Distinction           : YES
========================================

Concepts Covered
Variables
Constants
Data Types
Arithmetic Operators
Relational Operators
Logical Operators
Typecasting
printf()
scanf()
Expressions
QUESTION 2 — ELECTRICITY BILL CALCULATION

Time: 25 Minutes
Marks: 20

Problem Statement

Write a C program to accept the following information:

Consumer Number
Consumer Name
Number of Electricity Units Consumed

Calculate the electricity bill according to the following tariff:

Units Consumed	Rate per Unit
First 100 units	₹2.50
Next 100 units	₹4.00
Next 200 units	₹5.50
Above 400 units	₹7.00
Additional Charges

The following additional charges must be included:

Fixed Charge = ₹100
Electricity Duty = 5% of the Energy Charge
Final Bill = Energy Charge + Fixed Charge + Electricity Duty
Required Output

The program must display:

Consumer Number
Consumer Name
Units Consumed
Energy Charge
Fixed Charge
Electricity Duty
Final Bill
Example

For 350 units, the energy charge should be calculated as:

100 × 2.50
+ 100 × 4.00
+ 150 × 5.50

Additional Requirement

Use the conditional operator (?:) to display:

HIGH CONSUMPTION


if the electricity consumption is greater than 400 units.

Otherwise, display:

NORMAL CONSUMPTION

Concepts Covered
Arithmetic Expressions
Relational Operators
Conditional Operator
Typecasting
Constants
Formatted Input/Output
Operator Precedence
QUESTION 3 — SIMPLE BANKING TRANSACTION CALCULATOR

Time: 20 Minutes
Marks: 20

Problem Statement

Write a C program that accepts the following information:

Account Holder's Name
Account Number
Current Balance
Deposit Amount
Withdrawal Amount

The program should calculate the final balance according to the rules given below.

Rules
The deposit amount must not be negative.
The withdrawal amount must not be negative.
Withdrawal is permitted only when sufficient balance is available.
A minimum balance of ₹1,000 must be maintained after withdrawal.
If the withdrawal cannot be processed, the balance must remain unchanged.
Sample Output — Successful Transaction
========================================
        BANKING TRANSACTION
========================================
Account Holder : Amit
Account Number : 1025
Opening Balance: ₹15000.00
Deposit        : ₹3000.00
Withdrawal     : ₹5000.00
----------------------------------------
Final Balance  : ₹13000.00
Transaction    : SUCCESS
========================================

Sample Output — Unsuccessful Transaction
Transaction : FAILED
Reason      : Minimum balance requirement not satisfied

Challenge Requirement

Use logical operators to combine the conditions required for a valid withdrawal.

Concepts Covered
Relational Operators
Logical Operators
Assignment Operators
Arithmetic Expressions
Conditional Operator
float / double
Formatted Input/Output
QUESTION 4 — EXPRESSION EVALUATION AND TYPE CONVERSION

Time: 20 Minutes
Marks: 20

Problem Statement

Write a C program to accept three integers:

a, b, c


Evaluate the following expressions:

E1 = a + b * c
E2 = (a + b) * c
E3 = a / b
E4 = (float)a / b
E5 = a % b
E6 = a > b && b > c
E7 = a > b ? a : b


Display the result of each expression clearly.

Example Input
Enter a: 20
Enter b: 6
Enter c: 3

Questions to Answer

After executing the program, answer the following questions:

1. Why are E1 and E2 different?

Explain how operator precedence and parentheses affect the evaluation of the two expressions.

2. Why can E3 and E4 produce different results?

Explain the difference between integer division and floating-point division.

3. What is the purpose of (float)a?

Explain how typecasting changes the type of an expression.

4. What type of result is produced by E6?

Explain the result produced by a logical expression in C.

5. What does E7 represent?

Explain the conditional operator and identify which value E7 selects.

6. Identify the operators according to their precedence.

Discuss the precedence and associativity of the operators used in the given expressions.

Concepts Covered
Operator Precedence
Associativity
Arithmetic Operators
Relational Operators
Logical Operators
Conditional Operator
Typecasting
Expression Evaluation
QUESTION 5 — DEBUG AND CORRECT THE PROGRAM

Time: 20 Minutes
Marks: 20

Problem Statement

The following C program is intended to accept two numbers and calculate their sum and average, and then compare the two numbers.

However, the program contains several errors.

Incorrect Program
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

Perform the following tasks:

Compile the given program.
Identify all errors in the program.
Classify each error, where applicable, as:
Syntax Error
Semantic/Type-Related Error
Logical Error
Runtime/Undefined-Behavior Issue
Correct the program.
Compile and execute the corrected program.
Test the corrected program using at least two different sets of input.
Minimum Issues to Investigate

Carefully examine the following:

Format specifiers
Address operator &
Integer versus floating-point division
printf() format specifiers
Assignment operator (=) versus equality operator (==)
Data types
scanf() usage
Concepts Covered
Programming Errors
Format Specifiers
scanf()
printf()
Expressions
Relational Operators
Assignment Operator
Type Conversion
QUESTION 6 — MINI INTEGRATED SHOPPING BILL

Time: 20 Minutes
Marks: 20

Problem Statement

Write a C program to prepare a shopping bill.

The program should accept the following information:

Customer Name
Item 1 Price
Item 1 Quantity
Item 2 Price
Item 2 Quantity
Item 3 Price
Item 3 Quantity
Calculate

The program should calculate:

Cost of Item 1
Cost of Item 2
Cost of Item 3
Subtotal
Discount
Amount after Discount
GST
Final Bill
Discount Rules
Subtotal	Discount
Less than ₹1,000	0%
₹1,000 – ₹4,999	5%
₹5,000 – ₹9,999	10%
₹10,000 or above	15%
GST

GST is calculated as:

GST = 18% of the Amount After Discount

Sample Output
================================================
               SHOPPING INVOICE
================================================
Customer Name : Amit

Item        Price       Quantity       Amount
------------------------------------------------
Item 1      500.00          2         1000.00
Item 2      750.00          3         2250.00
Item 3      250.00          2          500.00
------------------------------------------------
Subtotal                              3750.00
Discount (5%)                          187.50
------------------------------------------------
Amount After Discount                3562.50
GST (18%)                              641.25
------------------------------------------------
FINAL BILL                            4203.75
================================================

Additional Requirements
Use const for the GST rate.
Use the conditional operator or nested conditional expressions to determine the discount rate.
Use appropriate floating-point calculations.
Display all monetary values with exactly two decimal places.
Concepts Covered
Variables
Constants
Arithmetic Operators
Relational Operators
Conditional Operator
Typecasting
Formatted Input/Output
Expressions
Operator Precedence
LAB SUBMISSION CHECKLIST

Before submitting the lab exercise, make sure that:

 An algorithm or pseudocode is written for every question.
 Meaningful variable names are used.
 Appropriate data types are selected.
 Constants are declared using const where required.
 Necessary comments are included.
 Every program has been compiled successfully.
 Every program has been executed.
 At least two test cases have been used for each program.
 Output is properly formatted.
 Errors in Question 5 have been identified and classified.
 The corrected Question 5 program has been tested.
SUGGESTED TEST CASES

Students should test their programs with different types of input, including:

Normal/valid values
Boundary values
Minimum values
Maximum or large values
Invalid values where applicable
Values that test different conditional branches
MARKS DISTRIBUTION
Question	Topic	Time	Marks
Q1	Student Result & Performance Analysis	25 min	20
Q2	Electricity Bill Calculation	25 min	20
Q3	Banking Transaction Calculator	20 min	20
Q4	Expression Evaluation & Type Conversion	20 min	20
Q5	Debug & Correct the Program	20 min	20
Q6	Mini Integrated Shopping Bill	20 min	20
Total	6 Questions	2 Hours	120
LEARNING OUTCOMES

After completing this lab exercise, students should be able to:

Understand the basic structure of a C program.
Declare and use variables and constants.
Select appropriate C data types.
Perform arithmetic calculations using operators.
Apply relational and logical operators.
Understand operator precedence and associativity.
Perform explicit typecasting.
Use formatted input and output.
Apply conditional operators and conditional logic.
Identify common C programming errors.
Distinguish between syntax, type-related, logical, and runtime/undefined-behavior issues.
Develop and test small C programs independently.