fun main() {
    val expression = readLine()!!

    var total = 0
    var num = 0
    var isSum = true
    for (c in expression) {
        if (c == '-' || c == '+') {
            total += if (isSum) num else -num
            if (isSum) isSum = c == '+'
            num = 0
        }
        else {
            num = num * 10 + (c - '0')
        }
    }
    total += if (isSum) num else -num

    print(total)
}