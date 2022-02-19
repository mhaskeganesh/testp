import java.io.*;


class Program2{

	
	public static void main(String args[])throws IOException{

		BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));
		int num = Integer.parseInt(br.readLine());
		
		while(num!=0){
	
			int rem = num%10;

			System.out.printf("hex no. %d = %d\n",rem,rem);

			num = num/10;
		}		

	}	
}	
