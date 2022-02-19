import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{
		int x1, y1, x2, y2, x3, y3;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter A ");
		x1 = Integer.parseInt(br.readLine());
		y1 = Integer.parseInt(br.readLine());
		System.out.printf("Enter B ");
		x2 = Integer.parseInt(br.readLine());
		y2 = Integer.parseInt(br.readLine());
		System.out.printf("Enter C ");
		x3 = Integer.parseInt(br.readLine());
		y3 = Integer.parseInt(br.readLine());

		float ab = (float)Math.sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
		float bc = (float)Math.sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
		float ac = (float)Math.sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
		
		float s = (ab + bc + ac)/2;
		float area = (float)Math.sqrt(s *(s-ab)*(s-bc)*(s-ac));
		System.out.printf("Height : %f\n", (2*area)/ab);
	}
}