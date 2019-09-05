#include <iostream>

using namespace std;

main()
{
int nilai;
int i;
int j;
int k;

cout<<" Membuat Bentuk Segitiga Sama Sisi "<<endl;

cout<<" Masukan Banyak Baris = ";
cin>>nilai;

for (i=1; i<=nilai; i++){
    for (j=nilai; j>=i; j--) {
        cout<<" ";
    }
    for (k=1;k<=i+(i-1);k++){
        cout<<"*";
    }
    cout<<endl;
    }
}
