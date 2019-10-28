C_SRC = $(wildcard *.c)
OBJ = $(C_SRC:.c:=.o)
BIN = $(C_SRC:.c:=)

all: bins
	
bins: ${OBJ}

%.o: %.c
	${CC} -c $^ -o $@


