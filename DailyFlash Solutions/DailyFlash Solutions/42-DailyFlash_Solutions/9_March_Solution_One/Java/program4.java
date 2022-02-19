
import java.io.*;

class Program {
	public static void main(String ... kanif) throws IOException{

		int n;
		System.out.printf("Enter Number : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		n = Integer.parseInt(br.readLine());
		for(int i = 0; i < n; i++){
			for(int j = 1; j <= n*2-1; j++){
				if(j >= (n*2)/2 - i && j <= (n*2)/2 + i){
					System.out.printf("*\t");
				}
				else{
					System.out.printf("\t");
				}
			}
			System.out.printf("\n");
		}
	}
	}