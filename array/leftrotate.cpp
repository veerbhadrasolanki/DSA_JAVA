#include<bits/stdc++.h>
using namespace std;  
       
int main()  
{     
    int arr[] = {11, 22, 33, 44, 55}; //Initialization array   
    int len = sizeof(arr)/sizeof(arr[0]);  //Calculate length of array arr 
            
    cout<<"Array Before Left Rotation: \n"; //Displays Array  
    for (int i = 0; i < len; i++) {   
        cout<<arr[i]<<"\t";   
    }    
          
    int j, temp;  
     
    temp = arr[0]; //Stores the first element of the array into temporary space   
          
    for(j = 0; j < len-1; j++){  
      arr[j] = arr[j+1];   //Shift element of array by one  
    }  
    
    arr[j] = temp;  //Now Set temporary element of array to the end  
          
    cout<<"\n";  
           
    cout<<"Array After Left Rotation: \n";  //Displays Resulting Array 
    for(int i = 0; i < len; i++){  
        cout<<arr[i]<<"\t";  
    }  
	return 0;  
}  
