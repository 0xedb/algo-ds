/**
 * @param {number[]} flowerbed
 * @param {number} n
 * @return {boolean}
 */
var canPlaceFlowers = function (flowerbed, n) {
  let max = 0;
  for (let i = 0; i < flowerbed.length; i++) {
    const el = flowerbed[i];
    if (i === 0 && el === 0) {
      max++;
      flowerbed[i] = 1;
      if (flowerbed.length > 1 && flowerbed[i + 1] === 1) {
        max--;
        flowerbed[i] = 0;
      }
    } else {
      if (el === 0 && flowerbed[i - 1] === 0) {
        if (i !== flowerbed.legnth - 1 && flowerbed[i + 1] !== 1) {
          max++;
          flowerbed[i] = 1;
        }
      }
    }

    if (max >= n) return true;
  }
  return false;
};
