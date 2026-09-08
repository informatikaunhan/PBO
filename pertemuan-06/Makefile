CXX ?= g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic -Iinclude
SRC := src/main.cpp src/MilitaryUnit.cpp src/AmphibiousVehicle.cpp
TESTSRC := tests/test_inheritance.cpp src/MilitaryUnit.cpp src/AmphibiousVehicle.cpp
all: build/pbo301_p6
build/pbo301_p6: $(SRC)
	mkdir -p build
	$(CXX) $(CXXFLAGS) $(SRC) -o $@
test: build/test_inheritance
	./build/test_inheritance
build/test_inheritance: $(TESTSRC)
	mkdir -p build
	$(CXX) $(CXXFLAGS) $(TESTSRC) -o $@
clean:
	rm -rf build build-cmake
