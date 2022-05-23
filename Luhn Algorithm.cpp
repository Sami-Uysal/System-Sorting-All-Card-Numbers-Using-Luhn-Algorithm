#include<iostream>
#include <string>
#include <sstream>
using namespace std;
int basamak_topla(int sayi){
        int toplam = 0;
        
        while (sayi != 0){
                toplam += sayi % 10;
                sayi /= 10;
        }
        
        return toplam;
}
int main(){ 
    
    setlocale(LC_ALL,"Turkish");
    long int no;
    string kartno = "1000000000000000";
    stringstream a;
    a << kartno; a >> no;
    int tekler=0, ciftler = 0;
    while(no<9999999999999999){
    a << no; a >> kartno;
    for (int i = 0; i < 16; i++){
    if (i % 2 == 0) ciftler += basamak_topla(2*((int)(kartno[i]-'0')));
    else tekler += ((int)(kartno[i]-'0'));
    }
    if ((tekler+ciftler)%10==0) cout<<no<<endl;
    a << kartno; a >> no;
    no++;
    }
    
}


