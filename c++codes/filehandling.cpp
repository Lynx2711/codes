#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream file("test1.txt",ios::out);

    if(file){
        file<<"testing with line 1"<<endl;
        file.close();
    }
    else{
        cout<<"Error in opening file"<<endl;
        return -1;
    }
    //read
    string line;
    file.open("test.txt",ios::in);
    if(file){
        while(!file.eof()){
            getline(file,line);
            cout<<"Read: "<<line<<endl;
        }
    }
    else{
        cout<<"Error in opening file"<<endl;
        return -1;
    }

    //append
    file.open(test1.txt,ios::app){
        if(file){
            file<<"Testing with line 2"<<endl;
            file.close();
        }
        else{
            cout<<"Error in appending line"<<endl;
            return -1;
        }
    }
}