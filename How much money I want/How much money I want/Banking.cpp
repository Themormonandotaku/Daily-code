#include <iostream>
using namespace std;
int main() {
	int money;
	int charge;
	int total;
	cout << "How much money do you want to pull out of your account?" << endl;
	cin >> charge;
	money = 1000.00;
	total = money - charge;
	cout << "Your total is" << total << endl;
}