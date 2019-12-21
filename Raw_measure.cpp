#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n;
	cout<<"enter dimentions of array\n";
	cin>>n;
	 int I[n];
	 int S[n];
	
int k=1;
	cout<<"enter the size of array\n";
	for (int i=0; i<n ; i++)
{
	cin>>S[i];
k=k*S[i];
	}	

cout<<"total number in aray : "<<k<<"\n";
cout<<"we initilize array by simple counting number 0-%d :"<<k<<"\n";
cout<<"enter random index\n";
for (int i=0; i<n;i++)
{
	cin>>I[i];
}
int data[k];
	
	for (int i=0;i<k;i++){
		data[i]=i;
	
	}
	
	 int sum=0;
	for (int i =0; i<n;i++){
	
	int p=1;	
		
		for (int s=i+1; s<n; s++){
		
		
			p=p*S[s];
			
		
		
		
		
		}
		
		
		
		sum=sum+I[i]*p;
				
		
	}
	
	
	cout<<"your element is : "<<data[sum];
	
	
	
	return 0;
}
