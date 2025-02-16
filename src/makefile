#compiler used
CC = gcc

CFLAGS = -Wall -Wextra -g

#source files
SRCS = color.c main.c menu.c

OBJS = color.o main.o menu.o

TARGET = program

all: $(TARGET)


$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean compiled files
clean:
	rm -f $(OBJS) $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)