fun main() 
{
    var t = readLine()!!.toLong()
    while(t > 0)
    {
        val n = readLine()!!
        // println(n)
        var ans = 0L
        var count = 0L
        for(i in n)
        {
            if(i == 'w')
            {
                ans++;
                count = 0;
            }
            else
            {
                if(count == 0L)
                count++
                else
                {
                    ans++;
                    count = 0
                }
            }
        }
        println(ans)
        t--
    }
}