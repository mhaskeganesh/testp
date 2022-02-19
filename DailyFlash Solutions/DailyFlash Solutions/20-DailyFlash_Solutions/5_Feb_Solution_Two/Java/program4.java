import java.io.*;
class Program{

	public static void main(String[] args) throws IOException{
		
		int n = 0, k = 97;
		System.out.printf("Enter Size : ");
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		try{
			n = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException ne){
			System.exit(0);
		}
		for(int i = 1; i <= n; i++){
			for(int j = 0; j <= n-i ; j++){
				System.out.printf("%c\t", (k + j));
			}
			k = k + 2;
			System.out.printf("\n");
		}		

	}
}
