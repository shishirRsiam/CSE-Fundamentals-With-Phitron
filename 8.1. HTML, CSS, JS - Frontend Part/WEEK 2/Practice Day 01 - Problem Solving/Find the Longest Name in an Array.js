let friends = ["Rahim", "Karim", "Abdul", "Sadaam", "Hero Alam"];

const findLongestName = (friends) => {
    let longest = friends[0];

    for (let i = 1; i < friends.length; i++) {
        if (friends[i].length > longest.length) {
            longest = friends[i];
        }
    }
    return longest;
};

console.log(findLongestName(friends));
