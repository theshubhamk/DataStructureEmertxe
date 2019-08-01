SRC:= $(wildcard *.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))

searchh.exe: $(OBJ)
	gcc -o $@ $^

clean:
	rm *.o *.exe
run:
	make && ./searchh.exe

