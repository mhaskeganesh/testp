import java.io.*;
class Demo{
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Input : ");
		int n1 = Integer.parseInt(br.readLine());
		System.out.println(n1%5==0 && n1%11==0?"Output : Divisible":"Output : Not divisible");
	}
}
