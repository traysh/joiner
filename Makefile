TARGET_BIN = join

CXX = g++
BIN_DIR = ./bin
TARGET = $(BIN_DIR)/join

CXX_FLAGS = -g -O0 -Wall -Werror -Wfatal-errors -std=c++14
CXX_FILES = $(shell find -name '*.cpp')

.PHONY: all clean
all: $(TARGET)

clean:
	@rm -f $(shell find $(dir $(TARGET)) -name '*.o' ) $(TARGET)

$(TARGET): $(CXX_FILES) $(BIN_DIR)
	$(CXX) $(CXX_FLAGS) $(CXX_FILES) -o $(TARGET)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)
