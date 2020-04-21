
const hbs = require('hbs');

// helpers
hbs.registerHelper('getAnio', () => {
    return new Date().getFullYear();
});

hbs.registerHelper('capital', (text) => {
    let word = text.split(' ');
    word.array.forEach((word, idx) => {
        word[idx] = word.charAT(0).toUpperCase() + word.slice(1).toLowerCase();
    });
    return word.join(' ')
});