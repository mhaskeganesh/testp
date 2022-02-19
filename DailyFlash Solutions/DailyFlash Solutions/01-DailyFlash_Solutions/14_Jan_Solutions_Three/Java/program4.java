
import java.io.*;

class Program {

	public static void main (String ... kbd) throws IOException {
	
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Size :\n");
		int a = Integer.parseInt(br.readLine());
		
		for(int i = 1; i <= a*a; i++ ){
			if(i % a == 0){
				System.out.printf("1\n");
			}
			else{
				System.out.printf("1 ");
			}
		}	
	}
}
