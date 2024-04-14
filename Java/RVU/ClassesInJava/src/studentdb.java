public class studentdb {
    public static void main(String[] args)
    {
        class Students{
            String name;
            int usn;
            int age;

            public Students(String name, int usn, int age) {
                this.name = name;
                this.usn = usn;
                this.age = age;
            }
        }
        Students newStudent = new Students("Abrar Hussain", 4, 21);
        System.out.println("Name: "+ newStudent.name + "\tUSN = " + newStudent.usn + "\t\tAge: " + newStudent.age);
    }
}
