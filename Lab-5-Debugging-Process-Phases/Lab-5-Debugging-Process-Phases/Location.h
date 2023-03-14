#pragma once
#include <iostream>
using namespace std;
class Location {
public:
	double latitude;
	double longitude;
public:
	Location(double latitude, double longitude);
	double getLatitude();
	double getLongitude();
	void setLatitude(double lat);
	void setLongitude(double longi);
	double distanceFrom(Location& location);

};

