#include<bits/stdc++.h>
using namespace std;

struct todoList{
    int id;
    string task;

};
int ID;
void header(){
    cout<<"*******************************"<<endl;
    cout<<"            TODO LIST          "<<endl;
    cout<<"*******************************"<<endl;

}
void addTask(){
    system("cls");
    header();
    todoList newTask;
    cout<<"Enter New Task: "<<endl;
    cin.get();
    getline(cin,newTask.task);
    char save;
    cout<<"Want to save? (y/n): ";
    cin>>save;
    if(save=='y'){
        ID++;
        ofstream fout;
        fout.open("todo.txt",ios::app);
        fout<<"\n"<<ID;
        fout<<"\n"<<newTask.task;
        fout.close();
        char more;
        cout<<"Want to add more task? (y/n): ";
        cin>>more;
        if(more=='y'){
        addTask();
        }
        else{
            system("cls");
            cout<<"Task Added Successfully! "<<endl;
            return;
        }

    }
system("cls");
}
void viewTask(){
    system("cls");
    header();
    todoList view;
    ifstream fin;
    fin.open("todo.txt");
    cout<<"TASK: "<<endl;
    while(!fin.eof()){
        fin>>view.id;
        fin.ignore();
        getline(fin,view.task);
        if(view.task!=""){
        cout<<"\t"<<view.id<<" : "<<view.task<<endl;
        }
        else{
            cout<<"\t EMPTY FILE "<<endl;
        }
    }
    fin.close();
    char exit;
    cout<<"EXIT? (y/n): ";
    cin>>exit;
    if(exit != 'y'){
    viewTask();
    }
    else{
    system("cls");
    }
}

void markTask(){
    system("cls");
    header();
    int id;
    cout<<"Enter The Task Id ,You Want to Mark as Completed: ";
    cin>>id;
    string newTask="TASK COMPLETED";
    todoList todo;
    ifstream fin("todo.txt");
    while (!fin.eof())
    {
        fin>>todo.id;
        fin.ignore();
        getline(fin,todo.task);
        if(todo.id==id){
        ofstream fout;
        fout.open("todo.txt",ios::app);
        ofstream tempFile;
        tempFile.open("temp.txt");
        ifstream fin;
        fin.open("todo.txt");
        fout<<newTask;
        fout.close();
        char more;
        cout<<"Want to Mark Another task? (y/n): ";
        cin>>more;
        if(more=='y'){
        markTask();
        }
        else{
            system("cls");
            cout<<"Task Marked As Completed Successfully! "<<endl;
            return;
        }
        
        }
    }


}
int searchId(){
    system("cls");
    header();
    int id;
    cout<<"Enter Task Id You Want To Delete: ";
    cin>>id;
    todoList todo;
    ifstream fin("todo.txt");
    while (!fin.eof())
    {
        fin>>todo.id;
        fin.ignore();
        getline(fin,todo.task);
        if(todo.id==id){
        return id;
        }
    }
    return 0;
    
}
void removeTask(){
    system("cls");
    int id=searchId();
    if(id!=0){
        char del;
        cout<<"\n\t Want To Delete?(y/n): ";
        cin>>del;
        if(del=='y'){
            todoList rem;
            ofstream tempFile;
            tempFile.open("temp.txt");
            ifstream fin;
            fin.open("todo.txt");
            int index=1;
            while (!fin.eof()){
                fin>>rem.id;
                fin.ignore();
                getline(fin,rem.task);
                if(rem.id!=id){
                    tempFile<<"\n"<<index;
                    tempFile<<"\n"<<rem.task;
                    index++;
                    ID--;
                }
            }
            fin.close();
            tempFile.close();
            remove("todo.txt");
            rename("temp.txt","todo.txt");
            system("cls");
            cout<<"\n\tDELETED SUCCESSFULLY !"<<endl;
        }
    }
}

int main(){
    header();

    while(true){
    cout<<"\t  PRESS: "<<endl;
    cout<<"\t 1. Add Task "<<endl;
    cout<<"\t 2. view Task "<<endl;
    cout<<"\t 3. Mark As Complete "<<endl;
    cout<<"\t 4. remove Task "<<endl;

    int choice;
    cin>>choice;

    switch (choice )
    {
    case 1:
        addTask();
        break;
    case 2:
        viewTask();
        break;
    case 3:
        markTask();
        break;
    case 4:
        removeTask();
        break;
    
    default:
        break;
    }

    }

    return 0;
}