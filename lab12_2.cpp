#include<iostream>
using namespace std;

int gcd(int x,int y);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int x,int y){
    if (x%y!=0) {gcd(y,x%y);}
    else return y;
}

//z = y%x
//while (gcd(x,y) = gcd(x, y%x) = gcd(x , z)
//(gcd(25,15) = gcd(15, 25%15) = gcd(15, 10)