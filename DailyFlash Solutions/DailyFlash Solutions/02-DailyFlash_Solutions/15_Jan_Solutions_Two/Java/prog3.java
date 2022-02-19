import java.io.*;
class Demo{
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Input : ");
		int n = Integer.parseInt(br.readLine());
		System.out.println(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12 ? "31 days":n!=2 && n>0&&n<=12?"30 days":n==2 ? "28 or 29 days":"Enter valid month");
	}
}
