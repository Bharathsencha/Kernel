fn main() {
    let x = 10;
    let y = &x;  // Borrowing x as an immutable reference

    println!("x = {}", x);  
    println!("y = {}", y);  

    // We can't change x while it's borrowed by y...so we cannot say like x = 20 now 
}
