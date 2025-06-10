// #include <iostream>
// #include <algorithm>
// using namespace std;
// class  car{
//     int speed;
//     public:
//     car(int c) {speed = c;} 
//     int operator()(int i){
//         return speed;
//     }

// };
// int main(){
//     car cars(90);
//     cout<<cars(90)<<endl; 
//     return 0;
// }
#include <iostream>
#include <mutex>
#include <thread>
#include <condition_variable>

using namespace std;
mutex m;
condition_variable cv;
bool ready = false;

void workerThread(){
    unique_lock< mutex>lock(m);
    cv.wait(lock , []{return ready;});
    cout << "worker thread "<< endl;
}
int main(){
    thread worker(workerThread);
    {
        lock_guard<mutex>lock(m);
        ready = true;
    }
    cv.notify_one();
    worker.join();
    return 0;
}

