#include "Flat.h"

Flat::Flat(int rooms, float area, int floor, std::string district) {
	this->rooms = rooms;
	this->area = area;
	this->floor = floor;
	this->district = district;
}

int Flat::getRooms() {
	return rooms;
}

float Flat::getArea() {
	return area;
}

int Flat::getFloor() {
	return floor;
}

std::string Flat::getDistrict() {
	return district;
}