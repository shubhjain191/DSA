/* Check if a number is prime or not */

#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non-Prime"<<endl;
            break;
        }
    }
    if (i==n){
    
    cout<<"Prime"<<endl;
    }
    return 0;
    
    
}

/*
 >> Output <<
 
 Input = 17
 Output = Prime
 
 Input = 25
 Output = Non-Prime
*/

