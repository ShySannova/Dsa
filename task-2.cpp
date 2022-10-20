#include <iostream>
using namespace std;


//taking array input from user
void getArrayInput() 
{
  int l = 5;
  int a[l];
  
  for (int i = 0; i < l; i++) {
    cout <<"enter number : ";
    cin >> a[i];
  }
  
};

//linearSearch 
void linearSearch(){
   int l= 7;
   int array[l]= {10,2,5,3,1,7,8};
   
   int b=5;
   
   for(int i=0; i<l; i++){
     if(b==array[i]){
       cout << "found at index " << i;
       return;
     }
   }
     cout << b <<" does not exist in the given array";
};


//adding all the array index val
void addition() 
{
    int l= 5;
    int a[l] = {2,4,3,1,10};
    int sum=0;
    
    for (int i = 0; i < l; i++) {
      sum+=a[i];
    };
    
    cout <<sum;
    
}

//printing every index of array
void traverse() 
{
  int l=5;
  int array[l] = {1,3,4,6,5};
  
  for(int i=0; i<l; i++){
    cout << array[i] << '\t';
  }
}

//binary search with recursive method
void rec(int a[], int val, int low, int high){
  int mid = low+high/2;
  if(low>high){
    return;
  }
  if(val ==a[mid]){
    cout << mid;
  }
  if(val>a[mid]){
    rec(a, val, mid+1, high);
  }else{
    rec(a, val, low, mid-1 );
  }
  
};


int main(){
    getArrayInput();
    linearSearch();
    addition();
    traverse();

    int array[7]= {10,20,30,70,80,85,90};
    int val = 85;
    rec(array, val, 0, 6);
}