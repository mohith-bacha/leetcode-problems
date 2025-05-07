class CustomStack {
public:
    vector<int> st;
    int n;
    CustomStack(int maxSize) {
        this->n=maxSize;
    }
    
    void push(int x) {
        if(st.size()<n){
            st.push_back(x);
        }
    }
    
    int pop() {
        if(st.empty())
        {
            return -1;
        }
        else
        {
            int top=st.back();
            st.pop_back();
            return top;
        }
    }
    
    void increment(int k, int val) {
        for (int i=0;i<min(k,(int)st.size());i++){
            st[i]+=val;
        }
    }
};
