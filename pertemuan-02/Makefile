CXX ?= g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic -Iinclude
TARGET := build/pbo301_p2
SOURCES := src/main.cpp src/Soldier.cpp src/Vehicle.cpp src/Weapon.cpp

.PHONY: all clean test
all: $(TARGET)

$(TARGET): $(SOURCES) include/Soldier.h include/Vehicle.h include/Weapon.h
	mkdir -p build
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -rf build

test: $(TARGET)
	./tests/test_output.sh
