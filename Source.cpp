#include <iostream>
using namespace std;
int main()

{
	string fruitName;
	double gramsOfSugar;


	//fruit name and the number of grams of sugar that one cup of the fruit has
	cout << " Enter name of the fruit " << endl;
	cin >> fruitName;

	cout << " Enter the number of grams of sugar in a cup " << endl;
	cin >> gramsOfSugar;

	if (gramsOfSugar < 10) {

		cout << fruitName << " LOW SUGAR FRUIT. " << endl;
	}

	else if (gramsOfSugar >= 10 && gramsOfSugar <= 14) {
		cout << fruitName << " MEDIUM SUGAR FRUIT. " << endl;


	}
	else
		cout << fruitName << " HIGHT SUGAR FRUIT. " << endl;

	return 0;
}



/*
Enter name of the fruit
grapes
 Enter the number of grams of sugar in a cup
23.37
grapes HIGHT SUGAR FRUIT.*/
/*Enter name of the fruit
avocado
 Enter the number of grams of sugar in a cup
.99
avocado LOW SUGAR FRUIT.*/
/*
 Enter name of the fruit
strawberries
 Enter the number of grams of sugar in a cup
7
strawberries LOW SUGAR FRUIT.*/
/*
Enter name of the fruit
grapefruit
 Enter the number of grams of sugar in a cup
10.6
grapefruit MEDIUM SUGAR FRUIT..*/
/*
 Enter name of the fruit
orange
 Enter the number of grams of sugar in a cup
14
orange MEDIUM SUGAR FRUIT.
*/