#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class FileHandler{
    fstream file;
    string filename;
    public:
    FileHandler(string fname){
        filename = fname;
        file.open(filename, ios::in | ios::out | ios::app);
        if (file.is_open()){
            cout<<"File '"<<filename<<"' opened successfully."<<endl;
        }else{
            cout<<"Failed to open file '"<<filename<<"'."<<endl;
        }
    }
    ~FileHandler(){
        if(file.is_open()){
            file.close();
            cout<<"File '"<<filename<<"' closed successfully."<<endl;
        }else{
            cout<<"File '"<<filename<<"' was not open."<<endl;
        }
    }

    void writeToFile(string data){
        if(file.is_open()){
            file<<data<<endl;
            cout<<"Data written to file: "<<data<<endl;
        }else{
            cout<<"File is not open, cannot write data."<<endl;
        }
    }

    void readFromFile(){
        if(file.is_open()){
            string line;
            cout<<"Reading file content:"<<endl;
            while(getline(file, line)){
                cout<<line<<endl;
            }
            file.clear();
            file.seekg(0, ios::beg);
        }else{
            cout<<"File is not open, cannot read data."<<endl;
        }
    }
};


int main(){
    FileHandler fileHandler("example.txt");
    fileHandler.writeToFile("This is my first line in this file");
    fileHandler.writeToFile("This is my second line in this file");
    fileHandler.readFromFile();
    return 0;
}