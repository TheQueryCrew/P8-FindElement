
// findElement Function
const findElement = function(arrOne, arrTwo){
	//Initialise array to hold uncommon elements
	const result = [];
	
	for(let i = 0; i < arrOne.length; i++){
		// absent variable to check whether value is common in both array
		let absent = true;
		
		for(let j = 0; j < arrTwo.length; j++){
			//if value found common in both set absent as false
			if(arrOne[i] == arrTwo[j]) absent = false; 
		}
		
		// if absent is true then push the value in result
		if(absent)result.push(String(arrOne[i]));
	}
	
	// return the output
	return result.join(',');
}

//Input
// a[] = {1, 2, 3, 4, 5, 10};
// b[] = {2, 3, 1, 0, 5};

console.log(`Output: ${findElement([1, 2, 3, 4, 5, 10],[2, 3, 1, 0, 5])}`)
