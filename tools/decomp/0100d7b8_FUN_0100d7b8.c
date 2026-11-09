
undefined4 * FUN_0100d7b8(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = (undefined4 *)(param_1 + param_2);
  uVar4 = (uint)puVar2 & 3;
  if (uVar4 != 0) {
    uVar3 = param_2 - uVar4;
    if (param_2 < uVar4) {
      if (uVar3 + uVar4 != 0) {
        puVar2 = (undefined4 *)((int)puVar2 + -1);
        *(undefined1 *)puVar2 = 0;
      }
      if ((uVar3 + uVar4 & 2) != 0) {
        puVar2 = (undefined4 *)((int)puVar2 + -1);
        *(undefined1 *)puVar2 = 0;
      }
      return puVar2;
    }
    uVar1 = (uint)puVar2 & 2;
    if ((int)(uVar4 << 0x1f) < 0) {
      puVar2 = (undefined4 *)((int)puVar2 + -1);
      *(undefined1 *)puVar2 = 0;
    }
    param_2 = uVar3;
    if (uVar1 != 0) {
      puVar2 = (undefined4 *)((int)puVar2 + -2);
      *(undefined2 *)puVar2 = 0;
    }
  }
  do {
    uVar4 = param_2;
    param_2 = uVar4 - 0x10;
    if (0xf < uVar4) {
      puVar2[-1] = 0;
      puVar2[-2] = 0;
      puVar2[-3] = 0;
      puVar2 = puVar2 + -4;
      *puVar2 = 0;
    }
  } while (0xf < uVar4 && param_2 != 0);
  if ((param_2 & 8) != 0) {
    puVar2[-1] = 0;
    puVar2 = puVar2 + -2;
    *puVar2 = 0;
  }
  if ((int)(uVar4 * 0x20000000) < 0) {
    puVar2 = puVar2 + -1;
    *puVar2 = 0;
  }
  if ((uVar4 * 0x20000000 & 0x40000000) != 0) {
    puVar2 = (undefined4 *)((int)puVar2 + -2);
    *(undefined2 *)puVar2 = 0;
  }
  if ((int)(uVar4 * -0x80000000) < 0) {
    puVar2 = (undefined4 *)((int)puVar2 + -1);
    *(undefined1 *)puVar2 = 0;
  }
  return puVar2;
}

