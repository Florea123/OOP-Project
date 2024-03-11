#ifndef STIVA_H
#define STIVA_H
#include<bits/stdc++.h>
using namespace std;
struct nod{
int info;
nod*next;
};
class stiva
{
    public:
        stiva();

        ~stiva();
    nod*p,*u;
    int lg;
    bool vervid()
    {
        return p==NULL;
    }
    void PUSH(int x);
    void POP();
    void VID();
    void TOP();
    void SPLIT(int x);
    void MERGE(stiva & s1, stiva & s2);
    void AFISARE(stiva & s1);
    friend stiva & operator+=(stiva s1,stiva s2);
    friend istream & operator>>(istream & is,stiva & s);
    friend ostream & operator<<(ostream & os,stiva & s);




};

#endif // STIVA_H
