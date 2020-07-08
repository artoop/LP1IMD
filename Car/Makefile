CXX = g++
CXX_FLAGS = -I include -std=c++11

EXEC = carro
SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)

ID = 20190045396 

all: $(EXEC)

$(EXEC): main.o carro.o motor.o
	$(CXX) $(CXX_FLAGS) -o $@ $^

main.o: src/main.cpp
	$(CXX) $(CXX_FLAGS) -c src/main.cpp

carro.o: src/carro.cpp include/carro.hpp
	$(CXX) $(CXX_FLAGS) -c src/carro.cpp

motor.o: src/motor.cpp include/motor.hpp
	$(CXX) $(CXX_FLAGS) -c src/motor.cpp

clean:
	rm -rf *.o $(EXEC)

run: carro
	./carro