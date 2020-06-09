#include <iostream>

using namespace std;


//equation: power(a,n) = a* power(a,n-1)

int power(int a,int p){
  if (p==1){
    return a;
}
  else {
    return (a*power(a,p-1));
}
}

//equation: power(a,n) = power(a,n/2) * power(a,n/2)

int power2(int a,int p){
  if (p==1){
    return a;
  }
  if (p%2 != 0){
    return (power2(a,(p-1)/2)*power2(a,(p-1)/2)*a);
  }
  else {
    return (power2(a,p/2)*power2(a,p/2));
  }
}

int main()
{
   cout<<power(2,5)<<endl;
   cout<<power2(2,5)<<endl;
}
