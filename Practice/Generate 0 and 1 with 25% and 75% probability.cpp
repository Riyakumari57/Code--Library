// Program to print 1 with 75% probability and 0
// with 25% probability
#include <iostream>
using namespace std;
int rand50()
{
	return rand() & 1;
}
bool rand75()
{
	return rand50() | rand50();
}
int main()
{
	srand(time(NULL));

	for(int i = 0; i < 50; i++)
		cout << rand75();

	return 0;
}
