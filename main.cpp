#include<fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
int i,j,n,v[100];
int maxi(int i, int j)
{
    int a,b;
    if(i==j) return v[i];
    else
    {
        a=maxi(i,(i+j)/2);
        b=maxi((i+j)/2+1,j);
        if(a>b)
            return a;
        else
            return b;
    }

}
void citire()
{
    f>>n;
    for(i=1; i<=n; i++)
        f>>v[i];
}
int main ()
{
    citire();
    g<<maxi(1,n);
    f.close();
    g.close();
    return 0;
}
