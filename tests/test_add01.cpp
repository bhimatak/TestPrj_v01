#include <iostream>
#include "simpleCalc.h"

using namespace std;


int main()
{
	cout << "Running tests add01....." << endl;


	if (add(2, 3) != 5)
	{
		cerr << "[FAIL] add(2,3) != 5 \n";
		return 1;
	}
	/*if (add(2, -3) != -1)
	{
		cerr << "[FAIL] add(2,3) != 5 \n";
		return 1;
	}*/
	cout << "Finished tests add01....." << endl;

	return 0;
}