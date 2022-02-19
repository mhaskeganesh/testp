import java.io.*;



class Program0 {


	static float factorial(int num){

		float fact = 1;
		for(int i = 1; i <= num; i++){

			fact*=i;
		}
		return fact;
	}

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		float sum = 0;
		int l = 0;
		System.out.printf("Enter The Length of the Series\n");
		l = Integer.parseInt(br.readLine());

		for(int i = 1; i <= l; i++)
			sum+=(1/Program0.factorial(i));
		System.out.println("Sum of Series = "+String.format("%.4f",(float)sum));
	}
}
