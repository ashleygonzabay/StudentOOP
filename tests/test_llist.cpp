//
//  test_llist.cpp
//  MAIN Semester
//
//  Created by Ashley Gonzabay on 6/20/19.
//  Copyright © 2019 Ashley Gonzabay. All rights reserved.
//

#include <stdio.h>
#include <cassert>
#include "../my_code/llist.h"

using namespace std;

int main() {
	Node* head = nullptr;
	add_at_end(head, 16);
	add_at_end(head, 32);
	add_at_end(head, 64);
	add_at_end(head, 128);
	add_at_end(head, 256);
	assert(head->data == 16);
	
	// let's see if our last() function works:
	Node* lastp = last(head);
	assert(lastp->data == 256);
	cout << "Last: " << lastp << endl;
	
	add_at_front(head, 4);
	assert(head->data == 4);
	
	print_list(cout, head);
	
	/*
	 cout << "List: \n";
	 print_list(cout, head);
	 */
}
