fun main()
{
    var t = readLine()!!.toLong()
    while(t > 0)
    {
        val n = readLine()!!.split(" ").map { it.toInt() }
        val fl = readLine()!!.split(" ").map { it.toInt() }

        var ans = 0
        for (i in n[1] until n[0] + 1)
        {
            var item = i / n[1];
            var temp = 0
            for(j in (n[0] - 1) - (i - item) downTo (n[0] - 1) - (i - 1))
            {
                temp += fl[j]
            }
            if(temp > ans)
            ans = temp
        }
        println(ans)
        t--
    }
}