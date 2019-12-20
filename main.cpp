#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

using namespace std;

//1.Tìm kiếm tuyến tính mảng cơ sở
// void NhapMang(int M[], int n);
// void XuatMang(int M[], int n);
// int LinearSearch(int M[], int n, int x);

//2.Tìm kiếm tuyến tính trên mảng cấu trúc
// struct Student
// {
//     char code[10];
//     char name[150];
//     bool gender;
// };
// void EnterStudentList(Student studentLst[], int size);
// void ExportStudentList(Student studentLst[], int size);

//3.Tìm kiếm nhị phân trên mảng cơ sở
// void NhapMang(int M[], int n);
// void XuatMang(int M[], int n);
// int BinarySearch(int M[], int n, int x);
// int BinarySearchRecursion(int M[], int x,  int left, int right);

//4.Tìm kiếm nhị phân mảng cấu trúc
struct Product
{
    int code;
    char name[150];
    float price;
};

void EnterProductList(Product productList[], int n);
void ExportProductList(Product productList[], int n);


int main(int argc, char** argv) { 
       //1.Tìm kiếm tuyến tính mảng cơ sở
    //    int n = 10;
    //    int M[n];
    //    NhapMang(M, n);
    //    cout<<"Mang sau khi nhap ngau nhien la: \n";
    //    XuatMang(M, n);
    //    int x;
    //    cout<<"\nPlease enter a number: ";
    //    cin>>x;
    //    int result = LinearSearch(M, n, x);
    //    if(result == -1)
    //         cout<<"Không tìm thấy "<<x<<" trong mảng"; 
    //    else       
    //         cout<<"Thấy "<<x<<" tại vị trí: "<<result; 
    //    return 0;

        //2.Tìm kiếm tuyến tính trên mảng cấu trúc
        // int size = 3;
        // Student studentLst[size];
        // EnterStudentList(studentLst, size);
        // cout<<"List students after entering:\n";
        // ExportStudentList(studentLst, size);
        // return 0;

    //3.Tìm kiếm nhị phân trên mảng cơ sở   
    // int n = 5;
    // int M[n];
    // NhapMang(M, n);
    // cout<<"Mang sau khi nhap:\n";
    // XuatMang(M, n);
    // cout<<"\nNhap so muon tim:";
    // int x;
    // cin>>x;
    // // int result = BinarySearch(M, n, x);
    // int result = BinarySearchRecursion(M, x, 0, n - 1);
    // if(result == -1) {
    //     cout<<"Khong tim thay "<<x;
    // } else        
    //     cout<<"Thay "<< x << " tai vi tri " << result;       
    // return 0;

    //4.Tìm kiếm nhị phân mảng cấu trúc
    int n;
    cout<<"Nhập số sản phẩm: ";
    cin>>n;
    Product productList[n];
    EnterProductList(productList, n);
    cout<<"Sản phẩm sau khi nhập:\n";
    ExportProductList(productList, n);
    return 0;
}
//1.Tìm kiếm tuyến tính mảng cơ sở
// void NhapMang(int M[], int n) {
//     srand(time(NULL));
//     for (int i = 0; i < n; i++)
//     {
//         M[i] = rand() % 100;
//     }    
// }

// void XuatMang(int M[], int n) {
//     for (int i = 0; i < n; i++)
//     {
//         cout<<M[i]<<"\t";
//     }    
// }

// int LinearSearch(int M[], int n, int x) {
//     for (int i = 0; i < n; i++)
//     {
//         if (M[i] == x)
//         {
//             return i;
//         }                
//     }
//     return -1;    
// }

//2.Tìm kiếm tuyến tính trên mảng cấu trúc
// void EnterStudentList(Student studentLst[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<<"Enter code: ";
//         fgets(studentLst[i].code, sizeof i, stdin);

//         cout<<"Enter name: ";
//         fgets(studentLst[i].name, sizeof i, stdin);

//         cout<<"Enter gender(m/f): ";
//         char gd[2];
//         fgets(gd, sizeof i, stdin);
//         if(strcmp(gd, "m") == 0)
//             studentLst[i].gender = false;
//         else        
//             studentLst[i].gender = true;                            
//     }        
// }

// void ExportStudentList(Student studentLst[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<<studentLst[i].code<<"\t"<<studentLst[i].name<<"\t"<<studentLst[i].gender<<"\n";
//     }    
// }

//3.Tìm kiếm nhị phân trên mảng cơ sở
// void NhapMang(int M[], int n) {
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"M["<<i<<"]=";
//         cin>>M[i];
//     }    
// }

// void XuatMang(int M[], int n) {
//     for (int i = 0; i < n; i++)
//     {
//         cout<<M[i]<<"\t";
//     }
    
// }

// int BinarySearch(int M[], int n, int x) {
//     int left = 0;
//     int right = n - 1;
//     int mid;
//     do
//     {
//         mid = (left + right) / 2;
//         if (M[mid] == x)
//         {
//             return mid;
//         }
//         else if (M[mid] > x)
//         {
//             right = mid - 1;
//         } else
//         {
//             left = mid + 1;
//         }
                        
//     } while (left <= right);     

//     return -1;   
// }

// int BinarySearchRecursion(int M[], int x, int left, int right) {
//     if(left > right)
//         return -1;
//     int mid = (left + right) / 2; 
//     if(M[mid] == x)       
//         return mid;
//     if (M[mid] > x)
//         return BinarySearchRecursion(M, x, left, mid - 1);
//     return BinarySearchRecursion(M, x, mid + 1, right);                        
// }

//4.Tìm kiếm nhị phân mảng cấu trúc
void EnterProductList(Product productList[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhập sản phẩm thứ "<<i<<endl;
        cout<<"Code: ";
        cin>>productList[i].code;
        cin.ignore();
        cout<<"Name: ";
        fgets(productList[i].name, i, stdin);
        cin.ignore();
        cout<<"Price: ";
        cin>>productList[i].price;
    }
    
}
void ExportProductList(Product productList[], int n) {
    for (int i = 0; i < n; i++)
    {
        Product product = productList[i];
        cout<<product.code<<"\t"<<product.name<<"\t"<<product.price<<endl;
    }
    
}