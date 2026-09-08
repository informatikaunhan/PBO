CXX ?= g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic -Iinclude
TARGET = build/pbo301_p5

all: $(TARGET)

$(TARGET): src/main.cpp include/Soldier.h include/Squad.h include/Platoon.h include/MapService.h
	mkdir -p build
	$(CXX) $(CXXFLAGS) src/main.cpp -o $(TARGET)

test: $(TARGET)
	bash tests/test_output.sh

clean:
	rm -rf build build-cmake
.PHONY: all test clean
