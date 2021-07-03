int solution(int left, int right) {
    int answer = 0;
    while (left <= right) {
        int half = left / 2, amount = left == 1 ? 1 : 2;
        for (int i = 2; i <= half; i++) if (left % i == 0) amount++;
        answer += amount % 2 == 0 ? left : -left;
        left++;
    }
    return answer;
}