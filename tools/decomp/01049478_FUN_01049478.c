
void FUN_01049478(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  
  iVar3 = DAT_01049750;
  iVar2 = DAT_01049724;
  iVar1 = DAT_01049720;
  iVar4 = 0;
  uVar9 = 0;
  do {
    if ((1 << (uVar9 & 0xff) & param_1) == param_1) {
      if (param_2 == 0) {
        uVar8 = 0;
        iVar6 = *(int *)(iVar3 + (uint)*(byte *)(iVar1 + uVar9) * 4);
        uVar10 = 0;
        iVar5 = 0;
LAB_010494de:
        uVar7 = *(undefined4 *)(iVar6 + 0xc);
      }
      else if (param_2 == -1) {
        uVar8 = 0;
        uVar10 = 0;
        uVar7 = 0;
        iVar5 = *(int *)(*(int *)(iVar2 + uVar9 * 4) + 8);
      }
      else {
        uVar8 = 1;
        uVar10 = 1;
        iVar5 = param_2;
        if (param_3 != 0) {
          iVar6 = *(int *)(iVar3 + param_2 * 8 + (uint)*(byte *)(iVar1 + uVar9) * 4);
          goto LAB_010494de;
        }
        uVar7 = 0;
      }
      if (iVar4 == 0) {
        iVar4 = stream_event_dispatcher
                          (*(undefined4 *)(iVar2 + uVar9 * 4),iVar5,uVar7,1,uVar10,uVar8,1,0,0);
      }
    }
    uVar9 = uVar9 + 1;
    if (1 < uVar9) {
      return;
    }
  } while( true );
}

