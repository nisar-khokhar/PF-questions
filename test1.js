//Question 18
let arr1 = [1, 3, 5];
let arr2 = [0, 2, 4];
let arr3 = [];
arr3.length = arr1.length + arr2.length;

for (let i = 0; i < arr1.length; i++) {
  arr3[i] = arr1[i];
}
let j = 0;
for (let i = arr3.length - arr1.length; i < arr3.length; i++) {
  arr3[i] = arr2[j];
  j++;
}

//Question 17
//(without sorting)
let arr = [1, 2, 3, 4, 5, 670, 8, 9, 0, 10, -2];
let max = arr[0],
  min = arr[0];

for (let i = 0; i < arr.length; i++) {
  if (max < arr[i + 1]) {
    max = arr[i + 1];
  }
  if (min > arr[i + 1]) {
    min = arr[i + 1];
  }
}

//Question 17
//(with sorting)
let min1,
  array = [];

for (let i = 0; i < arr.length; i++) {
  min1 = arr[i];
  //   console.log(min1);
  for (let j = i + 1; j < arr.length; j++) {
    if (min1 > arr[j]) {
      min1 = arr[j];
    }
  }
  //   console.log(i);
  //   console.log("MIN1", min1, array);
  array[i] = min1;
  console.log(array[i]);
}
// console.log(array);
