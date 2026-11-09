
undefined4 FUN_010040ce(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  nmi_signal_helper(param_3 != (undefined4 *)0x0);
  iVar2 = *(int *)(DAT_010044a8 + *(int *)(param_2 + 0x28) * 8 + param_1 * 4 + 4);
  if (*(int *)(param_2 + 0x28) == 2) {
    bVar3 = 0;
    do {
      if (*(char *)(param_2 + param_1 + 0x20) == *(char *)(param_1 * 3 + DAT_010044e8 + (uint)bVar3)
         ) {
        uVar4 = (uint)bVar3;
        if (uVar4 != 3) goto LAB_0100412e;
        break;
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 < 3);
    uVar1 = 0;
  }
  else {
    uVar4 = 0;
LAB_0100412e:
    iVar2 = FUN_0100422c(*(undefined4 *)(iVar2 + 0xc),*param_3,iVar2,
                         ((uint)*(byte *)(iVar2 + 9) *
                          (uint)*(byte *)(iVar2 + 7) * (uint)*(byte *)(param_2 + 0x2c) +
                         (int)(short)(ushort)*(byte *)(iVar2 + 9) *
                         (int)(short)(ushort)*(byte *)(*(int *)(param_2 + 0x30) + iVar2 + 4) + uVar4
                         ) * 2);
    *(undefined4 *)(iVar2 + 4) = param_3[1];
    uVar1 = 1;
  }
  return uVar1;
}

