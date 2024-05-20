#pragma once
#pragma once
#ifndef EXCHANGEPROGRAM_H
#define EXCHANGEPROGRAM_H

#include "Flat.h"
#include <vector>

class ExchangeProgram {
private:
	std::vector<Flat> catalog;

public:
	void addRequest(int rooms, float area, int floor, std::string district);
	void findMatch(int rooms, float area, int floor, std::string district);
	void showCatalog();
};

#endif

