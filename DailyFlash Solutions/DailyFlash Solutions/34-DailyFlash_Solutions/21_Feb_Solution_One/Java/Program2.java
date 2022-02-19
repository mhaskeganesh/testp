import java.io.*;


class Program2{
	
	public static void main(String args[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num = Integer.parseInt(br.readLine());

		int oct[] = new int[5];



		while(num!=0){
			int rem = num%10;
			int temp = rem;
			int octrem;
			int itr = 0;
			while(rem!=0){
				octrem = rem%8;
				oct[itr]=octrem;

				rem = rem /8;
				itr++;
			}
			System.out.printf("Oct of num %d = ",temp);
			for(int i = itr-1;i>=0;i--){

				System.out.printf("%d",oct[i]);
			}
			System.out.printf("\n");

			num = num/10;


		}
		
	}	

}	
