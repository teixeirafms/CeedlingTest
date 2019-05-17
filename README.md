# Ceedling Examples

Repository with some Ceedling examples.
- Use of cmok to simulate components

## How to use

- With visual studio code open folder `/ceedling`
- In visual studio code click on `Terminal` > `New Terminal`
- In the terminal type: 
  - `cd TestProject`
Then run either
  - `ceedling` : Just for generating the Unity tests
  - `ceedling gcov:all` : Run Unity tests but also prints out the test coverage
  - `ceedling gcov:all utils:gcov` : Run Unity tests but also prints out the test coverage and generate XML/HTML reports !!! THIS is not working !!!
  