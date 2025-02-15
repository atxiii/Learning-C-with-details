## Assignment 2
Initialize and assign a value to an integer, float, and char variable. Then print each one with a sentence on a new line describing variable data type.

## Example Output
```terminal_session
5 is an integer and size int is 4!
3.140000 is a float and size 4!
Hello, World! is a String and size is 14!
Sizeof 'Hello, World!' is: 14, but the lenght of char is: 13!
```

## More Details

> sizeof(char array) is "count of chars" + `\0`

- `\0` (Null Terminator) indicates the end of a string in C. The compiler automatically adds \0 to the end of a string. If \0 is missing, printf("%s") will keep searching for \0 in memory, which may result in printing unwanted text or causing a crash.

- If you want to count the number of characters in a string, you can use `strlen(string)`.

