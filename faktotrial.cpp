#include<iostream>
using namespace std;

int jumlah(int a,int b)
{
    if(b==0){
        return a;
    }
    else{
        return 1+jumlah(a,b-1);
    }
}
int kurang(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return kurang(a-1,b-1);
    }
}
int bagi(int a, int b) {
    if (b == 0) {
        return 0;
    }

    if (a < b) {
        return 0;
    } else {
        return 1 + bagi(a - b, b);
    }
}
int perkalian(int a,int b){
    if (b == 0){
        return 0;
    }else{
        return a +perkalian(a,b-1);
    }
}
int perpangkatan(int a, int b) {
  if (b == 0) {
    return 1;
  }
  return a * perpangkatan(a,b-1);
}


int main(){
    cout <<jumlah(2,3)<<endl;
    cout <<kurang(2,5)<<endl;
    cout <<bagi(4,2)<<endl;
    cout <<perkalian(8,2)<<endl;
    cout <<perpangkatan(2,3)<<endl;
}
