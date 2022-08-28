HEADERS       := contacts.h
IMPLEMS       := contacts.cpp
TEST          := contacts_test.cpp
TEST_OUT      := contacts_test
LIB           := lib/test_utils.h
OTHER         := lib/contacts_array.cpp lib/contacts_array.h

FILES         := $(IMPLEMS) $(HEADERS) $(LIB) $(OTHER) $(TEST)
OUTS          := $(TEST_OUT)
GTEST         := googletest
TEST_FLAGS    := -Wall -Wno-unused-function -Wno-sign-compare -Wno-unused-variable -pthread 

.PHONY: format test all clean

all: format test

format:
	@echo "\n========================\nFormatting files\n========================\n"
	@clang-format $(FILES) -i -style=google -verbose
	@echo "\n========================\nFormatting complete\n========================\n"

test: $(TEST) $(IMPLEMS) $(HEADERS)
	@echo "\n========================\nRunning tests\n========================\n"
	@g++ -std=c++17 $(TEST) $(IMPLEMS) $(LIB) $(GTEST)/libgtest.a $(GTEST)/libgtest_main.a -isystem $(GTEST)/include $(TEST_FLAGS) -o $(TEST_OUT)
	@./$(TEST_OUT)
	@echo "\n========================\nTests complete\n========================\n"

clean:
	@rm -f $(OUTS)