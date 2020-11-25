#include<bits/stdc++.h>
using namespace std;

int power(int x, unsigned int y, unsigned int m) 
{ 
    if (y == 0) 
        return 1; 
    int p = power(x, y / 2, m) % m; 
    p = (p * p) % m; 
  
    return (y % 2 == 0) ? p : (x * p) % m; 
} 

int modInverse(int a, int m) 
{ 
    return power(a,m-2,m);
} 
  

 
int main(){
    cout << "Enter two point to calculate sum" << endl;
    int p;
    pair<int,int>p1,p2;
    cout << "Enter your first pair of point" << endl;
    cin >> p1.first >> p1.second;
    cout << "Enter your second pair of point" << endl;
    cin >> p2.first >> p2.second;
    cout << "Enter p" << endl;
    cin >> p ;
    cout << "===========================================" << endl;
    cout << "Solution" << endl;
    cout << "Point P : (" << p1.first << " , " << p1.second << ")" << endl;
    cout << "Point Q : (" << p2.first << " , " << p2.second << ")" << endl;
    if(p1==p2){
        cout << "Enter the value of a: " << endl;
        int a;
        cin >> a; 
        cout << "Lambda = (3*x_1*x_1 + a)/(2*y_1)" << endl;
        cout << "Lambda = (3*x_1*x_1 + a)*(2*y_1)__(-1)" << endl;
        int temp1 = 3*p1.first*p1.first + a;
        cout << "(3 * x_1 * x_1 + a) = " << temp1 << endl;
        cout << "(3*x_1*x_1 + a) = " << temp1%p << endl;
        temp1%=p;
        int temp2 = modInverse(2*p1.second,p);
        cout << "(2*y_1)__(-1) = "  << temp2 << endl;
        int temp3 = (temp1* temp2)%p;
        cout <<"Lambda = " << temp3 << endl;
        int lambda = temp3;
        cout << "x_3 = lambda__2 - 2*x_1 "<< endl;
        cout << "x_3 = " << (lambda*lambda - 2*p1.first + 100*p) % p << endl;
        int temp4 = (lambda*lambda - 2*p1.first + 100*p) % p;
        cout << "y_3 = Lamda*(x_1 - x_3) - y_1" << endl;
        cout << "y_3 = " << (lambda*(p1.first - temp4) - p1.second + 100*p)%p << endl;


    }
    else{
        cout << "Lambda = (y_2 - y_1)/(x_2 - x_1) mod p" << endl;
        cout << "Lambda =  (y_2 - y_1)*(x_2 - x_1)__(-1) mod p" << endl;
        cout << "y_2 - y_1 = " << (p2.second - p1.second) << endl;
        cout << "y_2 - y_1 = " << (p2.second - p1.second + 100*p)%p << endl;
        cout << "x_2 - x_1 = " << (p2.first - p1.first) << endl;
        cout << "x_2 - x_1 = " << (p2.first - p1.first+ 100*p)%p << endl;
        int temp1 = (p2.second - p1.second + 100*p)%p;
        int temp2 = (p2.first - p1.first+ 100*p)%p;
        int temp3 = modInverse(temp2,p);
        int lambda = (temp1 * temp3)%p;
        cout << "(x_2 - x_1)__(-1) = " <<  temp3<< endl;
        cout << "Lambda = " << lambda << endl;
        cout << "x_3 = lambda__2 - x_1 - x_2"<< endl;
        cout << "x_3 = " << (lambda*lambda - p1.first - p2.first + 100*p) % p << endl;
        int temp4 = (lambda*lambda - p1.first - p2.first + 100*p) % p;
        cout << "y_3 = Lamda*(x_1 - x_3) - y_1" << endl;
        cout << "y_3 = " << (lambda*(p1.first - temp4) - p1.second + 100*p)%p << endl;

    }

}