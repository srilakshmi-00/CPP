#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void na()
{
    //copy
    vector<int> cop= { 23,54,89,54,54,89};
    vector <int> des(cop.size());
    copy(cop.begin(), cop.end(), des.begin());
    for(auto co : des)
    cout << co << " ";
    cout << endl;
    
}

void na1()
{
    //fill
    vector<int> fil={12, 44, 65, 42, 87,31};
    fill(fil.begin(),fil.end(), 12 );
    for(auto fi:fil)
    cout << fi << endl;
}

void na2()
{
    //generate
    vector<int> gen(5);
    int id = 100;
    generate(gen.begin(),gen.end(), [&id]() {return ++id;} );
    // generate(gen.begin(),gen.end(), [&id]() {return id++;} );
    for(auto g:gen)
    cout << g << " ";
    cout << endl;
}

void na3()
{
    //transform
    vector<double> celsius{ 12.4, 54.5, 100.0 ,43.45};
    vector<double> fahrenheit(celsius.size());
    transform(celsius.begin(),celsius.end(),fahrenheit.begin(),[](double f)
    {return f * 9.0 / 5.0 + 32;});
    for(auto cf:fahrenheit)
    cout <<  "fahrenheit: "<< cf<< endl;
    
}

void na4()
{
    //replace
    vector<double> rep{ 12.4, 54.5, 100.0 ,43.45};
    replace(rep.begin(),rep.end(),54.5, 79.8);
    for(auto r:rep)
    cout << r<< " ";
    cout << endl;    
}

void na5()
{
    //remove_if
    vector<int> rem={1,0,1,0,1,0,1};
    auto it = remove_if(rem.begin(),rem.end(), [](int i){return i==1; } );
    rem.erase(it,rem.end());
    for(auto r:rem)
    cout << r << endl;
}

void na6()
{
    //reverse
    vector<int> rev={12, 44, 65, 42, 87,31};
    reverse(rev.begin(),rev.end());
    for(auto r:rev)
    cout << r << " ";
    cout << endl;
}

void na7()
{
    //partition
    vector<int> par={89, 90, 65, 42, 87,50};
    auto it = partition(par.begin(),par.end(),[](int i){return i > 80;});
    cout << "passing grades: ";
    for(auto r = par.begin(); r != it; ++r ){
        cout << *r << " ";
    }
    cout << endl;
    cout << "fail grades: " ;
    for(auto r = it; r !=  par.end(); ++r ){
        cout << *r << " ";
    }
    cout << endl;
}
int main()
{   na();
    na1(); 
    na2();  
    na3();   
    na4(); 
    na5();  
    na6(); 
    na7();                                      
    return 0;
}