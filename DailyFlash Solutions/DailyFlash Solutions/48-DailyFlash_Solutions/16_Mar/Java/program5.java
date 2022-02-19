
import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {

		float x1,y1, x2, y2, x3, y3;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("1st point(A)  : \n");
		x1 = Float.parseFloat(br.readLine());
		y1 = Float.parseFloat(br.readLine());
		System.out.printf("2nd point(B)  : \n");
		x2 = Float.parseFloat(br.readLine());
		y2 = Float.parseFloat(br.readLine());
		System.out.printf("1st point(C)  : \n");
		x3 = Float.parseFloat(br.readLine());
		y3 = Float.parseFloat(br.readLine());
		double ab =  Math.sqrt(Math.pow(x2-x1, 2) + Math.pow(y2-y1, 2));
		double bc =  Math.sqrt(Math.pow(x3-x2, 2) + Math.pow(y3-y2, 2));
		double ac =  Math.sqrt(Math.pow(x3-x1, 2) + Math.pow(y3-y1, 2));
		System.out.printf("Distance of Line AB: %f\n", ab);
		System.out.printf("Distance of Line BC: %f\n", bc);
		System.out.printf("Distance of Line AC: %f\n", ac);
		System.out.printf("Perimeter of Triangle : %f\n",ab + bc + ac);

		double p = (ab + bc + ac )/ 2;
		System.out.printf("Semi-Perimeter of Triangle : %f\n", p);
		double area = Math.sqrt(p*(p-ab)*(p-ac)*(p-bc));
		System.out.printf("Area of Triangle : %f\n",area);
		System.out.printf("Radius of In-Circle : %f\n",area/p);

	}
}
