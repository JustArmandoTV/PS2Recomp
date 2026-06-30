#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025CAC0
// Address: 0x25cac0 - 0x25cb90
void sub_0025CAC0_0x25cac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CAC0_0x25cac0");
#endif

    switch (ctx->pc) {
        case 0x25cb00u: goto label_25cb00;
        default: break;
    }

    ctx->pc = 0x25cac0u;

    // 0x25cac0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25cac4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25cac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25cac8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25cacc: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x25caccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x25cad0: 0x8467fffc  lh          $a3, -0x4($v1)
    ctx->pc = 0x25cad0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x25cad4: 0x65043  sra         $t2, $a2, 1
    ctx->pc = 0x25cad4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 1));
    // 0x25cad8: 0x8463fffe  lh          $v1, -0x2($v1)
    ctx->pc = 0x25cad8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x25cadc: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x25cadcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x25cae0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CAE0u;
    {
        const bool branch_taken_0x25cae0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x25CAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CAE0u;
            // 0x25cae4: 0xa5030002  sh          $v1, 0x2($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cae0) {
            ctx->pc = 0x25CAF0u;
            goto label_25caf0;
        }
    }
    ctx->pc = 0x25CAE8u;
    // 0x25cae8: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x25cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25caec: 0x35043  sra         $t2, $v1, 1
    ctx->pc = 0x25caecu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 1));
label_25caf0:
    // 0x25caf0: 0x145082a  slt         $at, $t2, $a1
    ctx->pc = 0x25caf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25caf4: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x25CAF4u;
    {
        const bool branch_taken_0x25caf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x25caf4) {
            ctx->pc = 0x25CB68u;
            goto label_25cb68;
        }
    }
    ctx->pc = 0x25CAFCu;
    // 0x25cafc: 0x97ab000c  lhu         $t3, 0xC($sp)
    ctx->pc = 0x25cafcu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
label_25cb00:
    // 0x25cb00: 0x56040  sll         $t4, $a1, 1
    ctx->pc = 0x25cb00u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x25cb04: 0x186082a  slt         $at, $t4, $a2
    ctx->pc = 0x25cb04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x25cb08: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x25CB08u;
    {
        const bool branch_taken_0x25cb08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB08u;
            // 0x25cb0c: 0xc1880  sll         $v1, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb08) {
            ctx->pc = 0x25CB30u;
            goto label_25cb30;
        }
    }
    ctx->pc = 0x25CB10u;
    // 0x25cb10: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25cb14: 0x9467fffc  lhu         $a3, -0x4($v1)
    ctx->pc = 0x25cb14u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x25cb18: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25cb18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25cb1c: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x25cb1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25cb20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CB20u;
    {
        const bool branch_taken_0x25cb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cb20) {
            ctx->pc = 0x25CB30u;
            goto label_25cb30;
        }
    }
    ctx->pc = 0x25CB28u;
    // 0x25cb28: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x25cb28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x25cb2c: 0x0  nop
    ctx->pc = 0x25cb2cu;
    // NOP
label_25cb30:
    // 0x25cb30: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x25cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x25cb34: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x25cb34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25cb38: 0x9507fffc  lhu         $a3, -0x4($t0)
    ctx->pc = 0x25cb38u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294967292)));
    // 0x25cb3c: 0x167182a  slt         $v1, $t3, $a3
    ctx->pc = 0x25cb3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x25cb40: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25CB40u;
    {
        const bool branch_taken_0x25cb40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB40u;
            // 0x25cb44: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb40) {
            ctx->pc = 0x25CB68u;
            goto label_25cb68;
        }
    }
    ctx->pc = 0x25CB48u;
    // 0x25cb48: 0x14c082a  slt         $at, $t2, $t4
    ctx->pc = 0x25cb48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x25cb4c: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x25cb4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25cb50: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x25cb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb54: 0xa527fffc  sh          $a3, -0x4($t1)
    ctx->pc = 0x25cb54u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4294967292), (uint16_t)GPR_U32(ctx, 7));
    // 0x25cb58: 0x9503fffe  lhu         $v1, -0x2($t0)
    ctx->pc = 0x25cb58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294967294)));
    // 0x25cb5c: 0x1020ffe8  beqz        $at, . + 4 + (-0x18 << 2)
    ctx->pc = 0x25CB5Cu;
    {
        const bool branch_taken_0x25cb5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB5Cu;
            // 0x25cb60: 0xa523fffe  sh          $v1, -0x2($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 4294967294), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb5c) {
            ctx->pc = 0x25CB00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25cb00;
        }
    }
    ctx->pc = 0x25CB64u;
    // 0x25cb64: 0x0  nop
    ctx->pc = 0x25cb64u;
    // NOP
label_25cb68:
    // 0x25cb68: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25cb6c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25cb70: 0x97a3000c  lhu         $v1, 0xC($sp)
    ctx->pc = 0x25cb70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x25cb74: 0xa483fffc  sh          $v1, -0x4($a0)
    ctx->pc = 0x25cb74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967292), (uint16_t)GPR_U32(ctx, 3));
    // 0x25cb78: 0x97a3000e  lhu         $v1, 0xE($sp)
    ctx->pc = 0x25cb78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
    // 0x25cb7c: 0xa483fffe  sh          $v1, -0x2($a0)
    ctx->pc = 0x25cb7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x25cb80: 0x3e00008  jr          $ra
    ctx->pc = 0x25CB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB80u;
            // 0x25cb84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CB88u;
    // 0x25cb88: 0x0  nop
    ctx->pc = 0x25cb88u;
    // NOP
    // 0x25cb8c: 0x0  nop
    ctx->pc = 0x25cb8cu;
    // NOP
}
