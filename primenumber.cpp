#include<iostream>
#include<cmath>
using namespace std;
void printPrime(int n){
    if(n<=1) return;
    int count=0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0) count++; 
    }
    printPrime(n-1);
    if(count==0) cout<<n<<" ";

}
int main ()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    printPrime(n);
    return 0;
}