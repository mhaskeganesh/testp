import java.io.*;
class Program {
		public static void main(String[] args) throws IOException{
			int n;
			System.out.printf("Enter Number : ");
			BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			n = Integer.parseInt(br.readLine());
			for(int i = 1; i <= n*2 - 1; i++){
				for(int j = n; j >= 1; j--){

					if(j <= i && i <= n){
						System.out.printf("0\t");
					}
					else if(i > n && j <= n - (i-n)) {
						System.out.printf("0\t");
					}
					else{
						System.out.printf("\t");
					}
				}
				System.out.printf("\n");
			}
		}
	}