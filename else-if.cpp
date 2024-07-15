#include<iostream>
using namespace std;

int main() {
 int savings;
 cin>>savings;
 
 if(savings>5000) {
     cout<<"ABC\n";
 } else if (savings>2000) {
     cout<<"XYZ\n";
 } else {
     cout<<"PQR\n";
 }
    
    return 0;
}

/*
 >> Output <<

 Input = 3500
 Ouput = XYZ

 */