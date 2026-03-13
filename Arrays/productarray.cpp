#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int arr[n] = {-1,-2,5,-4};
    int product = 1;
    for(int i=0;i<n;i++){
        product = product * arr[i];
    }
    cout<<"the product is :"<<product;
}