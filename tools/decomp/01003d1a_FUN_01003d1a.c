
int FUN_01003d1a(uint *param_1,undefined4 *param_2,undefined1 *param_3,int *param_4,
                undefined4 param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_30;
  undefined4 uStack_2c;
  int *piStack_28;
  
  *param_2 = 0;
  *(uint *)(param_3 + 4) = param_1[6];
  piStack_28 = param_4;
  FUN_0100929c(&local_30,param_1[8]);
  *(undefined4 *)(param_3 + 0x18) = local_30;
  *(undefined4 *)(param_3 + 0x1c) = uStack_2c;
  *(uint *)(param_3 + 0x20) = param_1[8];
  bVar1 = true;
  uVar4 = 0;
  do {
    param_4[uVar4 * 4] = 0;
    uVar2 = param_1[6];
    if (((uVar2 == 4 || uVar2 == 2) || uVar2 == 3) &&
       (*(char *)(uVar4 * 0xbc + DAT_010044b4 + 0x3c) == '\x02')) {
      bVar1 = false;
    }
    if (((int)((*param_1 >> (uVar4 & 0xff)) << 0x1f) < 0) && (bVar1)) {
      uVar5 = *(undefined4 *)(DAT_010044bc + uVar4 * 4);
      FUN_0100f100(1,uVar5,&LAB_010044f4,1,param_5);
      *param_3 = (char)uVar4;
      FUN_0100f2ec(param_2,param_3);
      iVar3 = FUN_0100f402(uVar4,param_2,param_3,param_4 + uVar4 * 4,param_1);
      param_4[uVar4 * 4] = iVar3;
      FUN_0100f180(1,uVar5,&LAB_010044f4,1,param_5);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  iVar3 = 0;
  if (*param_4 != 0) {
    iVar3 = *param_4;
  }
  return iVar3;
}

