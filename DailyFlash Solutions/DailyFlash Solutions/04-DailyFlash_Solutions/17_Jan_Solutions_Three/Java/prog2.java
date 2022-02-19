import java.io.*;
class Demo{
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Units : ");
		int unit = Integer.parseInt(br.readLine());
		if(unit >= 0) {
			if(unit <= 50) {
				System.out.println("Bill : " + unit * 0.50);
			} else if(unit > 50 && unit <= 100) {	
				System.out.println("Bill : " + unit * 0.75);
			} else if(unit > 100 && unit <= 250) {
				System.out.println("Bill : " + unit * 1.20);
			} else {
				System.out.println("Bill : " + unit * 1.50);
			}		
		} else {
			System.out.println("Enter valid input.");
		}
	}
}
