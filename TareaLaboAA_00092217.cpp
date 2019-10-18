// Example program
#include <iostream>
#include <string>

using namespace std;

int p[] = {0,1,5,8,9,10};
int r[] = {-1,-1,-1,-1,-1,-1};
int q=-1;

int max(int x, int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}

int CutRoad(int n){
    r[0] = 0;

    for(int i=1; i<=n+1;i++){
        q=-1;
        for(int j=1; j<=i;j++){
            //cout<<"La 2q es: "<<q<<"  -  ";
            //cout<<"La algo es: "<<p[j] + r[i-j-1]<<"  -  ";

            q=max(q,p[j] + r[i-j-1]);

            //cout<<"La 2q es: "<<q<<endl;

            r[i]=q;
        }
    }
    return q;
}


int main()
{
  cout<<CutRoad(4);
}
