
undefined8 FUN_0100aa68(uint param_1,char *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  
  if (-1 < (int)((3U >> (param_1 & 0xff)) << 0x1f)) {
    iVar3 = 0xc801;
    goto LAB_0100aac4;
  }
  iVar4 = *(int *)(DAT_0100abe0 + param_1 * 4);
  pcVar5 = DAT_0100abf0;
  if (param_3 == 0) {
    pcVar5 = DAT_0100abec;
  }
  if (param_2[0x40] == '\x01') {
    (*pcVar5)(param_3,iVar4 + 0x1f1,1,1);
  }
  cVar1 = *param_2;
  iVar3 = iVar4 + 0x1e;
  if (cVar1 == '\0') {
    uVar2 = 0x10;
    cVar1 = '\x10';
    iVar4 = iVar3;
LAB_0100aab4:
    (*pcVar5)(param_3,iVar4,cVar1,uVar2);
  }
  else {
    iVar4 = iVar4 + 0xa9;
    if (cVar1 != '\x01' && cVar1 != '\x02') {
      if (cVar1 != '\x03' && cVar1 != '\x04') {
        iVar3 = 0xc800;
        goto LAB_0100aac4;
      }
      (*pcVar5)(param_3,iVar3,0,0x10);
      cVar1 = param_2[1];
      uVar2 = 1;
      goto LAB_0100aab4;
    }
    (*pcVar5)(param_3,iVar3,0x10,0x10);
    iVar3 = FUN_010063e8(param_1,2,param_2 + 8,param_3);
    (*pcVar5)(param_3,iVar4,param_2[1],1);
    if (iVar3 != 0) goto LAB_0100aac4;
  }
  iVar3 = FUN_0100ab9c(param_1,param_2[4],param_3);
LAB_0100aac4:
  return CONCAT44(param_4,iVar3);
}

