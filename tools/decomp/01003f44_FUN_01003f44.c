
undefined4 FUN_01003f44(int *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined1 *)*param_1;
  uVar2 = FUN_01009518(*(undefined4 *)(puVar1 + 0x24),*(undefined4 *)(puVar1 + 0x28),*puVar1,0);
  **(undefined4 **)(*param_1 + 0x10) = uVar2;
  puVar1 = (undefined1 *)*param_1;
  uVar2 = FUN_01009ae4(*(undefined4 *)(puVar1 + 0x28),*puVar1,puVar1[0x2c],puVar1[0x2d]);
  **(undefined4 **)(*param_1 + 0x10) = uVar2;
  puVar1 = (undefined1 *)*param_1;
  if (**(int **)(puVar1 + 0x10) == 0) {
    if (puVar1[0x14] == '\0') {
      return 0;
    }
    if (puVar1[0x14] == '\x01') {
      FUN_0100fdb8(*puVar1);
      return 0;
    }
    **(int **)(puVar1 + 0x10) = 0x3102;
  }
  return 1;
}

