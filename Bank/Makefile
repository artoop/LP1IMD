CXX = g++
CXX_FLAGS = -I include -std=c++11

EXEC = bank
SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)

ID = 20190045396 

all: $(EXEC)

$(EXEC): main.o Conta.o Agencia.o Cliente.o
	$(CXX) $(CXX_FLAGS) -o $@ $^

main.o: src/main.cpp
	$(CXX) $(CXX_FLAGS) -c src/main.cpp

Conta.o: src/Conta.cpp include/Conta.h
	$(CXX) $(CXX_FLAGS) -c src/Conta.cpp

Agencia.o: src/Agencia.cpp include/Agencia.h
	$(CXX) $(CXX_FLAGS) -c src/Agencia.cpp

Cliente.o: src/Cliente.cpp include/Cliente.h
	$(CXX) $(CXX_FLAGS) -c src/Cliente.cpp

clean:
	rm -rf *.o $(EXEC)

run: bank
	./bank