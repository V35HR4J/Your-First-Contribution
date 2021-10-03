function palindrome(str) {
	let lowCase = str.toLowerCase();

	let originalSalted = lowCase.replace(/[^0-9a-z]/gi, "");
	let prereverseSalted = "";
	let reverseSalted = [];
	for (let i = 0; i < originalSalted.length; i++) {
		reverseSalted.push(originalSalted[i]);
	}

	reverseSalted.reverse();

	for (let i = 0; i < reverseSalted.length; i++) {
		prereverseSalted += reverseSalted[i];
	}
	console.log(prereverseSalted, originalSalted);
	if (originalSalted === prereverseSalted) {
		return true;
	} else {
		return false;
	}
}
palindrome("eyy");
