SRC_FILES := $(wildcard *.cpp)
OBJ_FILES := $(patsubst %.cpp,%.out,$(SRC_FILES))

all: $(OBJ_FILES)

%.out: %.cpp
	@g++ -fsanitize=undefined,address -g3 -Wall $< -o $@
debug:
	@g++ -g3 -Wall temp.cpp
