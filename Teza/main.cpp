#include <bits/stdc++.h>
#include <stdio.h>
#include <unistd.h>
#include<conio.h>
#include "stiva.h"

using namespace std;
ifstream fin("numere.in");


int z,x,n,y,k,f,lg;
stiva s1,s2;

void menu1_date()
{
    system("CLS");
    system("color 07");
    cout<<'\n';
    cout<<"   -------------------------------------------------------\n";
    cout<<"  |  Liceul teoretic de inforatica 'Grigore Moisil' Iasi  |\n";
    cout<<"  |  Elevi:-Tamas Andrei                                  |\n";
    cout<<"  |        -Florea Robert Andrei                          |\n";
    cout<<"   -------------------------------------------------------";

    cout<<'\n';
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\t'<<"->Rezolvati probleme cu structurii dinamice de date de tip stiva (LIFO)!"<<'\n';
    cout<<'\t'<<"->De unde doriti sa cititi?"<<'\n'<<'\n';
    cout<<'\t'<<"1.Citeste de la tastatura"<<'\n'<<'\n';
    cout<<'\t'<<"2.Citeste din fisier"<<'\n'<<'\n';
    cout<<'\t'<<"0.Iesire"<<'\n'<<'\n';
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n'<<"                                 Alege o optiune: ";

}
void menu_cin_lg()
{
    system("CLS");
    system("color 07");
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<"                Adaugati numarul de noduri a stivei:", cin>>lg;
    cout<<'\n';
    cout<<'\n';
}
void menu_cin_stiva()
{
    system("color 07");
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n';
    cout<<'\n';
    s1.lg=lg;
    cout<<'\t'<<"Adaugati elemente:";
    cin>>s1;

}

void menu2_intrebari()
{
    system("CLS");
    system("color 07");
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n';
    cout<<'\n'<<"Aceasta este stiva dumneavoastra:" ; s1.AFISARE(s1);
    cout<<'\n';
    cout<<'\n';
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\t'<<"Ce doriti sa faceti in continuare?"<<'\n'<<'\n';
    cout<<'\t'<<"1. Adauga un nod nou(PUSH)"<<'\n'<<'\n';
    cout<<'\t'<<"2. Elimina vârful stivei si returneaza nodul eliminat(POP)"<<'\n'<<'\n';
    cout<<'\t'<<"3. Returnează informația din vârful stivei(TOP)"<<'\n'<<'\n';
    cout<<'\t'<<"4. Imparte stiva in 2 alte stive, dupa a k-lea nod(SPLIT)"<<'\n'<<'\n';
    cout<<'\t'<<"5. Uneste doua stive(MERGE)\n\n";
    cout<<'\t'<<"6. Verifica daca stiva este vida \n\n";
    cout<<'\t'<<"0. Iesire"<<'\n'<<'\n';
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n'<<"                                 Alege o optiune: ";

}
void menu3_insert()
{
    system("CLS");
    system("color 07");
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<"                Introduce nodul dorit:", cin>>f, s1.PUSH(f);

}
void menu4_question1()
{
    system("CLS");
    system("color 07");
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<'\t'<<"    Doriti sa mai introduceti un nod?";
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<"            1.DA                          2.NU     ";
    cout<<'\n';
    cout<<"--------------------------------------------------------------------------------"<<'\n';

    cout<<'\n'<<"                               Alege o optiune:";
    cin>>y;
}
void menu4_question2()
{
    system("CLS");
    system("color 07");
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<'\t'<<"          Doriti sa continuati?";
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<"            1.DA                          2.NU     ";
    cout<<'\n';
    cout<<"--------------------------------------------------------------------------------"<<'\n';

    cout<<'\n'<<"                               Alege o optiune:";
    cin>>y;
}
void menu_POP()
{
    system("CLS");
    system("color 07");
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<"                Acesta este nodul eliminat:", s1.POP();
    cout<<'\n';
}
void menu_POP_intrebare()
{
    system("color 07");
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<'\t'<<"            Doriti sa continuati?";
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<"            1.DA                          2.NU     ";
    cout<<'\n';
    cout<<"--------------------------------------------------------------------------------"<<'\n';

    cout<<'\n'<<"                               Alege o optiune:";
    cin>>y;
}
void menu_TOP()
{
    system("CLS");
    system("color 07");
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<"                Acesta este nodul din varful stivei:", s1.TOP();
    cout<<'\n';
}
void menu_TOP_intrebare()
{
    system("color 07");
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<'\t'<<"          Doriti sa continuati?";
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<"            1.DA                          2.NU     ";
    cout<<'\n';
    cout<<"--------------------------------------------------------------------------------"<<'\n';

    cout<<'\n'<<"                               Alege o optiune:";
    cin>>y;
}
void menu_SPLIT1()
{
    system("CLS");
    system("color 07");
     cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n';
    cout<<'\n'<<"Aceasta este stiva dumneavoastra:" ; s1.AFISARE(s1);
    cout<<'\n';
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<"                Dupa ce nod doriti sa se desparta stiva:", cin>>k;
    s1.SPLIT(k);
    cout<<'\n';
    cout<<'\n';


}
void menu_SPLIT2_intrebare()
{
    system("CLS");
    system("color 07");
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<'\t'<<"          Doriti sa continuati?";
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<"             1.DA                          2.NU     ";
    cout<<'\n';
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cin>>y;
}
void menu_MERGE()
{

}
void menu_error()
{
    system("CLS");
    system("color 04");
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<"OOOOOOOO    OOOOOOO      OOOOOOO        OOOOOOOOO      OOOOOOO\n";
    cout<<"OOOOOOOO    OO    OO     OO    OO      OO       OO     OO    OO\n";
    cout<<"OO          OO    OO     OO    OO     OO         OO    OO    OO\n";
    cout<<"OOOOOOOO    OOOOOOO      OOOOOOO      OO         OO    OOOOOOO\n";
    cout<<"OOOOOOOO    OO  OO       OO  OO       OO         OO    OO  OO\n";
    cout<<"OO          OO   OO      OO   OO      OO         OO    OO   OO\n";
    cout<<"OOOOOOOO    OO    OO     OO    OO      OO       OO     OO    OO\n";
    cout<<"OOOOOOOO    OO     OO    OO     OO      OOOOOOOOO      OO     OO\n";


    cout<<endl;
    cout<<"Apasa orice buton pentru a continua!!\n";
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    getch();

}
int main()
{

    menu1_date();
    cin>>z;
    if (z==0)
        return 0;
    while(z!=1 && z!=2)
    {
        menu_error();
        menu1_date();
        cin>>z;
    }

    if(z==2)
    {
        fin>>lg;
        s1.lg=lg,fin>>s1;
    }
    else
    {
        menu_cin_lg();
        menu_cin_stiva();

    }
    menu2_intrebari();
    cin>>x;
    while(x!=0 && x!=1 && x!=2 && x!=3 && x!=4 && x!=5 && x!=6)
    {
        menu_error();
        menu2_intrebari();
        cin>>x;
    }
    while(x!=0){
    if(x==1)
    {
        y=1;
        while(y==1)
        {

            menu3_insert();
            menu4_question1();
            while(y!=1 && y!=2)
                menu_error(),menu4_question1();

        }
            menu2_intrebari();
            cin>>x;

    }
    while(x==2)
    {
        menu_POP();
        getch();
        menu_POP_intrebare();
        while(y!=1 && y!=2)
            menu_error(),menu_POP_intrebare();
        if(y==2)
            return 0;
        else
        {
            menu2_intrebari();
            cin>>x;
        }
    }
    while(x==3)
    {
        menu_TOP();
        getch();
        menu_TOP_intrebare();
        while(y!=1 && y!=2)
            menu_error(),menu_TOP_intrebare();
        if(y==2)
            return 0;
        else
        {
            menu2_intrebari();
            cin>>x;
        }
    }
    while(x==4)
    {
        menu_SPLIT1();
        getch();
        menu_SPLIT2_intrebare();
        while(y!=1 && y!=2)
            menu_error(),menu_SPLIT2_intrebare();;
        if(y==2)
            return 0;
        else
        {
            menu2_intrebari();
            cin>>x;
        }
    }
    while(x==5)
    {

    }
    while(x==6)
    {

    }
    }
    return 0;
}
