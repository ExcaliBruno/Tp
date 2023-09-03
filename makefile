#---------------------------------------------------------------------
# Arquivo	: Makefile
# Conteúdo	: compilar o programa main
# Autor		: Bruno Henrique Evangelista Pereira
# Histórico	: 2023-09-03 - arquivo criado
#---------------------------------------------------------------------
# Opções	: make all - compila tudo
#		: make clean - remove objetos e executável
#		: make run - executa o programa
#---------------------------------------------------------------------

CC = gcc
LIBS = -lm
SRC = src
OBJ = obj
INC = include
BIN = bin
OBJS = $(OBJ)/main.o $(OBJ)/fat.o $(OBJ)/fib.o 
HDRS = $(INC)/fat.h $(INC)/fib.h
CFLAGS = -Wall -c -I$(INC)

EXE = $(BIN)/main

all:  $(EXE)

$(BIN)/main: $(OBJS)
	$(CC) -pg -o $(BIN)/main $(OBJS) $(LIBS)

$(OBJ)/main.o: $(HDRS) $(SRC)/main.c
	$(CC) $(CFLAGS) -o $(OBJ)/main.o $(SRC)/main.c 

$(OBJ)/fat.o: $(HDRS) $(SRC)/fat.c
	$(CC) $(CFLAGS) -o $(OBJ)/fat.o $(SRC)/fat.c 

$(OBJ)/fib.o: $(HDRS) $(SRC)/fib.c
	$(CC) $(CFLAGS) -o $(OBJ)/fib.o $(SRC)/fib.c 
	
clean:
	rm -f $(EXE) $(OBJS) gmon.out

run:
	make all
		./$(EXE)

