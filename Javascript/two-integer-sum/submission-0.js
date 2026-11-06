/**
 * Finds two distinct numbers that add up to the target.
 *
 * @param {number[]} numbers - The numbers to search.
 * @param {number} target - The required sum.
 * @returns {[number, number] | []} The matching indices, or an empty array if no pair is found.
 */
const twoIntegerSum = function (numbers, target) {
    // Start the second index after the first so an element is not paired with itself.
    for (let first = 0; first < numbers.length; first += 1) {
        for (let second = first + 1; second < numbers.length; second += 1) {
            if (numbers[first] + numbers[second] === target) {
                return [first, second];
            }
        }
    }

    // No pair matched the target.
    return [];
};