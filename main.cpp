#include <iostream>

using namespace std;
//1st.Linear recursion
int factorial(int n) {
    if (n == 0)    
        return 1;    
    return n * factorial(n-1);    
}
//2nd.Tail recursion
int gcd(int m, int n) {
    int r;
    if(m < n) 
        return gcd(n, m);
    r = m % n;
    if(r == 0) 
        return n;
    else 
        return (gcd(n, r));
}
//3rd.Binary Recursion
int fib(int n) {
    if(n <= 2)
        return 1;
    return fib(n-1) + fib(n-2);     
}
//4th.Exponential Recursion
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++)    
        cout<<arr[i]<<"\t";
    cout<<endl;
}

void print_permutations(int arr[], int n, int i) {
    int j, swap;
    print_array(arr, n);
    for(j = i + 1; j < n; j++) {
        if(arr[i] > arr[j]) {
            swap = arr[i];
            arr[i] = arr[j];
            arr[j] = swap;
        }
        print_permutations(arr, n, i+1);
    }
}
//5th.Nested Recursion
int ackerman(int m, int n) {
    if(m == 0) {
        return n+1;
    } else if (n == 0)
    {
        return ackerman(m-1,1);
    } else
    {
        return ackerman(m-1, ackerman(m, n-1));
    }        
}
//6th.Mutual Recursion
bool isEven(int n);
bool isOdd(int n);
bool isEven(int n) {
    if(n == 0) {
        return true;
    } else
    {
        return isOdd(n-1);
    }    
}
bool isOdd(int n) {
    return !isEven(n);
}
//7.Chuyển cơ số 10 -> 2
void H10ToH2(int n) {
    if(n > 0) {
        int sd = n % 2;
        n = n / 2;
        H10ToH2(n);
        cout<<sd;
    }
}
//8.Tổ hợp chập k của n 
int choose(int n, int k) {
    if(k == 0 || n == k) {
        return 1;
    }
    return choose(n - 1, k) + choose(n - 1, k - 1);
}
//9.Tháp Hà Nội
void move(int n, char A, char B, char C) {
    if(n == 1) 
        cout<<A<<"=>"<<C<<endl;
    else
    {
        move(n - 1, A, C, B);
        cout<<A<<"=>"<<C<<endl;
        move(n - 1, B, A, C);
    }
            
}
// 10.Calculate sum = 1+2+3+4+ ... +n
int sum(int n) {
    if(n == 1 )
        return 1;
    return sum(n - 1) + n;        
}   

int main(int argc, char** argv) { 
    //1st.Linear recursion
    // int n;
    // cout <<"Enter n : ";
    // cin >> n;
    // int result = factorial(n);
    // cout <<n<<"!="<<result;
    // return 0;

    //2nd.Tail recursion
    // int m = 25, n = 5;
    // int m = 5, n = 25;
    // int m = 7, n = 3;
    // int result = gcd(n, m);
    // cout << result;
    // return 0;


    //3rd.Binary Recursion
    // int n = 7;
    // int result = fib(n);
    // cout<<result;
    // return 0;


    //4th.Exponential Recursion
    // int M[3];
    // M[0] = 10;
    // M[1] = 2;
    // M[2] = 5;
    // print_array(M, 3);
    // cout<<"-----------------\n";
    // print_permutations(M, 3, 0);
    // return 0;

    //5th.Nested Recursion
    // cout<<ackerman(2,1);
    // return 0;

    //6th.Mutual Recursion
    // int number = 9;
    // bool result = isEven(number);
    // if (result == true)
    // {
    //     cout<<number<<" là số chẵn";
    // } else
    // {
    //     cout<<number<<" là số lẻ";
    // }        
    // return 0;

    //7.Chuyển cơ số 10 -> 2
    // int n = 13;
    // H10ToH2(n);
    // return 0;

    //8.Tổ hợp chập k của n 
    // int n = 5;
    // int k = 3;
    // int result = choose(n, k);
    // cout<<result;
    // return 0;

    //9.Tháp Hà Nội
    // int n = 3;
    // move(n, 'A','B', 'C');                                        
    // return 0;

    // 10.Calculate sum = 1+2+3+4+ ... +n
    int n = 4;
    cout<<sum(n);
    return 0;
}