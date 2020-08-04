// Given an integer (signed 32 bits), write a function to check whether it is a power of 4.

class Solution {
    public boolean isPowerOfFour(int num) {
    	while(num >= 4) {
    		if(num % 4 !=0){
    			return false;
    		}
    		num = num/4;
    	}
        return num ==1
    }
};