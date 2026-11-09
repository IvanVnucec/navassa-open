
int FUN_01012ba0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 unaff_r6;
  undefined4 local_e0;
  undefined1 auStack_dc [200];
  
  local_e0 = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  FUN_0101206c(auStack_dc,param_2 + 0xc,0xc0);
  iVar2 = FUN_01011616((&DAT_01012c08)[*(byte *)(param_1 + 5)]);
  if (iVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 2 || bVar1 == 3) {
      unaff_r6 = 1;
    }
    else if (bVar1 < 2) {
      unaff_r6 = 0;
    }
    else if (bVar1 == 4 || bVar1 == 5) {
      unaff_r6 = 3;
    }
    iVar2 = FUN_01011648(iVar2,&local_e0,0);
    if ((iVar2 != 0) &&
       (iVar2 = FUN_01011690((&DAT_01012c08)[*(byte *)(param_1 + 5)],2,unaff_r6), iVar2 != 0)) {
      *(undefined2 *)(param_2 + 6) = *(undefined2 *)(param_2 + 2);
      iVar2 = 1;
    }
  }
  return iVar2;
}

