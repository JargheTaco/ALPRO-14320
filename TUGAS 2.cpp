//judul  : TUGAS 2 Kalisal AgusFajar G.
//NIM : A11.2022.14320

#include <iostream>
using namespace std;

//kamus

    int MaxArray(int arr[],int p);
    int MinArray(int arr[],int p);
    bool is_Even (int a);
    bool is_Odd (int a);
    bool is_Factor(int a,int b);
    int sum_even (int arr[],int p);
    int sum_odd (int arr[],int p);

int main()
{

    int a,b;
    cout << " masukkan bilangan 1 : ";
    cin >> a;
    cout << " masukkan bilangan 2 : ";
    cin >> b;
    cout << endl;

    cout << " Bilangan terbesarnya adalah : " << max(a,b) << endl;
    cout << endl;
    cout << " Bilangan terkecilnya adalah : " << min(a,b) << endl;
    cout << endl;

    int i;
    cout<<"masukan jumlah array"<<endl;
    cin>>i;
    int arr [i];
    cout<<"masukan bilangan array"<<endl;
    for(int c = 0 ; c < i ;c++)
    {
        cin>> arr[c];
    }
    cout<<endl;

    cout << "Bilangan terbesar dalam array tersebut adalah : " << MaxArray( arr , i ) << endl;
    cout << "Bilangan terbesar dalam array tersebut adalah : " << MinArray( arr , i ) << endl;
    cout << "Jumlah bilangan genap saja pada array : " << sum_even( arr , i ) << endl;
    cout << "Jumlah bilangan ganjil saja pada array : " << sum_odd( arr , i ) << endl;

    cout<<endl;

    cout<<" Ganjil Atau Genap "<<endl;

    int angka;
    cout << " masukkan bilangan genap / ganjil : " ;
    cin >> angka;
    cout << endl;
    cout << " 1 = Benar " << endl;
    cout << " 0 = Salah " << endl;
    cout << endl;
    cout << "Nilai Genap : " << is_Even( angka ) << endl;
    cout << "Nilai Ganjil : " <<  is_Odd( angka ) << endl;
    cout << endl;

    cout<<" FAKTOR "<<endl;
    cout<<" 1 = Benar "<<endl;
    cout<<" 0 = Salah "<<endl;
    cout << " apakah " << b << " adalah faktor dari " << a << " = " << is_Factor(a,b) << endl;

    return 0;
}

int MaxArray(int arr[],int p)
{
    int tempat=arr[0];
    for(int i=0;i<p;i++)
    {
        if(arr[i]>tempat)
        {
            tempat=arr[i];
        }
    }
    return tempat;
}

int MinArray(int arr[],int p)
{
    int tempat=arr[0];
    for(int i=0;i<p;i++)
    {
        if (arr[i]<tempat)
        {
            tempat=arr[i];
        }
    }
    return tempat;
}

bool is_Even (int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_Odd (int a)
{
    if (a % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_Factor(int a, int b)
{
    if( a % b == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int sum_even (int arr[],int n)
{
    int sum = 0;
    for(int i=0; i<n;i++)
    {
        if (arr[i]%2==0)
        {
            sum += arr[i];
        }
    }
    return sum;
}

int sum_odd (int arr[],int p)
{
    int sum = 0;
    for(int i=0;i<p;i++)
    {
        if(arr[i]%2!=0)
        {
            sum += arr[i];
        }
    }
    return sum;
}
