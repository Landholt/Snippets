#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::vector;
using std::cerr;

class Bad_Celcius {};

double ctok(double c) // converts Celsius to Kelvin
{
    if (c < -217.15) { throw Bad_Celcius{}; }
    double k = c + 273.15;
    return k;
}

int main()
{
    double c = 0; // declare input variable
    double d;
    cin >> d; // retrieve temperature to input variable
    try {
        double k = ctok(d); // convert temperature
        cout << k << '/n'; // print out temperature
        return 0;
    }
    catch (Bad_Celcius) {
        cout << "Bad value";
    }
    return 0;
}
