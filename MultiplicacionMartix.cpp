#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#define MAX 1000
using namespace std;
double A[MAX][MAX];
double x[MAX],y[MAX];

int main(){
   auto start = std::chrono::system_clock::now();
   for(int j= 0;j<MAX;j++){
      for(int i= 0;i<MAX;i++){
         y[i]+=A[i][j]*x[j];
      }
   }

for(int i= 0;i<MAX;i++){
      for(int j= 0;j<MAX;j++){
         y[i]+=A[i][j]*x[j];
      }
   }
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << " time: " << elapsed.count() << "s";
   
    return 0;
}