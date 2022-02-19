class Demo {
	public static void main(String[] args) {
		int inc = 0, k;
		for(int i = 0; i < 4; i++) {
			k = 0;
			for(int j = 0; j < 4 - i; j++) {
				System.out.print((char)(97 + inc + k) + " ");
				k++;	
			}
			inc += 2;
			System.out.println();
		}
	}
}
