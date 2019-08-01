SRC:= $(wildcard *.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))

stackk.exe: $(OBJ)
	gcc -o $@ $^

clean:
	rm *.o *.exe
run:
	make && ./stackk.exe

