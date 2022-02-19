import java.io.*;

class Program {
	public static void main(String ... kanif) throws IOException{

		int n;
		System.out.printf("Enter Number : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		while(n != 0){
			if(n%10 == 0) {
				System.out.printf("Numbers is Duck\n");
				return;
			}
			n = n / 10;
		}
		System.out.printf("Number is not Duck Number\n");
	}
}