import java.io.*;


class Program1{
	
	public static void main(String args[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		double theta = Double.parseDouble(br.readLine());
		double alpha = Double.parseDouble(br.readLine());
		double radius = Double.parseDouble(br.readLine());

		System.out.printf("x = %f",radius*Math.sin(theta*(3.14/180))*Math.cos(alpha*(3.14/180)));
		System.out.printf("y = %f",radius*Math.sin(theta*(3.14/180))*Math.sin(alpha*(3.14/180)));
		System.out.printf("z = %f",radius*Math.cos(theta*(3.14/180)));
		
	}	

}	
