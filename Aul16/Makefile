CXX = g++
CXX_FLAGS = -I include -std=c++11

EXEC = bank
SRC = $(wildcard /*.cpp)
OBJ = $(SRC:.cpp=.o)

ID = 20190045396 

all: $(EXEC)

$(EXEC): main.o Conta.o
	$(CXX) $(CXX_FLAGS) -o $@ $^

main.o: main.cpp
	$(CXX) $(CXX_FLAGS) -c main.cpp

Conta.o: Conta.cpp Conta.h
	$(CXX) $(CXX_FLAGS) -c Conta.cpp

clean:
	rm -rf *.o $(EXEC)

run: bank
	./bank