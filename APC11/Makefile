SRC:= $(wildcard *.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))

apc.exe: $(OBJ)
	gcc -o $@ $^

clean:
	rm *.o *.exe
run:
	make && ./apc.exe

