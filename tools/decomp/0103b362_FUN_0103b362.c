
int FUN_0103b362(int param_1,int param_2,undefined4 param_3,int *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_58;
  int iStack_54;
  undefined1 auStack_50 [4];
  int local_4c;
  
  iVar2 = FUN_0100929c(&local_58,param_3);
  if (param_1 == 0) {
    if (iVar2 == 0) {
      iVar4 = DAT_0103b4bc + param_2 * 4;
      iVar2 = FUN_01009518(*(undefined4 *)(iVar4 + 0x7c),0,param_2,0);
      if ((iVar2 == 0) && (iVar2 = FUN_01009ae4(0,param_2,0,0), iVar2 == 0)) {
        iVar2 = FUN_010096fc(local_58 + DAT_0103b4cc,iStack_54 + (uint)CARRY4(local_58,DAT_0103b4cc)
                             ,*(undefined4 *)(iVar4 + 0x7c),0,param_2);
      }
    }
    uVar1 = DAT_0103b4cc;
    *param_4 = DAT_0103b4d0;
    *param_5 = uVar1;
  }
  else if (param_1 == 2) {
    iVar4 = *(int *)(DAT_0103b4d8 + 0xc0) - local_58;
    FUN_0103b484(param_2,auStack_50,*(int *)(DAT_0103b4d8 + 0xc0),
                 *(undefined4 *)(DAT_0103b4d8 + 0xc4));
    uVar3 = FUN_0101c40c(auStack_50,param_2 + 2U & 0xff,1);
    uVar3 = FUN_0103b43c(uVar3,0x20,0);
    uVar3 = FUN_0103b43c(uVar3,0x40,0);
    uVar3 = FUN_0103b43c(uVar3,4,0);
    FUN_0103b43c(uVar3,8,0);
    *param_4 = -iVar4 - local_4c;
    *param_5 = local_4c - iVar4;
  }
  return iVar2;
}

