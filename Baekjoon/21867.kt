import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.InputStreamReader
import java.io.OutputStreamWriter

fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val bw = BufferedWriter(OutputStreamWriter(System.out))

    val n = br.readLine().toInt()
    val s = br.readLine()
    val sb = StringBuilder(n)
    for (c in s) {
        if (c != 'J' && c != 'A' && c != 'V') sb.append(c)
    }

    bw.write(if (sb.isEmpty()) "nojava" else sb.toString())
    bw.flush()
    bw.close()
}