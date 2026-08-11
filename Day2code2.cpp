#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int pre(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

string infixToPostfix(string in) {
    stack<char> s;
    string post = "";

    for (char c : in) {
        if (isalnum(c))
            post += c;
        else if (c == '(')
            s.push(c);
        else if (c == ')') {
            while (s.top() != '(') {
                post += s.top();
                s.pop();
            }
            s.pop();
        } else {
            while (!s.empty() && pre(s.top()) >= pre(c)) {
                post += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty()) {
        post += s.top();
        s.pop();
    }

    return post;
}

int main() {
    string in;

    cout << "Enter Infix: ";
    cin >> in;

    reverse(in.begin(), in.end());

    for (char &c : in) {
        if (c == '(') c = ')';
        else if (c == ')') c = '(';
    }

    string post = infixToPostfix(in);
    reverse(post.begin(), post.end());

    cout << "Prefix = " << post;
}