CXX ?= g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic -Iinclude
BUILD := build

all: $(BUILD)/pbo301_p4

$(BUILD):
	mkdir -p $(BUILD)

$(BUILD)/pbo301_p4: src/main.cpp src/BankAccount.cpp include/BankAccount.h | $(BUILD)
	$(CXX) $(CXXFLAGS) src/main.cpp src/BankAccount.cpp -o $@

$(BUILD)/test_bank_account: tests/test_bank_account.cpp src/BankAccount.cpp include/BankAccount.h | $(BUILD)
	$(CXX) $(CXXFLAGS) tests/test_bank_account.cpp src/BankAccount.cpp -o $@

test: $(BUILD)/test_bank_account
	./$(BUILD)/test_bank_account

clean:
	rm -rf $(BUILD)

.PHONY: all test clean
