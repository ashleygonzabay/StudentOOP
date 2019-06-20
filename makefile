CXXFLAGS=-g -std=c++14 -Wall -pedantic
CC=$(CXX)

STUDENT_DIR=my_code
TEST_DIR=tests


test_complex: $(TEST_DIR)/test_complex

$(TEST_DIR)/test_complex: $(STUDENT_DIR)/complex.cpp $(TEST_DIR)/test_complex.cpp

tests: test_complex
		tests/test_complex

prod: tests
		- git commit -a -m "new assignment done"
		git push origin master
