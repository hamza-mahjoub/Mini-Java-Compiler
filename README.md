# Mini-Java-Compiler
## About the project 
A compiler for the following mini java BNF grammar 
```
Program	::=	MainClass ( ClassDeclaration )* <EOF>

MainClass	::=	"class" Identifier "{" "public" "static" "void" "main" "(" "String" "[" "]" Identifier ")" "{" Statement "}" "}"

ClassDeclaration	::=	"class" Identifier ( "extends" Identifier )? "{" ( VarDeclaration )* ( MethodDeclaration )*  "}"

VarDeclaration	::=	Type Identifier ";"

MethodDeclaration	::=	"public" Type Identifier "(" ( Type Identifier ( "," Type Identifier )* )? ")" "{" ( VarDeclaration )* ( Statement )* "return" Expression ";" "}"

Type	::=	"int" "[" "]"
	|	"boolean"
	|	"int"
	|	Identifier

Statement	::=	"{" ( Statement )* "}"

	|	"if" "(" Expression ")" Statement "else" Statement

	|	"while" "(" Expression ")" Statement

	|	"System.out.println" "(" Expression ")" ";"

	|	Identifier "=" Expression ";"

	|	Identifier "[" Expression "]" "=" Expression ";"

Expression	::=	Expression ( "&&" | "<" | "+" | "-" | "*" ) Expression

	|	Expression "[" Expression "]"

	|	Expression "." "length"

	|	Expression "." Identifier "(" ( Expression ( "," Expression )* )? ")"

	|	<INTEGER_LITERAL>
	|	<BOOLEAN_LITERAL>

	|	Identifier

	|	"this"
	|	"new" "int" "[" Expression "]"

	|	"new" Identifier "(" ")"

	|	"!" Expression

	|	"(" Expression ")"

Identifier	::=	<IDENTIFIER>

```
Where
 - **identifier** follows the regex expression ```? /([A-Za-z_][A-Za-z0-9_]*)/ ? ```
 - **<INTEGER_LITERAL>** follows the regex expression ```? /(-?[1-9][0-9]*)/ ?  ```
 - **<BOOLEAN_LITERAL>** follows the regex expression ```= ? /(true|false)/ ?  ```

## Technologies
- Flex
- Bison
- C language
## Project files
- **LexicalAnalyzer.lex** handles the text parsing and tokens generation.
- **SyntaxAnalyzer.y** handles syntax errors and invokes **C** functions that handles the semantic logic.
- **symtab.h** contains semantic C functions declaration.
- **symtab.c** contains semantic C functions implementation.
- **CodeGeneration.h** contains assembly C functions declaration.
- **CodeGeneration.c** contains assembly C functions implementation.

## Get started
### Generating app.exe
Generate the **app.exe** by running the following python command in **cmd**
```py
python script.py 
```
### How to use the generated app.exe 
Use the .txt files as code input.
```
app.exe < test.txt
```
