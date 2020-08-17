#include <iostream>
using namespace std;
main()
{
    int x,sum=0;
    cin >>x;
    while (x != 0)
    {
	if (x % 4 == 0 and x >= 99 and x <= 1000)
    sum = sum + x;
    cin >> x;
	}
    if (k != 0)
	cout << sum;
}
