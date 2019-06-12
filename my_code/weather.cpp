#include <iostream>
#include <string>
#include <vector>
#include "weather.h"

using namespace std;

/*
 * A constructor for weather class.
 * */


const double F_TO_C = 5 / 9;
const double C_TO_F = 9 / 5;

Image::Image(int w, int h, std::string flnm)
	: width(w),height(h)
{
	filename = flnm;
	//this is a buffer and it's p much a temporary placeholder for computer memory.
	image_buf = new char[image_sz()];
}

//copy constructor
Image::Image(const Image& img2){
	if (&img2 != this){
		copy_fields(img2);
	}
}

//destructor
Image::~Image(){
	if (image_buf != nullptr){
		delete[] image_buf;
		
	}
}
	
	Image& Image::operator=(const Image& img2){
		
	if (&img2 != this){
		if (image_buf != nullptr){
			delete[] image_buf;
			
		}
		copy_fields(img2);
}
	return *this;
}


int Image:: image_sz(){
	return width*height;
}

void Image::copy_fields(const Image& img2){
	height = img2.height;
	width = img2.width;
	filename = img2.filename;
	image_buf = new char[image_sz()];
	for (int i = 0; i < image_sz(); i++)
		image_buf[i] = img2.image_buf[i];
	
}


string Image::display(std::string s){
	return "Displaying image " + s;
}
	
Date::Date(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}


double WReading::get_tempF() {
	return (temperature * C_TO_F) + 32;
}


Weather::Weather(std::string nm, GPS loc) :
station_nm(nm), my_loc(loc) {
}



string Weather::get_name() const {
    return station_nm;
}


int Weather::get_rating() const {
    return rating;
    
}
///data hiding: encapsulation the void weather method changes the rating variable value, not the one directly above
void Weather:: set_rating(int new_rating) {
    rating = new_rating;
}


//will be added to vector
void Weather:: add_reading(WReading wr){
	wreadings.push_back(wr);
	//doesn't return anything we just want it to compile
}


ostream& operator<<(ostream& os, const Date& date){
////    //let the user decide if they want a new line or not so we don't use endl at the end of the command line
    os << date.month << "/" << date.day  << "/" << date.year;
    return os;
}

ostream& operator<<(ostream& os, const WReading& wr) {
	os << wr.date << ": temp: " << wr.temperature << "; humid: "
	<< wr.humidity << "; wind: " << wr.windspeed;
	return os;
}

ostream& operator<<(ostream& os, const Weather& w) {
	os << w.get_name() << ": rating:  " << w.get_rating() << " "  << w.my_loc << endl;
	for (WReading wr: w.wreadings) {
		os << "	" << wr << endl;
	}
    return os;
}

ostream& operator<<(ostream& os, const GPS& gps) {
	os << "latitude: " << gps.latitude << "; longtitude: " << gps.longitude;
	return os;
}



