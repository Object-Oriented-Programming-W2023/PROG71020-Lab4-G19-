#include"Location.h"
#include<iostream>

Location::Location(double latitude, double longitude) {
	cout << "Created Location object" << endl;
	this->latitude = latitude;
	this->longitude = longitude;

}



double Location::getLatitude() {

	return latitude;

}

double Location::getLongitude() {

	return longitude;

}

void Location::setLatitude(double latitude) {

	this->latitude = latitude;
}

void Location::setLongitude(double longitude) {

	this->longitude = longitude;

}


// **********************************************************************************************
// Though the distance between two locations should be calculated using the Haversine formula, 
// in our requirements we **accept** the simple distance calculation 
// based on the formula found in  https://www.cuemath.com/geometry/distance-between-two-points/
// **********************************************************************************************
double Location::distanceFrom(Location& location) {

	return sqrt(pow(this->latitude - location.latitude, 2)) + pow(this->longitude - location.longitude, 2);

}



