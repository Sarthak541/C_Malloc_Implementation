CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = memtest

OBJS = mymalloc.o memtest.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

mymalloc.o: mymalloc.c mymalloc.h
	$(CC) $(CFLAGS) -c mymalloc.c

memtest.o: memtest.c mymalloc.h
	$(CC) $(CFLAGS) -c memtest.c

clean:
		rm -f $(OBJS) $(TARGET)