#include <iostream>

 using namespace std;

class Stack{
    public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int capacity) {
        arr = new int[capacity];
        size = capacity;
        top1 = -1;
        top2 = size;
    }

    void push1(int val) {
        //if space available, then push
        //else overflow karjayega
        if(top2 - top1 == 1){
            // cannot insert
            cout << "Stack Overflow" << endl;
        }
        else{
        top1++;
        arr[top1] = val;
        }
    }

    void push2(int val) {
        if(top2 - top1 == 1){
            cout << "Stack Overflow" << endl;
        }
        else{
            top2--;
            arr[top2] = val;
        }
    }

    void pop1() {
        // if element available, then pop
        // if stack empty,  then dont pop
        if(top1 == -1){
            // stack 1 is empty
            cout << "Stack Underflow" << endl;
        }
        else{
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2() {
        if(top2 == size){
            // stack 2 is empty, no element to pop
            cout << "Stack Underflow" << endl;
        }
        else{
            arr[top2] = 0;
            top2++;
        }
    }

    void print() {
        cout << "Top1: " << top1 << endl;
        cout << "Top2: " << top2 << endl;
        for(int i = 0; i < size; i++){
            cout << arr[i] << " " ;
        }
        cout << endl;
    }

};

 int main(){

    Stack s(5);
    s.push1(10);
    s.print();
    s.push2(90);
    s.print();
    s.push2(80);
    s.print();
    s.pop1();
    s.print();
    s.push1(90);
    s.print();
    s.push1(80);
    s.print();
    s.push1(80);
    s.print();
    s.push1(80); // Stak overflow
    s.print();

    return 0;
}