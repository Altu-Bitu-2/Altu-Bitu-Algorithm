#include <iostream> 

using namespace std; 


int main() { 
    
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
    
    for (int i = 0; i < city; i++) { 
        if (min >= oil[i + 1]) { 
            min = oil[i + 1]; 
        } 
        sum += min * road[i + 1]; 
    }
    
    cout << sum; 
    
    return 0; 
}

