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
        cout << cnt << "*10^" << curr << " ";
    }
}
 
int main()
{
	int x;
	cout << "Write a digit" << endl;
	cin >> x;
	f(x);
    return 0;
}
