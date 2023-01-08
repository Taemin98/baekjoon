import java.io.*;
import java.util.*;

class FastScanner {
    BufferedReader br;
    StringTokenizer st;

    public FastScanner() {
        br = new BufferedReader(new InputStreamReader(System.in));
    }

    String next() {
        while (st == null || !st.hasMoreElements()) {
            try {
                st = new StringTokenizer(br.readLine());
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        return st.nextToken();
    }

    int nextInt() {
        return Integer.parseInt(next());
    }

    long nextLong() {
        return Long.parseLong(next());
    }
}

class Bowling{
    boolean Db;
    boolean tk;

    public Bowling(){
        this.Db = false;
        this.tk = false;
    }
}


public class Main {
    static int frame = 10;
    static StringBuilder in ;
    static int i =0;
    static int idx = 0;
    static int frameUpCount=0;
    static boolean bonusFrame = false;
    static int score = 0;
    static Bowling bwc[];

    public static void main(String args[]) throws IOException{
        FastScanner sc = new FastScanner();
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        in = new StringBuilder(sc.next());

        bwc = new Bowling[10];

        for(int i=0; i<10; i++)
            bwc[i] = new Bowling();

        for(i=0; i<frame; idx++ ){

            if(frameUpCount >= 2){
                i++;
                frameUpCount = 0;
            }

            if(i<=9) {
                if(in.charAt(idx) == 'S') {
                    if (in.charAt(idx + 1) == 'S' && in.charAt(idx + 2) == 'S')
                        bwc[i].tk = true;
                    else if (in.charAt(idx + 1) == 'S')
                        bwc[i].Db = true;
                }


                if(in.charAt(idx) == 'P'){
                    bwc[i].tk = false;
                    bwc[i].Db = false;
                }
            }

            if(i >= frame)
                break;

            /* 10 프레임에서 보너스 게임 추가 */
            if(i== 9 && in.charAt(idx) == 'S') {
                frame += 2;
                bonusFrame = true;
            }
            else if (i == 9 && in.charAt(idx) == 'P') {
                frame++;
                bonusFrame = true;
            }

            score += changeScore(in.charAt(idx),idx);

        }

        bonusScore();

        bw.write(Integer.toString(score));

        bw.close();
    }

    public static int changeScore(char input,int idx){
        switch (input){
            case 'S':
                frameUpCount=2;
                return 10;
            case 'P':
                frameUpCount += (bonusFrame == false) ? 1 : 2;
                return 10 - (in.charAt(idx-1) - '0');
            case '-':
                frameUpCount += (bonusFrame == false) ? 1 : 2;
                in.replace(idx,idx+1, "0");
                return 0;
            default:
                frameUpCount += (bonusFrame == false) ? 1 : 2;
                return input - '0';
        }
    }


    public static void bonusScore(){
        frame = 9;
        idx = 0;
        frameUpCount = 0;
        bonusFrame = false;
        boolean cover = false;  // 터키이상 일 경우


       for(i=0; i<frame; idx++ ){

            if(frameUpCount >= 2){
                i++;
                frameUpCount = 0;
            }

            if(bwc[i].tk == true){
                score += 20;
                i++;
                frameUpCount =0;
            }else if(bwc[i].Db == true){
                score += (i != 9) ? 10 + changeScore(in.charAt(idx+2),idx) : 0;
                i++;
                frameUpCount =0 ;
           }else if(in.charAt(idx) == 'S' && i<9){
                for(int j=idx+1; j <= idx+2; j++){
                    score += changeScore(in.charAt(j),j);
                }
            }else if(in.charAt(idx) == 'P'){
                score += changeScore(in.charAt(idx+1),idx);
            }else{
                frameUpCount++;
            }

        }


    }

}