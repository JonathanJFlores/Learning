const axios = require('axios');


const getPlaceLatLng = async ( dir ) => {
    
    const encodeUlr = encodeURI( dir );
    // console.log(encodeUlr);
    
    const instance = axios.create({
        baseURL: `https://devru-latitude-longitude-find-v1.p.rapidapi.com/latlon.php?location=${encodeUlr}`,
        headers: {'X-RapidAPI-Key': '580df823e6mshf6e43c9a6b0988fp152eb7jsn297f524e0d7b'}
      });

      const resp = await instance.get();
      
      if ( resp.data.Results.length === 0){
          throw new Error( `result not found to ${ dir }`);
      }

      const data = resp.data.Results[0];
      const direction = data.name;
      const lat = data.lat;
      const lng = data.lon;

        return {
            direction,
            lat,
            lng
        }
}

module.exports = {
    getPlaceLatLng
}