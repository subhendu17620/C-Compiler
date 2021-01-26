### Installation and running

1.  Please make sure you have Lex/Flex and Yacc/Bison installed
2.  Next run `$ chmod +x compile`
3.  `$ ./compile`
4.  To run the parser `$./semantic_analyser test-file.c`

### FEATURES

- Type checking in arithmetic expressions
- Type checking in relational and logical expressions
- Type checking in assignment expressions
- Check of array index out of bound
- Matching type in return statement in function
- Checking matching function parameter type during function call
- Checking number of parameters passed during function call
