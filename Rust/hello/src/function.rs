fn main() {
    println_numbers_to(10);
}

fn println_numbers_to(i: u32){
    for n in 1..i{
        if is_even(n){
            println!("{} is even", n);
        }
        else {
            println!("{} is odd", n);
        }
    }
}

fn is_even(num: u32) -> bool{
    return num % 2 == 0;
}