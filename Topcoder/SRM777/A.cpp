class LimpingDog {
    
  	public:
    	int countSteps(int time) 
	    {
	    	int ans=0;
	    	int i=0;
	    	while(i<time)
	    	{
	    		ans++;
	    		if(ans%4==2)
	    			i++;
	    		if(ans%47==0)
	    			i+=42;
                i++;
	    	}
	    	return ans;
	    }
};