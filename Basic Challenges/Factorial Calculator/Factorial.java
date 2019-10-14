public class Factorial{

    public static long factorial(long n){
		if(n>0){
			return factorial(n-1)*n;
		}
		else
		{
			return 1;
		}
	}

    public static void main(String []args)
    {
        //Calculate factorial number using a recursive function
        factorial(6);
    }
}