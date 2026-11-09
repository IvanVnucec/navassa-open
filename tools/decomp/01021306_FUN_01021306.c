
uint FUN_01021306(uint param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r6;
  uint uVar4;
  undefined1 *puVar5;
  
  uVar3 = 0;
  iVar2 = DAT_01021f54 + param_2 * 8;
  do {
    if ((param_4 & 1 << (uVar3 & 0xff)) != 0) {
      iVar1 = *(int *)(iVar2 + uVar3 * 4);
      unaff_r6 = *(uint *)(iVar1 + 0xc);
      uVar4 = param_3;
      if (param_3 == 0xff) {
        uVar4 = unaff_r6;
        if (param_2 == 0 || param_2 == 4) {
          uVar4 = (uint)*(byte *)(iVar1 + 0x10);
        }
        if (uVar4 != 0) {
          uVar4 = 1;
        }
      }
      puVar5 = (undefined1 *)(param_6 + param_1 * 8);
      param_1 = param_1 + 1;
      puVar5[2] = 0;
      puVar5[1] = (char)uVar3;
      *puVar5 = (char)uVar4;
      *(undefined4 *)(puVar5 + 4) = param_5;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 2);
  if (param_7 != 0) {
    uVar3 = 0;
    do {
      if ((param_4 & 1 << (uVar3 & 0xff)) != 0) {
        uVar4 = param_3;
        if (param_3 == 0xff) {
          uVar4 = unaff_r6;
          if (param_2 == 0 || param_2 == 4) {
            uVar4 = (uint)*(byte *)(*(int *)(iVar2 + uVar3 * 4) + 0x10);
          }
          if (uVar4 != 0) {
            uVar4 = 1;
          }
        }
        puVar5 = (undefined1 *)(param_6 + param_1 * 8);
        puVar5[2] = 1;
        puVar5[1] = (char)uVar3;
        *puVar5 = (char)uVar4;
        *(undefined4 *)(puVar5 + 4) = param_5;
        param_1 = param_1 + 1;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 2);
  }
  nmi_signal_helper(-(uint)(param_1 < 0xb) >> 0x1f);
  return param_1;
}

