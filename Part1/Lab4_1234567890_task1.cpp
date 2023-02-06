#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<math.h>
#include<time.h>
using namespace std;
class City {
	/*your code*/
};
class SimulatedAnnealing {
private:
	double T_start;//intial temperature
	double T_end;//end temperature
	/*...*/
	City *cities;//we want you to practice pointer in this lab
public:
	SimulatedAnnealing() {
		cities = NULL;
	}
	SimulatedAnnealing(double value1, double value2, /*...*/, istream & infile) {
		T_start = value1;
		T_end = value2;
		/*...*/
		//Initialization for cities and load data from input file.
	}
	~SimulatedAnnealing() {
		delete[] cities;
	}
	/*...*/
};
class Greedy {
private:
	int num;
	City *cities;
public:
	Greedy() {
		cities = NULL;
	}
	Greedy(istream & infile) {
		/*...*/
	}
	~Greedy() {
		/*...*/
	}
	/*...*/
};
/*...*/
int main() {
	/*...*/
	return 0;
}