CC = gcc
CFILE = main.c
TARGET = test

all: 
	$(CC) $(CFILE) -o $(TARGET)
clean: 
	del test.exe