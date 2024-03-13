#include<iostream>
using namespace std;
int main(){
    int nums[5] = {9, 5, 2, 6, 1};
    int target = 14;
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << i <<" "<< j;
                
            }
        }
    }
    }