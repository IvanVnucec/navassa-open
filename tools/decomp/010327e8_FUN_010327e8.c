
undefined4 FUN_010327e8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_34;
  undefined4 local_2c;
  
  uVar3 = 0;
  do {
    local_2c = CONCAT31(local_2c._1_3_,0x15);
    FUN_01032994();
    local_34 = local_34 & 0xffffff00;
    FUN_01032994();
    iVar1 = DAT_0103298c;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  uVar3 = 2;
  iVar2 = 0;
  iVar4 = 0;
  while( true ) {
    local_34 = CONCAT31(local_34._1_3_,(char)iVar2);
    local_2c = CONCAT31(local_2c._1_3_,0x15);
    if (iVar4 == 0) {
      iVar2 = 0x184c;
    }
    else {
      iVar2 = 0x18a4;
    }
    FUN_0102f63c(1,local_34,iVar1 + iVar2,local_2c);
    local_34 = (uint)local_34._1_3_ << 8;
    local_2c = CONCAT31(local_2c._1_3_,0xd);
    iVar2 = iVar4 + 1;
    FUN_0102f594(uVar3 & 0xff,2,local_34,iVar4 * 0x38 + iVar1 + 0x18fc,local_2c);
    if (1 < iVar2) break;
    uVar3 = iVar4 + 3;
    iVar4 = iVar2;
    if (iVar2 != 0) {
      iVar2 = 1;
    }
  }
  FUN_0102f5d2(2,1,0);
  FUN_0102f5d2(3,1,1);
  return 0;
}

