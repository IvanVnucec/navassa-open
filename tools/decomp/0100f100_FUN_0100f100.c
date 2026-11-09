
void FUN_0100f100(uint param_1,int param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  
  nmi_signal_helper(param_1 == param_4);
  for (uVar1 = 0; uVar1 < param_1; uVar1 = uVar1 + 1) {
    *(undefined1 *)(param_5 + uVar1) =
         *(undefined1 *)(param_2 + (uint)*(ushort *)(param_3 + uVar1 * 2));
  }
  return;
}

