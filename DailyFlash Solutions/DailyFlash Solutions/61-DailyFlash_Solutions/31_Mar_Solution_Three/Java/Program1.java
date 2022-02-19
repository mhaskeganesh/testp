import java.io.*;

class Program1{

	public static void main(String[] args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the String : ");
		String s = br.readLine();


		System.out.println("Length of String is : " + s.length());
	}

}
