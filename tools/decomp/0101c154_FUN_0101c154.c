
void FUN_0101c154(byte *param_1,int param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  
  iVar4 = *(int *)(DAT_0101cb14 + param_2 * 4);
  pcVar5 = DAT_0101cdb0;
  pcVar2 = DAT_0101cb20;
  if (param_4 != 0) {
    pcVar5 = DAT_0101cdcc;
    pcVar2 = DAT_0101cb1c;
  }
  (*pcVar2)(param_4,iVar4 + 0xf9,0,0x40,param_4);
  (*pcVar2)(param_4,iVar4 + 0xf8,((uint)*param_1 << 0x1c) >> 0x18,0x30);
  (*pcVar2)(param_4,iVar4 + 0xf9,
            param_1[1] + param_1[2] * '\x02' + param_1[3] * '\x04' + param_1[4] * '\b' +
            param_1[5] * '@',0x4f);
  (*pcVar2)(param_4,iVar4 + 0x69,param_1[6] + param_1[9] * '\x02',3);
  if (param_2 == 0) {
    (*pcVar5)(param_4,DAT_0101cdd0);
    (*pcVar5)(param_4,DAT_0101cdd4,(char)*(undefined2 *)(param_1 + 0xe));
    uVar1 = *(ushort *)(param_1 + 0xe);
    uVar3 = DAT_0101cdd8;
  }
  else {
    (*pcVar5)(param_4,DAT_0101cddc,param_1[0xd]);
    (*pcVar5)(param_4,DAT_0101cde0,(char)*(undefined2 *)(param_1 + 0xe));
    uVar1 = *(ushort *)(param_1 + 0xe);
    uVar3 = DAT_0101cde4;
  }
  (*pcVar2)(param_4,uVar3,uVar1 >> 8 & 0x7f,0x7f);
  FUN_0100aa26(param_1,param_2,param_3,param_4);
  return;
}

