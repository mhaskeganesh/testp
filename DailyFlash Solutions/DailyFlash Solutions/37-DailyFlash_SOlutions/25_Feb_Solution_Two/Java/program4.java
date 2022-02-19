

import java.io.*;
class Program {
public static void main(String[] args) throws IOException {
		int n = 4, m = 4, k = 1;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Number : ");
		n = Integer.parseInt(br.readLine());
		for(int i = 0; i < n; i++){
			k = 1;
			m = n - i + 1;
			for(int j = 0; j < n; j++){
				if(j < i){
					System.out.printf("%d\t", m++);
				}
				else {
					System.out.printf("%d\t", k++);
				}
			}
			System.out.printf("\n");
		}
	}
}