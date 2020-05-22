
var RecentCounter = function() {
    this.q = []    
};

/** 
 * @param {number} t
 * @return {number}
 */
RecentCounter.prototype.ping = function(t) {
    this.q.push(t)
    
    while(this.q[0] < t - 3000)
        this.q = this.q.slice(1)
    
    return this.q.length
};

/** 
 * Your RecentCounter object will be instantiated and called as such:
 * var obj = new RecentCounter()
 * var param_1 = obj.ping(t)
 */ 
