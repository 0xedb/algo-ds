const CustomArray = require("../array");

const myArray = new CustomArray();

test("size of new array", () => {
  expect(myArray.size).toBe(0);
});

test("3rd item is 3", () => {
  myArray.push(100);
  myArray.push(20);
  myArray.push(3);
  myArray.push(3) 
  myArray.push(3) 
  myArray.pop()
  expect(myArray.at(2)).toBe(3); 
});

test("capacity to be 5", () => {
  expect(myArray.capacity).toBe(5)
})

test("size to be 4", () => {
  expect(myArray.size).toBe(4)
})
