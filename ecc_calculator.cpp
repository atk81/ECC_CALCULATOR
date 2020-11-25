#include<bits/stdc++.h>
using namespace std;
int point;
int valueOfY_2;
vector<pair<int,int>>all_point;
bool power_function(int a,int b,int p){
    vector<int>show;
    for(int i=0;i<b;i++){
        show.push_back(a);
    }
    while(show.size() > 1){
        int n = show.size();
        vector<int>temp;
        if(n%2){
            temp.push_back(show[n-1]);
            show.pop_back();
        }
        n = show.size();
        for(int i=1;i<n;i+=2){
            temp.push_back((show[i]*show[i-1])%p);
        }
        show.clear();
        for(auto i:temp){
            cout << i << " * ";
        } 
        cout << endl;
        show = temp;
    }
    if(show.size()==0 || show[0]==1){
        point = 1;
        return true;
    }
    else{
        point = show[0];
        return false;
    }
}

int main(){
    int a,b,p;
    cout << "Enter Value of a, b, p resp: " << endl;
    cin >> a >> b >> p;
    cout << "\033[2J\033[1;1H";
    cout << "Solution" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of p: " << p << endl;
    for(int i=0;i<p;i++){
        cout << "Checking for x= " << i << endl;
        cout << "y_2 = " << i*i*i << " + " << a*i << " + " << b << endl;
        cout << "y_2 = " << (i*i*i + a*i + b )%p<< endl;
        valueOfY_2 = i*i*i+a*i+b;
        valueOfY_2%=p;

        cout << "Check if " << valueOfY_2 << " is a quardratic residue of " << p << endl;
        cout << "pow(" << valueOfY_2 << "," << "(p-1)/2" << ")" << "mod " << p << endl;
        bool show = power_function(valueOfY_2,(p-1)/2,p);
        if(show){
            cout << "So, x = " << i << " is solution for the curve" << endl;
            cout << "Now calculate y" << endl;
            cout << "y = pow( valueofY_2 , (p+1)/4) mod p" << endl; 
            power_function(valueOfY_2,(p+1)/4,p);
            cout << "So point is (" << i << " ," << point << "), " << "( " << i << ", "<< p-point << ")" << endl;
            all_point.push_back({i,point});
            all_point.push_back({i,p-point});
        } else{
            cout << "So x = "<< i << "is not a quadractic residue of " << p << endl;
        }
        cout << endl;
        cout << "=====================================================" << endl;
        cout << endl;
    }
    
    for(auto i:all_point){
        cout << i.first << " " << i.second << endl;
    }

}