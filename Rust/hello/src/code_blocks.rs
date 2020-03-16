fn main() {
    // Code block
    let x = 10;
    let mut y = 5;

    {
        let y = 5;
        println!("x: {}, y:{}", x, y);
    }

    // Shadowing 
     let mut i = 8;

     {
         let i = 15;
     }

     let i = "i is a String";
     println!(" i is {}", i);

     let i = true;
     println!(" i is {}", i);
}