## Makefile

CC  =  gcc

EXEC  =  main

CFLAGS  =  -g3 -W -Wall -Wextra

SRC_DIR  =  ./src/

SRC  =  $(wildcard $(SRC_DIR)*.c)

OBJ  =  $(patsubst %.c, %.o, $(SRC))

RM  =  rm -f


all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $^ -o $@

%.o: %.c
	${CC} -o $@ -c $(CFLAGS) $<

clean:
	$(RM) $(SRC_DIR)*.o

fclean: clean
	$(RM) $(EXEC)

re: fclean all
