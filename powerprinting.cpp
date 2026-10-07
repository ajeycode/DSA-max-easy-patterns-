#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:- ";
    cin>>n;
    int pow;
    cout<<"Enter the power :-";
    cin>> pow; 
    for (int i=1; i<pow; i++){
        cout<<n*pow<<" "<<endl;
    }


    return 0;
}