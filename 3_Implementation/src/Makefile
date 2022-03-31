build:code test
code:code.out
test:test.out

code.out:addition.o subtract.o main.o multiply.o sqrt1.o sq.o division.o 
	gcc $^ -o $@ -lm
test.out:addition.o subtract.o multiply.o sqrt1.o sq.o division.o test_calc.o ../unity/unity.o 
	gcc $^ -o $@ -lm -Iunity 
clean: clean-code clean-test
clean-code:
	rm -rf *.o code.out
clean-test:
	rm -rf *.o test.out        
run: run-code run-test
run-code:
	./co.out
run-test:
	./test.out        

