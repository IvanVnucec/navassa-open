
undefined8
FUN_010026f0(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
            undefined4 param_6,uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = DAT_010027cc + param_1 * 8;
  uVar2 = 0;
  uVar5 = *(uint *)(iVar4 + 0xc);
  uVar3 = param_4;
  for (; (uVar3 != 0 || param_3 != 0 && (param_1 != 0)); param_1 = param_1 + -1) {
    if ((int)(param_3 << 0x1f) < 0) {
      uVar2 = uVar2 + 1;
    }
    uVar1 = uVar3 & 1;
    uVar3 = uVar3 >> 1;
    param_3 = (uint)(uVar1 != 0) << 0x1f | param_3 >> 1;
  }
  if ((-1 < (int)(param_3 << 0x1f)) &&
     (((uVar2 != 0 && (param_8 <= uVar5)) && (param_8 < uVar5 || param_7 < *(uint *)(iVar4 + 8)))))
  {
    uVar2 = uVar2 - 1;
  }
  if (param_5 <= uVar2) {
    uVar2 = param_5 - 1;
  }
  return CONCAT44(param_4,uVar2);
}

