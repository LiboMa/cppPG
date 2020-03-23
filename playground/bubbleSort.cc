#include<iostream>
#include <bitset>
//#include <random>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

#define N 10
int bubbleSort(int seq[10], int n );

int bubbleSort (int seq[10], int n ) {
    // core algoritm
    int i, j;
    for(i=0; i<n;i++) {
        //cout << i;
        for(j=0;j<(n-i-1);j++){
            //swap
            if(seq[j] >seq[j+1]) {
                int tmp = seq[j];
                seq[j] = seq[j+1];
                seq[j+1] = tmp;
            }
        }
    }
    return 0;
}


int main() {
    int arrayInt[N];

    for (int i = 0;i <N;i++) {
        arrayInt[i] = std::rand() % N; 
    }

    std::clock_t c_start = std::clock();
    bubbleSort(arrayInt, N);

    int count;
    cout <<"sorted array =>";
    cout <<"[";
    for(int i=0;i<N;i++) {
        cout << arrayInt[i] <<" ";
        ++count;
    
    }
    cout <<"]"<<"items"<<count<<"sorted" <<endl;
    std::clock_t c_end = std::clock();
    cout <<"CPU time used" << 1000.0*(c_end - c_start)/CLOCKS_PER_SEC <<"ms\n";

    //std::chrono::duration<double> diff = end-start;
    //std::cout << "Time to fill and iterate a vector of " << diff.count() << " s\n";

    return 0;
}
