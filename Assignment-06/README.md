## Assignment 6
Prompt the user for a Numerator (top number of a fraction) and a Denominator (bottom number of a fraction). Tell the user whether or not there is a remainder using `if` control flow.

## Example Output
```terminal_session
tokyo:~/LearningC/ # ./assignment6                                                                             
Enter a numerator: 24
Enter a denominator: 8
There is NOT a remainder!#
tokyo:~/LearningC/ # ./assignment6                                                                             
Enter a numerator: 55
Enter a denominator: 9
There is a remainder!# 
```


## More details:

In C programming, statements and expressions are fundamental building blocks of a program.

An expression is a combination of operands (variables, constants, function calls) and operators that produce a value.
```c
int x = 10 + 5; // 10 + 5 is an expression that evaluates to 15
int y = x * 2;  // x * 2 is an expression that evaluates to 30
```
📌 Key Points About Expressions:

- Every expression results in a single value.
- Expressions can include variables, constants, and function calls.
- They are used inside statements to perform computations.

Types of Expressions:
- Arithmetic Expression: Uses mathematical operators.
```c
int sum = 5 + 3 * 2;  // Result is 11

```
- Relational Expression: Produces a boolean result (true/false).
```c
int result = (5 > 3);  // Result is 1 (true)
```
- Logical Expression: Uses logical operators (&&, ||, !).
```c
int isTrue = (5 > 3) && (10 > 8);  // Result is 1 (true)
```

Bitwise Expression: Uses bitwise operators (&, |, ^, <<, >>).
```c
int bitwise = 5 & 3;  // Result is 1 (binary: 0101 & 0011 = 0001)
```

Assignment Expression: Assigns a value to a variable.
```c
int a;
a = 10;  // Assignment expression
```


A statement is a complete instruction that performs an action. It can contain expressions, function calls, loops, and conditionals.

Types of Statements:

1. Expression Statement: A statement that contains an expression followed by a semicolon.
```c
x = x + 1;   // Expression statement
printf("Hello"); // Function call is also an expression statement
```

2. Compound Statement (Block): A group of multiple statements enclosed in {}.
```c 
{
    int a = 10;
    printf("Value of a: %d", a);
}
```
3. Conditional Statement:Uses if, if-else, or switch to make decisions.
```c 
if (x > 0) {
    printf("Positive number");
} else {
    printf("Negative number");
}
```
4. Looping Statement: Repeats code multiple times (for, while, do-while).
```c
for (int i = 0; i < 5; i++) {
    printf("Iteration %d\n", i);
}
```

5. Jump Statement
Used to transfer control (break, continue, return).
```c
for (int i = 0; i < 5; i++) {
    if (i == 3) break; // Stops the loop at i == 3
    printf("%d\n", i);
}
```

Expressions are used to compute values.
Statements are used to control the flow of the program.
Every statement may contain an expression, but not every expression is a statement.

