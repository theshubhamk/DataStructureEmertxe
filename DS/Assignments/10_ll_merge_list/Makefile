SRC:= $(wildcard *.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))

lmrge.exe: $(OBJ)
	gcc -o $@ $^

clean:
	rm *.o *.exe
run:
	make && ./lmrge.exe

