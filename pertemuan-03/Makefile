CXX ?= g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic -Iinclude
BUILD := build
SRC := src/SimpleString.cpp

.PHONY: all test clean asan
all: $(BUILD)/pbo301_p3

$(BUILD):
	mkdir -p $(BUILD)

$(BUILD)/pbo301_p3: src/main.cpp $(SRC) include/SimpleString.h | $(BUILD)
	$(CXX) $(CXXFLAGS) src/main.cpp $(SRC) -o $@

$(BUILD)/test_simplestring: tests/test_simplestring.cpp $(SRC) include/SimpleString.h | $(BUILD)
	$(CXX) $(CXXFLAGS) tests/test_simplestring.cpp $(SRC) -o $@

test: $(BUILD)/test_simplestring
	./$(BUILD)/test_simplestring
	@echo "All P3 tests passed."

asan: | $(BUILD)
	$(CXX) $(CXXFLAGS) -fsanitize=address -fno-omit-frame-pointer -g src/main.cpp $(SRC) -o $(BUILD)/pbo301_p3_asan

clean:
	rm -rf $(BUILD) build-cmake
