#ifndef S_399_H
#define S_399_H

#include <vector>
#include <string>
#include <unordered_map>

class Solution {
public:
    // Stores the parent of each node in the disjoint set.
    // parent[x] = y means y is the parent of x.
    std::unordered_map<std::string, std::string> parent;

    // Stores the weight of each node relative to its parent.
    // weight[x] = x / parent[x].
    std::unordered_map<std::string, double> weight;

    /**
     * @brief Calculates the results of division queries based on a set of equations.
     * @param equations A list of equations, where equations[i] = [A, B] represents A / B.
     * @param values A list of corresponding values for the equations, where values[i] is the result of A / B.
     * @param queries A list of queries, where queries[i] = [C, D] asks for the result of C / D.
     * @return A vector of doubles containing the results of the queries. If a result cannot be determined, it is -1.0.
     */
    std::vector<double> calcEquation(std::vector<std::vector<std::string>>& equations, std::vector<double>& values, std::vector<std::vector<std::string>>& queries);

private:
    /**
     * @brief Finds the root of the set containing the variable and performs path compression.
     * This function also updates the weights along the path to be relative to the root.
     * @param variable The variable (node) to find the root for.
     * @return The root of the set.
     */
    std::string find(std::string variable);
};

#endif // S_399_H