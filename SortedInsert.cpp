#include <iostream>
#include <stack>

using namespace std;

void insertSorted(stack<int>& s, int value) {
    // base case
    if(s.empty() || s.top() <= value) {
        s.push(value);
        return;
    }

    // 1 case hum karege, baaki recursion
    int topValue = s.top();
    s.pop();

    // recursion
    insertSorted(s, value);

    // backtrack
    s.push(topValue);
}
int main() {

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    insertSorted(s, 25);

    cout << "Printing Stack: " << endl;
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}