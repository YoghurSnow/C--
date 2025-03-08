#include<iostream>
#include<algorithm>
#include<string>
#include<chrono>
using namespace std;
using namespace std::chrono;

int main(){
    auto start = high_resolution_clock::now();
    /**/
    


    
    /**/
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start).count();
    cout << endl << "time=" << duration << " microseconds" << endl;

    return 0;
}