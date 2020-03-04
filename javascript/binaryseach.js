let arr = [-1000, 0, 1, 2, 5, 93];

function bSearch(ar, num) {
  console.table(ar);
  if (ar.length < 1) return false;
  let mid = Number.parseInt(ar.length / 2);

  if (ar[mid] === num) return true;

  if (ar[mid] < num) {
    return bSearch(ar.slice(mid + 1), num);
  } else {
    return bSearch(ar.slice(0, mid), num);
  }

  return false;
}

console.log();
console.log(bSearch(arr, -1000));
console.log();
