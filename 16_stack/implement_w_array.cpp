// ******************** implementing stack with array ***************************
#include<iostream>
using namespace std;

class Stack{

private:
    int top;
    int size;
    int *arr;

public:
    // constructor
    Stack(int size){
      this->size = size;
      arr = new int[size];
      top = -1;
      }



    void push(int element){
        if(size - top>1){
     top++;
     arr[top] = element;
    }
        else{
cout<<"Stack OverFlow"<<endl;
        }

    }

    void pop(){
if(top>=0){
    top--;
}
else{
    cout<<"Stack UnderFlow"<<endl;
}
    }

    // peek to see top element 
    int peek(){
        if(top>=0){
   return arr[top];
        }
        else{
    cout<<"Stack is Empty"<<endl;
     return -1;
        }
    }

    bool isEmpty(){
if(top== -1){
    return true;
}
else{
    return false;
}
    }

};


int main()
{

Stack s(6);
s.push(1);
s.push(2);
s.push(5);
s.push(9);
cout<<s.peek()<<endl;
s.pop();
cout<<s.peek()<<endl;
s.pop();
cout<<s.peek()<<endl;
s.pop();
cout<<s.peek()<<endl;
s.pop();
cout<<s.peek()<<endl;
s.pop();
cout<<s.peek()<<endl;
s.pop();
cout<<s.peek()<<endl;

bool b = s.isEmpty() ? true : false;

 cout<<b;


return 0;
}