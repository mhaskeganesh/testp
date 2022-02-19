class Demo {
	public static void main(String[] args) {
		boolean [] arr = new boolean[101];
		for(int i = 0; i < 101; i++) {
			arr[i] = true;
		}
		for(int i = 2; i * i <= 100; i++) {
			if(arr[i]) {
				for(int j = i * i; j <= 100; j += i) {
					arr[j] = false;
				}
			}
		}

		for(int i = 2; i < 101; i++) {
			if(arr[i]) {
				System.out.print(i + " ");
			}
		}
	}
}
