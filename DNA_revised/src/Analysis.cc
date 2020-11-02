#include "../includes/Analysis.h"

Analysis::Analysis(std::vector<Person> given_people) {
    people = given_people;
    if (!people.empty()) {
        std::map<std::string, int> str_map = people[0].get_values();
        auto it = str_map.begin();
        for (; it != str_map.end(); ++it)
            strs.push_back((*it).first);
    }
}

std::map<std::string, int> Analysis::find_count(std::string strand) {
    for (std::string s : strs)
        std::cout << s << "\n";

    std::string temp = "";
    std::map<std::string, int> count;
    count[strs[0]] = 0;
    count[strs[1]] = 0;
    count[strs[2]] = 0;
    //std::string strand_s = strand.get_dna_sequence();
    //max is one as if it finds the first instance, it does not count it as the prev is not the same
    int max = 1;
    int same = 0;
    int prev = -1;
    for (int j = 0; j < 4; j++) {
        for (int i = j; i < (int)strand.length(); i+=4) {
            temp = "";
            temp = strand.substr(i, 4);
            same = check_match(strs, temp);
            if (same > -1) {
                if (prev == same) {
                    max++;
                }
                if (count.find(strs[same]) -> second <= max) {
                    count[strs[same]] = max;
                }
            } else {
                max = 1;
            }
            prev = same;
        }
    }
    return count;
} 

int Analysis::check_match(std::vector<std::string> string_list, std::string check) {
    for (int i = 0; i < (int)string_list.size(); i++) {
        if (check == string_list[i]) {
            return i;
        }
    }
    return -1;
}
bool Analysis::find_diff(Person person, std::map<std::string, int> count) {
    std::map<std::string, int> map = person.get_values();
    int index = 0;
    for (size_t i = 0; i < strs.size(); i++) {
        if (map.find(strs[i]) -> second != count.find(strs[i]) -> second) {
            return false;
        }
        index++;
    }
    return true;
}

std::string Analysis::find_match(std::map<std::string, int> count) {
    for (size_t i = 0; i < people.size(); i++) {
        if (find_diff(people[i], count)) {
            return people[i].get_name();
        }
    }
    return "No Match";
}
