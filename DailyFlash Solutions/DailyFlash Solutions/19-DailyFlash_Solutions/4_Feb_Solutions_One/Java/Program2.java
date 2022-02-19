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
		


		

	}
	
	
	static int powerOf2(int under , int upper){


		while(upper !=1){
		
			under = 2*under;
			upper--;
		}	

		return under;

	}		
}	
