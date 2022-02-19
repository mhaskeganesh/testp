import java.io.*;


class Program3{

	
	 public static void main(String args[])throws IOException{

		BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));
		int num = Integer.parseInt(br.readLine());
		int diff = Integer.parseInt(br.readLine());
		
		for(int itr = num ; itr>0 ; ){
		
			System.out.printf("%d\n",itr);
			itr = itr - diff;
		}		

	}	
}	
