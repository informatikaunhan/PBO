CXX ?= g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic -Iinclude

all: p14_demo
p14_demo: src/main.cpp src/inventory.cpp include/inventory.hpp include/exceptions.hpp
	$(CXX) $(CXXFLAGS) src/main.cpp src/inventory.cpp -o $@

test_inventory: tests/test_inventory.cpp src/inventory.cpp include/inventory.hpp include/exceptions.hpp
	$(CXX) $(CXXFLAGS) tests/test_inventory.cpp src/inventory.cpp -o $@

test: test_inventory
	./test_inventory

clean:
	rm -f p14_demo test_inventory
	rm -rf build
.PHONY: all test clean
