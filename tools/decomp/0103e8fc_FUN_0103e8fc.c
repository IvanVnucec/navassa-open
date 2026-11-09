
int FUN_0103e8fc(undefined4 param_1,int param_2,int param_3,undefined1 *param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  while( true ) {
    if (*(byte *)(param_2 + 0x42) <= uVar5) {
      return 0;
    }
    param_4[1] = (char)uVar5;
    iVar4 = param_3 + uVar5 * 2;
    uVar1 = FUN_0102ef9c(*param_4,*(undefined1 *)(param_2 + 5));
    *(undefined2 *)(iVar4 + 0x14) = uVar1;
    uVar1 = FUN_0102efd0(*param_4,*(undefined1 *)(param_2 + 5));
    *(undefined2 *)(iVar4 + 0x16) = uVar1;
    uVar1 = FUN_0102f004(*param_4,*(undefined1 *)(param_2 + 5));
    *(undefined2 *)(iVar4 + 0x18) = uVar1;
    uVar1 = FUN_0102f02c(*param_4,*(undefined1 *)(param_2 + 5));
    *(undefined2 *)(iVar4 + 0x1a) = uVar1;
    if ((*(char *)(param_2 + 0x7c) == '\0') ||
       (uVar6 = FUN_0103e9c6(*(char *)(param_2 + 0x7c),3), (int)uVar6 == 0)) {
      param_4[2] = 0;
      uVar6 = FUN_0103e9c8();
    }
    iVar3 = (int)((ulonglong)uVar6 >> 0x20);
    iVar2 = (int)uVar6;
    if (*(char *)(param_2 + 6) == '\x02') {
      if (iVar2 != 0) {
        iVar3 = 0x2f01;
      }
      if (iVar2 == 0 || iVar2 == iVar3) {
        if (*(char *)(param_2 + 0x7c) != '\0') {
          iVar2 = FUN_0103e9c6(*(char *)(param_2 + 0x7c),2);
        }
        if (iVar2 == 0) {
          param_4[2] = 1;
          iVar2 = FUN_0103e9c8();
        }
      }
    }
    uVar1 = FUN_0102ef9c(*param_4,*(undefined1 *)(param_2 + 5));
    *(undefined2 *)(iVar4 + 0x1c) = uVar1;
    uVar1 = FUN_0102efd0(*param_4,*(undefined1 *)(param_2 + 5));
    *(undefined2 *)(iVar4 + 0x1e) = uVar1;
    uVar1 = FUN_0102f004(*param_4,*(undefined1 *)(param_2 + 5));
    *(undefined2 *)(iVar4 + 0x20) = uVar1;
    uVar1 = FUN_0102f02c(*param_4,*(undefined1 *)(param_2 + 5));
    *(undefined2 *)(iVar4 + 0x22) = uVar1;
    if (iVar2 != 0) break;
    uVar5 = uVar5 + 1 & 0xff;
  }
  return iVar2;
}

