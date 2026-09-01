Absolutely. I’ve cleaned up the formatting so the lab sheet is easier to read, copy into Word/Google Docs, or print. I’ve also standardized the tables, headings, spacing, and code formatting without changing the actual requirements.

C Programming Lab Exercise

Level: Intermediate
Duration: 2 Hours
Language: C
Total Marks: 120

📚 Syllabus Coverage

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
Not Required

The following topics are not required for this exercise:

Loops
Arrays
User-defined functions
Structures
Pointers
📝 General Instructions
Write an algorithm or pseudocode before coding each problem.
Use meaningful identifiers and appropriate data types.
Use comments wherever necessary.
Compile and execute each program.
Test each program with at least two different sets of inputs.
Identify and correct errors where specifically asked.
Follow the concepts and additional requirements mentioned in each question.
Question 1 — Student Result and Performance Analysis

Time: 25 minutes
Marks: 20

Problem Statement

Write a C program to accept the following information:

Roll number
Student name
Marks in Mathematics
Marks in C Programming
Marks in Computer Organization
Marks in Mathematics Lab

The program should calculate:

Total marks
Percentage
Average marks
Whether the student has passed
Whether the student has obtained distinction
Pass Conditions

A student passes only when:

Marks in each subject ≥ 40
Overall percentage ≥ 40%
Distinction Condition

Distinction is awarded when:

The student has passed
Percentage ≥ 75%
Additional Requirements
Use const for maximum marks.
Use appropriate data types.
Use logical and relational operators.
Use typecasting wherever required to obtain the correct percentage.
Display the result in a properly formatted form.
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
Data types
Arithmetic operators
Relational operators
Logical operators
Typecasting
printf()
scanf()
Expressions
Question 2 — Electricity Bill Calculation

Time: 25 minutes
Marks: 20

Problem Statement

Write a C program to accept:

Consumer number
Consumer name
Number of electricity units consumed

Calculate the electricity bill according to the following tariff:

Units Consumed	Rate per Unit
First 100 units	₹2.50
Next 100 units	₹4.00
Next 200 units	₹5.50
Above 400 units	₹7.00
Additional Charges
Fixed charge = ₹100
Electricity duty = 5% of the energy charge
Final bill = Energy charge + Fixed charge + Electricity duty
Required Output

Display:

Consumer details
Units consumed
Energy charge
Fixed charge
Electricity duty
Final bill
Example

For 350 units, calculate the energy charge as:

100 × 2.50
+ 100 × 4.00
+ 150 × 5.50

Additional Requirement

Use the conditional operator (?:) to display:

HIGH CONSUMPTION


if consumption is greater than 400 units; otherwise display:

NORMAL CONSUMPTION

Concepts Covered
Arithmetic expressions
Relational operators
Conditional operator
Typecasting
Constants
Formatted I/O
Operator precedence
Question 3 — Simple Banking Transaction Calculator

Time: 20 minutes
Marks: 20

Problem Statement

Write a C program that accepts:

Account holder's name
Account number
Current balance
Deposit amount
Withdrawal amount

Calculate the final balance.

Rules
Deposit amount must not be negative.
Withdrawal amount must not be negative.
Withdrawal is permitted only when sufficient balance is available.
A minimum balance of ₹1,000 must be maintained after withdrawal.
If the withdrawal cannot be processed, the balance should remain unchanged.
Sample Output
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

Unsuccessful Transaction
Transaction : FAILED
Reason      : Minimum balance requirement not satisfied

Challenge Requirement

Use logical operators to combine the conditions for a valid withdrawal.

Concepts Covered
Relational operators
Logical operators
Assignment operators
Arithmetic expressions
Conditional operator
float / double
Formatted I/O
Question 4 — Expression Evaluation and Type Conversion

Time: 20 minutes
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


Display the result of every expression clearly.

Example Input
Enter a: 20
Enter b: 6
Enter c: 3

Questions to Answer
1. Why are E1 and E2 different?

Explain how operator precedence and parentheses affect the evaluation.

2. Why can E3 and E4 produce different results?

Explain the difference between integer division and floating-point division.

3. What is the purpose of (float)a?

Explain how typecasting changes the type of the expression.

4. What type of result is produced by E6?

Explain the result of a logical expression in C.

5. What does E7 represent?

Explain the conditional operator and what value E7 selects.

6. Identify the operators according to their precedence.

Discuss the precedence of the operators used in the expressions.

Concepts Covered
Operator precedence
Associativity
Arithmetic operators
Relational operators
Logical operators
Conditional operator
Typecasting
Expression evaluation
Question 5 — Debug and Correct the Program

Time: 20 minutes
Marks: 20

Problem Statement

The following program is intended to accept two numbers and calculate their sum, average, and compare them.

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
Compile the program.
Identify all errors.
Classify each error where applicable:
Syntax error
Semantic/type-related error
Logical error
Runtime/undefined-behavior issue
Correct the program.
Execute the corrected program using at least two sets of input.
Minimum Issues to Investigate

Carefully examine:

Format specifiers
Address operator &
Integer versus floating-point division
printf() format specifiers
Assignment (=) versus comparison (==)
Data types
scanf() usage
Concepts Covered
Programming errors
Format specifiers
scanf()
printf()
Expressions
Relational operators
Assignment operator
Type conversion
Question 6 — Mini Integrated Problem

Time: 20 minutes
Marks: 20

Problem Statement

Write a C program for a shopping bill calculator.

Input

Accept:

Customer name
Item 1 price
Item 1 quantity
Item 2 price
Item 2 quantity
Item 3 price
Item 3 quantity
Calculate
Cost of each item
Subtotal
Discount
GST
Final bill
Discount Rules
Subtotal	Discount
Less than ₹1,000	0%
₹1,000 – ₹4,999	5%
₹5,000 – ₹9,999	10%
₹10,000 or above	15%
GST
GST = 18% of the amount after discount

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
Use const for GST.
Use the conditional operator or nested conditional expressions to determine the discount rate.
Use appropriate floating-point calculations.
Display monetary values with two decimal places.
Concepts Covered
Variables
Constants
Arithmetic operators
Relational operators
Conditional operator
Typecasting
Formatted I/O
Expressions
Operator precedence
📋 Lab Submission Checklist

Before submitting, make sure:

 An algorithm/pseudocode is written for every question.
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
🧪 Suggested Test Cases

Students should test their programs with different types of input, including:

Normal/valid values
Boundary values
Minimum values
Maximum or large values
Invalid values where applicable
Values that test different conditional branches
📊 Marks Distribution
Question	Topic	Time	Marks
Q1	Student Result & Performance Analysis	25 min	20
Q2	Electricity Bill Calculation	25 min	20
Q3	Banking Transaction Calculator	20 min	20
Q4	Expression Evaluation & Type Conversion	20 min	20
Q5	Debug & Correct the Program	20 min	20
Q6	Mini Integrated Shopping Bill	20 min	20
Total		2 Hours	120
🎯 Learning Outcomes

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
⏱️ Lab Overview
Question	Activity	Duration	Marks
1	Student Result	25 min	20
2	Electricity Bill	25 min	20
3	Banking Calculator	20 min	20
4	Expression & Type Conversion	20 min	20
5	Debugging	20 min	20
6	Shopping Bill	20 min	20
Total	6 Problems	2 Hours	120

This version should render much more cleanly in Word, Google Docs, Markdown, or a PDF, especially because the tariff, marks distribution, checklist, and test cases are now proper tables/lists and the C code is isolated in code blocks.