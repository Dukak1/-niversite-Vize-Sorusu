#include <iostream>
using namespace std;
int main()
{
    int i=0,nufus;
    float note,toplam=0,enbuyuk=0,endusuk=100;
    cout<<"Sınıf kaç kişi : ";
    cin>>nufus;
    while(i<nufus){
        cout<<"Alınan not : ";
        cin>>note;
        if (note<0 || note>100){
            cout<<"Geçersiz not değeri!!!"<<endl;
            continue;
        }
        
        toplam += note;
        if(note<endusuk){
            endusuk = note;
        }
        if(note>enbuyuk){
            enbuyuk = note;
        }
        i++;
    }
    cout<<"Notların ortalaması : "<<toplam/nufus<<endl;
    cout<<"En dusuk not : "<<endusuk<<endl;
    cout<<"En dusuk not : "<<enbuyuk<<endl;
    
    return 0;
}
