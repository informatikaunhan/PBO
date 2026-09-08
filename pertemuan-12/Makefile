CXX ?= g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic -Iinclude
BUILD := build
APP := $(BUILD)/pbo301_p12
TEST := $(BUILD)/test_p12
all: $(APP)
$(BUILD):
	mkdir -p $(BUILD)
$(APP): $(BUILD) src/main.cpp include/templates.hpp include/soldier.hpp
	$(CXX) $(CXXFLAGS) src/main.cpp -o $(APP)
$(TEST): $(BUILD) tests/test_main.cpp include/templates.hpp include/soldier.hpp
	$(CXX) $(CXXFLAGS) tests/test_main.cpp -o $(TEST)
test: $(TEST)
	./$(TEST)
clean:
	rm -rf $(BUILD)
.PHONY: all test clean
