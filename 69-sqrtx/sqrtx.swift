class Solution {
    var lower = 0
var upper = 0
    func mySqrt(_ x: Int) -> Int {
        upper = x

    repeat {
    let mid = (lower + upper)/2
      if (mid * mid) == x{
          return mid
      }else if (mid * mid) > x{
         upper = mid - 1
      }else{
          lower = mid + 1
      }
    }while( lower <= upper)
    return upper
    }
}