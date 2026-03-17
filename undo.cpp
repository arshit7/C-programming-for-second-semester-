#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> undoStack, redoStack;
    string action;

    // Perform actions
    undoStack.push("Type A");
    undoStack.push("Type B");
    undoStack.push("Type C");

    cout << "Current Action: " << undoStack.top() << endl;

    // Undo
    redoStack.push(undoStack.top());
    undoStack.pop();
    cout << "After Undo: " << undoStack.top() << endl;

    // Redo
    undoStack.push(redoStack.top());
    redoStack.pop();
    cout << "After Redo: " << undoStack.top() << endl;

    return 0;
}