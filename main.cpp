#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

using namespace std;

//1.Bubble sort
void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
void BubbleSort(int M[], int n);
int main(int argc, char** argv) { 
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int M[n];
    NhapMang(M, n);
    cout<<"Mang sau khi nhap:\n";
    XuatMang(M,n);
    cout<<"\nMang sau khi sap xep:\n";
    BubbleSort(M, n);
    XuatMang(M,n);
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

void BubbleSort(int M[], int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (M[j] < M[j - 1])
            {
                int temp = M[j];
                M[j] = M[j - 1];
                M[j - 1] = temp;
            }
            
        }
        
    }
    
}
