import java.io.*;
class Demo{
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Input : ");
		int p = Integer.parseInt(br.readLine());
		float r = Float.parseFloat(br.readLine());
		int n = Integer.parseInt(br.readLine());
		System.out.println(p>=0 && r>=0 && n>=0 ? "Output : " + (p*r*n/100):"Output : Enter valid input");
	}
}
