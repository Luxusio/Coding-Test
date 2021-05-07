function solution(n, s, a, b, fares) {
    const dist = new Array(n+1).fill(0).map(el => new Array(n+1).fill(2000001));
    for (let i = 1; i <= n; i++) dist[i][i] = 0;
    for (let c of fares) {
        dist[c[0]][c[1]] = c[2];
        dist[c[1]][c[0]] = c[2];
    }
    
    // Floyd-Warshall
    for (let m = 1; m <= n; m++) {
        for (let s = 1; s <= n; s++) {
            for (let e = 1; e <= n; e++) {
                if (dist[s][e] > dist[s][m] + dist[m][e])
                    dist[s][e] = dist[s][m] + dist[m][e];
            }
        }
    }
    
    let answer = 2000001;
    for (let m = 1; m <= n; m++) {
        answer = Math.min(answer, dist[a][m] + dist[b][m] + dist[s][m]);
    }
    
    return answer;
}