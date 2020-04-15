/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function(a, b)
{
  const ans = [] let i = a.length - 1 let j = b.length - 1 let carry = 0

      while (i >= 0 || j >= 0 || carry)
  {
    if (i >= 0 && a[i--] == = '1')
      ++carry if (j >= 0 && b[j--] == = '1')++ carry
            ans.push(carry % 2 == = 1 ? '1' : '0')
                carry = Math.floor(carry / 2)
  }
  console.log(ans)

      return ans.reverse()
          .join("")
};
