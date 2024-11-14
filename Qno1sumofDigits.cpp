//Write a program to calculate the sum of the digits of a given positive integer using recursion 

#include <iostream>
using namespace std;
int sumOfDigits(int n){
    if(n==0) return 0; // Base case
    return (n%10)+sumOfDigits(n/10); // return karo reminder +baki reminder ka sum(by calling )

}
int main(){
    int n;
    cout<<"Enter the ineger: ";
    cin>>n;
    // without including negative numbers
    // if(n<0) cout<<"Error! Enter the postive number";
    // else{
    //      int result=sumOfDigits(n);
    //     cout<<"Sum of the digits of  "<<-n<<" Is "<<result;
        
    // }
   
    // when we include negative number also
        if(n<0) n=-1*n;
        int result=sumOfDigits(n);
        cout<<"Sum of the digits of  "<<-n<<" Is "<<result;
    
}
