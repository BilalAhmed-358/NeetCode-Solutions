Design an algorithm to encode a list of strings to a string.
<br>The encoded string is then sent over the network and is decoded back to the original list of strings.<br>
Machine 1 (sender) has the function:<br>

```cpp
string encode(vector<string> strs) {
  // ... your code
  return encoded_string;
}
```
Machine 2 (receiver) has the function:<br>

```cpp
vector<string> decode(string s) {
  //... your code
  return strs;
}
```
So Machine 1 does:<br>
`string encoded_string = encode(strs);`

and Machine 2 does:<br>
`vector<string> strs2 = decode(encoded_string);`

strs2 in Machine 2 should be the same as strs in Machine 1.<br>
Implement the encode and decode methods.<br>
Note:<br>
The string may contain any possible characters out of 256 valid ascii characters. Your algorithm should be generalized enough to work on any possible characters.<br>
Do not use class member/global/static variables to store states.<br> 
Your encode and decode algorithms should be stateless.<br>
Do not rely on any library method such as eval or serialize methods. You should implement your own encode/decode algorithm.
