CC=clang
CFLAGS=-g -Wall

# Automatic variables below;
# $@ means target
# $^ means dependency

# Specify rules, targets and dependencies via automatic variables
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $^

all: myapp

# memory-allocation.o: memory-allocation.c
# 	$(CC) $(CFLAGS) -c memory-allocation.c

# functions-definitions.o: functions-definitions.c
# 	$(CC) $(CFLAGS) -c functions-definitions.c

# myapp: memory-allocation.o functions-definitions.o main.c
# 	$(CC) $(CFLAGS) -o myapp main.c memory-allocation.o functions-definitions.o

myapp: memory-allocation.o functions-definitions.o main.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -drf *.o myapp*