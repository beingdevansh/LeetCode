class BrowserHistory {
public:
    stack<string> past;
    stack<string> future;
    string current;

    BrowserHistory(string homepage) {
        current = homepage;
    }

    void visit(string url) {
        past.push(current);
        current = url;
        while (!future.empty())
            future.pop();
    }

    string back(int steps) {
        while (steps > 0 && !past.empty()) {
            future.push(current);
            current = past.top();
            past.pop();
            steps--;
        }

        return current;
    }

    string forward(int steps) {
        while(steps > 0 && !future.empty())
        {
            past.push(current);
            current = future.top();
            future.pop();
            steps--;
        }

        return current;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */