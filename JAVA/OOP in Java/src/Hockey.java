public class Hockey implements Sport , Events, Score {
    void show(){
        System.out.println("Show Events");
    }
    @Override
    public void start() {
        System.out.println("Start Event");

    }

    @Override
    public void counting() {
        System.out.println("Count score");

    }

    @Override
    public void play() {
        System.out.println("Play sport");


    }
}



