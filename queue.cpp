#include <iostream>
using namespace std;
#define size 5
// int size; //why cant we do this?

int array[size];
int front = -1;
int rear = -1;

void enqueue(int num){
    if(rear==size-1){
        cout << "overflow\n";
    }
    else if(front==-1 && rear==-1){
        front++;
    }
    rear++;
    array[rear]=num;
}

void traverse(){
     if(front==-1 && rear==-1)    
    {
        cout<<"UNDERFLOW!\n";
    }
    else
    {
        for(int i=front;i<=rear;i++) 
        {
            cout<<array[i]<<"\t";
        }
        cout<<endl;
    }
}


int main(){
   int ch;
   int val;

   cout <<"\t menu for array queue"<<endl<<endl;
   cout <<"\n 1. Enqueue \n 2. Dequeue \n 3. Traverse \n 4. Exit"<<endl<<endl;

   while(1){
        cout <<"Enter your choice: ";
        cin>> ch;

        switch(ch){
            case 1: 
                cout << "Enter the value to be inserted: ";
                cin >> val;
                enqueue(val);
                break;
            case 3:
                cout<< "showing array queue\n";
                traverse();
                break;
            case 4:
                exit(0);
            default:
                cout << "\n error!!plz enter a valid choice\n\n";
        }
   }
   return 0;
}