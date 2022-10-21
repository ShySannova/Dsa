#include <iostream>
using namespace std;

void bs(){
    int l=8;
    int a[l]= {7,8,3,6,5,9,10,1};

    for (int i = 0; i < l; i++){
        cout<< a[i]<<'\t';
    }

    for (int i = 0; i < l; i++) {

        for(int j=0; j<l-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    cout<<endl;
    
    for (int i = 0; i < l; i++) {
        cout<< a[i]<<'\t';
    }
}

void ins(){
    int l= 8;
    int a[l]= {7,8,6,5,9,2,10,1};
    
    for (int i = 0; i < l; i++) {
        cout<< a[i]<< '\t';
        int key = a[i];
        int j = i-1;

        while(j>=0 && key < a[j]){
            a[j+1]= a[j];
            j--;
        }
        a[j+1]=key;
    }
    cout<<endl;

    for (int i = 0; i < l; i++) {
        cout << a[i]<<'\t';
    }
}

void ss(){
    int l= 9;
    int a[l]= {7,8,3,6,5,9,10,4,90};
    
    for (int i = 0; i < l; i++) {
        cout<< a[i]<<'\t';
    }
    for (int i = 0; i < l; i++) {
        
        for(int j = 0; j < l; j++){
            if(a[i]<a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    cout<<endl;

    for (int i = 0; i < l; i++) {
        cout<< a[i]<<'\t';
    }
}

int main() 
{
    cout<<"bubble sort"<<endl;
    bs();
    cout<<endl<<"insertion sort"<<endl;
    ins();
    cout<<endl<<"selection sort"<<endl;
    ss();
}