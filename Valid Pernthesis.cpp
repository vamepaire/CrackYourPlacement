class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
      for(int i=0;i<s.length();i++)
      {
          char c=s[i];
        if(s[i]=='('||s[i]=='{'||s[i]=='[')st.push(s[i]);
        else{
            if (st.empty() || // if the stack is empty or 
                    (c == ')' && st.top() != '(') || 
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '[')) {
                    return false; 
                    }
                     st.pop();
        
      
      }
      }
      if(st.empty())
      return true;

      else return false;
    }
};
