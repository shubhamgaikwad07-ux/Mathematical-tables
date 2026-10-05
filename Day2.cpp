#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"entered the no.:-";
    cin>>n;

    for(int i=1;i<=10;i++)
    {
        cout<<"The table of "<<n<<" as follows:-";
        cout<<n<<"x"<<i<<"="<<n * i<<endl;
    }
    return 0;

}