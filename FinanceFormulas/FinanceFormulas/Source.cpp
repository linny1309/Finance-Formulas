//This code has methods that are useful for finance

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

/*This method is designed to feed in current assets 
and current liabilities and return the current ratio*/
double currentRatio(double assets, double liabilities)
{
	return assets / liabilities;
}

/*This method is designed to feed in assets, inventories, 
and current liabilities and return the quick ratio*/
double quickRatio(double assets, double inventories, double liabilities)
{
	return (assets - inventories) / liabilities;
}

/*This method is designed to feed in cash and equivalents, 
marketable securities, accounts receivables, and current 
liabilities and return the quick ratio*/
double quickRatio(double cash, double ms, double ar, double liabilities)
{
	return (cash + ms + ar) / liabilities;
}

/*This method is designed to feed in present value, interest rate, 
and time and returns the future value of a single sum*/
double futureValueOfCurrentSum(double pv, double r, double t)
{
	double cur = 1.0 + r;
	double curr = cur;
	for (double x = 0.0; x < t - 1; x++)
	{
		curr = cur * curr;
	}
	return curr*pv;
}


int main()
{
	cout << setprecision(2) << fixed << futureValueOfCurrentSum(500.0, 0.05, 5.0) << endl;

	system("pause");
}