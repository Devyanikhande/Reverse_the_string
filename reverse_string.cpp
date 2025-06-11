#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str; 
    reverse(str.begin(),str.end());
    cout<<"The reverse string is : "<<str;
    return 0;
}