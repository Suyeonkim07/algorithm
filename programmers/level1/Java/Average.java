
//평균구하기 문제

class Average {
    public double solution(int[] arr) {
        double sum = 0;
        double count = 0;
        for(int i=0; i < arr.length; i++){
            sum += arr[i];
            count++;
        }
        return sum / count;
    }
}
