#include<bits/stdc++.h>
using namespace std;

float f(float x)
{
    return(x*x*x-3*x-5); 
}

float df(float x)
{
    return(3*x*x-3);
}

int main()
{
    int itr,mx_itr;
    float h,x0,x1,err;
    cout<< "\nEnter x0,allowed error and maximum iterations:"<< endl;
    cin >> x0 >> err >> mx_itr;

    for(itr=0;itr<mx_itr;itr++)
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        cout << "At iterations no." <<itr<< ",x = " << x1 << endl;

        if(fabs(h)<err)
        {
            cout<< "After " << itr << " iterations, root = " <<x1 << endl;
            return 0;
        }
        x0=x1;
    }

    cout << "The Required solution does not coverage or iterations are insufficient\n";
    return 0;
}
