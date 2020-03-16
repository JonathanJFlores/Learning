const NUMBER: u8 = 20;

fn main() {
    for n in 1..NUMBER{
        println!("{}", n);
    }

    NUMBER = 30;

    let tuple = (30, "rabbit", false, "cat", (1, 3, 8));
    let (a, b, c, d, e) = tuple;
    println!("{}", e.1);
}