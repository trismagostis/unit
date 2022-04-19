#include <iostream>

#define TRUE 1
#define FALSE 0

#define UNSIGNED_INT unsigned int
#define BOOLEAN UNSIGNED_INT
#define IS_LETTER(c) (c >= 'A' && c<= 'Z') || (c>='a'&&c<='z')
#define IS_DIGIT(c) (c >= '0' && c<= '9')
#define IS_UPPER(c) c >= 'A' && c<= 'Z'
#define IS_LOWER(c) c>='a'&&c<='z'

#define READ_VARIABLE_1(m,v) cout<<m; cin>>v;
#define READ_VARIABLE_2(m,v){ \
cout<<m;                       \
cin>>v;                       \
}
using namespace std;
int main(){
    int liczba {100};
    /*BOOLEAN wynik = (liczba>0)? TRUE : FALSE;
    cout<<wynik<<endl; //1*/
   /* READ_VARIABLE_1("Podaj wartosc liczby calkowitej: ",liczba)
    cout<<liczba<<endl;

    char znak[1];

    READ_VARIABLE_2("Podak znak: ", znak[0]);

    if(IS_LETTER(znak[0])){
        cout<<"Wprowadzono litere "<<znak[0]<<endl;
        if(IS_LOWER(znak[0]))
            cout<<"Litera jest mała"<<endl;
        else cout<<"litera jest duza"<<endl;
    }
    else if (IS_DIGIT(znak[0]))
        cout<<"Wprowadzono cyfre "<<znak[0]<<endl;
    else cout<<"Nacisnietop klawisz rozny od litery i cyfry: "<<znak[0]<<endl;*/
    return 0;
}

