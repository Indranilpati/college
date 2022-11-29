#include<bits/stdc++.h>
using namespace std;

void bisection(float *mid, float st, float end, int *cnt)
{
    *mid=(st+end)/2;
    ++(*cnt);
    cout << "Iteration \t" << *cnt << ":\t" << *mid << endl;
}

double f(double x)
{
    return ( x*x*x - 4*x -9);
}

int main()
{
    int cnt, mx_cnt;
    float mid,st,end,root,err;

    cout << "Enter a and b respectively:";
    cin >> st >> end;

    cout << "Declare no. of iteration to be allowed:";
    cin >> mx_cnt;

    cout << "Input the no. of allowed error point:";
    cin >> err;

    bisection(&mid,st,end,&cnt);

    for(cnt=0;cnt<mx_cnt;mid=root)
    {
        if(f(st)*f(mid)<0)
            end=mid;
        else
            st=mid;
    
        bisection(&root,st,end,&cnt);
        if(fabs(root-mid)<err)
        {
            cout << endl << "The Approximation root is:" << root;
            return 0;
        }
    }
    cout << "The Iterations are insufficient:";
    return 0;
}
