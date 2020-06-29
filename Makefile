all: compiler

compiler: lex.yy.cpp y.tab.cpp	symbols.hpp codeGenerator.hpp
	g++ y.tab.cpp symbols.hpp codeGenerator.hpp -o compiler -ll -ly -std=c++11 -Wno-deprecated-register

lex.yy.cpp: scanner.l
	lex -o lex.yy.cpp scanner.l

y.tab.cpp: parser.y
	yacc -d parser.y -o y.tab.cpp

clean:
	rm compiler lex.yy.cpp y.tab.* ./jasmFile/*.jasm *.class

run: compiler
	./compiler ./testFile/$(file).scala
	./javaa ./jasmFile/$(file).scala.jasm
	java $(file)