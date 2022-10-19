#include <iostream>
using namespace std;

void isOddEven(int num){
  if(num%2==0){
    cout << num <<" is Even Number";
  }else{
    cout << num <<" is Odd Number";
  }
};

void isPrime(int num){
  for (int i = 2; i < num; i++) {
    if(num % i == 0){
      cout <<num <<" is Not Prime Number";
      return;
    };
  };
    cout <<num <<" is Prime Number";
    return;
};

void star(int t,int v){
  for(int i=0; i<t; i++){
    for(int j=0; j<v; j++){
      cout << "*";
    }
    cout <<'\n';
  }
};

void hallowStar(int t, int v){
  for(int i=0; i<t; i++){
    for(int j=0; j<v; j++){
      if(i==0 || i==t-1){
        cout <<"*";
      }else if(j==0 || j==v-1){
        cout <<"*";
      }else{
        cout <<" ";
      }
    }
    cout <<endl;
  }
};


void starSlope(int t){
  for(int i=0; i<t; i++){
    for(int j=0; j<i+1; j++){
      cout <<"*";
    }
    cout <<endl;
  }
};

int main() 
{
    isOddEven(19);
    cout <<endl;
    isPrime(17);
    cout <<endl;
    star(3,5);
    cout <<endl;
    hallowStar(5,10);
    cout <<endl;
    starSlope(10);
};