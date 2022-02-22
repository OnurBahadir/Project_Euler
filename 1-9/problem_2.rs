
fn main() {
    const N:u64= 4_000_000;

    let mut x:u64=1;
    let mut y=x;
    let mut sum:u64 =0;
    while x<N{
        let temp=x;
        x+=y;
        y=temp;
        if x%2==0{
            sum+=x;
        }
    }
    println!("{}",sum);
}