SRC:= $(wildcard *.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))

double_linked_list.exe: $(OBJ)
	gcc -o $@ $^

clean:
	rm *.o *.exe
run:
	make && ./double_linked_list.exe

