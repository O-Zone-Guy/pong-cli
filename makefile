SRC = src/Vector2D.o \
	src/Point2D.o \
	src/Collider2D.o \

# TESTS = tests/Testing.o \
# 	tests/TestPoint2D.o \

src: $(SRC)

$(SRC): src/*.cpp

# $(TESTS): tests/*.cpp
# 	g++ -std=c++11 -Wall -I$(CATCH_SIGNLE_INCLUDE)
# test: $(TESTS)


clean:
	find . -iname "*.o" -delete
