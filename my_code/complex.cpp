////
////  complex.cpp
////  MAIN Semester
////
////  Created by Ashley Gonzabay on 6/17/19.
////  Copyright © 2019 Ashley Gonzabay. All rights reserved.
////


#include <iostream>
#include <istream>
#include <iomanip>
#include "complex.h"
#include <cmath>

using namespace std;

Complex::Complex(double real, double imag) :real(real), imag(imag) {};

/*
 * Read a `Complex` number from an input stream.
 * */
istream& operator>> (istream& is, Complex& c) {
	double real;
	is >> real;
	double imag;
	is >> imag;
	c.real = real;
	c.imag = imag;
	return is;
	
}

Complex::operator bool() const {
	if (real != 0 || imag != 0) {
		return true;
	}
	else {
		return false;
	}
}

double Complex::get_real() const {
	return real;
}

double Complex::get_imag() const {
	return imag;
}

Complex& Complex::operator++() {
	++real;
	return *this;
}

Complex Complex::operator++(int dummy) {
	Complex temp;
	temp.real = real++;
	temp.imag = imag;
	return temp;
}

Complex& Complex::operator--() {
	--real;
	return *this;
}

Complex Complex::operator--(int dummy) {
	Complex temp;
	temp.real = real--;
	temp.imag = imag;
	return temp;
}
//Complex& Complex::operator-=(const Complex& c) {
//	real = (real - c.real);
//	imag = (imag - c.imag);
//	return *this;
//	/*Complex temp;
//	 temp.real = real - c.real;
//	 temp.imag = imag - c.imag;
//	 return temp;*/
//};

Complex Complex::operator*(const int i) {
	Complex temp;
	temp.real = real * i;
	temp.imag = imag * i;
	return temp;
};

bool operator== (const Complex& c1, const Complex& c2) {
	return ((abs(c1.get_real() - c2.get_real()) < 0.000001) && (abs(c1.get_imag() - c2.get_imag()) < 0.0001));
	
}

bool operator!= (const Complex& c1, const Complex& c2) {
	if (!(c1 == c2)) {
		return true;
	}
	else {
		return false;
	}
}



ostream& operator<< (ostream& os, const Complex& c) {
	/*
	 * Outputting a `Complex` instance, while illustrating some of the
	 * capabilities of I/O streams: `setprecision` gives us a fixed
	 * number of decimal places, while `showpos` turns on the plus
	 * sign for positive numbers.
	 * */
	os << "Real part: " << showpos << c.get_real() << endl;
	os << "Imag part: " << setprecision(5) << showpos << c.get_imag();
	os << endl;
	return os;
	
}



Complex operator+(const Complex& c1, const Complex& c2) {
	double real=c1.get_real()+c2.get_real();
	double imag = c1.get_imag() + c2.get_imag();
	Complex temp(real, imag);
	return temp;
}

Complex operator-(const Complex& c1, const Complex& c2) {
	double real = c1.get_real() - c2.get_real();
	double imag = c1.get_imag() - c2.get_imag();
	Complex temp(real, imag);
	return temp;
}
