#include<iostream>
using namespace std;
int main(int argv,char **argc){

int a[]={6,7,2,5,4,45,78,6,0,2,4,7,12,34};
int n=sizeof(a)/sizeof(a[0]);
for (int i = 1; i <n;i++)
{
    int temp=0;
   
    for (int j =i-1; j >=0; j--)
    {
if (i==j) break;
        if (a[j]>a[i]){

         temp=a[i];
        a[i]=a[j];
        a[j]=temp;
       if (i!=0) i=i-1;
        }
    }
}

for (int i = 0; i < n; i++)
 {
     cout<<a[i]<<endl;
 }
return 0;
}