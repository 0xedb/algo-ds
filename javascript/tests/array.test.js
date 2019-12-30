const CustomArray = require('../array')

const myArray = new CustomArray()

test("size of new array", () => {
  expect(myArray.size).toBe(0)
  expect(myArray.capacity).toBe(10)
})