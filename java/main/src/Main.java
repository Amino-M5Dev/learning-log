public class Main {

    public static void main(String[] args) {

        Student s1 = new Student("Amino", 20, 3.2);
        Student s2 = new Student("Muhamad", 22, 2.6);
        Student s3 = new Student("Cristiano", 35, 6.7);

        System.out.println(s1.name);
        System.out.println(s1.age);
        System.out.println(s1.gpa);
        System.out.println(s1.isEnrolled);

        System.out.println();

        System.out.println(s2.name);
        System.out.println(s2.age);
        System.out.println(s2.gpa);
        System.out.println(s2.isEnrolled);

        System.out.println();
        System.out.println(s3.name);
        System.out.println(s3.age);
        System.out.println(s3.gpa);
        System.out.println(s3.isEnrolled);

    }


}