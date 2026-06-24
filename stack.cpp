#include <iostream>
#include <stack>

using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int capacity) {
        arr = new int[capacity];
        size = capacity;
        top = -1;
    }

    void push(int val){
        if(top == size-1){ 
            //to check stacxk overflow(stack is already full, agar insert karoge to overflow hojayega)
            cout << "Stack Overflow" <<endl;
        } 
        else{
            // normal case -> stack main khali jagah hai abhi
        top++;
        arr[top] = val;
        }
    }

    void pop() {
        if(top == -1){
            // stack is empty, cannot pop in this case, coz there is no element to pop
            cout << "Stack underflow" << endl;
        }
        else{
            //normal case
        arr[top] = 0; // koi farak nhi padega if we dont even use this line 
        top--;
        }
    }

    int getSize() {
        return top+1;
    }

    bool isEmpty() {
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    int getTop() {
        if(top == -1){
            cout << "There is no element at the top as stack is empty";
            return -1;
        }
        else{
            //normal case
            return arr[top];
        }
    }

    void print() {
        cout << "Printing Stack" << endl;
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){

    // // Stack STL

    // stack<int> s; // creation

    // s.push(10); // insertion
    // s.push(20);
    // s.push(30);

    // cout << s.size() << endl; // size of stack

    // cout << s.empty() << endl; // check empty or not

    // cout << s.top() << endl; //peek

    // s.pop(); //removal

    // cout << s.top() << endl;

    //creating a stack of initial size 5
    Stack s(5);
    s.print(); //grabage values
    s.push(10);
    s.print();
    s.push(20);
    s.print();
    s.push(30);
    s.print();
    s.push(40);
    s.print();
    s.push(50);
    s.print();
    s.push(60); //stack overflow
    s.print();

    cout << s.getTop() << endl;
    cout << s.getSize() << endl;
    cout << s.isEmpty() << endl;

    s.pop();
    s.print(); 
    s.pop();
    s.print(); 
    s.pop();
    s.print(); 
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop(); // stack underflow
    s.print();

    cout << s.getSize() << endl;

    return 0;

}