#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <iomanip>

using namespace std;

int main() {
	string line = "";
	int notexit = 1;
	int OrderID = 0;
	int choice, Dchoice = 0;
	int TableNo = 0;

	while (notexit) {
		int CONTINUE = 1;
		int menuchoice = 0, subchoice = 0, pchoice = 0;
		//quantity
		int quantity = 0;
		double total = 0;
		char pizzasize = 0;
		string s1 = "", s2 = "", s3 = "", s4 = "", s5 = "", s6 = "", s7 = "", s8 = "", s9 = "", s10 = "", s11 = "", s12 = "", s13 = "", s14 = "", s15 = "", s16 = "", s17 = "", s18 = "", s19 = "";
		int q1 = 0, q2 = 0, q3 = 0, q4 = 0, q5 = 0, q6 = 0, q7 = 0, q8 = 0, q9 = 0, q10 = 0, q11 = 0, q12 = 0, q13 = 0, q14 = 0, q15 = 0, q16 = 0, q17 = 0, q18 = 0, q19 = 0;



		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);SetConsoleTextAttribute(h, 1);
		SetConsoleTextAttribute(h, 14);
		cout << "\n\n";
		cout << "\t\t\t\t------------------------------------------------------------------\t\t\t\t\t\n";
		cout << "\t\t\t\t---------------------WELCOME TO Tabodi----------------------------\t\t\t\t\t\n";
		cout << "\t\t\t\t------------------------------------------------------------------\t\t\t\t\t\n";
		SetConsoleTextAttribute(h, 15);
		cout << "Would you like to DineIN or Take Away" << endl;
		cout << "1) DineIN" << endl;
		cout << "2) Take Away" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
		{
			cout << "Do you have a Reservation" << endl;
			cout << "1) Yes" << endl;
			cout << "2) No" << endl;
			SetConsoleTextAttribute(h, 9);
			cin >> Dchoice;
			if (Dchoice == 1) {
				TableNo += 2;
				cout << "Your Table Number is " << TableNo << endl;
			}
			else
			{
				TableNo++;
				cout << "Your Table Number is " << TableNo << endl;
			}
			SetConsoleTextAttribute(h, 12);
			cout << "What would you like to Order" << endl;
			SetConsoleTextAttribute(h, 15);
			while (CONTINUE) {
				SetConsoleTextAttribute(h, 15);
				cout << "------------------------MENU-------------------------\n";
				cout << "\t\t\t Items               " << endl;
				cout << "\t\t\t1)Burger             " << endl;
				cout << "\t\t\t2)Pizza              " << endl;
				cout << "\t\t\t3)Drinks             " << endl;
				cout << "\t\t\t4)Ice-Cream          " << endl;
				cout << "\t\t\t5)Fries              " << endl;
				cin >> menuchoice;
				SetConsoleTextAttribute(h, 15);
				if (menuchoice == 1) {

					cout << "\t\t\t1)ZingerBurger                      2.5$\n";
					cout << "\t\t\t2)ChickenBurger                     2.0$\n";
					cout << "\t\t\t3)BeefBurger                        3.5$\n";
					cin >> subchoice;
					cout << "\t\t\tWhat Quantity would you like?" << endl;
					cin >> quantity;
					switch (subchoice) {
					case 1:
					{
						total = total + (quantity * 2.5);
						cout << "TOTAL: " << total << "$" << endl;
						s1 = "ZingerBurger";
						q1 = q1 + quantity;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						quantity = 0;
						cin >> CONTINUE;

						break;
					}
					case 2: {

						SetConsoleTextAttribute(h, 15);
						total = total + (quantity * 2);
						cout << "TOTAL: " << total << "$" << endl;
						s2 = "ChickenBurger";
						q2 = q2 + quantity;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						quantity = 0;
						cin >> CONTINUE;

						break;
					}

					case 3: {
						total = total + (quantity * 3.5);
						SetConsoleTextAttribute(h, 15);
						cout << "TOTAL: " << total << "$" << endl;
						s3 = "BeefBurger";
						q3 = q3 + quantity;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						quantity = 0;
						cin >> CONTINUE;
						break;
					}
					}
				}
				if (menuchoice == 2) {
					SetConsoleTextAttribute(h, 15);

					cout << "\t\t\t1)ChickenFajita                      S-2.5$\tM-4$  \tL-6$\n";
					cout << "\t\t\t2)ChickenTikka                       S-2.5$\tM-3.5$\tL-6$\n";
					cout << "\t\t\t3)CheeseLover                        S-2.0$\tM-3.0$\tL-5$\n";
					cin >> subchoice;
					cout << "\t\t\tWhat Quantity would you like?" << endl;
					cin >> quantity;
					switch (subchoice) {
					case 1:
					{
						cout << "What Pizza Size would you Like" << endl;
						cout << "'S' for Small\n 'M' for Medium\n 'L' For Large\n";
						cin >> pizzasize;
						if (pizzasize == 'S') {

							total = total + (quantity * 2.5);
							cout << "TOTAL: " << total << "$" << endl;
							s4 = "ChickenFajita S";
							q4 = q4 + quantity;
							quantity = 0;
						}
						else if (pizzasize == 'M') {

							total = total + (quantity * 4.0);
							cout << "TOTAL: " << total << "$" << endl;
							s5 = "ChickenFajita M";
							q5 = q5 + quantity;
							quantity = 0;
						}
						else {

							total = total + (quantity * 6);
							cout << "TOTAL: " << total << "$" << endl;
							s6 = "ChickenFajita L";
							q6 = q6 + quantity;
							quantity = 0;
						}
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}
					case 2: {
						cout << "What Pizza Size would you Like" << endl;
						cout << "'S' for Small\n 'M' for Medium\n 'L' For Large\n";
						cin >> pizzasize;
						if (pizzasize == 'S') {

							total = total + (quantity * 2.5);
							cout << "TOTAL: " << total << "$" << endl;
							s7 = "ChickenTikka S";
							q7 = q7 + quantity;
							quantity = 0;
						}
						else if (pizzasize == 'M') {

							total = total + (quantity * 3.5);
							cout << "TOTAL: " << total << "$" << endl;
							s7 = "ChickenTikka M";
							q7 = q7 + quantity;
							quantity = 0;
						}
						else {

							total = total + (quantity * 6);
							cout << "TOTAL: " << total << "$" << endl;
							s8 = "ChickenTikka L";
							q8 = q8 + quantity;
							quantity = 0;
						}
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}
					case 3:
					{
						cout << "What Pizza Size would you Like" << endl;
						cout << "'S' for Small\n 'M' for Medium\n 'L' For Large\n";
						cin >> pizzasize;
						if (pizzasize == 'S') {

							total = total + (quantity * 2.0);
							cout << "TOTAL: " << total << "$" << endl;
							s9 = "CheeseLover S";
							q9 = q9 + quantity;
							quantity = 0;
						}
						else if (pizzasize == 'M') {


							total = total + (quantity * 3.0);
							cout << "TOTAL: " << total << "$" << endl;
							s10 = "CheeseLover M";
							q10 = q10 + quantity;
							quantity = 0;
						}
						else {

							total = total + (quantity * 5.0);
							cout << "TOTAL: " << total << "$" << endl;
							s11 = "CheeseLover L";
							q11 = q11 + quantity;
							quantity = 0;
						}
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}
					}

				}
				if (menuchoice == 3) {
					SetConsoleTextAttribute(h, 15);
					cout << "\t\t\t1)Pepsi                      1.0$\n";
					cout << "\t\t\t2)Sprite                     0.85$\n";
					cout << "\t\t\t3)Mirinda                    0.75$\n";
					cin >> subchoice;
					cout << "\t\t\tWhat Quantity would you like?" << endl;
					cin >> quantity;
					switch (subchoice) {
					case 1:
					{
						total = total + (quantity * 1.0);
						cout << "TOTAL: " << total << "$" << endl;
						s12 = "Pepsi";
						q12 = q12 + quantity;
						quantity = 0;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}
					case 2: {

						SetConsoleTextAttribute(h, 15);
						total = total + (quantity * 0.85);
						cout << "TOTAL: " << total << "$" << endl;
						s13 = "Sprite";
						q13 = q13 + quantity;
						quantity = 0;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}

					case 3: {
						SetConsoleTextAttribute(h, 15);
						total = total + (quantity * 0.75);
						cout << "TOTAL: " << total << "$" << endl;
						s14 = "Mirinda";
						q14 = q14 + quantity;
						quantity = 0;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}
					}
				}
				if (menuchoice == 4) {
					SetConsoleTextAttribute(h, 15);
					cout << "\t\t\t1)Chocolate                    1.5$\n";
					cout << "\t\t\t2)Vanilla                     1.29$\n";
					cout << "\t\t\t3)Mango                        1.1$\n";
					cin >> subchoice;
					cout << "\t\t\tWhat Quantity would you like?" << endl;
					cin >> quantity;
					switch (subchoice) {
					case 1:
					{
						total = total + (quantity * 1.5);
						cout << "TOTAL: " << total << "$" << endl;
						s15 = "Chocolate";
						q15 = q15 + quantity;
						quantity = 0;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}
					case 2: {

						SetConsoleTextAttribute(h, 15);
						total = total + (quantity * 1.29);
						cout << "TOTAL: " << total << "$" << endl;
						s16 = "Vanilla";
						q16 = q16 + quantity;
						quantity = 0;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}

					case 3: {
						SetConsoleTextAttribute(h, 15);
						total = total + (quantity * 1.1);
						cout << "TOTAL: " << total << "$" << endl;
						s17 = "Mango";
						q17 = q17 + quantity;
						quantity = 0;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}
					}
				}
				if (menuchoice == 5) {
					SetConsoleTextAttribute(h, 15);
					cout << "\t\t\t1)Plain                     1.5$\n";
					cout << "\t\t\t2)Loaded Fries              2.0$\n";
					cin >> subchoice;
					cout << "\t\t\tWhat Quantity would you like?" << endl;
					cin >> quantity;
					switch (subchoice) {
					case 1:
					{
						total = total + (quantity * 1.5);
						cout << "TOTAL: " << total << "$" << endl;
						s18 = "PlainFries";
						q18 = q18 + quantity;
						quantity = 0;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}
					case 2: {
						SetConsoleTextAttribute(h, 15);

						total = total + (quantity * 2.0);
						cout << "TOTAL: " << total << "$" << endl;
						s19 = "LoadedFries";
						q19 = q19 + quantity;
						quantity = 0;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 12);
						break;
					}


					}
				}

			}
			cout << "\n" << endl;
			OrderID++;
			cout << "Your Order Number is O" << OrderID << endl;
			cout << "Please Wait for Your Turn" << endl;
			cout << "\n\n";
			SetConsoleTextAttribute(h, 13);
			cout << "\t\t\t\t===========================================================\n";
			cout << "\t\t\t\t---------------THANKYOU FOR YOUR KIND VISIT----------------" << endl;
			SetConsoleTextAttribute(h, 10);
			cout << "\t\t\t\tOrderNo:" << "O" << OrderID << endl;
			cout << "\t\t\t\tDate:" << __DATE__ << endl;
			cout << "\t\t\t\tTime:" << __TIME__ << endl;
			SetConsoleTextAttribute(h, 11);
			cout << "\t\t\t\tItems\t\t\t\t\t\t\tQty\n";
			SetConsoleTextAttribute(h, 15);
			if (q1 != 0)
				cout << "\t\t\t\t" << s1 << "\t\t\t\t\t\t" << q1 << endl;
			if (q2 != 0)
				cout << "\t\t\t\t" << s2 << "\t\t\t\t\t\t" << q2 << endl;
			if (q3 != 0)
				cout << "\t\t\t\t" << s3 << "\t\t\t\t\t\t" << q3 << endl;
			if (q4 != 0)
				cout << "\t\t\t\t" << s4 << "\t\t\t\t\t\t" << q4 << endl;
			if (q5 != 0)
				cout << "\t\t\t\t" << s5 << "\t\t\t\t\t\t" << q5 << endl;
			if (q6 != 0)
				cout << "\t\t\t\t" << s6 << "\t\t\t\t\t\t" << q6 << endl;
			if (q7 != 0)
				cout << "\t\t\t\t" << s7 << "\t\t\t\t\t\t" << q7 << endl;
			if (q8 != 0)
				cout << "\t\t\t\t" << s8 << "\t\t\t\t\t\t" << q8 << endl;
			if (q9 != 0)
				cout << "\t\t\t\t" << s9 << "\t\t\t\t\t\t" << q9 << endl;
			if (q10 != 0)
				cout << "\t\t\t\t" << s10 << "\t\t\t\t\t\t\t" << q10 << endl;
			if (q11 != 0)
				cout << "\t\t\t\t" << s11 << "\t\t\t\t\t\t" << q11 << endl;
			if (q12 != 0)
				cout << "\t\t\t\t" << s12 << "\t\t\t\t\t\t\t" << q12 << endl;
			if (q13 != 0)
				cout << "\t\t\t\t" << s13 << "\t\t\t\t\t\t\t" << q13 << endl;
			if (q14 != 0)
				cout << "\t\t\t\t" << s14 << "\t\t\t\t\t\t\t" << q14 << endl;
			if (q15 != 0)
				cout << "\t\t\t\t" << s15 << "\t\t\t\t\t\t" << q15 << endl;
			if (q16 != 0)
				cout << "\t\t\t\t" << s16 << "\t\t\t\t\t\t\t" << q16 << endl;
			if (q17 != 0)
				cout << "\t\t\t\t" << s17 << "\t\t\t\t\t\t\t" << q17 << endl;
			if (q18 != 0)
				cout << "\t\t\t\t" << s18 << "\t\t\t\t\t\t" << q18 << endl;
			if (q19 != 0)
				cout << "\t\t\t\t" << s19 << "\t\t\t\t\t\t" << q19 << endl;
			cout << endl;
			SetConsoleTextAttribute(h, 11);
			cout << "\t\t\t\tTOTAL:" << total << "$" << endl;
			SetConsoleTextAttribute(h, 13);
			cout << "\t\t\t\t===========================================================\n";
			SetConsoleTextAttribute(h, 10);

			break;

		}
		case 2:
		{
			SetConsoleTextAttribute(h, 12);
			cout << "What would you like to Order" << endl;
			SetConsoleTextAttribute(h, 15);
			while (CONTINUE) {
				SetConsoleTextAttribute(h, 15);
				cout << "------------------------MENU-------------------------\n";
				cout << "\t\t\t Items               " << endl;
				cout << "\t\t\t1)Burger             " << endl;
				cout << "\t\t\t2)Pizza              " << endl;
				cout << "\t\t\t3)Drinks             " << endl;
				cout << "\t\t\t4)Ice-Cream          " << endl;
				cout << "\t\t\t5)Fries              " << endl;
				cin >> menuchoice;
				SetConsoleTextAttribute(h, 15);
				if (menuchoice == 1) {

					cout << "\t\t\t1)ZingerBurger                      2.5$\n";
					cout << "\t\t\t2)ChickenBurger                     2.0$\n";
					cout << "\t\t\t3)BeefBurger                        3.5$\n";
					cin >> subchoice;
					cout << "\t\t\tWhat Quantity would you like?" << endl;
					cin >> quantity;
					switch (subchoice) {
					case 1:
					{
						total = total + (quantity * 2.5);
						cout << "TOTAL: " << total << "$" << endl;
						s1 = "ZingerBurger";
						q1 = q1 + quantity;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						quantity = 0;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);

						break;
					}
					case 2: {

						SetConsoleTextAttribute(h, 15);
						total = total + (quantity * 2);
						cout << "TOTAL: " << total << "$" << endl;
						s2 = "ChickenBurger";
						q2 = q2 + quantity;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						quantity = 0;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);

						break;
					}

					case 3: {
						SetConsoleTextAttribute(h, 15);
						total = total + (quantity * 3.5);
						cout << "TOTAL: " << total << "$" << endl;
						s3 = "BeefBurger";
						q3 = q3 + quantity;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						quantity = 0;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}
					}
				}
				if (menuchoice == 2) {
					SetConsoleTextAttribute(h, 15);
					cout << "\t\t\t1)ChickenFajita                      S-2.5$\tM-4$  \tL-6$\n";
					cout << "\t\t\t2)ChickenTikka                       S-2.5$\tM-3.5$\tL-6$\n";
					cout << "\t\t\t3)CheeseLover                        S-2.0$\tM-3.0$\tL-5$\n";
					cin >> subchoice;
					cout << "\t\t\tWhat Quantity would you like?" << endl;
					cin >> quantity;
					switch (subchoice) {
					case 1:
					{
						cout << "What Pizza Size would you Like" << endl;
						cin >> pizzasize;
						if (pizzasize == 'S') {

							total = total + (quantity * 2.5);
							cout << "TOTAL: " << total << "$" << endl;
							s4 = "ChickenFajita S";
							q4 = q4 + quantity;
							quantity = 0;
						}
						else if (pizzasize == 'M') {

							total = total + (quantity * 4.0);
							cout << "TOTAL: " << total << "$" << endl;
							s5 = "ChickenFajita M";
							q5 = q5 + quantity;
							quantity = 0;
						}
						else {

							total = total + (quantity * 6);
							cout << "TOTAL: " << total << "$" << endl;
							s6 = "ChickenFajita L";
							q6 = q6 + quantity;
							quantity = 0;
						}
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}
					case 2: {
						SetConsoleTextAttribute(h, 15);
						cout << "What Pizza Size would you Like" << endl;
						cin >> pizzasize;
						if (pizzasize == 'S') {

							total = total + (quantity * 2.5);
							cout << "TOTAL: " << total << "$" << endl;
							s7 = "ChickenTikka S";
							q7 = q7 + quantity;
							quantity = 0;
						}
						else if (pizzasize == 'M') {

							total = total + (quantity * 3.5);
							cout << "TOTAL: " << total << "$" << endl;
							s7 = "ChickenTikka M";
							q7 = q7 + quantity;
							quantity = 0;
						}
						else {

							total = total + (quantity * 6);
							cout << "TOTAL: " << total << "$" << endl;
							s8 = "ChickenTikka L";
							q8 = q8 + quantity;
							quantity = 0;
						}
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}
					case 3:
					{SetConsoleTextAttribute(h, 15);
					cout << "What Pizza Size would you Like" << endl;
					cin >> pizzasize;
					if (pizzasize == 'S') {

						total = total + (quantity * 2.0);
						cout << "TOTAL: " << total << "$" << endl;
						s9 = "CheeseLover S";
						q9 = q9 + quantity;
						quantity = 0;
					}
					else if (pizzasize == 'M') {


						total = total + (quantity * 3.0);
						cout << "TOTAL: " << total << "$" << endl;
						s10 = "CheeseLover M";
						q10 = q10 + quantity;
						quantity = 0;
					}
					else {

						total = total + (quantity * 5.0);
						cout << "TOTAL: " << total << "$" << endl;
						s11 = "CheeseLover L";
						q11 = q11 + quantity;
						quantity = 0;
					}
					SetConsoleTextAttribute(h, 12);
					cout << "Do you want to order something else" << endl;
					cout << "1) Yes, I Want To" << endl;
					cout << "0)No, Thankyou" << endl;
					cin >> CONTINUE;
					SetConsoleTextAttribute(h, 15);
					break;
					}
					}

				}
				if (menuchoice == 3) {
					SetConsoleTextAttribute(h, 15);
					cout << "\t\t\t1)Pepsi                      1.0$\n";
					cout << "\t\t\t2)Sprite                     0.85$\n";
					cout << "\t\t\t3)Mirinda                    0.75$\n";
					cin >> subchoice;
					cout << "\t\t\tWhat Quantity would you like?" << endl;
					cin >> quantity;
					switch (subchoice) {
					case 1:
					{
						total = total + (quantity * 1.0);
						cout << "TOTAL: " << total << "$" << endl;
						s12 = "Pepsi";
						q12 = q12 + quantity;
						quantity = 0;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}
					case 2: {

						SetConsoleTextAttribute(h, 15);
						total = total + (quantity * 0.85);
						cout << "TOTAL: " << total << "$" << endl;
						s13 = "Sprite";
						q13 = q13 + quantity;
						quantity = 0;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}

					case 3: {
						SetConsoleTextAttribute(h, 15);
						total = total + (quantity * 0.75);
						cout << "TOTAL: " << total << "$" << endl;
						s14 = "Mirinda";
						q14 = q14 + quantity;
						quantity = 0;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}
					}
				}
				if (menuchoice == 4) {
					SetConsoleTextAttribute(h, 15);
					cout << "\t\t\t1)Chocolate                    1.5$\n";
					cout << "\t\t\t2)Vanilla                     1.29$\n";
					cout << "\t\t\t3)Mango                        1.1$\n";
					cin >> subchoice;
					cout << "\t\t\tWhat Quantity would you like?" << endl;
					cin >> quantity;
					switch (subchoice) {
					case 1:
					{
						total = total + (quantity * 1.5);
						cout << "TOTAL: " << total << "$" << endl;
						s15 = "Chocolate";
						q15 = q15 + quantity;
						quantity = 0;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}
					case 2: {

						SetConsoleTextAttribute(h, 15);
						total = total + (quantity * 1.29);
						cout << "TOTAL: " << total << "$" << endl;
						s16 = "Vanilla";
						q16 = q16 + quantity;
						quantity = 0;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}

					case 3: {
						SetConsoleTextAttribute(h, 15);
						total = total + (quantity * 1.1);
						cout << "TOTAL: " << total << "$" << endl;
						s17 = "Mango";
						q17 = q17 + quantity;
						quantity = 0;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}
					}
				}
				if (menuchoice == 5) {
					SetConsoleTextAttribute(h, 15);
					cout << "\t\t\t1)Plain                     1.5$\n";
					cout << "\t\t\t2)Loaded Fries              2.0$\n";
					cin >> subchoice;
					cout << "\t\t\tWhat Quantity would you like?" << endl;
					cin >> quantity;
					switch (subchoice) {
					case 1:
					{
						total = total + (quantity * 1.5);
						cout << "TOTAL: " << total << "$" << endl;
						s18 = "PlainFries";
						q18 = q18 + quantity;
						quantity = 0;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}
					case 2: {
						SetConsoleTextAttribute(h, 15);

						total = total + (quantity * 2.0);
						cout << "TOTAL: " << total << "$" << endl;
						s19 = "LoadedFries";
						q19 = q19 + quantity;
						quantity = 0;
						SetConsoleTextAttribute(h, 12);
						cout << "Do you want to order something else" << endl;
						cout << "1) Yes, I Want To" << endl;
						cout << "0)No, Thankyou" << endl;
						cin >> CONTINUE;
						SetConsoleTextAttribute(h, 15);
						break;
					}


					}
				}

			}
			SetConsoleTextAttribute(h, 15);
			cout << "\n" << endl;
			OrderID++;
			cout << "Your Order Number is O" << OrderID << endl;
			cout << "Please Wait for Your Turn" << endl;
			cout << "\n\n";
			SetConsoleTextAttribute(h, 13);
			cout << "\t\t\t\t===========================================================\n";
			cout << "\t\t\t\t---------------THANKYOU FOR YOUR KIND VISIT----------------" << endl;
			SetConsoleTextAttribute(h, 10);
			cout << "\t\t\t\tOrderNo:" << "O" << OrderID << endl;
			cout << "\t\t\t\tDate:" << __DATE__ << endl;
			cout << "\t\t\t\tTime:" << __TIME__ << endl;
			SetConsoleTextAttribute(h, 11);
			cout << "\t\t\t\tItems\t\t\t\t\t\t\tQty\n";
			SetConsoleTextAttribute(h, 15);
			if (q1 != 0)
				cout << "\t\t\t\t" << s1 << "\t\t\t\t\t\t" << q1 << endl;
			if (q2 != 0)
				cout << "\t\t\t\t" << s2 << "\t\t\t\t\t\t" << q2 << endl;
			if (q3 != 0)
				cout << "\t\t\t\t" << s3 << "\t\t\t\t\t\t" << q3 << endl;
			if (q4 != 0)
				cout << "\t\t\t\t" << s4 << "\t\t\t\t\t\t" << q4 << endl;
			if (q5 != 0)
				cout << "\t\t\t\t" << s5 << "\t\t\t\t\t\t" << q5 << endl;
			if (q6 != 0)
				cout << "\t\t\t\t" << s6 << "\t\t\t\t\t\t" << q6 << endl;
			if (q7 != 0)
				cout << "\t\t\t\t" << s7 << "\t\t\t\t\t\t" << q7 << endl;
			if (q8 != 0)
				cout << "\t\t\t\t" << s8 << "\t\t\t\t\t\t" << q8 << endl;
			if (q9 != 0)
				cout << "\t\t\t\t" << s9 << "\t\t\t\t\t\t" << q9 << endl;
			if (q10 != 0)
				cout << "\t\t\t\t" << s10 << "\t\t\t\t\t\t\t" << q10 << endl;
			if (q11 != 0)
				cout << "\t\t\t\t" << s11 << "\t\t\t\t\t\t" << q11 << endl;
			if (q12 != 0)
				cout << "\t\t\t\t" << s12 << "\t\t\t\t\t\t\t" << q12 << endl;
			if (q13 != 0)
				cout << "\t\t\t\t" << s13 << "\t\t\t\t\t\t\t" << q13 << endl;
			if (q14 != 0)
				cout << "\t\t\t\t" << s14 << "\t\t\t\t\t\t\t" << q14 << endl;
			if (q15 != 0)
				cout << "\t\t\t\t" << s15 << "\t\t\t\t\t\t" << q15 << endl;
			if (q16 != 0)
				cout << "\t\t\t\t" << s16 << "\t\t\t\t\t\t\t" << q16 << endl;
			if (q17 != 0)
				cout << "\t\t\t\t" << s17 << "\t\t\t\t\t\t\t\t" << q17 << endl;
			if (q18 != 0)
				cout << "\t\t\t\t" << s18 << "\t\t\t\t\t\t" << q18 << endl;
			if (q19 != 0)
				cout << "\t\t\t\t" << s19 << "\t\t\t\t\t\t" << q19 << endl;
			cout << endl;
			SetConsoleTextAttribute(h, 11);
			cout << "\t\t\t\tTOTAL:" << total << "$" << endl;
			SetConsoleTextAttribute(h, 13);
			cout << "\t\t\t\t===========================================================\n\n\n";


		}
		}
		int items = 0;
		items = q1 + q2 + q3 + q4 + q5 + q6 + q7 + q8 + q9 + q10 + q11 + q12 + q13 + q14 + q15 + q16 + q17 + q18 + q19;
		//code to write and read data to the file

		ofstream MyFile("Restuarant Management System.txt", ios::app);
		cout << "1) Place Order" << endl;
		cout << "2) Display Order" << endl;
		cout << "3) Find Order" << endl;
		cout << "0)EXIT" << endl;
		int option = 0;
		cin >> option;





		switch (option) {
		case 1: {

			MyFile << "\n" << OrderID << "\t" << __DATE__ << "\t" << __TIME__ << "\t";
			if (choice == 1) {
				MyFile << TableNo << "\t";
			}
			else
				MyFile << "\t";
			if (q1 != 0) {

				MyFile << s1 << "\t\t" << q1 << endl;
				items = items - q1;
				if (items != 0) {
					MyFile << "\t\t\t\t\t\t";
				}
			}

			if (q2 != 0)
			{
				MyFile << s2 << "\t\t" << q2 << endl;
				items = items - q2;
				if (items != 0) {
					MyFile << "\t\t\t\t\t\t";
				}
			}
			if (q3 != 0)
			{
				MyFile << s3 << "\t\t" << q3 << endl;
				items = items - q3;
				if (items != 0) {
					MyFile << "\t\t\t\t\t\t";
				}
			}
			if (q4 != 0) {
				MyFile << s4 << "\t\t" << q4 << endl;
				items = items - q4;
				if (items != 0)
					MyFile << "\t\t\t\t\t\t";
			}
			if (q5 != 0) {
				MyFile << s5 << "\t\t" << q5 << endl;
				items = items - q5;
				if (items != 0)
					MyFile << "\t\t\t\t\t\t";
			}
			if (q6 != 0) {
				MyFile << s6 << "\t\t" << q6 << endl;
				items = items - q6;
				if (items != 0)
					MyFile << "\t\t\t\t\t\t";
			}
			if (q7 != 0) {
				MyFile << s7 << "\t\t" << q7 << endl;
				items = items - q7;
				if (items != 0)
					MyFile << "\t\t\t\t\t\t";
			}
			if (q8 != 0) {
				MyFile << s8 << "\t\t" << q8 << endl;
				items = items - q8;
				if (items != 0)
					MyFile << "\t\t\t\t\t\t";
			}
			if (q9 != 0) {
				MyFile << s9 << "\t\t" << q9 << endl;
				items = items - q9;
				if (items != 0)
					MyFile << "\t\t\t\t\t\t";
			}
			if (q10 != 0) {
				MyFile << s10 << "\t\t" << q10 << endl;
				items = items - q10;
				if (items != 0)
					MyFile << "\t\t\t\t\t\t";
			}
			if (q11 != 0) {
				MyFile << s11 << "\t\t" << q11 << endl;
				items = items - q11;
				if (items != 0)
					MyFile << "\t\t\t\t\t\t";
			}
			if (q12 != 0) {
				MyFile << s12 << "\t\t" << q12 << endl;
				items = items - q12;
				if (items != 0)
					MyFile << "\t\t\t\t\t\t";
			}
			if (q13 != 0) {
				MyFile << s13 << "\t\t\t" << q13 << endl;
				items = items - q13;
				if (items != 0)
					MyFile << "\t\t\t\t\t\t";
			}
			if (q14 != 0) {
				MyFile << s14 << "\t\t\t" << q14 << endl;
				items = items - q14;
				if (items != 0)
					MyFile << "\t\t\t\t\t\t";
			}
			if (q15 != 0) {
				MyFile << s15 << "\t\t   " << q15 << endl;
				items = items - q15;
				if (items != 0)
					MyFile << "\t\t\t\t\t\t";
			}
			if (q16 != 0) {
				MyFile << s16 << "\t\t\t" << q16 << endl;
				items = items - q16;
				if (items != 0)
					MyFile << "\t\t\t\t\t\t";
			}
			if (q17 != 0) {
				MyFile << s17 << "\t\t\t" << q17 << endl;
				items = items - q17;
				if (items != 0)
					MyFile << "\t\t\t\t\t\t";
			}
			if (q18 != 0) {
				MyFile << s18 << "\t\t" << q18 << endl;
				items = items - q18;
				if (items != 0)
					MyFile << "\t\t\t\t\t\t";
			}
			if (q19 != 0) {
				MyFile << s19 << "\t\t" << q19 << endl;
				items = items - q19;
				if (items != 0)
					MyFile << "\t\t\t\t\t\t";
			}
			if (items == 0) {
				MyFile << "\t\t\t\t\t\t\t\t\t\t\tT:" << total << "$";
			}
			MyFile.close();
			break;}

		case 2: {
			//MyFile.open();
			ifstream MyFile("Restuarant Management System.txt", ios::in);
			SetConsoleTextAttribute(h, 14);
			while (!MyFile.eof())
			{
				getline(MyFile, line);
				cout << line << endl;

			}
			MyFile.close();
			break;
		}

		case 3: {
			//reading file
			ifstream MyFile;
			cout << "Enter the OrderID of the Order you want to check " << endl;
			int search;
			cin >> search;


			cout << "\nOrderID\t  DATE   \t  TIME \t  TableNo\t Items\t\t Quantity\t Total\n";
			while (!MyFile.eof()) {
				if (search == OrderID)
					MyFile >> OrderID >> TableNo;

				cout << OrderID << "\t" << TableNo;
				break;

			}
			continue;
			cout << endl;
			MyFile.close();
		}
		}

		cout << "\n\nAre there More orders to be taken" << endl;
		cout << "1)Yes" << endl;
		cout << "0)No" << endl;
		cin >> notexit;
		system("pause");
		system("cls");


	}
}