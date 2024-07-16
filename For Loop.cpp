#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    int sum=0;
    for(int counter=1;counter<=n;counter++){
        sum=sum+counter;
    }
    
    cout<<sum<<endl;
    
}

/*
 >> Output <<
 
 Input = 5
 Output = 15

*/