
void FUN_01043094(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  uint in_fpscr;
  float fVar4;
  uint uVar5;
  float extraout_s1;
  float fVar6;
  
  pbVar1 = DAT_0104338c;
  bVar3 = *DAT_0104338c;
  if (param_1[8] != 0) {
    bVar3 = bVar3 & 0xdf;
  }
  if (param_1[9] != 0) {
    bVar3 = bVar3 & 0xef;
  }
  *DAT_0104338c = bVar3;
  fVar6 = (float)VectorUnsignedToFloat
                           (*(uint *)(DAT_01043390 + 0x24) / (*param_1 + 1),
                            (byte)(in_fpscr >> 0x15) & 3);
  if (*(int *)(param_1 + 0x28) == 0) {
LAB_01043102:
    if (*(int *)(param_1 + 0x10) == 0) {
LAB_0104312e:
      if (*(int *)(param_1 + 0x14) == 0) {
LAB_01043158:
        if (*(int *)(param_1 + 0x18) == 0) {
LAB_01043182:
          if (*(int *)(param_1 + 0x1c) == 0) goto LAB_010431ae;
          FUN_01043228(*pbVar1 & 0xf7);
          FUN_01043238(*(undefined4 *)(param_1 + 0x1c));
          iVar2 = FUN_01042dba(0x1a);
          if (iVar2 == 0) {
            FUN_01043230();
            iVar2 = FUN_01042dba(0x1b);
          }
        }
        else {
          FUN_01043228(*pbVar1 & 0xfb);
          FUN_01043238(*(undefined4 *)(param_1 + 0x18));
          iVar2 = FUN_01042dba(0x18);
          if (iVar2 == 0) {
            FUN_01043230();
            iVar2 = FUN_01042dba(0x19);
            if (iVar2 == 0) goto LAB_01043182;
          }
        }
      }
      else {
        FUN_01043228(*pbVar1 & 0xfd);
        FUN_01043238(*(undefined4 *)(param_1 + 0x14));
        iVar2 = FUN_01042dba(0x16);
        if (iVar2 == 0) {
          FUN_01043230();
          iVar2 = FUN_01042dba(0x17);
          if (iVar2 == 0) goto LAB_01043158;
        }
      }
    }
    else {
      FUN_01043228(*pbVar1 & 0xfe);
      FUN_01043238(*(undefined4 *)(param_1 + 0x10));
      iVar2 = FUN_01042dba(0x14);
      if (iVar2 == 0) {
        FUN_01043230();
        iVar2 = FUN_01042dba(0x15);
        if (iVar2 == 0) goto LAB_0104312e;
      }
    }
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x28),(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = VectorFloatToUnsigned((fVar6 * fVar4) / DAT_01043388,3);
    iVar2 = FUN_01042dba(0x12,uVar5 & 0xffff);
    if (iVar2 == 0) {
      FUN_01043230();
      iVar2 = FUN_01042dba(0x13);
      if (iVar2 == 0) goto LAB_01043102;
    }
  }
  if (iVar2 != 0) {
    return;
  }
LAB_010431ae:
  if (param_1[4] != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_01043228(*pbVar1 & 0xbf);
      FUN_01043238(*(undefined4 *)(param_1 + 0x20));
      iVar2 = FUN_01042dba(0x1c);
      if (iVar2 == 0) {
        FUN_01043230();
        FUN_01042dba(0x1d);
      }
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_01043228(*pbVar1 & 0x7f);
      fVar4 = (float)VectorUnsignedToFloat
                               (*(undefined4 *)(param_1 + 0x24),(byte)(in_fpscr >> 0x15) & 3);
      uVar5 = VectorFloatToUnsigned((fVar6 * fVar4) / extraout_s1,3);
      iVar2 = FUN_01042dba(0x1e,uVar5 & 0xffff);
      if (iVar2 == 0) {
        FUN_01042dba(0x1f,uVar5 >> 0x10 & 0xff);
        return;
      }
    }
  }
  return;
}

