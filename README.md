# ReadingAndComparing
Author: Angel Zaldivar

Goal: Read and Compare Two Integers

The purpose of this C++ program, authored by Angel Zaldivar, 
is to interactively read and compare two integers provided by the user.
The program prompts the user to input a positive even integer (value_a) and 
a positive odd integer (value_b). The primary objective is to ensure correct
user input and subsequently determine which of the two numbers is larger or if they are equal.

Code Explanation:

The program begins by declaring two integer variables, value_a and value_b.
It then prompts the user to enter a positive even integer, and the input is stored in the variable value_a.

A validation loop is employed to ensure that the entered value for value_a is
indeed a positive even integer. If the condition is not met, an error message is
displayed, and the user is prompted to enter a positive even integer until a valid input is received.

After successfully obtaining a valid value_a, the program prints a separator line and
then prompts the user to enter a positive odd integer, which is stored in the variable value_b.
Similar to the validation for value_a, a loop is used to ensure that the entered value for value_b 
is a positive odd integer.

Once both valid integers are obtained, the program compares them. If value_a is greater than value_b,
it outputs a message indicating that the first number is larger or equal to the second. Otherwise, it
outputs a message stating that the second number is larger or equal to the first.

In summary, the program guides the user to input specific types of integers, ensures the correctness
of the input through validation loops, and finally compares and outputs the relationship between the
two entered integers.





