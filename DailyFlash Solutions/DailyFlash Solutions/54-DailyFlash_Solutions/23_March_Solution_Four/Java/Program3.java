class Program3 {


	public static void main(String[] args) {

		int num = 6;
		for(int i = 0; i < 4; i++){
			num = num + ((2*i) - 1);
			int num2 = num;
			for(int j = 0; j < 7-i; j++)
				if (j < i)
					System.out.print(" \t");
				else {
					System.out.print(num2 + "\t");
					num2+=i;
				}
			System.out.println();
		}


	}
}
