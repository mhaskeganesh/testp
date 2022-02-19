

import java.io.*;
class Program {
public static void main(String[] args) throws IOException {
		int n;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Number : ");
		n = Integer.parseInt(br.readLine());
		int j;
		for(int i = 0; i < n; i++){
			for(j = 0; j < n-i; j++){
				System.out.printf("%d%c\t", (i+j),(j+65));
			}
			System.out.printf("\n");
		}
	}
}
