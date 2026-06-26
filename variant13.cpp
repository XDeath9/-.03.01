#include <iostream>
#include <cassert>

using namespace std;

bool checkMatrix(int **a, int rows, int cols) {

    for(int i=0;i<rows;i++){
        bool ok=false;
        for(int j=0;j<cols;j++)
            if(a[i][j]==0)
                ok=true;
        if(!ok) return false;
    }

    for(int j=0;j<cols;j++){
        bool ok=false;
        for(int i=0;i<rows;i++)
            if(a[i][j]==0)
                ok=true;
        if(!ok) return false;
    }

    return true;
}

void test() {
    int rows=2, cols=2;

    int **a=new int*[rows];
    for(int i=0;i<rows;i++)
        a[i]=new int[cols];

    a[0][0]=0; a[0][1]=1;
    a[1][0]=2; a[1][1]=0;

    assert(checkMatrix(a,rows,cols));

    for(int i=0;i<rows;i++)
        delete[] a[i];
    delete[] a;

    cout<<"Тесты пройдены.\n";
}

int main() {

    test();

    int rows, cols;

    cout<<"Введите размеры матрицы: ";
    cin>>rows>>cols;

    int **a=new int*[rows];

    for(int i=0;i<rows;i++)
        a[i]=new int[cols];

    cout<<"Введите элементы:\n";

    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            cin>>a[i][j];

    if(checkMatrix(a,rows,cols))
        cout<<"В каждой строке и каждом столбце есть ноль.\n";
    else
        cout<<"Условие не выполнено.\n";

    for(int i=0;i<rows;i++)
        delete[] a[i];

    delete[] a;

    return 0;
}
