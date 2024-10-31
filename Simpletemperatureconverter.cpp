#include <iostream>
using namespace std;
// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}
int main() {
    float celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    float fahrenheit = celsiusToFahrenheit(celsius);
    cout << celsius << " Celsius is equal to " << fahrenheit << " Fahrenheit." << endl;
    return 0;
}
