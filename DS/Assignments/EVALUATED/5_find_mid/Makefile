SRC:= $(wildcard *.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))

find_mid.exe: $(OBJ)
	gcc -o $@ $^

clean:
	rm *.o *.exe
run:
	make && ./find_mid.exe

