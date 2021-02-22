#include <iostream>
 
using namespace std;
 
void f(int value)
{
    int cnt = 0;
 
 
    while(value)
    {
        int curr = value % 10;
        value /= 10;
  ++cnt;
        cout << curr << "*10^" << cnt << " ";
    }
}
 
int main()
{
	int x;
	cin >> x;
	f(x);
    return 0;
}
