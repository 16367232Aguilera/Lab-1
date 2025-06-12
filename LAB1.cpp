//Name: Michelle Aguilera
//Program 2 - Distance
//Generate 4 random values between -10 and 10 for x1, y1, x2, and y2. Calculate the distance of each point to the origin. Print each point, its distance to the origin and which point is closer to the origin. It will loop until the user decides to quit

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;
int main() {
	//Declaring variables
	int x1, y1, x2, y2;
	char again = 'Y';
	while (again == 'Y' || again == 'y') {
		//Allow the user to decide the 4 values or let the program generate them
		cout << "Would you like to enter the 4 values or would you like the program to generate them for you?" << endl;
		cout << "Type 1 if you want to choose. Type 2 if you would like to let the program choose: ";
		int choice;
		cin >> choice; 
		if (choice == 1) {
			cout << "Enter 4 integers between -10 and 10: ";
			cin >> x1 >> y1 >> x2 >> y2;
			//Checking to see if the values are within the range
			if ((x1 > 10 || x1 < -10) || (y1 > 10 || y2 < -10) || (x2 > 10 || x2 < -10) || (y2 > 10 || y2 < -10)) {
				cout << "Invalid input. Values must be between -10 and 10.";
				break;

			}
		}
		else if (choice == 2) {
			//Letting the program decide the 4 random variables
			srand(static_cast<unsigned int>(time(0)));
			x1 = rand() % 21 - 10;
			y1 = rand() % 21 - 10;
			x2 = rand() % 21 - 10;
			y2 = rand() % 21 - 10;
			//Display the generated values
			cout << "Generated Values: " << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
		}
		//Calculate the distance of each point to the origin
		//Distance formula: sqrt((x2 - x1)^2 + (y2-y1)^2)
		double distance1 = sqrt(x1 * x1 + y1 * y1);
		double distance2 = sqrt(x2 * x2 + y2 * y2);
		cout << "The distance of point 1 to the origin is: " << distance1 << endl;
		cout << "The distance of point 2 to the origin is: " << distance2 << endl;

		//Ask if the user wants to run the program again
		cout << "Would you like to run the program again? (Y/N): ";
		cin >> again;
		 
	}

}
