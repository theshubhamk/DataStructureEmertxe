SRC:= $(wildcard *.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))

dupl.exe: $(OBJ)
	gcc -o $@ $^

clean:
	rm *.o *.exe
run:
	make && ./dupl.exe

