import java.io.*;

class Thrashing {
	public static void main(String ... kbd) throws IOException {
	
		int n = -1 ,k;
		System.out.printf("Enter Size : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		try{
			n = Integer.parseInt(br.readLine());
		}
		catch (NumberFormatException ne){
			System.out.println("Not a Number");
			System.exit(0);
		}
		if(n< 0)
			System.exit(0);

		for(int i = 1; i <= n; i++){
			k = i % 2 == 0 ? 1 : 0;

			for(int j = 1; j <= n; j++){
				System.out.printf("%d  ", k);	
			}	
			System.out.printf("\n");
		}
		
	}
}