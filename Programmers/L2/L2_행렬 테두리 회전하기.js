function solution(rows, columns, queries) {
    let count = 1;
    const answer = [];
    const map = new Array(rows).fill(0).map(el => new Array(columns).fill(0).map(el => count++));
    
    for (let query of queries) {
        let y1 = query[0]-1, x1 = query[1]-1, y2 = query[2]-1, x2 = query[3]-1;
        let curr = 0, prev = map[y1+1][x1];
        let min = prev;
        
        for (let i = x1;i<=x2;i++) {
            curr = map[y1][i];
            map[y1][i] = prev;
            prev = curr;
            min = Math.min(min, prev);
        }
        
        for (let i = y1 + 1;i<=y2;i++) {
            curr = map[i][x2];
            map[i][x2] = prev;
            prev = curr;
            min = Math.min(min, prev);
        }
        
        for (let i = x2 - 1;i>=x1;i--) {
            curr = map[y2][i];
            map[y2][i] = prev;
            prev = curr;
            min = Math.min(min, prev);
        }
        
        for (let i = y2 - 1;i>y1;i--) {
            curr = map[i][x1];
            map[i][x1] = prev;
            prev = curr;
            min = Math.min(min, prev);
        }
        
        answer.push(min);
    }
    
    return answer;
}