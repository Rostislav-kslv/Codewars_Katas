using System;

public class Persist 
{
	public static int Persistence(long n) 
	{
		    int counter = 0;
    while (true)
    {
        if (n < 10) break;

        n = NumsMultiply(n);

        counter++;
    }
    return counter;
	}
  
  public static long NumsMultiply(long n) {
    long result = 1;
    
    while(n > 0)
    {
        result = result * (n % 10);
        n = n / 10;

    }

    return result; }
}
