#include <iostream>
using namespace std;
main()
{
    int x,k=0;
    float sum=0;
    cin >>x;
    while (x != 0)
    {
	if (x % 8 == 0)
    sum = sum + x;
    k++;
    cin >> x;
	}
    if (k != 0)
    {
	sum = sum/k;
	sum = sum * 10;
	sum = (int)sum;
	cout << (float)sum/10;
	}
	else 
	cout << "-1";
}
