import java.io.*;


class Program2{

	public static void main(String args[])throws IOException{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int num = Integer.parseInt(br.readLine());

		int bin[] = new int[32];
		int itr = 0;


		while(num!=0){
		
			int rem =num%2;

			bin[itr]=rem;	

			itr++;
			num= num/2;

		}	


		for(int jtr = itr -1 ; jtr>=0 ;jtr--){
		
			System.out.printf("%d",bin[jtr]);
		}
	}	

}	
