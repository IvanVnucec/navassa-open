
void FUN_01000aae(undefined4 param_1,int param_2,undefined4 param_3,uint *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 extraout_r1;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  bVar1 = (char)param_1 - ((char)param_1 - (char)((int)param_1 >> 0x1f) & 0xfeU);
  FUN_010006e2(bVar1,param_4,param_3,param_2);
  uVar4 = *param_4;
  uVar5 = param_4[1];
  if (*(char *)(DAT_010011f0 + 0x25) == '\0') {
    uVar3 = param_4[bVar1 + 2];
    bVar6 = CARRY4(uVar4,uVar3);
    uVar4 = uVar4 + uVar3;
    uVar5 = uVar5 + ((int)uVar3 >> 0x1f) + (uint)bVar6;
  }
  uVar2 = FUN_01001950(uVar4,uVar5);
  *(undefined1 *)(param_4 + 0xb) = uVar2;
  FUN_01000490(0x16,4);
  FUN_01002e90(param_4[0xc],extraout_r1,uVar4,uVar5,*(int *)(param_2 + 0x2c) >> 0x11 & 1);
  *DAT_01001744 = 1;
  FUN_01000490(0x16,2);
  return;
}

