package week_1;

interface LibraryUser {
    void registerAccount();

    void requestBook();
}

class KidUsers implements LibraryUser {
    int age;
    String bookType;

    @Override
    public void registerAccount() {
        if (age <= 12) {
            System.out.println("You have successfully registered under a Kids Account");
        } else {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    @Override
    public void requestBook() {
        if (bookType.equals("Kids")) {
            System.out.println("Book Issued successfully, please return the book git within 10 days");
        } else {
            System.out.println("Oops, you are only allowed to take kids books");
        }
    }

}

class AdultUser implements LibraryUser {
    int age;
    String bookType;

    @Override
    public void registerAccount() {
        if (age > 12) {
            System.out.println("You have successfully registered under an Adult Account");
        } else {
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }

    @Override
    public void requestBook() {
        if (bookType.equals("Fiction")) {
            System.out.println("Book issued successfully, please return the book within 7 days");
        } else {
            System.out.println("Oops, you are only allowed to take adult Fiction books");
        }
    }

}

public class LibraryInterfaceDemo {
    public static void main(String[] args) {
        KidUsers Kid1 = new KidUsers();
        KidUsers Kid2 = new KidUsers();
        Kid1.age = 10;
        Kid2.age = 18;
        Kid1.registerAccount();
        Kid2.registerAccount();
        Kid1.bookType = "Kids";
        Kid2.bookType = "Fiction";
        Kid1.requestBook();
        Kid2.requestBook();
        AdultUser Adult1 = new AdultUser();
        AdultUser Adult2 = new AdultUser();
        Adult1.age = 5;
        Adult2.age = 18;
        Adult1.registerAccount();
        Adult2.registerAccount();
        Adult1.bookType = "Kids";
        Adult2.bookType = "Fiction";
        Adult1.requestBook();
        Adult2.requestBook();
    }
}
