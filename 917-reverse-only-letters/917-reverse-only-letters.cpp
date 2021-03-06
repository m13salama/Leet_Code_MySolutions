const static auto fast = []{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l=0, r=s.size()-1;
        while(l < r){
            if(isalpha(s[l]) && isalpha(s[r])){
                swap(s[l],s[r]);
                l++; r--;
            }else if(!isalpha(s[l])) l++;
            else if(!isalpha(s[r])) r--;
        }
        return s;
    }
};