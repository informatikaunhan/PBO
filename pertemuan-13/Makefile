CXX ?= g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic -Iinclude
BUILD := build

.PHONY: all test clean
all: $(BUILD)/pbo301_p13

$(BUILD):
	mkdir -p $(BUILD)

$(BUILD)/pbo301_p13: src/main.cpp | $(BUILD)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BUILD)/tests: tests/test_main.cpp | $(BUILD)
	$(CXX) $(CXXFLAGS) $< -o $@

test: $(BUILD)/tests
	./$(BUILD)/tests

clean:
	rm -rf $(BUILD) build-cmake
