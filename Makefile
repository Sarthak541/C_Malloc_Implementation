CC = gcc
CFLAGS = -Wall -Wextra -g -fsanitize=address,undefined

# List both executables here
TARGETS = testsuite

# Common object files
LIB_OBJ = mymalloc.o

# All target: builds both programs
all: $(TARGETS)

# Link memtest
testsuite: testsuite.o $(LIB_OBJ)
	$(CC) $(CFLAGS) -o testsuite testsuite.o $(LIB_OBJ)


# Compile rules
mymalloc.o: mymalloc.c mymalloc.h
	$(CC) $(CFLAGS) -c mymalloc.c

testsuite.o: testsuite.c mymalloc.h
	$(CC) $(CFLAGS) -c testsuite.c


clean:
	rm -f *.o $(TARGETS)