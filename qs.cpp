#include <iostream>
using namespace std;



int partition(int a[], int l, int r){
  int pivot = a[r];
  int i=l-1;
   
  for (int j = l; j < r-1; j++) {
    if(a[j]<pivot){
      i++;
      swap(a[i],a[j]);
    }
  }
   
  i++;
  swap(a[i],a[pivot]);
  
  
  // cout << endl<<i;
  return i;
  
  
  
}

void qs(int a[],int l, int r){

  if(l<=r){
    int p = partition(a, l, r);
    qs(a, l, p-1);
    qs(a, p+1, r);
  }

}

int main() 
{
  int size = 12;
  int a[size]= {13,19,9,5,12,8,7,4,21,2,6,11};
  int left = 0;
  int right = size-1;
  
   for (int i = 0; i < size; i++) {
     cout<< a[i]<<'\t';
   }
   
  qs(a, left, right);
 
  cout<<endl;
  for (int i = 0; i < size; i++) {
    cout<< a[i]<<'\t';
  }
}