# UnrealMosquitto

A [MQTT](http://mqtt.org) client with blueprint support for [Unreal Engine 4](http://unrealengine.com), based on [Mosquitto](http://mosquitto.org/).

![unrealmosquittoscreenshot](https://user-images.githubusercontent.com/45740/35557501-fd70a518-05ad-11e8-92bc-3dcf32978e2b.png)

# How to install

Add as a plugin, enable and restart editor.

# How to use

To use the MQTT client, the simplest method is to create a blueprint child class from it.

 1. Find the C++ Unreal Mosquitto class in the content browser.
 2. Right click and select `Create Blueprint class based on UnrealMosquitto`.
 
 This new child class has access to the events in its event graph. You can also configure the client in the MQTT section in the details panel of the root element. The router can dispatch executions flows based on MQTT topics.
 
 



