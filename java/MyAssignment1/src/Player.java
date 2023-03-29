public class Player extends Cricket {
    private String players;
    private Cricket c;

    public String getPlayers() {
        return players;
    }

    public void setPlayers(String players) {
        this.players = players;
    }

    public Cricket getC() {
        return c;
    }

    public void setC(Cricket c) {
        this.c = c;
    }

    public Player(int score, int fours, int sixes, int ball, String players, Cricket c) {
        super(score, fours, sixes, ball);
        this.players = players;
        this.c = c;
    }

}