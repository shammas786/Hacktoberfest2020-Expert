#include<iostream.h>
#include<conio.h>

void Bubsort(int[],int);

void main()
{
   clrscr();
   
   int ARR[20],N,ITEM;
   
   cout<<"Enter desired array size(max 20):";
   cin>>N;
   
  if(N>20)
     N=20;

  cout<<"\n Enter Array Element:\n";
  for(int i=0;i<N;i++)
    cin>>ARR[i];

  Bubsort(ARR,N);
  cout<<"The sorted array (Bubblesort)is shown below..\n";
    for(i=0;i<N;i++)
     cout<<ARR[i]<<" ";

  getch();

}

  void Bubsort(int A[],int size)
   {
     int flag=1,temp;

     for(int i=0;i<size&&flag;i++)
       {
	  flag=0;

	  for(int j=0;j<(size-1)-i;j++)
	  if(A[j]>A[j+1])
	    {
	       temp =A[j];
	       A[j]=A[j+1];
	       A[j+1]=temp;
	       flag=1;
	    }

       }
   }











