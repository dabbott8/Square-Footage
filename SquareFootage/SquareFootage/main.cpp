#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double dblFinishedAreaOne = 0;
	double dblFinishedAreaTwo = 0;
	double dblFinishedAreaThree = 0;
	double dblBaseCostOne = 0;
	double dblBaseCostTwo = 0;
	double dblBaseCostThree = 0;
	double dblAreaCostOne = 0;
	double dblAreaCostTwo = 0;
	double dblAreaCostThree = 0;

	cout << "Enter First Finished area and base cost for first house." << endl;
	cin >> dblFinishedAreaOne >> dblBaseCostOne;
	cout << "Enter First Finished area and base cost for second house" << endl;
	cin >> dblFinishedAreaTwo >> dblBaseCostTwo;
	cout << "Enter First Finished area and base cost for third house." << endl;
	cin >> dblFinishedAreaThree >> dblBaseCostThree;

	dblAreaCostOne = dblFinishedAreaOne * dblBaseCostOne;
	dblAreaCostTwo = dblFinishedAreaTwo * dblBaseCostTwo;
	dblAreaCostThree = dblFinishedAreaThree * dblBaseCostThree;

	if ((dblAreaCostOne < dblAreaCostTwo) && (dblAreaCostTwo < dblAreaCostThree))
	{
		cout << "The cheapest house is house one at $" << dblAreaCostOne << endl;
	}

	else if ((dblAreaCostOne > dblAreaCostTwo && dblAreaCostTwo > dblAreaCostThree))
	{
		cout << "The cheapest house is house two at $ " << dblAreaCostThree << endl;
	}

	else if ((dblAreaCostTwo < dblAreaCostOne && dblAreaCostTwo < dblAreaCostThree))
	{
		cout << "The cheapest house is house three at $ " << dblAreaCostTwo << endl;
	}
	system("pause");
	return 0;
}