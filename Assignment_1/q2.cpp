#include <simplecpp>
#include <stack>
#include <unordered_map>

bool isValid(const string &s) {
    unordered_map<char, char> matching_pairs = {
        {')', '('},
        {'}', '{'},
        {']', '['}
};    
stack<char> stack;
    for (char c : s) {
        if (matching_pairs.find(c) == matching_pairs.end()) {
            stack.push(c);
        } else {
            if (stack.empty() || stack.top() != matching_pairs[c]) {
                return false;
            }
            stack.pop();}}
return stack.empty();
}
main_program {
    cout << boolalpha;
    string s;
    cin>>s;
    cout<<isValid(s)<<endl;
}

