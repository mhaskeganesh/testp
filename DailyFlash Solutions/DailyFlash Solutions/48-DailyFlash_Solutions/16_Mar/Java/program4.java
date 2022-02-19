

import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {

		int n,k =  0;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		for(int i = n; i >= 1; i--){
			for(int j = 1; j < n+i; j++){
				if(j > n-i){
					System.out.print(j + "\t");
				}
				else
					System.out.printf("\t");
			}
			System.out.printf("\n");
		}
	}
}
