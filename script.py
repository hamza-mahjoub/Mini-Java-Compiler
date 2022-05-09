import os

os.system("flex LexicalAnalyzer.lex")

os.system("bison -d SyntaxAnalyzer.y")

os.system("gcc -o app SyntaxAnalyzer.tab.c lex.yy.c symtab.c codeGenerator.c")