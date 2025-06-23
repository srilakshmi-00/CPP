#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <ctime>  
using namespace std;

 //copy
void carparts()
{
    vector<int> qualityScores = {45, 72, 88, 60, 55, 93, 67, 80};
    vector<int> backup(qualityScores.size());
    copy(qualityScores.begin(),qualityScores.end(),backup.begin());
    for(auto qs: backup)
    cout << qs << " ";
    cout<<endl;
}

//fill
void carparts1()
{
    vector<int> qualityScores = {45, 72, 88, 60, 55, 93, 67, 80};
    fill(qualityScores.begin(),qualityScores.begin()+ 5 ,50);
    for(auto f : qualityScores)
    cout << f<< " ";
    cout<<endl;
}  

//generate
void carparts2()
{
    vector<int> gen(10);
    srand(time(0));
    generate(gen.begin(),gen.end(),[](){return rand() % 101;});

    for(auto g :gen)
    cout << g<< " ";
    cout<<endl;
}

// //transform
void carparts3()
{
    vector<int> qualityScores = {45, 72, 88, 60, 55, 93, 67, 80};
    vector<int> back(qualityScores.size());
    transform(qualityScores.begin(),qualityScores.end(),back.begin(),[](int i){return i + 5;});
    for(auto t: back)
    cout << t<< " ";
    cout<<endl;
}

// //replace
void carparts4()
{
    vector<int> qualityScores = {45, 72, 88, 60, 55, 93, 67, 80};
    replace_if(qualityScores.begin(),qualityScores.end(),[](int score){return score < 60;},60);
    for(auto r: qualityScores)
    cout << r<< " "; 
    cout<<endl;
}

// //remove_if
void carparts5()
{
    vector<int> qualityScores = {45, 72, 88, 60, 55, 93, 67, 80};
    auto it = remove_if(qualityScores.begin(),qualityScores.end(),[](int x){return x < 70;});
    qualityScores.erase(it,qualityScores.end());
    for(auto r : qualityScores)
    cout << r << " ";
    cout<<endl;
}

// //reverse
void carparts6()
{
    vector<int> qualityScores = {45, 72, 88, 60, 55, 93, 67, 80};
    reverse(qualityScores.begin(),qualityScores.end());
    for(auto f : qualityScores)
    cout << f<< " ";
    cout<<endl;
}

// //partition
void carparts7()
{
    vector<int> qualityScores = {45, 72, 88, 60, 55, 93, 67, 80};
    auto it = partition(qualityScores.begin(),qualityScores.end(),[](int x){return x >= 75;});
    cout << "pass scores are : ";
    for(auto r = qualityScores.begin(); r!= it; ++r)
    {
        cout << *r  << " ";
    }
    cout << endl;
    cout << "fail scores are : ";
    for(auto r = it; r!= qualityScores.end(); ++r)
    {
        cout <<  *r << " ";
    }
    
}
int main()
{
    carparts();
    carparts1();
    carparts2();
    carparts3();
    carparts4();
    carparts5();
    carparts6();
    carparts7();
    return 0;
}