
import java.io.*;
class Program {
	static public void main(String ... kbd)throws IOException {
		int n;
		System.out.println("Enter Number : ");	
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		int k = 0, sum, temp = n;
		while(n != 0) {
			sum = 0;
			for(int i = 1; i < (n%10); i++){
				if((n%10)%i == 0){
					sum = sum + i;
				}
			}
			
			if(sum == n%10){
				System.out.print("" + n%10 + " ");
				k = 1;
			}
			n = n / 10;
		}
		if( k == 0){
			System.out.println("The Number " + temp + " does not have any digit , which is perfect in nature");	
		}
		else{
			System.out.println();	
		}
	}
}
