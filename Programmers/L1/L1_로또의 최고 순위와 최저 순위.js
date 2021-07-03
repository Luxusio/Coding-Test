function solution(lottos, win_nums) {
    let set = new Set(win_nums);
    let match = lottos.filter(num => set.has(num)).length;
    let zero = lottos.filter(num => num == 0).length;
    return [ Math.min(6, 7 - match - zero), Math.min(6, 7 - match)];
}