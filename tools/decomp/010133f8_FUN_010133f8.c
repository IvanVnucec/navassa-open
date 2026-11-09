
undefined4 FUN_010133f8(uint param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 local_30 [4];
  undefined4 uStack_20;
  
  if ((int)((3U >> (param_1 & 0xff)) << 0x1f) < 0) {
    iVar4 = *(int *)(DAT_010134ec + param_1 * 4);
    pcVar3 = DAT_010134f8;
    pcVar1 = DAT_010134f4;
    if (param_3 != 0) {
      pcVar3 = DAT_01013500;
      pcVar1 = DAT_010134fc;
    }
    uStack_20 = param_4;
    (*pcVar1)(param_3,iVar4 + 0xb5,*param_2,0x10);
    (*pcVar1)(param_3,iVar4 + 0xac,param_2[1],0x80);
    (*pcVar1)(param_3,iVar4 + 0xba,param_2[2],6);
    (*pcVar3)(param_3,iVar4 + 0xc2,param_2[4]);
    (*pcVar3)(param_3,iVar4 + 0xc3,param_2[5]);
    (*pcVar3)(param_3,iVar4 + 0xc4,param_2[6]);
    (*pcVar3)(param_3,iVar4 + 0xc5,param_2[7]);
    (*pcVar1)(param_3,iVar4 + 0xd0,param_2[8],2);
    (*pcVar1)(param_3,iVar4 + 0x9d,param_2[9],1);
    (*pcVar1)(param_3,iVar4 + 0x1d,param_2[10],0x40);
    (*pcVar1)(param_3,iVar4 + 0xa3,param_2[0xd],8);
    local_30[2] = DAT_01013504;
    local_30[3] = DAT_01013508;
    (*pcVar3)(param_3,local_30[param_1 + 2],param_2[0xe]);
    local_30[0] = DAT_0101350c;
    local_30[1] = DAT_01013510;
    (*pcVar3)(param_3,local_30[param_1],param_2[0xe]);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xc800;
  }
  return uVar2;
}

