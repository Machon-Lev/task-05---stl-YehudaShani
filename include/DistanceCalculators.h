#include <cmath>

class DistanceCalculator
{
public:
	static double euclideanDistance(double x1, double x2, double y1, double y2) {
		
				return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	}
	static double manhattanDistance(double x1, double x2, double y1, double y2) {
		return abs(x1 - x2) + abs(y1 - y2);
	}
};