#include<iostream>
#include <bitset>
//#include <random>
#include <cstdlib>
#include <ctime>
#include <string>
#include <array>
using namespace std;

#define N 10000

int bubbleSort(array<int, N> &seq, int n );

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int bubbleSort (array<int, N> &seq, int n ) {
    // core algoritm
    int i, j;
    for(i=0; i<n;i++) {
        //cout << i;
        for(j=i+1;j<n;j++){
            //swap
            if(seq[i] > seq[j]) {
                //int tmp = seq[i];
                //seq[i] = seq[j];
                //seq[j] = tmp;
                swap(&seq[i], &seq[j]);
            }
        }
    }
    return 0;
}


int main() {
    array<int,N> arrayInt;
    // const means immutabule
    const int SIZE = N;

    int size = sizeof(arrayInt)/sizeof(int);



    for (int i = 0;i<N;i++) {
        arrayInt[i] = std::rand() % N; 
    }

    std::clock_t c_start = std::clock();
    bubbleSort(arrayInt, size);

    int count;
    cout <<"sorted array =>";
    cout <<"[";
    for(int i=0;i<N;i++) {
        cout << arrayInt[i] <<" ";
        ++count;
    
    }
    cout <<"]"<<"items"<<count<<"sorted" <<endl;
    std::clock_t c_end = std::clock();
    cout <<"CPU time used " << 1000.0*(c_end - c_start)/CLOCKS_PER_SEC <<"ms\n";
    cout << "size of array: " <<size;
    cout << endl;

    //std::chrono::duration<double> diff = end-start;
    //std::cout << "Time to fill and iterate a vector of " << diff.count() << " s\n";

    return 0;
}
