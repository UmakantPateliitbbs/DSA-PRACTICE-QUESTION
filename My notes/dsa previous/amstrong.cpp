#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int sum=0;
    int origionaln=n;
    while(n>0){
        int remainder=n%10;
        sum+= pow(remainder,3);
        n=n/10;
    }
    if(sum==origionaln){
        cout<<"Amstrong number"<<endl;
    }
    else{
        cout<<"not Amstrong number"<<endl;
    }
    return 0;
}
