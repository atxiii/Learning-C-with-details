## Assignment 3
Prompt the user to input their first and last name and then print them a welcome message. Try storing the input as a char variable's value.

Easy Mode: Allocate an arbitrary amount of indices to your char array and pray to the gods that the user input fits.

Extra Credit: Dynamically allocate the array size of your char variable based on the length of the user's input.

## Example Output
```terminal_session
tokyo:~/LearningC/ # ./assignment3                                     
Enter your first name: Jimmy
Enter your last name: Smith
Hello Jimmy Smith!
```


## More Details:

- We can't enter our input with "spaces" using the scanf function, because it terminates the text when it encounters a space. So, we use the fgets function instead.
- if we don't use "&" (address of variable) in scanf, it will place the output randomly in a memory, which can cause a crash in our program.
- We use `&` before a variable (int, float, ...) to pass the location of the variable in memory. 
- We don't need to use `&` before arrays (str[]) because an array acts as a pointer.
- When we use `malloc`, we have to free the memory with `free`.
- `Pass by reference`:
	- When we have an array or string
	- When we work with malloc and free
	- System/dirver promgraming.
	- Managin large data

- `Pass by value`:
	- When we don't need to change the original value.
	- For simple mathematical operations.

