#include <iostream>
using namespace std;
bool search(int arr[],int size,int key){
   if(size==0){
       return false;
   }
   if(key==arr[0]){
       return true;
   }
   bool an=search(arr + 1, size - 1, key);
   return an;
}
int main(){
    int arr[5] = {4, 3, 2, 5, 3};
    int key = 3;
    int size = 5;
    bool ans = search(arr, size,key);
    if(ans){
       cout << " found ";

    }
    else{
       cout << " not found ";
    }
}