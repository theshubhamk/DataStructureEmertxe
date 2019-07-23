SRC:= $(wildcard *.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))

linked_list.exe: $(OBJ)
	gcc -o $@ $^

clean:
	rm *.o *.exe
run:
	make && ./linked_list.exe

