//this program will show the duplicate numbers in the array and counting the number of accurances 

#include<iostream>
using namespace std;

int  main ()
{
    int numebr_of_elements;
    cout<<"Enter the number of elements in the array:"<<endl;
    cin>> numebr_of_elements;
    int array[numebr_of_elements];
    cout<<"Enter the elemetns in sorted order one by one :"<< endl;
    for(int i=0;i<numebr_of_elements;i++)
    {
        cin>>array[i];
    }

    int lastDuplicate=0;//so that any of the repeated element can't be displayed again
    for(int i=0;i<numebr_of_elements;i++)
    {
        if(array[i]==array[i+1]&&array[i]!=lastDuplicate)
        {
            cout<< array[i] <<" is the duplicate number "<<endl;
            lastDuplicate=array[i];
        }
    }

    //Counting the number of accurances in the array
    int j;
    for(int i=0;i<numebr_of_elements-1;i++)
   {
       if(array[i]==array[i+1])
       {
           j=i+1;
           while(array[j]==array[i])//go untill the j is not differ
           {
               j++;
           }
           cout<< array[i]<<" is repeating "<< j-i<< " times"<<endl;
           i=j-1;
       }
   } 

    return 0;
}
