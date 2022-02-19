import java.io.*;

class Thrashing {
	public static void main(String ... kbd) throws IOException {
		int n = 0;
		System.out.printf("Enter Natural Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		try{
			n = Integer.parseInt(br.readLine());
		}
		catch (NumberFormatException ne){
			System.out.println("Not a Number");
			System.exit(0);
		}

		if(n <= 0 )
			System.exit(0);

		System.out.printf("Sum : %d\n", n*(n + 1)/2);
	}
}
