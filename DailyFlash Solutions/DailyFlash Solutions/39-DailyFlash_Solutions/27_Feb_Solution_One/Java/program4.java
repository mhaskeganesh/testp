

import java.io.*;
class Program {
public static void main(String[] args) throws IOException {
		int n;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Number : ");
		n = Integer.parseInt(br.readLine());
		int j;
		int k = 65;
		for(int i = 0; i < n; i++){
			for(j = 0; j < n-i; j++){
				System.out.printf("%c\t", k);
				k = k + j + 1;
			}
			k = k - j;
			System.out.printf("\n");
		}
	}
}
