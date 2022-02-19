import java.io.*;
class Demo{
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Radius : ");
		float r = Float.parseFloat(br.readLine());
		System.out.println(r >= 0 ? "Area : " + 3.14 * r * r : "Enter valid input.");
	}
}
