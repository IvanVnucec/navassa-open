
void FUN_0102574c(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  
  iVar1 = DAT_01025964;
  if (*(char *)(param_2 + 0x12) == '\x01') {
    uVar4 = *(uint *)(param_2 + 0x20) >> 1;
  }
  else {
    fVar9 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_2 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
    uVar4 = VectorFloatToUnsigned(fVar9 / DAT_01025954,3);
  }
  uVar8 = DAT_01025970;
  if (*(char *)(param_2 + 0x40) != '\x01') {
    uVar8 = DAT_01025974;
  }
  puVar5 = (undefined2 *)(param_3 + 0x2a);
  puVar6 = (undefined1 *)(param_3 + 0x21);
  if (uVar8 < uVar4) {
    if (*(char *)(DAT_01025964 + param_1) == '\x01') {
LAB_01025820:
      *(undefined1 *)(param_3 + 0x1c) = 0;
      *(undefined1 *)(param_3 + 0x1d) = 1;
      *(undefined1 *)(param_3 + 0x1e) = 1;
      *(undefined1 *)(param_3 + 0x1f) = 0;
      *(undefined1 *)(param_3 + 0x20) = 1;
      *puVar6 = 1;
      *(undefined1 *)(param_3 + 0x22) = 0;
      *(undefined1 *)(param_3 + 0x26) = 0;
      *(undefined1 *)(param_3 + 0x24) = 2;
      *(undefined1 *)(param_3 + 0x27) = 0;
      *(undefined1 *)(param_3 + 0x25) = 1;
      *(undefined1 *)(param_3 + 0x23) = 0;
      cVar2 = *(char *)(param_2 + 0x40);
      if (cVar2 == '\x01') {
        param_2 = 2;
      }
      uVar7 = (undefined2)param_2;
      if (cVar2 != '\x01') {
        cVar2 = '\x02';
        uVar7 = 3;
      }
      *(undefined2 *)(param_3 + 0x30) = uVar7;
      *puVar5 = uVar7;
      *(char *)(param_3 + 0x28) = cVar2;
      *(undefined1 *)(param_3 + 0x2c) = 0;
      *(undefined1 *)(param_3 + 0x2d) = 0;
      *(undefined1 *)(param_3 + 0x29) = 1;
      *(undefined1 *)(param_3 + 0x2e) = 1;
      return;
    }
    *(undefined1 *)(param_3 + 0x1c) = 0;
    *(undefined1 *)(param_3 + 0x1d) = 0;
    *(undefined1 *)(param_3 + 0x1f) = 0;
    *(undefined1 *)(param_3 + 0x1e) = 1;
    *(undefined1 *)(param_3 + 0x20) = 1;
    *(undefined1 *)(param_3 + 0x27) = 2;
    *puVar6 = 1;
    *(undefined1 *)(param_3 + 0x22) = 1;
    *(undefined1 *)(param_3 + 0x26) = 1;
    *(undefined1 *)(param_3 + 0x25) = 0;
    *(undefined1 *)(param_3 + 0x24) = 0;
    *(undefined1 *)(param_3 + 0x23) = 0;
    *(undefined1 *)(param_3 + 0x28) = 0;
    *(undefined1 *)(param_3 + 0x2c) = 0;
    *(undefined1 *)(param_3 + 0x2d) = 0;
    *(undefined1 *)(param_3 + 0x29) = 1;
    *puVar5 = 0;
    *(undefined1 *)(param_3 + 0x2e) = 1;
    *(undefined2 *)(param_3 + 0x30) = 0;
  }
  else {
    if (*(char *)(DAT_01025964 + param_1) == '\0') {
      *(undefined1 *)(param_3 + 0x1c) = 0;
      *(undefined1 *)(param_3 + 0x1d) = 0;
      *(undefined1 *)(param_3 + 0x1e) = 1;
      *(undefined1 *)(param_3 + 0x1f) = 0;
      *(undefined1 *)(param_3 + 0x20) = 1;
      *(undefined1 *)(param_3 + 0x24) = 2;
      *puVar6 = 1;
      *(undefined1 *)(param_3 + 0x22) = 0;
      *(undefined1 *)(param_3 + 0x27) = 0;
      *(undefined1 *)(param_3 + 0x26) = 0;
      *(undefined1 *)(param_3 + 0x25) = 1;
      *(undefined1 *)(param_3 + 0x23) = 0;
      if (*(char *)(param_2 + 0x40) == '\x01') {
        uVar7 = 2;
        uVar3 = 1;
      }
      else {
        uVar3 = 2;
        uVar7 = 3;
      }
      *(undefined2 *)(param_3 + 0x30) = uVar7;
      *puVar5 = uVar7;
      *(undefined1 *)(param_3 + 0x28) = uVar3;
      *(undefined1 *)(param_3 + 0x2c) = 0;
      *(undefined1 *)(param_3 + 0x2d) = 0;
      *(undefined1 *)(param_3 + 0x29) = 1;
      *(undefined1 *)(param_3 + 0x2e) = 1;
    }
    if (*(char *)(iVar1 + param_1) == '\x01') goto LAB_01025820;
  }
  return;
}

