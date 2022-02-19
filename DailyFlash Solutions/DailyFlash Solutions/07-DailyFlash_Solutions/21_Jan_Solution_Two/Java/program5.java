
import java.io.*;

class Scheduling {
	public static void main(String[] kbd) throws IOException{
		
		int n = 0;
		System.out.printf("Enter Size : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		try {
			n = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException ne){
			System.out.printf("Invalid Entry\n");
			System.exit(0);
		}

		if(n <= 0)
			System.exit(0);
			
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= i; j++)
				System.out.printf("0  ");
			System.out.printf("\n");
		}
	}
}
