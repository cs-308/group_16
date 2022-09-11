
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; 
}
int gcdR(int a, int b)
{
	
	if (a == 0)
	return b;
	if (b == 0)
	return a;

	
	if (a == b)
		return a;


	if (a > b)
		return gcdR(a-b, b);
	return gcdR(a, b-a);
}

 
int main()
{
    int a,b;
    cin>>a>>b;
    cout << "GCD of " << a << " and " << b << " is "
         << gcd(a, b)<<gcdR(a, b);
    return 0;
}