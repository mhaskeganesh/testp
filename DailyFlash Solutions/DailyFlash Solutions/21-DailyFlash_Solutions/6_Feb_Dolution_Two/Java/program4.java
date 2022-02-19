
import java.io.*;
class Program {
	
	public static void main(String[] args) throws IOException{
		

		int n =  0, k = 1;
		System.out.printf("Enter Size : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		try{
			n = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException exc){
			System.exit(0);
		}

		if(n<=0)
			System.exit(0);
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n ; j++){

				if(j <= n-i){
					System.out.printf("\t");
				}
				else{
					System.out.printf("%c\t",(64+k));
					k++;
				}

			}
			k = 1;
			System.out.printf("\n");
		}	

	}
}