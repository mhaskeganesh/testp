

import java.io.*;
class Program {
public static void main(String[] args) throws IOException {

		float x1,y1, x2, y2;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("1st point  : \n");
		x1 = Float.parseFloat(br.readLine());
		y1 = Float.parseFloat(br.readLine());
		System.out.printf("2nd point  : \n");
		x2 = Float.parseFloat(br.readLine());
		y2 = Float.parseFloat(br.readLine());
		System.out.printf("Mid point : (%f, %f)\n", (x1 + x2)/2, (y1+y2)/2);
	}
}