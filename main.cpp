#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cout<<"Please Enter the point x1"<<endl;
    cin>>x1;
    cout<<"Please Enter the point y1"<<endl;
    cin>>y1;
    cout<<"Please Enter the point x2"<<endl;
    cin>>x2;
    cout<<"Please Enter the point y2"<<endl;
    cin>>y2;

    cout<<"The first and Last points are: ("<<x1<<","<<y1<<"), ("<<x2<<"," <<y2<<")"<<endl;
    int dstart, c, d, e, temp1, temp2;
    x1=(int) x1;
    x2=(int) x2;
    y1=(int) y1;
    y1=(int) y2;
    c=y2-y1;
    e=x2-x1;
    dstart=2*c-d;
    temp1=x1;
    temp2=y1;
    while(temp1<x2)
    {

    if(dstart>0)
        {
            d=2*(c-e);
            temp1=temp1+1;
            temp2=temp2+1;
            dstart=dstart+d;
            cout<<"Next Point --> ("<<temp1<<","<<temp2<<")"<<endl;
        }
    else
        {
            d=2*e;
            temp1=temp1+1;
            temp2=temp2;
            dstart=dstart+d;
           cout<<"Next Point --> ("<<temp1<<","<<temp2<<")"<<endl;
        }
    }
    return 0;
}
