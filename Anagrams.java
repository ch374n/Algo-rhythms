/*
	Given two numbers, find whether they're anagrams or not	

	Functions used 
		1) toCharArray()
*/

class Anagrams {
	public static void main(String[] args) {
		int character[] = new int[256];
		String one = "champ";
		String two = "champ";
		for(char c : one.toCharArray()) {
			character[c]++;
		}	
		for(char c : two.toCharArray()) {
			character[c]--;
		}
		for(int i : character) {
			if(i != 0) System.out.println("Not anagrams"); break;
		}

	}
}