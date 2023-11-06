#include<bits/stdc++.h>
using namespace std;

void header(){
    cout<<"\t********************************"<<endl;
    cout<<"\t\tTIC-TAC TOE GAME"<<endl;
    cout<<"\t********************************"<<endl;
}
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void boardDisplay(){
    system("cls");
    header();

    cout<<"\t PLAYER 1= 'X' \t PLAYER 2='O'"<<endl;
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[0][0]<<"  | "<<board[0][1]<<"   | "<<board[0][2]<<"   \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[1][0]<<"  | "<<board[1][1]<<"   | "<<board[1][2]<<"   \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[2][0]<<"  | "<<board[2][1]<<"   | "<<board[2][2]<<"   \n";
    cout<<"\t\t     |     |     \n";

}
bool checkGame(){
    for(int i=0;i<3;i++){
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]){
            if(board[i][0]=='X')
            cout<<"PLAYER 1 WINS!";
            else
            cout<<"PLAYER 2 WINS!";
            return false;
        }
    }
    for(int i=0;i<3;i++){
        if(board[i][0]==board[i+1][1]&&board[i+1][1]==board[i+2][2]){
            if(board[i][0]=='X')
            cout<<"PLAYER 1 WINS!";
            else
            cout<<"PLAYER 2 WINS!";
            return false;
        }
    }
    for(int j=0;j<3;j++){
        if(board[0][j+2]==board[1][j+1]&&board[1][j+1]==board[2][j]){
            if(board[0][j]=='X')
            cout<<"PLAYER 1 WINS!";
            else
            cout<<"PLAYER 2 WINS!";
            return false;
        }
    }

    for(int j=0;j<3;j++){
        if(board[0][j]==board[1][j]&&board[1][j]==board[2][j]){
            if(board[0][j]=='X'){
            cout<<"PLAYER 1 WINS!";
            }
            else{
            cout<<"PLAYER 2 WINS!";
            }
            return false;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]!='X'&&board[i][j]!='O'){
                return true;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]=='X'|| board[i][j]=='O'){
                cout<<"GAME DRAW!";
                return false;
            }
        }
    }
}




int main(){
    boardDisplay();
    int choice;
    int t=1;
    

    while(checkGame()){
        if(t%2!=0){
        cout<<"\t Player 1 TURN[X]: "<<endl;
    cout<<"\t Press number between 1 to 9: ";
    cin>>choice;
        }
        else{
                cout<<"\t Player 2 TURN[O]: "<<endl;
    cout<<"\t Press number between 1 to 9: ";
    cin>>choice;
        }
    switch (choice)
    {
    case 1:
    if(t%2!=0 && board[0][0]!='X' && board[0][0]!='O'){
        board[0][0]='X';
    }
    else if( board[0][0]!='X' && board[0][0]!='O'){
        board[0][0]='O';
    }
        boardDisplay();
        break;
    case 2:
        if(t%2!=0&& board[0][1]!='X' && board[0][1]!='O'){
        board[0][1]='X';
    }
    else if( board[0][1]!='X' && board[0][1]!='O'){
        board[0][1]='O';
    }
        boardDisplay();
        break;
    case 3:    if(t%2!=0&& board[0][2]!='X' && board[0][2]!='O'){
        board[0][2]='X';
    }
    else if( board[0][2]!='X' && board[0][2]!='O'){
        board[0][2]='O';
    }
        boardDisplay();
        break;
    case 4:    if(t%2!=0&& board[1][0]!='X' && board[1][0]!='O'){
        board[1][0]='X';
    }
    else if( board[1][0]!='X' && board[1][0]!='O'){
        board[1][0]='O';
    }
        boardDisplay();
        break;
    case 5:    if(t%2!=0&& board[1][1]!='X' && board[1][1]!='O'){
        board[1][1]='X';
    }
    else if( board[1][1]!='X' && board[1][1]!='O'){
        board[1][1]='O';
    }
        boardDisplay();
        break;
    case 6:    if(t%2!=0&& board[1][2]!='X' && board[1][2]!='O'){
        board[1][2]='X';
    }
    else if( board[1][2]!='X' && board[1][2]!='O'){
        board[1][2]='O';
    }
        boardDisplay();
        break;
    case 7:    if(t%2!=0&& board[2][0]!='X' && board[2][0]!='O'){
        board[2][0]='X';
    }
    else if( board[2][0]!='X' && board[2][0]!='O'){
        board[2][0]='O';
    } boardDisplay();
        
        break;
    case 8:    if(t%2!=0&& board[2][1]!='X' && board[2][1]!='O'){
        board[2][1]='X';
    }
    else if( board[2][1]!='X' && board[2][1]!='O'){
        board[2][1]='O';
    }
        boardDisplay();
        break;
    case 9:    if(t%2!=0&& board[2][2]!='X' && board[2][2]!='O'){
        board[2][2]='X';
    }
    else if( board[2][2]!='X' && board[2][2]!='O'){
        board[2][2]='O';
    }
        boardDisplay();
        break;

    default:
    cout<<"INVALID CHOICE";
        break;
    }
    t++;
    }


}