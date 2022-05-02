/*
	DieRoll: A program to simulate rolling a die 10 times.

	I have also added the ability to roll a second die and 
	add the totals together similar to a game of Monopoly.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(nullptr));
	int dieValue;

	// Rolling one die 10 times and logging the results
	for (int i = 0; i < 10; i++)
	{
		dieValue = rand() % 6 + 1;
		cout << dieValue << endl;
	}
	// Rolling dice and adding totals
	cout << "Rolling dice and adding totals: " << endl;
	int dieVal = rand() % 6 + 1;
	int dieVal2 = rand() % 6 + 1;
	cout << dieVal << endl;
	cout << dieVal2 << endl;
	cout << "Total: " << dieVal + dieVal2 << endl;
}