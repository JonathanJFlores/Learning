fn main() {
    let x = 6;

    if x == 5 {
        println!("x is five");
    } else if x==6 {
        println!("x is six");
    } else {
        println!("x not is five");
    }

    let y = if x == 3 { 9 }else { 2 };
    println!("y is {}", y);
}
