CXX ?= g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic -O2 -Iinclude
TARGET := build/pbo301_p7
SOURCES := src/main.cpp src/Shape.cpp

all: $(TARGET)
$(TARGET): $(SOURCES) include/Shape.h
	mkdir -p build
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

test: $(TARGET)
	bash tests/test_output.sh

clean:
	rm -rf build build-cmake
.PHONY: all test clean
