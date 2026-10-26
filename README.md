# IOT-1st_Lab
solving the Assignment for Dr. Momen

# ThingSpeak URl:
https://thingspeak.mathworks.com/channels/3551772
# Wokwi URl:
https://wokwi.com/projects/478964970977544193

Ashour Jarrar: 12324069

 "connections": [
    [ "esp:TX", "$serialMonitor:RX", "", [] ],
    [ "esp:RX", "$serialMonitor:TX", "", [] ],
    [ "r1:1", "bb1:16t.e", "", [ "$bb" ] ],
    [ "r1:2", "bb1:16b.i", "", [ "$bb" ] ],
    [ "dht1:VCC", "bb1:8t.a", "", [ "$bb" ] ],
    [ "dht1:SDA", "bb1:9t.a", "", [ "$bb" ] ],
    [ "dht1:NC", "bb1:10t.a", "", [ "$bb" ] ],
    [ "dht1:GND", "bb1:11t.a", "", [ "$bb" ] ],
    [ "bb1:bn.9", "dht1:GND", "black", [ "v0" ] ],
    [ "bb1:8t.d", "esp:3V3", "green", [ "h-96", "v-134.4", "h-124.95" ] ],
    [ "bb1:9t.e", "esp:15", "green", [ "v0" ] ],
    [ "esp:23", "bb1:bp.1", "green", [ "h19.2", "v192.9" ] ],
    [ "r1:2", "bb1:bp.14", "green", [ "h0" ] ],
    [ "bb1:15t.e", "bb1:bn.12", "green", [ "v0" ] ],
    [ "led1:A", "bb1:16t.c", "", [ "$bb" ] ],
    [ "led1:C", "bb1:15t.c", "", [ "$bb" ] ],
    [ "esp:GND.1", "bb1:bn.1", "black", [ "v163.2", "h161.75" ] ]
  ],
