#include<iostream>
#include <cstdlib>


using namespace std;

// in merge sort we split array half till one element left and then we sort it recusivle by merging it.

// this function will merge
void Merge(int *A,int *left,int length_left,int *right,int length_right){

int i=0,j=0,k=0;
while (i<length_left && j < length_right)
{
    if (left[i]<right[j])
    {
        A[k]=left[i];
        i++;
        k++;

    }
    else
    {
        A[k]=right[j];
        j++;
        k++;

    }
        
}

while (i< length_left)
{
    A[k]=left[i];
    i++;
    k++;
}
while (j< length_right)
{
    A[k]=right[j];
    j++;
    k++;
}


}



// this function will split.


void Merge_Sort(int *A,int length){


if (length<2) return;
int mid=length/2;
int *left;
int *right;
left = (int*)malloc(mid*sizeof(int)); 
right = (int*)malloc((length- mid)*sizeof(int));

for (int i = 0; i <mid; i++)
{
left[i]=A[i];
}
for (int i = mid; i <length; i++)
{
right[i-mid]=A[i];
}
Merge_Sort(left,mid);
Merge_Sort(right,length-mid);
Merge(A,left,mid,right,length-mid);


free(left);
free(right);

}

















int main(int argv,char **argc){



int a[]={7,4,5,9,8,2,3,1,6};
int n=sizeof(a)/sizeof(a[0]);

Merge_Sort(a,n);

for (int i = 0 ; i<n;i++) 
{
cout<<a[i]<<endl;

}








}