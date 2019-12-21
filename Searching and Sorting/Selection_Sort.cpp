#include<iostream>
using namespace std;
int main(int argv,char **argc){

// in selection sort we take two arays finimum in one array and place it on second empty array or
// we select the minimum and swap it by index..

int a[]={5,7,9,4,2,0,1};
int n=sizeof(a)/sizeof(a[0]);
for (int i=0;i<n;i++){
int temp=0;
int min=a[i];
for (int j=i+1;j<n;j++) // ye shroo se check nhi kre ga hr baar age e kre ga 
{
if (min > a[j]){

temp=a[j]; // phele element ko pkr kr us number se swap kraya jo us se chota he.
a[j]=a[i];
a[i]=temp;
min=a[i];

}


}
}

for (int i = 0; i < n; i++)
{
    cout<<a[i];
}





}