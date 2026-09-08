CXX ?= g++
CXXFLAGS ?= -std=c++17 -Wall -Wextra -pedantic -Iinclude
BUILD := build
APP := $(BUILD)/pbo301_p15
TEST := $(BUILD)/p15_tests

all: $(APP)

$(BUILD):
	mkdir -p $(BUILD)

$(APP): src/main.cpp | $(BUILD)
	$(CXX) $(CXXFLAGS) $< -o $@

$(TEST): tests/test_main.cpp | $(BUILD)
	$(CXX) $(CXXFLAGS) $< -o $@

test: $(TEST)
	./$(TEST)

clean:
	rm -rf $(BUILD) build-cmake

.PHONY: all test clean
