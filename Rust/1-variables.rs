fn main() {
    let x = "Hello world!";
    let i = 14;
    let f = 3.5;
    let b = true;
    let bol: bool = false; 
    let c: char = 'J';
    let a = ["1", "2", "3", "Jon"];
    let array = [1, 2, 3, 4];
    let s = &array[1..4];
    let mut v = vec![1, 2, 3, 4];
    v.push(9);
    let t = (60, "Flores", 9.7);
    let (e, h, g) = (1, "Jon", 5.7);

    println!("x: {}", x);
    println!("i: {}", i);
    println!("f: {}", f);
    sum(5, 7);
    println!("b: {}", b);
    println!("bol: {}", bol);
    println!("char: {}", c);
    
    let four = sumone(3);
    println!("sum one: {}", four);
    println!("Array len: {} {:?} ", a.len(), a.last());
    println!("Array slice: {}, min {}, max {}", s.len(), s[0], s[2]);
    println!("Vec: {}, {}, {:?}", v.len(), v[0], v.get(4));
    println!("tuple: {}, {}, {}", e, h, g);
    println!("tuple: {}, {}, {}", t.0, t.1, t.2);
    // diverge();
}

fn sum(x: i32, y: i32) {
    println!("sum x+y is: {}", x + y)
}

fn sumone(x: i32) -> i32 {
    x + 1
}

// fn diverge() -> ! {
//     panic!("not return!");
// }
