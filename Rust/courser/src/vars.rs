pub fn run() {
    let name = "Jonathan";
    let mut age = 20;

    println!("My name is {} and I am {} years old", name, age);
    age = 21;
    println!("My name is {} and I am {} years old", name, age);

    //Define constant
    const ID: i8 = 2;
    println!("ID: {}", ID);

    // Asssign multiple vars
    let (my_name, my_age) = ("John", 20);
    println!("{} is {}", my_name, my_age);
}
