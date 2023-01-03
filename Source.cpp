#include <iostream>
using namespace std;
int main()
{
	int v, n = 1, r = 5;
	double p=1000;
	cout << "your initial amount is 1000$ \n annual percentage is 5% \n How long is your deposit?(years) -- ";
	cin >> v; 
	while (n <= v)
	{
		p = ((p / 100) * r) + p;
		n++;
		cout << p << endl;
	}




	return 0;
}