#include <iostream>
#include <stack>

using namespace std;

int main(){

    // Stack STL

    stack<int> s; // creation

    s.push(10); // insertion
    s.push(20);
    s.push(30);

    cout << s.size() << endl; // size of stack

    cout << s.empty() << endl; // check empty or not

    cout << s.top() << endl; //peek

    s.pop(); //removal

    cout << s.top() << endl;

    return 0;

}