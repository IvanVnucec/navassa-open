
undefined8 FUN_01005a50(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 extraout_r1;
  undefined2 extraout_r1_00;
  undefined2 extraout_r1_01;
  undefined2 extraout_r1_02;
  undefined2 *puVar5;
  uint uVar6;
  short asStack_28 [2];
  undefined4 local_24;
  uint local_20 [2];
  
  iVar2 = DAT_01005e6c;
  asStack_28[0] = (short)param_1;
  asStack_28[1] = (short)((uint)param_1 >> 0x10);
  uVar6 = 0;
  local_24 = param_2;
  local_20[0] = param_3;
  local_20[1] = param_4;
  do {
    uVar3 = FUN_01006cb8(*(undefined4 *)(param_1 + 0x18),uVar6 & 0xff);
    local_20[uVar6] = uVar3;
    sVar1 = *(short *)(iVar2 + (uVar3 & 0xff) * 2 + 10) << 1;
    *(short *)((int)&local_24 + uVar6 * 2) = sVar1;
    if (sVar1 == 2) {
      asStack_28[uVar6] = 2;
    }
    else {
      asStack_28[uVar6] = 0;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 2);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  switch(uVar4) {
  case 0:
    puVar5 = DAT_01005e70;
    FUN_01005ad8(uVar4,asStack_28[1],DAT_01005e70,DAT_01005e70[1]);
    puVar5[1] = extraout_r1;
    break;
  case 1:
    puVar5 = DAT_01005e70;
    FUN_01005ad8(uVar4,asStack_28[1],DAT_01005e70,DAT_01005e70[2]);
    puVar5[2] = extraout_r1_00;
    break;
  case 2:
    puVar5 = DAT_01005e70;
    FUN_01005ad8(uVar4,asStack_28[1],DAT_01005e70,DAT_01005e70[3]);
    puVar5[3] = extraout_r1_01;
    break;
  case 3:
    puVar5 = DAT_01005e70;
    FUN_01005ad8(uVar4,asStack_28[1],DAT_01005e70,*DAT_01005e70);
    *puVar5 = extraout_r1_02;
  }
  return CONCAT44(local_24,CONCAT22(asStack_28[1],asStack_28[0]));
}

