import java.io.*;
class Demo{
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Input : ");
		int n1 = Integer.parseInt(br.readLine());
		int n2 = Integer.parseInt(br.readLine());
		int n3 = Integer.parseInt(br.readLine());
		System.out.println(n1>=0 && n2>=0 && n3>=0 && n1*n1 + n2*n2 == n3*n3?"Output : Satisfies pythagoras therom":"Output : Does not satisfies pythagoras therom");
	}
}
