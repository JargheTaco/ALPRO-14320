#include<iostream>
using namespace std;
//judul: tugas rekursif 
//Nama : Kalisal Agusfajar G.
//nim: A11.2022.14320

int penguranganRek(int a,int b){
    if(b==0)
        return a;
    else
        return penguranganRek(a-1,b-1);
}

int perkalianRek(int a,int b){
    if(b==0)
        return 0;
    else
        return a + perkalianRek(a,b-1);
}

int pembagianRek(int a,int b){
    if(a<b)
        return 0;
    else
        return 1 + pembagianRek(a-b,b);
}

int pangkatRek(int a,int b){
    if(b==0)
        return 1;
    else
        return a * pangkatRek(a,b-1);
}

int main()
{
    cout<<penguranganRek(5,3)<<endl;
    cout<<perkalianRek(5,3)<<endl;
    cout<<pembagianRek(6,3)<<endl;
    cout<<pangkatRek(5,2)<<endl;

}
