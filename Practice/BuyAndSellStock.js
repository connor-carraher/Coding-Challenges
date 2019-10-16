/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    var answer = 0;
    var i = 0;
    for(var j = 1; j < prices.length; j++){
        if(prices[i] >= prices[j]){
            i++;
        } else {
            var k = j + 1;
            while(prices[j] <= prices[k]){
                j = k;
                k++;
            }
            answer += prices[j] - prices[i];
            if(j + 1 < prices.length){
                i = j + 1;
                j = j + 1;
            }
        }
    }
    return answer;
};
