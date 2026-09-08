CXX ?= g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic -Iinclude
BUILD := build
LIBSRC := src/Vector3D.cpp src/SimpleStringLite.cpp
APP := $(BUILD)/pbo301_p11
TEST := $(BUILD)/test_p11
all: $(APP)
$(BUILD):
	mkdir -p $(BUILD)
$(APP): $(BUILD) src/main.cpp $(LIBSRC)
	$(CXX) $(CXXFLAGS) src/main.cpp $(LIBSRC) -o $(APP)
$(TEST): $(BUILD) tests/test_main.cpp $(LIBSRC)
	$(CXX) $(CXXFLAGS) tests/test_main.cpp $(LIBSRC) -o $(TEST)
test: $(TEST)
	./$(TEST)
clean:
	rm -rf $(BUILD)
.PHONY: all test clean
