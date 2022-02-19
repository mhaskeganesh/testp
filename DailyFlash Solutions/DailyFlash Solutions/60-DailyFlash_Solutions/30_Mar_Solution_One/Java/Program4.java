import java.io.*;

class Program4 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		float len = 0,period = 0;

		System.out.printf("Enter Length of Pendulum\n");
		len = Float.parseFloat(br.readLine());		
	
		period = 2*3.142f*(float)(Math.sqrt(len/9.81));

		System.out.printf("Period of Pendulum = %.2f\n",period);
		
	}
}



