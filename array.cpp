#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a[5] = {4, 1, 2, 5, 6};

    int n = 5;

    for (int i = 1; i < n; i++)
    {
        int c = a[i];
        int p = i - 1;
        
            while (p >= 0 && a[p] > c)
            {
                a[p+1] = a[p];
                p--;
            }
            a[p+1] = c;

        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        
    
    
}
