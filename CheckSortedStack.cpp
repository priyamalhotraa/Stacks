#include <iostream>
#include <stack>
#include <climits>

using namespace std;

bool checkSorted(stack<int>& s, int prev) {
    //base case
    if(s.empty()) {
        return true;
    }

    // 1 case main karungi baaki recursion sambhaal leega
     int next = s.top();
     if(next < prev) {
        //not sorted
        return false;
     }
     else {
        // next >= prev -> sorted
        
        // pop top wala element
        s.pop();
        // prev move to next
        prev = next;
        //recursion
        return checkSorted(s, prev);
     }
}

int main(){

    stack<int> s;
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    int prev = INT_MIN;
    // ascending order -> true
    cout << checkSorted(s, prev);

    return 0;
}