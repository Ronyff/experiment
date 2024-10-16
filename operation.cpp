#include<iostream>
using namespace std;
double add(double x, double Y){
    return x + Y;
}
double sub(double x, double Y)
{
    return x - Y;
}

int main(){
    double a,b;
    cout << "Enter two value" <<endl;
    cin >> a >> b;

   double addition =  add(a,b);
   double subtraction = sub (a,b);
   cout << addition <<"  " <<subtraction <<endl;



}