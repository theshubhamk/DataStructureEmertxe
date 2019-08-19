SRC:= $(wildcard *.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))

insert_sortedd.exe: $(OBJ)
	gcc -o $@ $^

clean:
	rm *.o *.exe
run:
	make && ./insert_sortedd.exe
