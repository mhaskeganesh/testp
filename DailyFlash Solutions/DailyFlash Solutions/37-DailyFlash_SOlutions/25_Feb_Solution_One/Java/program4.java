class Program4 {
	public static void main(String[] args) {
		int num = 1;
		for(int i = 0; i < 4; i++) {
			for(int j = 0; j < 4; j++) {
				System.out.print(num + " ");
				if(j < 3) {
					num = num % 4 + 1;
				}	
			}
			System.out.println();
		}
	}
}
