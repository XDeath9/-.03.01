#include <iostream>
#include <cassert>

using namespace std;

void sortArray(double arr[], int n) {

    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j] > arr[j+1]) {
                double t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
}

void test() {

    double a[]={5.5,2.2,4.4,1.1};

    sortArray(a,4);

    assert(a[0]==1.1);
    assert(a[1]==2.2);
    assert(a[2]==4.4);
    assert(a[3]==5.5);

    cout<<"Тесты пройдены.\n";
}

int main() {

    test();

    int n;

    cout<<"Введите размер массива: ";
    cin>>n;

    double *arr=new double[n];

    cout<<"Введите элементы:\n";

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sortArray(arr,n);

    cout<<"Отсортированный массив:\n";

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<endl;

    delete[] arr;

    return 0;
}
