#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int tamLista = nums.size();
        for (int posicao1 = 0; posicao1 < tamLista; posicao1++) {
            for (int posicao2 = posicao1+1; posicao2 < tamLista; posicao2++){
                if (nums[posicao1] + nums[posicao2] == target) {
                    return {posicao1, posicao2};
                }
            }
        }  
        return {};
    }
};

int main() {
    Solution solucao;
    
    vector<int> nums = {2, 7, 11, 15};
    int target = 19;

    vector<int> resultado = solucao.twoSum(nums, target);

    if (!resultado.empty()) {
        cout << "[" << resultado[0] << ", " << resultado[1] << "]" << endl;
    } else {
        cout << "Algo deu errado" << endl;
    }

    return 0;
}