
import java.io.*;

class Program {
	public static void main(String[] args) throws IOException{

		int n;
		System.out.printf("Enter Size : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		int kbd[] = new int[n];
		for(int i = 0; i<n; i++)
			kbd[i] = Integer.parseInt(br.readLine());
		
		for(int i = 0; i<n; i++)
			System.out.printf("%d ",kbd[i]);

	}
}