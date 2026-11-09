
uint * FUN_0102229c(int param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = (param_3 & 0xff) << 8;
  uVar5 = param_3 & 0xff | uVar6;
  uVar6 = uVar5 | (param_3 & 0xffff00ff | uVar6) << 0x10;
  puVar4 = (uint *)(param_1 + param_2);
  uVar7 = (uint)puVar4 & 3;
  uVar1 = (undefined1)param_3;
  uVar2 = (undefined2)uVar5;
  if (uVar7 != 0) {
    uVar5 = param_2 - uVar7;
    if (param_2 < uVar7) {
      if (uVar5 + uVar7 != 0) {
        puVar4 = (uint *)((int)puVar4 + -1);
        *(undefined1 *)puVar4 = uVar1;
      }
      if ((uVar5 + uVar7 & 2) != 0) {
        puVar4 = (uint *)((int)puVar4 + -1);
        *(undefined1 *)puVar4 = uVar1;
      }
      return puVar4;
    }
    uVar3 = (uint)puVar4 & 2;
    if ((int)(uVar7 << 0x1f) < 0) {
      puVar4 = (uint *)((int)puVar4 + -1);
      *(undefined1 *)puVar4 = uVar1;
    }
    param_2 = uVar5;
    if (uVar3 != 0) {
      puVar4 = (uint *)((int)puVar4 + -2);
      *(undefined2 *)puVar4 = uVar2;
    }
  }
  do {
    uVar5 = param_2;
    param_2 = uVar5 - 0x10;
    if (0xf < uVar5) {
      puVar4[-1] = uVar6;
      puVar4[-2] = uVar6;
      puVar4[-3] = uVar6;
      puVar4 = puVar4 + -4;
      *puVar4 = uVar6;
    }
  } while (0xf < uVar5 && param_2 != 0);
  if ((param_2 & 8) != 0) {
    puVar4[-1] = uVar6;
    puVar4 = puVar4 + -2;
    *puVar4 = uVar6;
  }
  if ((int)(uVar5 * 0x20000000) < 0) {
    puVar4 = puVar4 + -1;
    *puVar4 = uVar6;
  }
  if ((uVar5 * 0x20000000 & 0x40000000) != 0) {
    puVar4 = (uint *)((int)puVar4 + -2);
    *(undefined2 *)puVar4 = uVar2;
  }
  if ((int)(uVar5 * -0x80000000) < 0) {
    puVar4 = (uint *)((int)puVar4 + -1);
    *(undefined1 *)puVar4 = uVar1;
  }
  return puVar4;
}

