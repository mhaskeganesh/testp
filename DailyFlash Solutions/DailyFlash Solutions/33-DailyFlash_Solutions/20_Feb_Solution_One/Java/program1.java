import java.io.*;


class Program1{

	
	public static void main(String args[])throws IOException{

		BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the angle");
		double angle = Double.parseDouble(br.readLine());
		System.out.println("Enter the radius");
		int radius = Integer.parseInt(br.readLine());

		System.out.printf("x = %f",radius*Math.sin(angle*(3.14/180)));
		System.out.printf("y = %f",radius*Math.cos(angle*(3.14/180)));
	

			

	}	
}	
