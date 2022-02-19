import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{
		
		int n;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());

		for(int i = 1; i <= n*2 - 1; i++){
			for(int j = 1; j <= n; j++){
				if(i <= n && j <= i){
					System.out.printf("*\t");
				}
				else if(i > n && j > i - n) {
					System.out.printf("*\t");
				}
			}
			System.out.printf("\n");
		}
	}
}