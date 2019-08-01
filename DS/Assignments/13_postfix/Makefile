SRC:= $(wildcard *.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))

fix.exe: $(OBJ)
	gcc -o $@ $^ -lm

clean:
	rm *.o *.exe
run:
	make && ./fix.exe

