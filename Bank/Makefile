CXX = g++
CXX_FLAGS = -I include -std=c++11

EXEC = bank
SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)

ID = 20190045396 

all: $(EXEC)

$(EXEC): main.o Fila.o Conta.o Agencia.o Funcionario.o Gerente.o Caixa.o Seguranca.o Cliente.o ClientePF.o Banco.o App.o
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

Funcionario.o: src/Funcionario.cpp include/Funcionario.hpp
	$(CXX) $(CXX_FLAGS) -c src/Funcionario.cpp

Gerente.o: src/Gerente.cpp include/Gerente.hpp
	$(CXX) $(CXX_FLAGS) -c src/Gerente.cpp

Caixa.o: src/Caixa.cpp include/Caixa.hpp
	$(CXX) $(CXX_FLAGS) -c src/Caixa.cpp

Seguranca.o: src/Seguranca.cpp include/Seguranca.hpp
	$(CXX) $(CXX_FLAGS) -c src/Seguranca.cpp

Cliente.o: src/Cliente.cpp include/Cliente.hpp
	$(CXX) $(CXX_FLAGS) -c src/Cliente.cpp

ClientePF.o: src/ClientePF.cpp include/ClientePF.hpp
	$(CXX) $(CXX_FLAGS) -c src/ClientePF.cpp

ClientePJ.o: src/Clientepj.cpp include/Clientepj.hpp
	$(CXX) $(CXX_FLAGS) -c src/Clientepj.cpp

clean:
	rm -rf *.o $(EXEC)

run: bank
	./bank