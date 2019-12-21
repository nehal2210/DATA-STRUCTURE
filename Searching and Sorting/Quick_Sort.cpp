#include<iostream>
using namespace std;


void swap(int *l,int *r)
{

    int temp=*r;
    r=l;
    *l=temp;
}



int Partion(int l,int h,int *A)
{

    int pivot=A[l];
    int i=l;
    int j=h;
    while (i<j)
    {


        do{
            i++;
        }while (A[i]<=pivot); 

        do{
            j--;
        }while (A[j]>pivot);

        if (i<j)
        {
        swap(A[i],A[j]);
        }
    }
    swap(A[l],A[j]);
return j;

}

void Quick_Sort(int l,int h,int *A)
{

    if(l<h)
    {
        int j=Partion(l,h,A);
        Quick_Sort(l,j,A);
        Quick_Sort(j+1,h,A);

    }



}















int main(int argv,char **argc){
    int a[]={10,16,8,12,15,6,3,9,5,17};

    int l=0;
    int h=sizeof(a)/sizeof(a[0]);

    Quick_Sort(l,h-1,a);

    for (int i = 0; i < h; i++)
    {

    cout<<a[i]<<endl;
    }

}