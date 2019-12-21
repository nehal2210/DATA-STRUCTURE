#include<iostream>
using namespace std;
int main(int argv,char** argc){
// array must be in ascending order
int a[]={2,3,4,5,6,8,9,10,25,56};
int u = sizeof(a)/sizeof(a[0]); // upper bound
int l=0; // lower bound
int n=0; // mid value
int x=56; //value which we want to find

bool t=false; // bool to check

while(l<u){


if (x==a[n]){
cout<<"your value is at  "<<n<< "  index";
t=true;
break;
}
// value greater than array value
else if (x>a[n])
{
    
    l=n+1;
    
}

else if (x<a[n])
{
    // value less than arraay value
    u=n-1;
}

n=(l+u)/2;
}
    

if (t==false)
{
    cout<<"value not found.";
}

}