#include<bits/stdc++.h>
using namespace std;

    // Task 1 Number Guessing Game

int main(){
    int userInput;
    int i=1;
    
    srand((unsigned int) time(NULL));
    int randomNum = (rand()%100) +1;

    while(i!=0){
    cout<<"Guess a Number:- "<<endl;
    cin>>userInput;

    if(userInput==randomNum){
        cout<<"You Guess a Correct Number"<<endl;
        i=0;
    }
    else if(userInput<randomNum){
    cout<<"You Guess Too Low Number , Guess a High Number "<<endl;
    }
    else if(userInput>randomNum){
    cout<<"You Guess Too High Number , Guess a Low Number "<<endl;
    }

    }


}