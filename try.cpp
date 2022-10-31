#include <iostream>
using namespace std;

int val;
char ch;
int *a;
int l;

void insertArray(){
    int size;
    int array[size];
    cout << "enter your array size: ";
    cin >> size;
    cout <<endl;
    for (int i = 0; i < size; i++)
    {   
        switch (i)
        {
        case 0:
            cout << "enter your "<<i+1<<"'st number: ";
            break;
        case 1:
            cout << "enter your "<<i+1<<"'nd number: ";
            break;
        case 2:
            cout << "enter your "<<i+1<<"'rd number: ";
            break;
        default:
            cout << "enter your "<<i+1<<"'th number: ";
            break;
        }
        cin >> array[i];
        cout <<endl;
    }
    cout << "your given array is :"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout <<array[i]<<'\t';
    }
    a=array;
    l=size;
}

void isPresent(){
    cout << "enter the value to know if its present in given array: ";
    cin >> val;
    cout <<endl;
    for (int i = 0; i < l; i++)
    {
        if(a[i]==val){
            cout<< "present at pos" << i+1;
            return;
        }
    }
    cout<< "not present in the given array"<<endl;

    
}

int main(){
    do
    {
        cout <<'\t'<< "menu"<<endl<<endl
        << "1. insert array"<<endl<<endl
        << "2. find number preset or not"<<endl<<endl;
        cout << "enter your choice: ";
        cin >> val;
        cout <<endl;
        switch (val)
        {
        case 1:
            insertArray();
            cout<<endl;
            break;
        case 2:
            isPresent();
            cout<<endl;
            break;
        default:
            cout << "invalid input try again!!"<<endl<<endl;
            break;
        }
        cout << "do u want to continue(y/n): ";
        cin >> ch;
    } while (ch=='y');
    
}