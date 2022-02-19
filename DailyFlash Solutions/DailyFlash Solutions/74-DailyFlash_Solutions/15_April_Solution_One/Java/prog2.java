import java.io.*;

class Program {
	public static void main (String ... kbd) throws IOException {
		int k = 0, len = 1,i;
		BufferedReader  br = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Enter String : ");
		String str = br.readLine();
		System.out.print("Enter Sub String : ");
		String substr = br.readLine();

		str = str.replace(substr, "");
		System.out.println(str);
	}
}
