
#pragma once
#include <string>


class City {
	std::string name;
	double xCoord;
	double yCoord;

public:
	City();
	City(std::string name, double xCoord, double yCoord);
	std::string getName();
	double getXCoord();
	double getYCoord();
	bool operator<(const City& city) const {
		return name < city.name;
	}
};