#include <iostream>
using namespace std;



int main()
{
int* a=new  int(10);
cout<<sizeof(a)<<endl;
float* b=new float(3.4);
cout<<sizeof(b)<<endl;
char* c=new char('d');
cout<<sizeof(c)<<endl;
double* d=new double(4.5686587574);
cout<<sizeof(d)<<endl;
cout<<sizeof(*c)<<endl;

}

