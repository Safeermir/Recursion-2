//Write a program to calculate the reverse of a given positive integer using recursion 
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int reverseof(int n){
    string s=to_string(n);// Calculate length of number to find what will be power of 10 
    int i=s.length()-1;
    if(n==0 ) return 0;
    int ans= (n%10)*pow(10,i)+reverseof(n/10); // return sum of digits but multiplied with 10 with power which is calculated according to the length.
    return ans;
}

int main(){
    int n;
    cout<<"Enter the ineger: ";
    cin>>n;
    cout<<reverseof(n);

    
}
