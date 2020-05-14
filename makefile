CFLAGS = -Wall -g
CC = gcc

SRC = src/Vector2D.o \
	src/Point2D.o \
	src/Collider2D.o \

src: $(SRC)

$(SRC): src/*.cpp
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	find . -iname "*.o" -delete
