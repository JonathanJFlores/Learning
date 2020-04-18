// requireds
const opts = {
    base:{
        demand: true,
        alias : 'b'
    },
    limit:{
        alias: 'l',
        default: 10
    }

}


const argv = require('yargs')
        .command('List', 'Print multiply table',opts)
        .command('Create', 'create multiply table',opts)
        .help()
        .argv;

module.exports = {
    argv
}