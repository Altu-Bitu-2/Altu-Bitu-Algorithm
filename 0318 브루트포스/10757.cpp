#include <iostream>
#include <vector>

using namespace std;

int main() {
   string num1, num2;
   cin >> num1 >> num2;
   int arr1[10001], arr2[10001];
   vector<int> answer;
   if(num1.length() < num2.length()) {
       swap(num1, num2);
      // num1에 길이가 긴 수를 저장해줌.
   }
   for(int i=0; i<num1.length(); i++) {
       arr1[i+1] = num1[i] - '0';
   }
   for(int i=0; i<num2.length(); i++) {
       arr2[i+1+(num1.size()-num2.size())] = num2[i]-'0';
   }
   for(int i=num1.length(); i>0; i--) {
       int temp = arr1[i]+arr2[i];
       if(temp>=10) {
           arr1[i-1]++;
           temp-=10;
       }
       answer.push_back(temp);
   }
   if(arr1[0]!=0) cout << '1';
   for(int i=answer.size()-1; i>=0; i--) {
       cout << answer[i];
   }
}

