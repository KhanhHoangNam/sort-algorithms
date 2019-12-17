#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//1.Tìm kiếm tuyến tính mảng cơ sở
void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
int LinearSearch(int M[], int n, int x);
int main(int argc, char** argv) { 
       int n = 10;
       int M[n];
       NhapMang(M, n);
       cout<<"Mang sau khi nhap ngau nhien la: \n";
       XuatMang(M, n);
       int x;
       cout<<"\nPlease enter a number: ";
       cin>>x;
       int result = LinearSearch(M, n, x);
       if(result == -1)
            cout<<"Không tìm thấy "<<x<<" trong mảng"; 
       else       
            cout<<"Thấy "<<x<<" tại vị trí: "<<result; 
       return 0;
}
void NhapMang(int M[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        M[i] = rand() % 100;
    }
    
}

void XuatMang(int M[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout<<M[i]<<"\t";
    }    
}

int LinearSearch(int M[], int n, int x) {
    for (int i = 0; i < n; i++)
    {
        if (M[i] == x)
        {
            return i;
        }                
    }
    return -1;
    
}