
undefined8 FUN_0103183e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  iVar1 = FUN_0103ae90(param_1,1);
  FUN_01008252(*(undefined1 *)(param_1 + 1),2);
  if (iVar1 != 0) goto LAB_010318ae;
  if (*(char *)(param_1 + 2) == '\0') {
    FUN_010366c0();
    FUN_0103bb36();
    FUN_0103bb56();
  }
  else if (*(char *)(param_1 + 2) == '\x01') {
    FUN_0103670a();
    FUN_0103bb5c();
    FUN_0103bb7c();
  }
  else {
    iVar1 = 0xe702;
  }
  if (*(char *)(param_1 + 2) == '\0') {
    cVar3 = '\0';
    FUN_01008070(0x34,&uStack_10);
    FUN_010318b2();
    if (cVar3 != '\0') goto LAB_010318ae;
    uVar2 = 0x34;
  }
  else {
    if (*(char *)(param_1 + 2) != '\x01') goto LAB_010318ae;
    cVar3 = '\0';
    FUN_01008070(0x35,&uStack_10);
    FUN_010318b2();
    if (cVar3 != '\0') goto LAB_010318ae;
    uVar2 = 0x35;
  }
  FUN_0100a348(uVar2,2);
LAB_010318ae:
  return CONCAT44(uStack_10,iVar1);
}

