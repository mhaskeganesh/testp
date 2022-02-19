class Demo {

	public static void main(String[] args) {
		int num = 65;
		for(int i = 0; i < 4; i++) {
			for(int j = 0; j < 4 - i; j++) {
				System.out.print((char)(num) + " ");
				if(j < 3 - i)
					num += j + 1;
			}
			System.out.println();
		}
	}
}
