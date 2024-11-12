#include<iostream>
using namespace std;
class Matrix{
    public:
    Matrix(int r, int c) : rows(r), cols(c){
        data =new int*[rows];
        for(int i=0;i<rows;++i){
            data[i]=new int[cols];
        }
    }
    ~Matrix(){
        for(int i=0; i<rows; ++i){
            delete[] data[i];
        }
        delete[] data;
    }
    int getElement(int r, int c){ return data[r][c];}
    void setElement(int r, int c, int value){ data[r][c]= value;}
    private:
    int rows, cols;
    int** data;
};
int main(){
    Matrix* m=new Matrix(2,3);
    m->setElement(1,2,10);
    cout<<m-getElement(1,2);
    delete m;
    return 0;
}