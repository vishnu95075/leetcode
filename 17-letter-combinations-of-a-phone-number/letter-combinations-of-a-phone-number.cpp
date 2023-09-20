class Solution {
private:
const vector<string> pad = {
    "", "", "abc", "def", "ghi", "jkl",
    "mno", "pqrs", "tuv", "wxyz"};

void solve(int i,string digits, vector<string> &result,string temp){
    if(i==digits.size()){
        result.push_back(temp);
        return ;
    }

    int num = digits[i]-'0';
    string val = pad[num];

    for(int j=0; j<val.size(); j++){
        temp.push_back(val[j]);
        solve(i+1,digits,result,temp);
        temp.pop_back();
    }
}

public:
vector<string> letterCombinations(string digits) {
    if (digits.empty()) return {};
    vector<string> result;
    string temp;
    solve(0,digits,result,temp);
    return result;
}
};