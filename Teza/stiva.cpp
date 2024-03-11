#include "stiva.h"


void stiva::PUSH(int x)
{
    nod* nou = new nod;///1
    nou->info=x;
    nou->next=NULL;
    if(p==NULL)
        p=nou;
    else
    {
        nod * t=p;
        while(t->next!=NULL)
            t=t->next;
        t->next=nou;
    }
}
void stiva::POP()
{
    nod* nou=p;
    while(nou->next->next!=NULL)
        nou=nou->next;
    cout << nou->next->info;
    nou->next=NULL;
}
void stiva::TOP()
{
    nod *nou=p;
    while(nou->next!=NULL)
        nou=nou->next;
    cout << nou->info;
}
void stiva::SPLIT(int x)
{
    int k=0;
    nod* nou=p;
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<"                Aceasta este prima stiva:";
    while(k!=x)
    {
        cout << nou->info << " ";
        k++;
        nou=nou->next;
    }
    cout << endl;
    cout<<'\n';
    cout<<'\n';
    cout<<"--------------------------------------------------------------------------------"<<'\n';
    cout<<'\n';
    cout<<'\n';
    cout<<'\t'<<"                Aceasta este a doua stiva:";
    while(nou->next!=NULL)
    {
        cout << nou->info << " ";
        nou=nou->next;
    }
    cout << nou->info;
    cout << endl;
    cout<<'\n';
    cout<<'\n';
    cout<<"--------------------------------------------------------------------------------"<<'\n';
}
void stiva::MERGE(stiva & s1, stiva & s2)
{
    nod* nou1=s1.p;
    nod* nou2=s2.p;
    while(!nou1)
        cout << nou1->info << " ";
    while(!nou2)
        cout << nou2->info << " ";
}
void stiva::AFISARE(stiva & s1)
{
    nod *t=p;
    while(t!=NULL)
    {
        cout << t->info << " ";
        t=t->next;
    }
}
void stiva::VID()
{
    nod *nou=p;
    if(nou==NULL)
        cout << "Stiva este vida";
        else
        cout <<"Stiva nu este vida";
}
istream & operator>> (istream &is, stiva & s)
{
    int x,i;
    for(i=1; i<=s.lg; i++)
    {
        is >> x;
        nod * nou =new nod;
        nou->info=x;
        nou->next=NULL;
        if(s.p==NULL)
            s.p=nou;
        else
            {
                nod * t=s.p;
        while(t->next!=NULL)
            t=t->next;
        t->next=nou;
            }
    }
    return is;
}
ostream & operator<< (ostream &os, stiva & s)
{
    nod *nou=s.p;
    while(!nou)
        os<< nou->info << " ";
    os << endl;
    return os;
}
stiva::stiva()
{
    p=NULL;
    u=NULL;
    lg=0;
}

stiva::~stiva()
{
    //dtor
}
