int lengthOfLongestSubstring(string s) {
    int mx = -1, start = 0, end;
    unordered_map<char, int> mp;
    if(s.length() == 0)
        return 0;
    if(s.length() == 1)
        return 1;
    for(end = 0; end < s.length(); end++){
        if(mp.find(s[end]) != mp.end()){
            start = max(start, mp[s[end]] + 1);
        }
        mp[s[end]] = end;
        mx = max(mx, end - start + 1);
    }
    return mx;
}
