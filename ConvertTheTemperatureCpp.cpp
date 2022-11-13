// ConvertTheTemperatureCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

vector<double> convertTemperature(double celsius) {
	return vector<double>{celsius + 273.15, celsius * 1.80 + 32.00};
}

int main()
{
	std::cout << "Hello World!\n";
}

