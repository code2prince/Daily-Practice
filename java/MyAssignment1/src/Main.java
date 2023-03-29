import java.util.*;

public class Main {
    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner sc = new Scanner(System.in);

        System.out.println("No. of players for each team:");
        int noOfPlayers = sc.nextInt();

        System.out.println("No. of overs:");
        int noOfOver = sc.nextInt();
        int t1score = 0;
        int t2score = 0;
        for (int team = 1; team <= 2; team++) {

            System.out.println("Batting Order for team:" + team);
            int tScore = 0;
            int wkt = 0;
            ArrayList<Player> ans = new ArrayList<>();
            Queue<Player> qq = new LinkedList();

            for (int i = 1; i <= noOfPlayers; i++) {
                System.out.println("P" + i);
                if (i > 2)
                    qq.offer(new Player(0, 0, 0, 0, "P" + i, null));
            }

            Player curr = new Player(0, 0, 0, 0, "p1", null);
            Player p2 = new Player(0, 0, 0, 0, "P2", null);

            boolean allOut = false;
            int flag = 0;
            for (int i = 1; i <= noOfOver; i++) {
                ArrayList<Player> ansTemp = new ArrayList<>();
                System.out.println("Over" + i);
                int flag2 = 0;

                // over of six balls
                for (int j = 0; j < 6; j++) {
                    String score = sc.next();

                    if (score.equals("W")) {
                        wkt++;
                        curr.setBall(curr.getBall() + 1);
                        ans.add(curr);
                        ansTemp.add(curr);
                        if (qq.isEmpty()) {
                            allOut = true;
                            break;
                        }
                        curr = qq.poll();

                    } else if (score.equals("Wd")) {
                        tScore += 1;
                        j--;
                        continue;
                    } else {
                        int scor = Integer.valueOf(score);
                        tScore += scor;
                        curr.setBall(curr.getBall() + 1);
                        curr.setScore(curr.getScore() + scor);
                        if (scor == 1 || scor == 3) {
                            if (j == 5) {
                                flag2 = 1;
                                continue;
                            }
                            if (flag == 0) {
                                Player temp = curr;
                                curr = p2;
                                p2 = temp;
                                flag = 1;
                            } else {
                                Player temp = curr;
                                curr = p2;
                                p2 = temp;
                                flag = 0;
                            }
                        } else {
                            if (scor != 2) {
                                if (scor == 4)
                                    curr.setFours(curr.getFours() + 1);
                                else
                                    curr.setSixes(curr.getSixes() + 1);
                            }
                        }
                    }
                }
                if (!ansTemp.contains(curr))
                    ansTemp.add(curr);
                if (!ansTemp.contains(p2))
                    ansTemp.add(p2);
                // code here
                System.out.println("Scorecard for Team :" + team);
                System.out.println("Player Name  Score  4s  6s  Balls");
                for (Player e : ansTemp) {
                    System.out.println(e.getPlayers() + "            " + e.getScore() + "    " +
                            e.getFours() + "    " + e.getSixes() + "   " + e.getBall());
                }
                for (Player e : qq) {
                    System.out.println(e.getPlayers() + "            " + e.getScore() + "    " +
                            e.getFours() + "    " + e.getSixes() + "   " + e.getBall());
                }
                System.out.println("Total: " + tScore + "/" + wkt);
                System.out.println("Overs: " + i);
                // printing end

                if (allOut == true)
                    break;

                if (flag2 == 0) {
                    if (flag == 0) {
                        Player temp = curr;
                        curr = p2;
                        p2 = temp;
                        flag = 1;
                    } else {
                        Player temp = curr;
                        curr = p2;
                        p2 = temp;
                        flag = 0;
                    }
                }
            }
            if (team == 1)
                t1score = tScore;
            else
                t2score = tScore;

            if (!ans.contains(curr))
                ans.add(curr);
            if (!ans.contains(p2))
                ans.add(p2);

        }
        System.out.println(String.format("Result: Team %d won the match by %d runs", t1score > t2score ? 1 : 2,
                Math.abs(t1score - t2score)));

    }
}
/*
 * 
 * No. of players for each team:
 * 5
 * No. of overs:
 * 2
 * Batting Order for team:1
 * P1
 * P2
 * P3
 * P4
 * P5
 * Over1
 * 2
 * 1
 * 2
 * Wd
 * W
 * 2
 * 4
 * Scorecard for Team :1
 * Player Name Score 4s 6s Balls
 * P2 2 0 0 2
 * P3 6 1 0 2
 * p1 3 0 0 2
 * P4 0 0 0 0
 * P5 0 0 0 0
 * Total: 12/1
 * Overs: 1
 * Over2
 * 2
 * 6
 * 4
 * 2
 * 2
 * 1
 * Scorecard for Team :1
 * Player Name Score 4s 6s Balls
 * p1 20 1 1 8
 * P3 6 1 0 2
 * P4 0 0 0 0
 * P5 0 0 0 0
 * Total: 29/1
 * Overs: 2
 * Batting Order for team:2
 * P1
 * P2
 * P3
 * P4
 * P5
 * Over1
 * 2
 * 3
 * 4
 * 6
 * 1
 * Wd
 * W
 * Scorecard for Team :2
 * Player Name Score 4s 6s Balls
 * p1 5 0 0 3
 * P3 0 0 0 0
 * P2 11 1 1 3
 * P4 0 0 0 0
 * P5 0 0 0 0
 * Total: 17/1
 * Overs: 1
 * Over2
 * 2
 * 3
 * 1
 * 2
 * W
 * W
 * Scorecard for Team :2
 * Player Name Score 4s 6s Balls
 * P2 18 1 1 7
 * P4 0 0 0 1
 * P5 0 0 0 0
 * P3 1 0 0 1
 * Total: 25/3
 * Overs: 2
 * Result: Team 1 won the match by 4 runs
 */