#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, y1, y2, d=0;

    cin>>x1>>x2;
    cin>>y1>>y2;


    d=sqrt(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));

    cout<<"La distancia es: "<<d;
}