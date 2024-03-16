#include <iostream>
using namespace std;
int main()
{
    int n, el;

    cout << " enter the size ";
    cin >> n;
    int a[n];
    cout << " enter the element ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << " enter the element position to find index ";
    cin >> el;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == el)
        {
            cout << i;
            break;
        }
    }
}
