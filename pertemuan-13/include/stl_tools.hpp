#pragma once
#include "soldier.hpp"
#include <algorithm>
#include <map>
#include <string>
#include <vector>

inline void sort_by_score_desc(std::vector<Soldier>& roster) {
    std::sort(roster.begin(), roster.end(), [](const Soldier& a, const Soldier& b) {
        if (a.score != b.score) return a.score > b.score;
        return a.id < b.id;
    });
}

inline std::size_t ready_count(const std::vector<Soldier>& roster, int threshold = 80) {
    return static_cast<std::size_t>(std::count_if(roster.begin(), roster.end(), [threshold](const Soldier& s) {
        return s.score >= threshold;
    }));
}

inline std::map<std::string, Soldier> index_by_id(const std::vector<Soldier>& roster) {
    std::map<std::string, Soldier> out;
    for (const auto& s : roster) out.emplace(s.id, s);
    return out;
}
