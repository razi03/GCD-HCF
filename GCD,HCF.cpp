#include<iostream>
using namespace std;
int main()
{
    int n1, n2;
    int ans = 0;
	cout << "Enter first number:\n ";
	cin >> n1;
	cout << "Enter second number\n";
	cin >> n2;
    for (int i = 1; i <= n2; ++i) {
        if (n1 % i == 0 && n2 % i == 0) {
            ans = i;
        }
    }

    cout << "HCF = " << ans;
}