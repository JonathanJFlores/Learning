fn main(){
    let v = vec![1, 2, 3];
    let j = 1;
    
    let v2 = v;
    let j2 = j;

    println!("v[0] {}", v2[0]);
    println!("j {}, j2 {}", j, j2);

    let a = true;
    let _y = cambiar_verdad(a);
    println!("{}", a);

}


fn cambiar_verdad(x: bool) -> bool {
    !x
}

