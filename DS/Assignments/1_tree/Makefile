SRC:= $(wildcard *.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))

tree.exe: $(OBJ)
	gcc -o $@ $^

clean:
	rm *.o *.exe
run:
	make && ./tree.exe

