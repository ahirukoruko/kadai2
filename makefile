# makefile
.PHONY : clean

kadai2.out : kadai2.c
	gcc -o kadai2.out kadai2.c
	
do :
	./kadai2.out
	
clean :
	rm kadai2.out
