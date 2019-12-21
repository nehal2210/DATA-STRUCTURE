#include<iostream>
using namespace std;
int main(int argv,char **argc){


//  in Bubble sort we compare two consecutive number and swap it if left is not less than right.

int a[]={4,3,7,9,6};
int n=(sizeof(a)/sizeof(a[0]));
for (int i=0;i<n ;i++)
{

    
int temp=0;
for (int j=0;j<n-1;j++)

if (a[j] > a[j+1]){

    temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}

for (int i=0;i<(sizeof(a)/sizeof(a[0])) ;i++)
{cout<<a[i];}
    return 0;

}