package live;

import music.string.Venna;
import music.wind.Saxaphone;
import music.Playable;

public class Test {
    public static void main(String[] args) {
        Venna newVenna = new Venna();
        Saxaphone newSaxaphone = new Saxaphone();
        newSaxaphone.play();
        newVenna.play();
        Playable playable1 = new Venna();
        Playable playable2 = new Saxaphone();
        playable2.play();
        playable1.play();
    }

}
