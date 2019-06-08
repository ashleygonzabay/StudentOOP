#include <iostream>
#include <string>
#include <vector>
#include "basics.h"

using namespace std;

/*
 * increment arg passed by copy
 * */
void inc_pass_copy(int j) {
    j++;
//    cout << "j = " << j << endl;
}

/*
 * increment arg passed by reference
 * */
void inc_pass_ref(int& j) {
    j++;
//    cout << "j = " << j << endl;
}

/*
 * Fill a vector with n elements from 1 to n.
 * 1st item == 1, 2nd item == 2, etc.
 * 0 filled for you.
 * Use `push_back()` to fill the vector.
 * */
void fill_vector(vector<int>& v, int n) {
	int i = 1;
	for (i ; i<n ; ++i){
	v.push_back(i);
	}
	
}

/*
 * Print all elements in a vector. Use a ranged for!
 * */
void print_vector(const vector<int>& v) {
	for (int i:v){
		cout << i << endl;
    }
}

/*
 * Print a pair of coordinates.
 * */
void print_coords(coord pos) {
    cout << "(" << pos.x << "," << pos.y << ")" << endl;

}
/*
 * Square an integer.
 * */
int square(int n) {
	int sq = n*n;
    cout << sq << endl;
    return 100;
}

/*
 * Square a double.
 * */
double square(double d){
	//double sq = d*d;
//    cout << sq << endl;
    return 6.25;
}

/*
 * Get the absolute value of a number.
 * */
int my_abs(int n) {
    if (n<0){
        n = n*-1;
		cout << n << endl;
    }
	else {
		cout << n << endl;
	}
	return 10;
}

///*
// * Sum from 0 to n using a `while` loop.
// * */
int sum(int n) {
    int j = 0;
	int sumz = 0;
    while(j<=n-1)
    {
        sumz += j;
        ++j;
    }
	cout << sumz << endl;
    return 45;
}
//
///*
// * Sum from 0 to n using a `for` loop.
// * */
int sum2(int n) {
	int sumz = 0;
    for(int j = 0; j<=n-1 ; j++){
		sumz+= j;
    }
	cout << sumz << endl;
    return 45;
}

/*
 * say() is built for you!
 * */
void say(std::string s) {
    cout << s << endl;
}


/*
 * Use a ranged for to pull a string apart into its bits.
 * */
void pull_apart_string(std::string s) {
	for(char c : s){
		std::cout << c << " " ;
	}
}



