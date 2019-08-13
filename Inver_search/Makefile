SRC:= $(wildcard *.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))

lrev.exe: $(OBJ)
	gcc -o $@ $^

clean:
	rm *.o *.exe
run:
	make && ./lrev.exe

