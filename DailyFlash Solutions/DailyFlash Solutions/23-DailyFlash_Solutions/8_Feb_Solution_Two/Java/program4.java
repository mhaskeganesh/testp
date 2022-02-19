
import java.io.*;

class Program {
	public static void main(String[] args) throws IOException{
	
		int n, k = 1;
		System.out.printf("Enter Size: ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());

		for(int i = 1; i <= n; i++){
			k = 1;
			for(int j = 1; j <= n ; j++){

				if(j <= (n-i)){
					System.out.printf("\t");
				}
				else if(j == (n-i+1)){
					System.out.printf("=\t");
				}
				else{
					System.out.printf("%d\t",k);
					k++;
				}

			}
			System.out.printf("\n");
		}	

	}
}