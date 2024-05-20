#include "ExchangeProgram.h"
#include <iostream>

void ExchangeProgram::addRequest(int rooms, float area, int floor, std::string district) {
	Flat request(rooms, area, floor, district);
	catalog.push_back(request);
	std::cout << "Request added successfully." << std::endl;
}
void ExchangeProgram::findMatch(int rooms, float area, int floor, std::string district) {
	auto it = catalog.begin();
	while (it != catalog.end()) {
		if (it->getRooms() == rooms && it->getFloor() == floor && it->getDistrict() == district) {
			if (std::fabs(0.9 * it->getArea() - area) <= 0.1 * it->getArea()) {
				std::cout << "Matching flat found:" << std::endl;
				std::cout << "Rooms: " << it->getRooms() << ", Area: " << it->getArea() << ", Floor: " << it->getFloor() << ", District: " << it->getDistrict() << std::endl;
				it = catalog.erase(it);
				return;
			}
		}
		else {
			++it;
		}
	}

	std::cout << "No matching flat found. Request added to the catalog." << std::endl;
	addRequest(rooms, area, floor, district);
}


void ExchangeProgram::showCatalog() {
	std::cout << "Current catalog:" << std::endl;
	for (auto& flat : catalog) {
		std::cout << "Rooms: " << flat.getRooms() << ", Area: " << flat.getArea() << ", Floor: " << flat.getFloor() << ", District: " << flat.getDistrict() << std::endl;
	}
}