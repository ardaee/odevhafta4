#include <iostream>

using namespace std;

int main()
{
    //arda ege erdo�an
    int soru;
    cout<<"Cevabini gormek istediginiz soru numarasi giriniz(1-3): ";
    cin>>soru;
    switch(soru){
    case 1:
        int s;
        cout<<"Bir sayi giriniz: ";
        cin>>s;
        if(s%2==0){
            if(s%4==0) cout<<"Sayi 4 ile bolunur.";
            else cout<<"Sayi cifttir ama 4 ile bolunmez.";
        }else{
            if(s%3==0) cout<<"Sayi tektir ve 3 ile bolunur.";
            else cout<<"Sayi tektir ve 3 ile bolunmez.";
        }
        break;
    case 2:
        cout<<"Program cikti olarak 6 sayisini verir.";
        break;
    case 3:
        int sayi;
        cin>>sayi;
        if(sayi>10) sayi-=10;
        else sayi+=10;
        cout<<sayi;
        break;
    }
    return 0;
}
