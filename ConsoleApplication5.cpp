#include "ExchangeProgram.h"
#include <iostream>

int main() {
	ExchangeProgram program;
	while (true) {
		std::cout << "\nMenu:" << std::endl;
		std::cout << "1. Add a request" << std::endl;
		std::cout << "2. Find a matching flat" << std::endl;
		std::cout << "3. Show catalog" << std::endl;
		std::cout << "4. Exit" << std::endl;
		std::cout << "Enter your choice: ";
		int choice;
		std::cin >> choice;

		if (choice == 1) {
			int rooms;
			float area;
			int floor;
			std::string district;
			std::cout << "Enter the number of rooms: ";
			std::cin >> rooms;
			std::cout << "Enter the area: ";
			std::cin >> area;
			std::cout << "Enter the floor: ";
			std::cin >> floor;
			std::cout << "Enter the district: ";
			std::cin >> district;
			program.addRequest(rooms, area, floor, district);
		}
		else if (choice == 2) {
			int rooms;
			float area;
			int floor;
			std::string district;
			std::cout << "Enter the number of rooms: ";
			std::cin >> rooms;
			std::cout << "Enter the area: ";
			std::cin >> area;
			std::cout << "Enter the floor: ";
			std::cin >> floor;
			std::cout << "Enter the district: ";
			std::cin >> district;
			program.findMatch(rooms, area, floor, district);
		}
		else if (choice == 3) {
			program.showCatalog();
		}
		else if (choice == 4) {
			std::cout << "Exiting program." << std::endl;
			break;
		}
		else {
			std::cout << "Invalid choice. Please enter a number from 1 to 4." << std::endl;
		}
	}
	return 0;
}