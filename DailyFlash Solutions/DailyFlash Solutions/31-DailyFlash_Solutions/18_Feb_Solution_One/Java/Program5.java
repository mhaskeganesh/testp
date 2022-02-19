import java.io.*;


class Program5{

	
	public static void main(String args[])throws IOException{
		
		BufferedReader br  =new BufferedReader(new InputStreamReader(System.in));
		 int num = Integer.parseInt(br.readLine()); 
		 
		 int temp = num;
		while(num!=0){

			int rem = num%10;

			if(temp%rem==0)
				System.out.printf("%d",rem);
	
			num = num/10;
		}	
	}	
}	
