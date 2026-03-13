#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[2]={1,1};
    int first = INT_MIN , second = INT_MIN;
    for(int i=0;i<2;i++){
        if(arr[i]==first || arr[i]== second) continue;
        if(first < arr[i]){
            second = first;
            first = arr[i];
        }
        else if(second < arr[i]){
            second = arr[i];
        }
    }
    cout<<"the largest number is :"<<first<<endl;
    if(second == INT_MIN){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"the second largest element is :"<<second;
    }
}

