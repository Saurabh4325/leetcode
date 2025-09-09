class Solution {
    public int lengthOfLongestSubstring(String s) {
        int maxi = 0;
        for(int i=0; i<s.length(); i++){
            HashSet<Character> set = new HashSet<>();
            for(int j=i; j<s.length(); j++){
                if(!set.contains(s.charAt(j))){
                    set.add(s.charAt(j));
                    maxi = Math.max(set.size(),maxi);
                }else{
                    break;
                }
            }
        }
        return maxi;
    }
}