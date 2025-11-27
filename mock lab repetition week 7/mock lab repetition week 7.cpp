#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {



	int room, nights;
	char promo, again;
	double disc, totaldisc, subTotal = 0, FinalTotal = 0, price, disc2, ftotal, Dtotal, Ltotal;

	cout << "================================================================\n";
	cout << "                 FTMK GRAND HOTEL BOOKING SYSTEM                \n";
	cout << "================================================================\n";
	cout << "\t ROOM TYPE\n";
	cout << "\t\t1. Standard Room - RM150.00 per night\n";
	cout << "\t\t2. Deluxe Room   - RM200.00 per night\n";
	cout << "\t\t3. Suite Room    - RM300.00 per night\n";
	cout << "----------------------------------------------------------------\n";

	do {

		cout << "\nEnter room type (1-3) :";
		cin >> room;

		cout << "\nEnter number of nights:";
		cin >> nights;

		if (room == 1)
			cout << "\nYou have selected Standard room";
		else if (room == 2)
			cout << "\nYou have selected Deluxe room";
		else if (room == 3)
			cout << "\nYou have selected Suite room";
		else
			cout << "\nInvalid room";

		cout << "\nDo you have a promo code? (Y for Yes / N for No): ";
		cin >> promo;

		if (room == 1)
			price = 150;
		else if (room == 2)
			price = 200;
		else if (room == 3)
			price = 300;
		else
			price = 0;

		if (nights >= 1 && nights <= 2)
			disc = 0.00;
		else if (nights >= 3 && nights <= 5)
			disc = 0.05;
		else if (nights > 5)
			disc = 0.10;
		else
			disc = 0;

		if (promo == 'y' || promo == 'Y')
			disc2 = 0.1;
		else if (promo == 'n' || promo == 'N')
			disc2 = 0.00;
		else
			disc2 = 0;


		cout << "----------------------------------------------------------------\n";
		cout << "\nPrice per Night : RM" << fixed << setprecision(2) << price << endl;
		cout << "\nNights stayed :" << nights << endl;

		subTotal = price * nights;
		cout << "\nSubtotal : RM" << fixed << setprecision(2) << subTotal << endl;

		totaldisc = subTotal * disc;
		Dtotal = subTotal - totaldisc;
		ftotal = totaldisc * disc2;
		Ltotal = totaldisc + ftotal;
		cout << "\nDiscount (";
		if (disc > 0) {
			cout << disc * 100 << "%";
		}

		else
			cout << "0.00%";

		if (disc2 > 0)
			cout << " + " << disc * 100 << "%promo";
		cout << ") : RM" << fixed << setprecision(2) << totaldisc << endl;
		cout << "----------------------------------------------------------------\n";
		FinalTotal = subTotal - Ltotal;
		cout << "\n Final Total : RM" << fixed << setprecision(2) << FinalTotal << endl;
		cout << "----------------------------------------------------------------\n";



		if (FinalTotal >= 1200)
			cout << "\n You are eligible for free airport transfer";
		else if (FinalTotal < 300)
			cout << "\nEnjoy your vacation.";
		else
			cout << "\n Thank you for booking with FTMK Grand Hotel.";
		cout << "\n====================================================\n";

		cout << "\nDo you want to add more room? (Y for yes/ N for no) :";
		cin >> again;

	} while (again == 'y' || again == 'Y');

	cout << "The end";



	return 0;





