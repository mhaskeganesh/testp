import java.io.*;
class Program {
	static float pie = 3.142f;
	public static void main(String[] args) throws IOException{
		System.out.printf("Enter Any String : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String n = br.readLine();
		System.out.println(n.length());
	}
}
