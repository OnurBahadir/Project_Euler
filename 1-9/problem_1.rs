
fn main() {
    const N:u64=1000;
    let mut sum:u64=0;
    for i in 0..N{
        if ( i%3 ==0 ) || (i%5==0){
            sum+=i;
        }
    }
    println!("{}",sum);

}