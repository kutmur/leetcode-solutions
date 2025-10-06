#include "S_399.h"

// Implementation of the find operation with path compression and weight updates.
std::string Solution::find(std::string variable) {
    // If the variable is not its own parent, it's not the root.
    if (parent[variable] != variable) {
        // Store the original parent before the recursive call changes it.
        std::string originalParent = parent[variable];
        // Recursively find the root and set it as the new parent (path compression).
        parent[variable] = find(parent[variable]);
        // Update the weight.
        // new_weight[variable] = variable / new_parent = variable / root
        // old_weight[variable] = variable / originalParent
        // weight[originalParent] gets updated by the recursive call to originalParent / root
        // So, (variable / originalParent) * (originalParent / root) = variable / root
        weight[variable] *= weight[originalParent];
    }
    return parent[variable];
}

std::vector<double> Solution::calcEquation(std::vector<std::vector<std::string>>& equations, std::vector<double>& values, std::vector<std::vector<std::string>>& queries) {
    int numEquations = equations.size();

    // Step 1: Initialize the Union-Find data structure.
    // For each variable, create a set with the variable as its own parent and a weight of 1.0.
    for (const auto& equation : equations) {
        parent[equation[0]] = equation[0];
        parent[equation[1]] = equation[1];
        weight[equation[0]] = 1.0;
        weight[equation[1]] = 1.0;
    }

    // Step 2: Process equations and perform union operations.
    // For each equation A / B = value, union the sets containing A and B.
    for (int i = 0; i < numEquations; i++) {
        std::vector<std::string> equation = equations[i];
        std::string numerator = equation[0];
        std::string denominator = equation[1];

        // Find the roots of both variables. This also updates their weights to be relative to their roots.
        std::string parentNumerator = find(numerator);
        std::string parentDenominator = find(denominator);

        // If they are not already in the same set, union them.
        if (parentNumerator != parentDenominator) {
            // Set the parent of the numerator's root to be the denominator's root.
            parent[parentNumerator] = parentDenominator;
            // Update the weight of the numerator's root.
            // weight[parentNumerator] should be parentNumerator / parentDenominator
            // We know:
            // value = numerator / denominator
            // weight[numerator] = numerator / parentNumerator => parentNumerator = numerator / weight[numerator]
            // weight[denominator] = denominator / parentDenominator => parentDenominator = denominator / weight[denominator]
            // So, parentNumerator / parentDenominator = (numerator / weight[numerator]) / (denominator / weight[denominator])
            //                                         = (numerator / denominator) * (weight[denominator] / weight[numerator])
            //                                         = value * weight[denominator] / weight[numerator]
            weight[parentNumerator] = weight[denominator] * values[i] / weight[numerator];
        }
    }

    // Step 3: Process the queries.
    int numQueries = queries.size();
    std::vector<double> results(numQueries);

    for (int i = 0; i < numQueries; i++) {
        std::string dividend = queries[i][0];
        std::string divisor = queries[i][1];

        // If either variable is not in our map, we can't evaluate it.
        if (parent.find(dividend) == parent.end() || parent.find(divisor) == parent.end()) {
            results[i] = -1.0;
            continue;
        }

        std::string parentDividend = find(dividend);
        std::string parentDivisor = find(divisor);

        // If they don't share the same root, they are not connected, so we can't find the ratio.
        if (parentDividend != parentDivisor) {
            results[i] = -1.0;
        } else {
            // If they are in the same set, we can calculate the result.
            // After find(dividend), weight[dividend] = dividend / parentDividend.
            // After find(divisor), weight[divisor] = divisor / parentDivisor.
            // Since parentDividend == parentDivisor,
            // dividend / divisor = (weight[dividend] * parent) / (weight[divisor] * parent)
            //                    = weight[dividend] / weight[divisor]
            results[i] = weight[dividend] / weight[divisor];
        }
    }
    return results;
}