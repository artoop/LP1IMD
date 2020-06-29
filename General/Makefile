CXX = g++
CXX_FLAGS = -I include -std=c++11

EXEC = diary
SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)

ID = 20190045396 

all: $(EXEC)

$(EXEC): main.o App.o Diary.o Message.o Util.o Date.o Time.o
	$(CXX) $(CXX_FLAGS) -o $@ $^

main.o: src/main.cpp
	$(CXX) $(CXX_FLAGS) -c src/main.cpp

App.o: src/App.cpp include/App.h
	$(CXX) $(CXX_FLAGS) -c src/App.cpp

Diary.o: src/Diary.cpp include/Diary.h
	$(CXX) $(CXX_FLAGS) -c src/Diary.cpp

Message.o: src/Message.cpp include/Message.h
	$(CXX) $(CXX_FLAGS) -c src/Message.cpp

Util.o: src/Util.cpp include/Util.h
	$(CXX) $(CXX_FLAGS) -c src/Util.cpp

Date.o: src/Date.cpp include/Date.h
	$(CXX) $(CXX_FLAGS) -c src/Date.cpp

Time.o: src/Time.cpp include/Time.h
	$(CXX) $(CXX_FLAGS) -c src/Time.cpp

zip: src/* include/*
	zip $(ID).zip src/* include/*

clean:
	rm -rf *.o $(EXEC)

run: diary
	./diary