# ICECUBE42

![ICECUBE42](https://anz507.sirv.com/Images/IMG_3397.jpg)

![ICECUBE42](https://anz507.sirv.com/Images/IMG_3398.jpg)

![ICECUBE42](https://anz507.sirv.com/Images/IMG_3394.jpg)

![ICECUBE42](https://anz507.sirv.com/Images/wiring%20copy.jpg)

![ICECUBE42](https://anz507.sirv.com/Images/Screenshot%202025-09-09%20at%2022.48.18.png)

*A short description of the keyboard/project*

A 42 keys keyboard with an encoder.

Included prebuilt firmware: `icecube42_anz507.uf2` or you can compile using comand below.

* Keyboard Maintainer: [Ahmad Anshori](https://github.com/anz507)
* Hardware Supported:
    - Handwired
    - RP2040 microcontroller

Make example for this keyboard (after setting up your build environment) using qmk:

    qmk compile -kb icecube42 -km anz507

Flashing example for this keyboard:

     Hold BOOT button on RP2040 and plug in usb c cable
     Device will be detected like a USB flash drive on computer
     Copy and paste icecube42_anz507.uf2 to RP2040

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
