class Solution {
    public String smallestNumber(String pattern) {
        Stack<Integer> s = new Stack<>();
        StringBuilder result = new StringBuilder();
        for(int i=0;i<=pattern.length();i++) {
            s.push(i + 1);
            if(i == pattern.length() || pattern.charAt(i) == 'I') {
                while(!s.isEmpty()) {
                    result.append(s.pop());
                }
            }
        }
        return result.toString();
    }
}
