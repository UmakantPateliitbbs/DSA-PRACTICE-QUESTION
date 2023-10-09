#include<iostream>
using namespace std;
int Unique(int arr[],int n){
       int ans=0;
    for(int i=0;i<n;i++){
         ans=ans^arr[i];   //XOR operator
    }
    return ans;
}
int main(){
    int array[7]={4,3,5,3,8,8,5};
    //int n=7;
    int first[9]={7,4,5,23,56,23,56,7,4};
    cout<< "unique value is"<< " "<<Unique(array,7) <<endl;
    cout << "unique value is"<< " "<<Unique(first,9) <<endl;
    cout<<"fine"<<endl;
    return 0;
        
    }
