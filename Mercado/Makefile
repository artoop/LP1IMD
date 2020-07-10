CXX = g++
CXX_FLAGS = -I include -std=c++11

EXEC = mercado
SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)

ID = 20190045396 

all: $(EXEC)

$(EXEC): main.o App.o Produto.o Estabelecimento.o Cliente.o
	$(CXX) $(CXX_FLAGS) -o $@ $^

main.o: src/main.cpp
	$(CXX) $(CXX_FLAGS) -c src/main.cpp

App.o: src/App.cpp include/App.hpp
	$(CXX) $(CXX_FLAGS) -c src/App.cpp

Produto.o: src/Produto.cpp include/Produto.hpp
	$(CXX) $(CXX_FLAGS) -c src/Produto.cpp

Estabelecimento.o: src/Estabelecimento.cpp include/Estabelecimento.hpp
	$(CXX) $(CXX_FLAGS) -c src/Estabelecimento.cpp

Cliente.o: src/Cliente.cpp include/Cliente.hpp
	$(CXX) $(CXX_FLAGS) -c src/Cliente.cpp

clean:
	rm -rf *.o $(EXEC)

zip: src/* include/*
	zip $(ID).zip src/* include/*

run: mercado
	./mercado