// 48.Given a string, return a new string with all vowels removed.
// Input: "hello"
// Output: "hll"
let str = "nagesh";
let len = str.length;

for (let i = 0; i < len; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
        continue;
    }
    console.log(str[i]);
}
