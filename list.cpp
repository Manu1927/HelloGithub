#include <iostream>
#include <list>
#include <iterator>
#include <conio.h>
using namespace std;
 
void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}
int main()
{
    list <int> l1;
    int a,x,b;
    
    while(1)
    {
         cin>>a;
       
        switch(a)
        {
            case 1:
                 {
                        cin>>b;
                        l1.push_back(b);
                        break;
                 }
            case 2:
                 {
                       showlist(l1);
                       break;
                 }
            case 3:
                      exit(0);
            
        }    
    }
    getch();
}
