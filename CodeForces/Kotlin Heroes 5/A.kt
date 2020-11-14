fun main()
{
    var t = readLine()!!.toLong()
    // println(t)
    while(t > 0)
    {
        var n = readLine()!!.toLong()
        val fl = readLine()!!.split(" ").map { it.toLong() }
        // println(n)
        // println(fl[0])

        var ans = 0L
        for (i in fl)
        {
            var sum = 0L
            for(j in fl)
            {
                if(j >= i)
                sum += i
            }
            if(sum >= ans)
                ans = sum
        }
        n += 1
        n -= 1
        println(ans)
        t--
    }
}