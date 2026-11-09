
int FUN_0103f782(uint *param_1,uint *param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint local_40;
  uint uStack_3c;
  undefined4 local_38;
  int local_34;
  uint local_30 [3];
  
  iVar2 = DAT_01040348;
  *param_2 = param_1[6];
  FUN_0100929c(&local_40,param_1[8]);
  param_2[10] = local_40;
  param_2[0xb] = uStack_3c;
  param_2[0xc] = param_1[8];
  bVar1 = true;
  uVar4 = 0;
  local_38 = param_4;
  local_34 = param_3;
  while( true ) {
    piVar5 = (int *)(local_34 + uVar4 * 0x28);
    *piVar5 = 0;
    if ((param_1[6] == 2 || param_1[6] == 3) && (*(char *)(uVar4 * 0xbc + iVar2 + 0x3c) == '\x02'))
    {
      bVar1 = false;
    }
    if ((*(char *)(iVar2 + 0x77d) == '\x01') && ((char)piVar5[1] != '\0')) {
      bVar1 = false;
    }
    if (((int)((*param_1 >> (uVar4 & 0xff)) << 0x1f) < 0) && (bVar1)) {
      local_30[1] = 0;
      local_30[2] = 0;
      local_30[0] = uVar4 & 0xff;
      uVar6 = *(undefined4 *)(DAT_0104034c + uVar4 * 4);
      FUN_0100f100(3,uVar6,&DAT_01040398,3,local_38);
      iVar3 = FUN_0103f89e(param_2,local_30);
      *piVar5 = iVar3;
      if (iVar3 == 0) {
        iVar3 = FUN_0103fa42(param_2,param_1[6],uVar4 & 0xff);
        *piVar5 = iVar3;
      }
      if ((*piVar5 == 0) && (bVar1)) {
        iVar3 = FUN_0103fc46(param_1,param_2,piVar5,local_30);
        *piVar5 = iVar3;
      }
      if (*piVar5 == 0) {
        iVar3 = FUN_0103fbd0(param_2,uVar4 & 0xff,param_1);
        *piVar5 = iVar3;
      }
      else {
        FUN_0103fbd0(param_2,uVar4 & 0xff,param_1);
      }
      FUN_0100f180(3,uVar6,&DAT_01040398,3,local_38);
    }
    *(undefined1 *)(piVar5 + 1) = 1;
    if (*piVar5 != 0) break;
    uVar4 = uVar4 + 1;
    if (1 < uVar4) {
      return 0;
    }
  }
  *(undefined1 *)(piVar5 + 1) = 0;
  *(undefined1 *)((int)piVar5 + 5) = 0;
  piVar5[2] = 0;
  return *piVar5;
}

