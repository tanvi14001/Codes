class Solution {
    func missingNumber(_ array: [Int]) -> Int {
        let count = array.count
    for i in 0...count{
        if array.contains(i){
        }else{
            return i
        }
    }
    return -1
    }
}