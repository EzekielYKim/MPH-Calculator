#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //variables
    double mpg, distance, gallons, pricePerGallon, totalCost;

    cout << "Enter MPG" << endl;
    cin >> mpg;
    cout << "Enter distance in miles" << endl;
    cin >> distance;
    cout << "Enter price for one gallon of gas: " << endl;
    cin >> pricePerGallon;

    gallons = distance/mpg;
    totalCost = gallons * pricePerGallon;
    cout <<"total trip cost: $"<<fixed<<setprecision(2)<<totalCost<<endl;
    return 0;
}
