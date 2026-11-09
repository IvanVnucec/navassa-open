
void FUN_0101df90(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  uint uVar7;
  
  iVar4 = *(int *)(DAT_0101e15c + param_1 * 4);
  iVar5 = *(int *)(DAT_0101e16c + param_1 * 4);
  pin_update(iVar5 + 0x10c,1,1);
  iVar1 = DAT_0101e164;
  if (param_1 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  pin_update(DAT_0101e170,uVar3);
  fVar6 = (float)VectorUnsignedToFloat
                           (*(undefined4 *)(DAT_0101e174 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
  uVar3 = FUN_010145f4(fVar6 * DAT_0101e158);
  uVar7 = VectorFloatToUnsigned(uVar3,3);
  if (0xf < (uVar7 & 0xff)) {
    uVar7 = 0xf;
  }
  FUN_0101deb2(param_1,1,0);
  uVar3 = FUN_0101db5c(param_1,200,*(undefined1 *)(iVar1 + 0xc));
  uVar3 = FUN_0101e06e(uVar3,1,1);
  FUN_0101e06e(uVar3,0xfc,0x78);
  uVar3 = pin_update(iVar4 + 0xe6,0xf,uVar7 & 0xff);
  FUN_0101e06e(uVar3,0xf,2);
  FUN_0101e06e(uVar7,0xf0,(uVar7 & 0xf) << 4);
  *(undefined1 *)(iVar4 + 0xe9) = 200;
  pin_update(iVar5 + 0x10b,1,1);
  puVar2 = (undefined2 *)(iVar1 + param_1 * 6);
  *puVar2 = 0;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 1) = 0;
  return;
}

