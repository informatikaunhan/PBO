CXX ?= g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic -Iinclude
TARGET := build/pbo301_p1
SOURCES := src/main.cpp src/Equipment.cpp

.PHONY: all clean test
all: $(TARGET)

$(TARGET): $(SOURCES) include/Equipment.h
	mkdir -p build
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

test: $(TARGET)
	bash tests/test_output.sh

clean:
	rm -rf build build-cmake
