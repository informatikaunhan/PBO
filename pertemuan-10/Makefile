CXX ?= g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic -Iinclude
BUILD := build
APP := $(BUILD)/pbo301_p10
TEST := $(BUILD)/test_p10
SRC := src/main.cpp src/SoldierRecord.cpp src/WeaponInventory.cpp
LIBSRC := src/SoldierRecord.cpp src/WeaponInventory.cpp
all: $(APP)
$(BUILD):
	mkdir -p $(BUILD)
$(APP): $(SRC) include/Interfaces.h include/SoldierRecord.h include/WeaponInventory.h | $(BUILD)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(APP)
$(TEST): tests/test_main.cpp $(LIBSRC) include/Interfaces.h | $(BUILD)
	$(CXX) $(CXXFLAGS) tests/test_main.cpp $(LIBSRC) -o $(TEST)
test: $(TEST)
	./$(TEST)
clean:
	rm -rf $(BUILD) p10_test_record.txt
.PHONY: all test clean
