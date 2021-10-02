function reverseArray(arrayToReverse) {
	let reversedArray = [];
	const length = arrayToReverse.length
	
	for (let i = 0; i < length; i++) {
		reversedArray[i] = arrayToReverse[(length-1) - i];
	}
	return reversedArray;
}

console.log(reverseArray(["a", "b", "c", "d", "e"]))
console.log(reverseArray([1, 2, 3, 4, 5]))
