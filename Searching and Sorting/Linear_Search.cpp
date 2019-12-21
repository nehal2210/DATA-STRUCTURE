#include<iostream>
using namespace std;
int main(int argc, char** argv){
//in linear search order not necessary
int a[]={4,5,6,3,6,7,89,1,4,3,7};
int n=89; // value to be found
bool t=false;
// size of return the number of bytes take by variable
//sizeof(a)/sizeof(a[0])=44/4=11-> number of elements in an array
for (int i=0; i<=sizeof(a)/sizeof(a[0]); i++)
{
 
    if (a[i]==n){
        cout<<"Your value is at index : "<<i<<endl;
    t=true;
    }
   
    
}

if (t==false){
    cout<<"value not found";
}




return 0;
}
