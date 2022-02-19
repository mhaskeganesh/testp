import java.io.*;
class Program {
	static int isPrime(int n) {

		for(int i = 2; i <= n/2; i++){
			if(n%i == 0)
				return 0;
		}	
		return 1;
	}
	static public void main (String ... kanif) throws IOException{
		int n;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		System.out.printf("Prima Factors are : ");
		for(int i = 2; i<= n/2; i++){
			if(n%i == 0)
				if(isPrime(i) == 1){
					System.out.printf("%d ", i);	
				}
		}
		System.out.printf("\n");
	}
}