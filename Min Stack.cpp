#include<isotream>
#include<stack>
using namespace std;
class MinStack {
public:
    void push(int x) {
        st.push(x);
        if (stm.empty() || stm.top() >= x) stm.push(x);
    }

    void pop() {
        int top = st.top(); st.pop();
        if (top <= stm.top()) stm.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return stm.top();
    }
private:
    stack<int> st;
    stack<int> stm;
};
int main()
{

}
