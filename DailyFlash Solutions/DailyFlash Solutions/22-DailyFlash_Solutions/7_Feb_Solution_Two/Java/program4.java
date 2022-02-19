
import java.io.*;
class Program{
	public static void main(String[] args) throws  IOException{
	
		int n = 0;
		System.out.printf("Enter Size : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n ; j++){

				if(j <= n-i){
					System.out.printf("\t");
				}
				else{
					System.out.printf("%c\t",(64+j));
				}

			}
			System.out.printf("\n");
		}	

	}
}