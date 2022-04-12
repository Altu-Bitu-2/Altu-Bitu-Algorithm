#include <iostream>

using namespace std;

int main(){

    long long oil[100000]; 
    long long road[100000]; 

    long long city; 
    long long min; 
    long long sum; 
    
    cin >> city;

    for (int i = 0; i < city - 1; i++) { 
        cin >> road[i];
    } 

    for (int i = 0; i < city; i++) { 
        cin >> oil[i]; 
    } 

    min = oil[0];
    sum = min * road[0];

    for (int i = 1; i < city-1; i++){
        if (min <= oil[i]) {
            sum += min * road[i] ;
        }
        else{
            min = oil[i];
            sum += min * road[i] ;
        }
    }
    cout << sum; 

    return 0;
}
