#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n){
    if(n==1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
bool isPerfectSquare(long long n){
    long long x =sqrtl(n);
    return (x*x)==n;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        //here many value will be skipped and we are sending sqrt value in function as well as function is also running in sqrt. 
        if(isPerfectSquare(x)&&isPrime(sqrtl(x)))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
/*
we cant simply count all the divisor which can cause n^2 or we also can't do nloglog solution as our n is 10^12
we have to think around how prime factorization works.
in case of 18,prime factorization is
2*3*3
(2^1)*(3^2)
the number of divisors is multiple of (power+1)
(1+1)*(2+1)=6 which is num of divisors of 18

just like this
for a prime num
7=7^1=(1+1)=2   *   7=7^1=(1+1)=2
7*7=49=7^2=(2+1)=3
only those number which are square of a prime num has 3 divisor

prime^2 has only 3 divisor
prime^3 has 4 divisors
prime^4 has 5 divisors
and so on

primeA*primeB
(1+1)*(1+1)=4
35
5*7=5^1*7*1=(1+1)*(1+1)=4
*/