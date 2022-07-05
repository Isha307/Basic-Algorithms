class Student{
    private int roll;
    private String name;
    public String getname(){
        return name;
    }
    public void setname(String name){
     this.name = name;   
    }
    public int getroll(){
        return roll;
    }
    public void setroll(int roll){
         this.roll = roll;
    }
}
class Main{
    public static void main(String[] args) {
        Student s1 = new Student();
		    s1.setroll(2);
		    s1.setname("Isha");
		
		    System.out.println(s1.getroll());
		    System.out.println(s1.getname());
    }
}

//Output: 2 Isha 
