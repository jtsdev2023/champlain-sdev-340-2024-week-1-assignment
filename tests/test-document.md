# Test Document for MathLibrary Class

Test cases for the `MathLibrary` class.
Each class method has its own section.

## Test Cases

### 1. Test for `myAverage(vector<double> inputNumbers)`

| Test Case ID | Input Numbers                     | Expected Average | Expected Results |
|--------------|-----------------------------------|------------------|------------------|
| Test-Case 1          | 1, 2, 3, 4, 5                     | 3                | YES
| Test-Case 2          | 10, 20, 30, 40, 50                | 30               | YES
| Test-Case 3          | 2, 4, 6, 8, 10, 12                 | 7               | YES

### 2. Test for `myRange()`

| Test Case ID | Input Numbers                     | Expected Range | Expected Results |
|--------------|-----------------------------------|----------------|------------------|
| Test-Case 1          | 1, 2, 3, 4, 5                     | 4              | YES
| Test-Case 2          | 10, 20, 30, 40, 50                | 40             | YES
| Test-Case 3          | 2, 4, 6, 8, 10, 12                 | 10              | YES

### 3. Test for `myVariance()`

| Test Case ID | Input Numbers                     | Expected Variance | Expected Results |
|--------------|-----------------------------------|-------------------|------------------|
| Test-Case 1  | 1, 2, 3, 4, 5                     | 2.0               | YES
| Test-Case 2  | 10, 20, 30, 40, 50                | 200.0             | YES
| Test-Case 3  | 2, 4, 6, 8, 10, 12                 | 11.6667               | YES

### 4. Test for `myStandardDeviation()`

| Test Case ID | Input Numbers                     | Expected Standard Deviation | Expected Results |
|--------------|-----------------------------------|-----------------------------|------------------|
| Test-Case 1          | 1, 2, 3, 4, 5                     | 1.41                       | YES
| Test-Case 2          | 10, 20, 30, 40, 50                | 14.14                      | YES
| Test-Case 3          | 2, 4, 6, 8, 10, 12                 | 3.42                       | YES
