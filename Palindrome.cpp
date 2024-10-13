#include<iostream>
using namespace std;

class Stack 
{
private:
    int top;
    int maxSize;
    char* stack;

public:
    Stack(int size)
    {
        maxSize = size;
        stack = new char[maxSize];
        top = -1;  
    }
    ~Stack()
    {
        delete[] stack;
    }

    void push(char c) 
    {
        if (top == maxSize - 1)
        {
            cout << "Stack overflow" << endl;
        }
        else 
        {
            stack[++top] = c;
        }
    }

    char pop() 
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
            return '\0';
        }
        else 
        {
            return stack[top--];
        }
    }
    bool isEmpty()
    {
        return top == -1;
    }
    char peek() 
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return '\0';
        }
        else
        {
            return stack[top];
        }
    }
};
void reverseString(char str[], int n) 
{
    Stack stack(n);
    for (int i = 0; i < n; i++)
    {
        stack.push(str[i]);
    }
    for (int i = 0; i < n; i++)
    {
        str[i] = stack.pop();
    }
}
bool isPalindrome(const string& str)
{
    int n = str.length();
    Stack stack(n);
    for (int i = 0; i < n; i++)
    {
        stack.push(str[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (str[i] != stack.pop())
        {
            return false;  
        }
    }
    return true;
}
int main() {
    char str[] = "rubYur";
    int n = sizeof(str) / sizeof(str[0]) - 1; 

    cout << "Original string: " << str << endl;

    reverseString(str, n);

    cout << "Reversed string: " << str << endl;
    cout << isPalindrome(str);
    return 0;
}
