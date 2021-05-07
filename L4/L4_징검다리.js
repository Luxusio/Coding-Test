function solution(distance, rocks, n) {
    let start = 0, end = 1000000001, answer = 0;
    rocks = rocks.sort((a1, a2) => a1 - a2);
    
    while (start <= end) {
        let mid = Math.floor((start + end) / 2);
        let count = 0, pos = 0;
        for (let rock of rocks) {
            if (mid > rock - pos) count++;
            else pos = rock;
        }
        if (mid > distance - pos) count++;
        
        if (count <= n) {
            answer = Math.max(answer, mid);
            start = mid + 1;
        }
        else end = mid - 1;
    }
    
    return answer;
}