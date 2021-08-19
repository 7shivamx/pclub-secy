#include <bits/stdc++.h>
using namespace std;

int main() {
    
  srand((unsigned) time(0));
  int n , m , x , y ;
  char z ;

  n = (rand() % 50) + 1 ;
  m = (rand() % 50) + 1 ;
  x = (rand() % 50) + 1 ;
  y = (rand() % 50) + 1 ;
  
  cout << n <<" "<< m <<" "<< x <<" "<< y << endl ;
  
  for (int i = 0; i < n; i++) 
  {
      for (int j = 0; j < m; j++)
      {
           z = (rand() % 2) + 65 ; 
           cout << z ;  
      }
           cout<<endl;
  }
  
}
