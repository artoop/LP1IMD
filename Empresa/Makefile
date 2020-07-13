CXX = g++
CXX_FLAGS = -I include -std=c++11

EXEC = empresa
SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)

ID = 20190045396 

all: $(EXEC)

$(EXEC): main.o App.o Empresa.o Funcionario.o Data.o
	$(CXX) $(CXX_FLAGS) -o $@ $^

main.o: src/main.cpp
	$(CXX) $(CXX_FLAGS) -c src/main.cpp

App.o: src/App.cpp include/App.hpp
	$(CXX) $(CXX_FLAGS) -c src/App.cpp

Empresa.o: src/Empresa.cpp include/Empresa.hpp
	$(CXX) $(CXX_FLAGS) -c src/Empresa.cpp

Funcionario.o: src/Funcionario.cpp include/Funcionario.hpp
	$(CXX) $(CXX_FLAGS) -c src/Funcionario.cpp

Data.o: src/Data.cpp include/Data.hpp
	$(CXX) $(CXX_FLAGS) -c src/Data.cpp

clean:
	rm -rf *.o $(EXEC)

zip: src/* include/*
	zip $(ID).zip src/* include/*	

run: empresa
	./empresa