//
//  vector.hpp
//  MAIN Semester
//
//  Created by Ashley Gonzabay on 6/19/19.
//  Copyright © 2019 Ashley Gonzabay. All rights reserved.
//

#ifndef vector_h
#define vector_h

#include <stdio.h>
const int DEF_CAPACITY = 10;

class MyVec {
public:
	MyVec();
	
	// copy control:
	MyVec(const MyVec& v2);
	~MyVec();
	MyVec& operator=(const MyVec& v2);
	
	void push_back(int val);
	int size() const { return sz; }
	int operator[](int i) const;
	int& operator[](int i);
private:
	int* data;
	int sz;
	int capacity;
};


void print_vector(const MyVec& v);

bool operator==(MyVec& v1, MyVec& v2);

#endif /* vector_h */
