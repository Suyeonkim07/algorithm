
//x만큼 간격이 있는 n개의 숫자

class Solution {
    public long[] solution(int x, int n) {
        long answer[] = {};
        answer = new long[n];
        int j= 0;
        for(int i=0; i < n; i++){
            answer[i] = answer[j] + x;
            j = i;
        }
        return answer;
    }
}
