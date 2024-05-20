#pragma once
#ifndef FLAT_H
#define FLAT_H

#include <string>

class Flat {
private:
	int rooms;
	float area;
	int floor;
	std::string district;

public:
	Flat(int rooms, float area, int floor, std::string district);
	int getRooms();
	float getArea();
	int getFloor();
	std::string getDistrict();
};

#endif

