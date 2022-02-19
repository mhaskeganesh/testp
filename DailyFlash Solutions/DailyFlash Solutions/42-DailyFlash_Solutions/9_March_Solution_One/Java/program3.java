import java.io.*;

class Program {
	public static void main(String ... kanif) throws IOException{

		int n;
		System.out.printf("Enter Number : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		while(true){
			n = Integer.parseInt(br.readLine());
			if(n < 0) {
				System.out.printf("negative Number\n");
				break;
			}
			System.out.printf("Square of %d : %d\n", n, n*n);
		}
	}
}