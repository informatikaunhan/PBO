CXX ?= g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic -Iinclude
BUILD := build
APP := $(BUILD)/pbo301_p9
TEST := $(BUILD)/test_p9
SRC := src/main.cpp src/MilitaryAsset.cpp

all: $(APP)
$(BUILD):
	mkdir -p $(BUILD)
$(APP): $(SRC) include/MilitaryAsset.h | $(BUILD)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(APP)
$(TEST): tests/test_main.cpp src/MilitaryAsset.cpp include/MilitaryAsset.h | $(BUILD)
	$(CXX) $(CXXFLAGS) tests/test_main.cpp src/MilitaryAsset.cpp -o $(TEST)
test: $(TEST)
	./$(TEST)
clean:
	rm -rf $(BUILD)
.PHONY: all test clean
