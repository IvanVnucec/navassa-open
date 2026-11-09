
int FUN_0103e2e4(uint *param_1,uint *param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint local_58;
  uint uStack_54;
  int local_50;
  undefined1 local_4c [36];
  undefined4 uStack_28;
  
  iVar2 = DAT_0103ee5c;
  *param_2 = param_1[6];
  uStack_28 = param_4;
  FUN_0100929c(&local_58,param_1[8]);
  param_2[8] = local_58;
  param_2[9] = uStack_54;
  param_2[10] = param_1[8];
  bVar1 = true;
  uVar5 = 0;
  local_50 = param_3;
  while( true ) {
    iVar3 = DAT_0103ee64;
    piVar6 = (int *)(local_50 + uVar5 * 0x24);
    *piVar6 = 0;
    piVar6[4] = iVar3;
    if ((param_1[6] == 2 || param_1[6] == 3) && (*(char *)(uVar5 * 0xbc + iVar2 + 0x3c) == '\x02'))
    {
      bVar1 = false;
    }
    if ((*(char *)(iVar2 + 0x77d) == '\x01') && ((char)piVar6[1] != '\0')) {
      bVar1 = false;
    }
    if (((int)((*param_1 >> (uVar5 & 0xff)) << 0x1f) < 0) && (bVar1)) {
      spi_notify_thunk(local_4c,0x24);
      local_4c[0] = (undefined1)uVar5;
      uVar7 = *(undefined4 *)(DAT_0103ee68 + uVar5 * 4);
      FUN_0100f100(3,uVar7,&DAT_0103e410,3,param_4);
      iVar3 = FUN_0103e450(param_2,local_4c);
      *piVar6 = iVar3;
      if (iVar3 == 0) {
        iVar3 = FUN_0103e618(param_2,param_1[6],uVar5 & 0xff);
        *piVar6 = iVar3;
      }
      if (*piVar6 == 0) {
        uVar4 = FUN_0103e418(param_2);
        if (uVar4 < 5) {
          bVar1 = false;
        }
        else if (bVar1) {
          iVar3 = FUN_0103e8fc(param_1,param_2,piVar6,local_4c);
          *piVar6 = iVar3;
        }
      }
      if (*piVar6 == 0) {
        iVar3 = FUN_0103e7d4(param_2,uVar5 & 0xff,param_1[6],param_1);
        *piVar6 = iVar3;
      }
      else {
        FUN_0103e7d4(param_2,uVar5 & 0xff,param_1[6],param_1);
      }
      FUN_0100f180(3,uVar7,&DAT_0103e410,3,param_4);
    }
    *(undefined1 *)(piVar6 + 1) = 1;
    if (*piVar6 != 0) break;
    uVar5 = uVar5 + 1;
    if (1 < uVar5) {
      return 0;
    }
  }
  *(undefined1 *)(piVar6 + 1) = 0;
  *(undefined1 *)((int)piVar6 + 5) = 0;
  piVar6[2] = 0;
  return *piVar6;
}

