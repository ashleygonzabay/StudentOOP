CXXFLAGS=-g -std=c++14 -Wall -pedantic
CC=$(CXX)

STUDENT_DIR=my_code
TEST_DIR=tests


test_weather: $(TEST_DIR)/test_weather

$(TEST_DIR)/test_weather: $(STUDENT_DIR)/weather.cpp $(TEST_DIR)/test_weather.cpp


tests:

prod: tests
		- git commit -a -m "new assignment done"
		git push origin master
