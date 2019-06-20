CXXFLAGS=-g -std=c++14 -Wall -pedantic
CC=$(CXX)

STUDENT_DIR=my_code
TEST_DIR=tests


test_llist: $(TEST_DIR)/test_llist

$(TEST_DIR)/test_llist: $(STUDENT_DIR)/llist.cpp $(TEST_DIR)/test_llist.cpp


tests:
		tests/test_llist

prod: tests
		- git commit -a -m "new assignment done"
		git push origin master
