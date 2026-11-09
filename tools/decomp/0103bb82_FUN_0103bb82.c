
undefined4 FUN_0103bb82(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 in_r3;
  int iVar8;
  
  pcVar4 = DAT_0103bce0;
  iVar8 = DAT_0103bcdc;
  if ((*(char *)(DAT_0103bcdc + 0x1b) == '\0') || (*(char *)(DAT_0103bcdc + 1) != '\x03')) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  *DAT_0103bce0 = cVar5;
  if (*pcVar4 == '\0') {
    return in_r3;
  }
  periph_init_f(3);
  FUN_0102ccba(3,4);
  if (*(char *)(iVar8 + 0x16) != '\0') {
    FUN_01013602(0);
  }
  FUN_0101a588((char)*DAT_0103bce4);
  FUN_01017972(0,0);
  iVar8 = *DAT_0103bce8;
  pin_update(iVar8 + 1,2,0);
  uVar6 = DAT_0103bcec[1] / *DAT_0103bcec;
  uVar1 = DAT_0103bcf0[5];
  uVar2 = DAT_0103bcf0[6];
  uVar3 = *DAT_0103bcf0;
  pin_update(iVar8 + 199,0x7f,(int)(uint)uVar1 / (int)uVar6 - 1U >> 8 & 0x7f);
  *(char *)(iVar8 + 0xc6) = (char)((int)(uint)uVar1 / (int)uVar6) + -1;
  *(char *)(iVar8 + 0x32) = (char)(((int)(uint)uVar2 / (int)uVar6 & 0xffffU) - 1 >> 8);
  *(char *)(iVar8 + 0x33) = (char)((int)(uint)uVar2 / (int)uVar6) + -1;
  *(char *)(iVar8 + 5) = (char)((int)(uint)uVar3 / (int)uVar6);
  *(char *)(iVar8 + 6) = (char)((uint)((int)(uint)uVar3 / (int)uVar6) >> 8);
  FUN_0103a4e6(1);
  uVar7 = FUN_01019830(0,0,2,in_r3);
  return uVar7;
}

