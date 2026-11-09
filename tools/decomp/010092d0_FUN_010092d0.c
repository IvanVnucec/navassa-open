
undefined4
FUN_010092d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  bool bVar5;
  char local_1c;
  char local_1b;
  char local_1a [2];
  undefined4 uStack_18;
  
  if (param_2 < 2) {
    pcVar3 = (char *)(param_2 * 5 + param_1 * 10 + DAT_01009ee8);
    uStack_18 = param_4;
    FUN_010164d0(param_3,param_4,local_1a,&local_1b,pcVar3 + 2,pcVar3 + 3,&local_1c,param_1,param_2)
    ;
    cVar1 = *pcVar3;
    bVar4 = local_1a[0] == cVar1;
    cVar2 = local_1a[0];
    if (bVar4) {
      cVar1 = pcVar3[1];
      cVar2 = local_1b;
    }
    bVar5 = bVar4 && cVar2 == cVar1;
    if (bVar4 && cVar2 == cVar1) {
      bVar5 = local_1c == pcVar3[4];
    }
    if (!bVar5) {
      *pcVar3 = local_1a[0];
      pcVar3[1] = local_1b;
      pcVar3[4] = local_1c;
      FUN_010163a2(param_1,param_2,*pcVar3,pcVar3[1],pcVar3[4],0,param_6);
    }
  }
  return 0;
}

