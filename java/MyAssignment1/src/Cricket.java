public class Cricket {
    private int score;
    private int fours;
    private int sixes;
    private int ball;

    public int getScore() {
        return score;
    }

    public void setScore(int score) {
        this.score = score;
    }

    public int getFours() {
        return fours;
    }

    public void setFours(int fours) {
        this.fours = fours;
    }

    public int getSixes() {
        return sixes;
    }

    public Cricket(int score, int fours, int sixes, int ball) {
        super();
        this.score = score;
        this.fours = fours;
        this.sixes = sixes;
        this.ball = ball;
    }

    public void setSixes(int sixes) {
        this.sixes = sixes;
    }

    public int getBall() {
        return ball;
    }

    public void setBall(int ball) {
        this.ball = ball;
    }

}