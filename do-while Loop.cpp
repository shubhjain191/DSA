#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    do{
        cout<<n<<endl;
        cin>>n;
    } while(n>0);
    
    return 0;
    
    
}

/*
 >> Output <<
 
 Input = 3
 Output = 3
 
 Input = -5
 Terminated
*/