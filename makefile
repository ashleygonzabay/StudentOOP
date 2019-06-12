CXXFLAGS=-g -std=c++14 -Wall -pedantic
CC=$(CXX)

STUDENT_DIR=my_code
TEST_DIR=tests

test_pointers: $(TEST_DIR)/test_pointers

$(TEST_DIR)/test_pointers: $(STUDENT_DIR)/pointers.cpp $(TEST_DIR)/test_pointers.cpp

tests: test_pointers
		tests/test_pointers

prod: tests
		- git commit -a -m "new assignment done"
		git push origin master
