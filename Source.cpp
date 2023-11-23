#include <iostream>
using namespace std;
int main()
{
	int loyaltypoints = 0;
	const float conversionrate = 10.0;
	float amountofpurchase, discount;
	char choice;
	do {
		cout << "enter total amount of purchase: "<<endl;
		cin >> amountofpurchase;
		if (amountofpurchase <= 0)
		{
			cout << "enter a valid input";
		}
		loyaltypoints = amountofpurchase / conversionrate;
		cout << "loyalty points of your purchase are:" << loyaltypoints<<endl;
		cout << "do you want to redeem your points for a discount?(y/n):";
		cin >> choice;
		if (choice == 'y' || choice == 'Y')
		{
			int redeempoints;
			cin >> redeempoints;
			cout << "enter the amount of points you want to redeem\n";
			discount = (redeempoints / loyaltypoints) * 0.5;
			cout << "the discount from your redeemed points is" << discount<<endl;
			loyaltypoints -= redeempoints;
		}
	} 
	while (choice == 'y' || choice == 'Y');
	return 0;
}