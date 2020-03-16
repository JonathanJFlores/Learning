fn main() {

    // LOOPS

    // -----loop----
    let mut n = 0;

    loop {
        n+= 1;

        if n == 25 {
            continue;
       }

        if n > 50{
            break;
        }

        println!("The value is: {}", n);
    }

    // While loop
    let mut l = 1;

    while l <= 50 {

        if l % 2 == 0 {
            println!("l is {}", l);
        }

        // println!("l is {}", l);
        l += 1;
    }

    // For loop

    let numbers = 3..40;

    for i in numbers {
        println!("The number is {}", i);
    }

    let animals = vec!["cat", "dog", "rabbit", "mouse"];

    for (index, a) in animals.iter().enumerate(){
        println!("The index is {} animal is {}",index, a);
    }

}