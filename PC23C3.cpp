//Isaac Opata
//June 6, 2024
//Stock Transaction Program

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUMER_OF_SHARES = 1000;
	const double PRICE_BUYING = 45.50;
	const double PRICE_SELLING = 56.90;
	const double COMMISSION_RATE = 0.02;

	double buyingPrice, sellingPrice, commissionBuying, commissionSelliing, profitOrLoss;

	buyingPrice = NUMER_OF_SHARES * PRICE_BUYING;
	commissionBuying = buyingPrice * COMMISSION_RATE;

	sellingPrice = NUMER_OF_SHARES * PRICE_SELLING;
	commissionSelliing = sellingPrice * COMMISSION_RATE;

	profitOrLoss = sellingPrice - buyingPrice - commissionBuying - commissionSelliing;

	cout << fixed << setprecision(2) << showpoint;

	cout << "Buying Price: $      " << setw(8) << buyingPrice << endl;
	cout << "Buying commission: $ " << setw(8) << commissionBuying << "\n";

	cout << "Selling Price: $     " << setw(8) << sellingPrice << endl;
	cout << "Selling commission: $" << setw(8) << commissionSelliing << "\n";

	cout << "Profit or Loss: $    " << setw(8) << profitOrLoss << endl;

	return 0;
}