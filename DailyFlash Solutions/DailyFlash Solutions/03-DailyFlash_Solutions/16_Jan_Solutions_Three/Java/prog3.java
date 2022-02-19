qimport java.io.*;
class Demo{
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Input : ");
		int year = Integer.parseInt(br.readLine());
		System.out.println(year>=0 && year%100==0 ? year%400==0 ? "Leap year" : "Not a leap year" : year>=0 && year%4==0 ? "Leap year" : "Not a leap year");
	}
}
