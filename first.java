package bao;
import java.util.*;
import java.io.*;
public class first {
	static int  firstUnique(String a) {//�ҳ��ַ�����Ψһ��һ�����ظ��ַ�����
		int b[]=new int[26];
		int h=0;
	
		char  c[] = a.toCharArray();
	    int  size=a.length();
        for( int i= 0;i<size;i++) {//�������ĸ��ͬ�ĸ�����û����Ĭ��Ϊ0
        	b[c[i]-'a']=b[c[i]-'a']+1;
	}
	    for(int k=0;k<size;k++) {//�ҳ���Ҫ�����ĸ�����������±�
	    	if(b[c[k]-'a']==1) {
	    	return k;
	    		}
	        
	    }
	        return -1;
		 
		 
	 }

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		System.out.print("s=:");
		String s = in.nextLine();
	    int q=firstUnique(s);
        System.out.print("���أ�");
        System.out.print(q);
        System.out.print(".");
	}

}

