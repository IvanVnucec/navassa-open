# navassa-open

Clean-room, open-source firmware binary reimplementation for the ADRV9001 (Navassa) transceiver co-processor.

All code is original - no proprietary source was copied or derived from Analog Devices' firmware or driver code.

## Requirements

- `arm-none-eabi-gcc`
- `libunicorn-dev`

## Usage

```sh
make
make emulate
```

## How it works

The startup (`src/navassa_open_startup.s`) sets up the vector table and calls `main()` from `src/navassa_open.c`. The emulator (`emulate.c`) loads a firmware binary into Unicorn, maps RAM, sets SP/PC from the vector table, and executes it.
