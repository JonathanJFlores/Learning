const description = {
    demand: true,
    alias: 'd',
    desc: 'Description to do'
};

const completed = {
    default: true,
    alias: 'c',
    desc: 'Mark task to be completed'
}


const argv = require('yargs')
        .command('create', 'create to do',{
            description
        })
        .command('update', 'update to do',{
            description,
            completed
        })
        .command('delete', 'del to do',{
            description
        })
        
        .help()
        .argv;


module.exports = {
    argv
}