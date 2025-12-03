#include <iostream>
using namespace std;

float input (float z) {
    do {
        cout<<"Inserire un valore positivo"<<endl;
        cin>>z;

    } while (z<0);

    return z;
}
float somma (float x, float y) {
    float r;
    r=x+y;

    return r;
}

float sottrazione (float x, float y) {
    float r;
    if (x>y) {
        r=x-y;
    }
    else
    {
        r=y-x;
    }

    return r;
}

float moltiplicazione (float x, float y) {
    float r;
    r=x*y;

    return r;
}

float divisione (float x, float y) {
    float r;
    r=x/y;

    return r;
}

float potenza (float x, float y) {
    float r(x);
    int i(0);

    while (i<=y-2) {
        r=r*x;
        i=i++;
    }

    return r;
}

int main() {
    float a(0), b(0), s, d, p, q, pow;

    cout<<"Dammi due numeri"<<endl;
    a=input(a);
    b=input(b);

    s=somma(a, b);
    cout<<a<<"+"<<b<<"="<<s<<endl;

    d=sottrazione(a, b);
    if (a>b) {
        cout<<a<<"-"<<b<<"="<<d<<endl;
    }
    else
    {
        cout<<b<<"-"<<a<<"="<<d<<endl;
    }

    p=moltiplicazione(a, b);
    cout<<a<<"x"<<b<<"="<<p<<endl;

    q=divisione(a, b);
    cout<<a<<"/"<<b<<"="<<q<<endl;

    pow=potenza(a, b);
    cout<<a<<"^"<<b<<"="<<pow<<endl;
    return 0;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
