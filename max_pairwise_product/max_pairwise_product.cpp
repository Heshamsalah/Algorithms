#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

long long MaxPairwiseProduct(const vector<int>& numbers) {
  long long result = 0, max_index1 = -1, max_index2 = -1;
  int n = numbers.size();
  for (int i = 0; i < n; ++i) {
    if(max_index1 == -1 || (numbers[i] > numbers[max_index1]) ){
      max_index1 = i;
    }
  }
  for (int j = 0; j < n; ++j) {
    if( (j != max_index1) && (max_index1 == -1 ||
        (numbers[j] > numbers[max_index2])) ){
      max_index2 = j;
    }
  }

  result = (long long) numbers[max_index1] * numbers[max_index2];
  return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    long long result = MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}
