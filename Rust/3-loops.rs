
fn main(){
    // loop{
    //     println!("iter for always!");
    // }

    let mut x = 5; 
    let mut completed = false;

    while ! completed {
        x += x-3; // x = x+(x-3);

        println!("{}", x);

        if x % 5 == 0 {
            completed = true;
        }
    }

    for j in 0..10{
        println!("for: {}", j);
    }

    // Enumerate
    for (j, r) in (5..9).enumerate(){
        println!("j = {} y r = {}", j, r);
    }

    // loop break
    let mut l = 5;

    loop {
        l += l - 3;

        println!("loop: {}", l);

        if l % 5 == 0 { break; }
    }

    // for continue

    for v in 0..10{
        if v % 2 == 0 { continue; }

        println!("for c {}", v);
    }

    // 'outside': for h in 0..10{
    //     'inside': for d in 0..10{
    //         if h % 2 == 0 { continue 'outside'; }
    //         if d % 2 == 0 { continue 'inside'; }
    //         println!("h: {}, d: {}", h, d);
    //     }
    // }

}