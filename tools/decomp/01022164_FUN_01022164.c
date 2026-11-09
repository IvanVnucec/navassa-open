
int FUN_01022164(int param_1,int param_2,uint param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  FUN_01015c54(0);
  FUN_01015c80(0,param_5,0,0);
  iVar2 = 0xe107;
  while( true ) {
    iVar1 = FUN_01022236();
    if (iVar1 != 0) {
      iVar2 = 0xe102;
    }
    if ((*(byte *)(param_1 + param_2) & param_3) == (param_3 & param_4)) break;
    if (iVar2 != 0xe107) {
LAB_010221ac:
      FUN_01015d2e(0);
      return iVar2;
    }
  }
  iVar2 = 0;
  goto LAB_010221ac;
}

