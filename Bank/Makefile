CXX = g++
CXX_FLAGS = -I include -std=c++11

EXEC = bank
SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)

ID = 20190045396 

all: $(EXEC)

$(EXEC): main.o Fila.o Conta.o Agencia.o Cliente.o Banco.o App.o
	$(CXX) $(CXX_FLAGS) -o $@ $^

main.o: src/main.cpp
	$(CXX) $(CXX_FLAGS) -c src/main.cpp

Fila.o: src/Fila.cpp include/Fila.hpp
	$(CXX) $(CXX_FLAGS) -c src/Fila.cpp

App.o: src/App.cpp include/App.hpp
	$(CXX) $(CXX_FLAGS) -c src/App.cpp

Banco.o: src/Banco.cpp include/Banco.hpp
	$(CXX) $(CXX_FLAGS) -c src/Banco.cpp

Conta.o: src/Conta.cpp include/Conta.hpp
	$(CXX) $(CXX_FLAGS) -c src/Conta.cpp

Agencia.o: src/Agencia.cpp include/Agencia.hpp
	$(CXX) $(CXX_FLAGS) -c src/Agencia.cpp

Cliente.o: src/Cliente.cpp include/Cliente.hpp
	$(CXX) $(CXX_FLAGS) -c src/Cliente.cpp

ClientePJ.o: src/Clientepj.cpp include/Clientepj.hpp
	$(CXX) $(CXX_FLAGS) -c src/Clientepj.cpp

clean:
	rm -rf *.o $(EXEC)

run: bank
	./bank