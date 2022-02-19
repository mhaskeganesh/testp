import java.io.*;


class Program2{

	public static void main(String args[])throws IOException{


		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int rem,position=1,power=1;
		System.out.printf("Enter four digit the binary number \n");
		int num = Integer.parseInt(br.readLine());
		int sum = 0;

		while(num!=0){

			rem = num%10;

			if(rem == 1){

				sum = sum + power;
			}

			power = powerOf2(2,position);
			position++;

			num = num/10;

		}

		
		System.out.printf("%d\n",sum);
		
		int rev = 0;
		while(sum!=0){
		
			rem = sum%8;
			rev = 10*rev+rem;
			
			sum = sum/8;
			
		}

		//reverse octal
		int ans=0;
		while(rev!=0){
			rem = rev%10;
			ans = 10*ans + rem;

			rev = rev/10;
		}

		System.out.printf("Octal\n");
		System.out.printf("%d",ans);	
			
		

	}
	
	
	static int powerOf2(int under , int upper){


		while(upper !=1){
		
			under = 2*under;
			upper--;
		}	

		return under;

	}		
}	
