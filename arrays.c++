#include <iostream>
using namespace std;
int main(){

    int arr[5];
    cout <<"enter 5 numbers: ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    
    }

    int largest = arr[0];
    int smallest = arr[0];
    
    for(int i=1; i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
        
        
        }
        if (arr[i]< smallest){
            smallest=arr[i];
        }
    }
    
        
        
    
    cout<< "Largest=" <<largest<< endl;
    cout<< "Smallest=" <<smallest<<endl;
        
    }