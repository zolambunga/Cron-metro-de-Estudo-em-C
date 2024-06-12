CC = gcc
C_FLAGS = -Wall -Wextra -Werror

SRC = main.c cronometro_utils.c cronometro.h
OBJ = $(SRC:.c=.o)
EXEC = Cronometro_de_Estudo

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(C_FLAGS) -o $@ $^

%.o: %.c
	$(CC) $(C_FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ) $(EXEC)

