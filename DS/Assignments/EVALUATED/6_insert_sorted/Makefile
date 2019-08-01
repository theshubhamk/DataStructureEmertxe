SRC:= $(wildcard *.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))

insert_sorted.exe: $(OBJ)
	gcc -o $@ $^

clean:
	rm *.o *.exe
run:
	make && ./insert_sorted.exe

