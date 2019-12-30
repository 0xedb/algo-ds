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
  expect(myArray.at(2)).toBe(3); 
});

test("capacity to be 10", () => {
  expect(myArray.capacity).toBe(10)
})
