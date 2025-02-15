## Assignment 2
Initialize and assign a value to an integer, float, and char variable. Then print each one with a sentence on a new line describing variable data type.

## Example Output
```terminal_session
5 is an integer and size int is 4!
3.140000 is a float and size 4!
Hello, World! is a char and size is 14!
```

## More Details

> sizeof(char array) is "count of chars" + `\0`

- \0 is "Null terminator" to shows the end of the string. `\0` the c automatically add \0 to end of string, if \0 doesn't exist in a string printf("%s") will searching to find \0, so it may print unwanted text or crash.

- if you want count of chars you can use `strlen(string)`

