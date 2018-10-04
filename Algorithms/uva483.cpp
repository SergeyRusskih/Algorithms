
#include <algorithm>
#include <cstdio>

#include <string>
#include <stack>

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    string line;
    while (getline(cin, line)) {
        istringstream stringStream(line);

        stack<char> stack;
        for (int i = 0; i <= line.length(); i++) {
            char current = line[i];
            if (current == 0 || current == ' ') {
                while (!stack.empty()) {
                    cout << stack.top();
                    stack.pop();
                }

                if (current == ' ')
                    cout << current;
            }
            else {
                stack.push(current);
            }
        }

        cout << endl;
    }

    return 0;
}
