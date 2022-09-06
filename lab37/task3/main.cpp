#include<iostream>
#include<stack>
#include<map>
#include<math.h>

int prioritet(char c) {
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/' || c == '%')
        return 2;
    if (c == '^')
        return 3;
    return 0;
}

std::string polskaConvert(std::string input) {
    std::string output = "";
    std::stack<char> s;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '(') {
            s.push(input[i]);
        }
        else if (input[i] == ')') {
            while (s.top() != '(') {
                output += s.top();
                s.pop();
            }
            s.pop();
        }
        else if (prioritet(input[i])) {
            while (!s.empty() && s.top() != '(' && prioritet(s.top()) >= prioritet(input[i])) {
                output += s.top();
                s.pop();
            }
            s.push(input[i]);
        }
        else {
            output += input[i];
        }
    }
    while (!s.empty()) {
        output += s.top();
        s.pop();
    }
    return output;
}


double calc(double a, double b, char c) {
    std::cout << "(" << a << c << b << ")\n";
    if (c == '+')
    {
        return a + b;
    }
    if (c == '-')
    {
        return a - b;
    }
    if (c == '*')
    {
        return a * b;
    }
    if (c == '/')
    {
        return a / b;
    }
    if (c == '%')
    {
        return (int)a % (int)b;
    }
    if (c == '^')
    {
        return pow(a, b);
    }
    

}

double calc2(std::stack<char>& s, std::map<char, double> m) {
    char c = s.top();
    s.pop();
    if (prioritet(c)) {
        return calc(calc2(s,m),calc2(s,m), c);
    }
    else {
        return m[c];
    }
}

double calculatePoslka(std::string input) {
    std::map<char, double> m;
    std::stack<char> s;
    for (int i = 0; i < input.length(); i++) {
        if ((!prioritet(input[i])) && m.find(input[i]) == m.end()) {
            std::cout << input[i] << "=";
            std::cin >> m[input[i]];
        }
        s.push(input[i]);
    }
    return calc2(s,m);
}


int main() {
    std::string input;
    std::cin >> input;
    std::string output = polskaConvert(input);
    std::cout << output << '\n';
    std::cout<<calculatePoslka(output);
  

}
