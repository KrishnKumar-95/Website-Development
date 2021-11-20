function updateMap() {
    // this is fetch API which brings Data
    fetch("data.json")
        .then(response => response.json())
        .then(rsp => {
            console.log(rsp.data);
            // here we used forEach loop to get all the values of the data
            rsp.data.forEach(element => {
                // here we stored the values of the longitude and latitude in below variables
                latitude = element.latitude;
                longitude = element.longitude;

                cases = element.infected;
                if (cases > 255) {
                    color = "rgb(255,0,0)"
                } else {
                    color = `rgb(${cases},0,0)`
                }

                new mapboxgl.Marker({
                        draggable: false,
                        color: color,
                    })
                    .setLngLat([longitude, latitude])
                    .addTo(map);

            });

        });
}

updateMap();