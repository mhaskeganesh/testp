import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{

		float len;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Fre in Hz\n");
		float per = Float.parseFloat(br.readLine());

		/*float per = (float)((2*3.142)/Math.sqrt(len/9.81));
		float fre = 1/per;
		System.out.printf("Period of that pendulum is : %f seconds\n", per);
		System.out.printf("Frequency of that pendulum is : %f Hz\n", fre);
		*/

		/*float g = (4*3.142f*3.142f*len)/(per*per);
		System.out.printf("Acceleration of that pendulum is : %f m/sec sq\n", g);*/
		len = (4*3.142f*3.142f*per*per)/9.81f;
		System.out.printf("Length of that pendulum is : %f m/sec sq\n", len);

		return;
	}
}
