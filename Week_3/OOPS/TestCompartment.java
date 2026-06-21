package Week_3.OOPS;

import java.util.concurrent.ThreadLocalRandom;

abstract class Compartment {
    public abstract String notice();

}

class FirstClass extends Compartment {
    public String notice() {
        return "This value is returned from Firstclass class. ";
    }

}

class Ladies extends Compartment {
    public String notice() {
        return "This value is returned from Ladies class. ";
    }

}

class General extends Compartment {
    public String notice() {
        return "This value is returned from  General class. ";
    }

}

class Luggage extends Compartment {
    public String notice() {
        return "This value is returned from Luggage class. ";
    }

}

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] CompartmentArray = new Compartment[10];
        for (int i = 0; i < CompartmentArray.length; i++) {
            int randnum = ThreadLocalRandom.current().nextInt(1, 5);
            if (randnum == 1) {
                CompartmentArray[i] = new FirstClass();
            } else if (randnum == 2) {
                CompartmentArray[i] = new Ladies();
            } else if (randnum == 3) {
                CompartmentArray[i] = new General();
            } else if (randnum == 4) {
                CompartmentArray[i] = new Luggage();
            }
        }
        for (int i = 0; i < CompartmentArray.length; i++) {
            String message = CompartmentArray[i].notice();
            System.out.println(message);
        }
    }
}

/*
 * Create an abstract class Compartment to represent a rail coach. Provide an
 * abstract function
 * notice in this class.
 * public abstract String notice();
 * Derive FirstClass, Ladies, General, Luggage classes from the compartment
 * class. Override the
 * notice function in each of them to print notice message that is suitable to
 * the specific type of
 * compartment.
 * Create a class TestCompartment.Write main function to do the following:
 * Declare an array of Compartment of size 10.
 * Create a compartment of a type as decided by a randomly generated integer in
 * the range 1 to 4.
 * Check the polymorphic behavior of the notice method.
 * [i.e based on the random number genererated, the first compartment can be
 * Luggage, the
 * second one could be Ladies and so on..]
 */