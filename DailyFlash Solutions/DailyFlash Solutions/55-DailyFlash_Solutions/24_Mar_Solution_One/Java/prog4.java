class Demo {
	public static void main(String[] args) {
		int temp = 5, num;
		for(int i = 0; i < 7; i++) {
			if(i < 4) {
				for(int j = 0; j < i + 1; j++) {
					System.out.print("*");
				}
			} else {
				for(int j = 0; j < 7 - i; j++) {
					System.out.print("*");
				}
			}
			System.out.println();
		}
	}
}
