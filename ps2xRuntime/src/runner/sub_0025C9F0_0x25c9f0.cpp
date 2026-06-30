#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025C9F0
// Address: 0x25c9f0 - 0x25cac0
void sub_0025C9F0_0x25c9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C9F0_0x25c9f0");
#endif

    switch (ctx->pc) {
        case 0x25ca30u: goto label_25ca30;
        default: break;
    }

    ctx->pc = 0x25c9f0u;

    // 0x25c9f0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25c9f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25c9f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25c9f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25c9fc: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x25c9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x25ca00: 0x8467fffc  lh          $a3, -0x4($v1)
    ctx->pc = 0x25ca00u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x25ca04: 0x65043  sra         $t2, $a2, 1
    ctx->pc = 0x25ca04u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 1));
    // 0x25ca08: 0x8463fffe  lh          $v1, -0x2($v1)
    ctx->pc = 0x25ca08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x25ca0c: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x25ca0cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x25ca10: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CA10u;
    {
        const bool branch_taken_0x25ca10 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x25CA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CA10u;
            // 0x25ca14: 0xa5030002  sh          $v1, 0x2($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca10) {
            ctx->pc = 0x25CA20u;
            goto label_25ca20;
        }
    }
    ctx->pc = 0x25CA18u;
    // 0x25ca18: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x25ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25ca1c: 0x35043  sra         $t2, $v1, 1
    ctx->pc = 0x25ca1cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 1));
label_25ca20:
    // 0x25ca20: 0x145082a  slt         $at, $t2, $a1
    ctx->pc = 0x25ca20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25ca24: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x25CA24u;
    {
        const bool branch_taken_0x25ca24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ca24) {
            ctx->pc = 0x25CA98u;
            goto label_25ca98;
        }
    }
    ctx->pc = 0x25CA2Cu;
    // 0x25ca2c: 0x97ab000c  lhu         $t3, 0xC($sp)
    ctx->pc = 0x25ca2cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
label_25ca30:
    // 0x25ca30: 0x56040  sll         $t4, $a1, 1
    ctx->pc = 0x25ca30u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x25ca34: 0x186082a  slt         $at, $t4, $a2
    ctx->pc = 0x25ca34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x25ca38: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x25CA38u;
    {
        const bool branch_taken_0x25ca38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CA38u;
            // 0x25ca3c: 0xc1880  sll         $v1, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca38) {
            ctx->pc = 0x25CA60u;
            goto label_25ca60;
        }
    }
    ctx->pc = 0x25CA40u;
    // 0x25ca40: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25ca44: 0x9467fffc  lhu         $a3, -0x4($v1)
    ctx->pc = 0x25ca44u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x25ca48: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25ca48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25ca4c: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x25ca4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25ca50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CA50u;
    {
        const bool branch_taken_0x25ca50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ca50) {
            ctx->pc = 0x25CA60u;
            goto label_25ca60;
        }
    }
    ctx->pc = 0x25CA58u;
    // 0x25ca58: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x25ca58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x25ca5c: 0x0  nop
    ctx->pc = 0x25ca5cu;
    // NOP
label_25ca60:
    // 0x25ca60: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x25ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x25ca64: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x25ca64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25ca68: 0x9507fffc  lhu         $a3, -0x4($t0)
    ctx->pc = 0x25ca68u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294967292)));
    // 0x25ca6c: 0x167182a  slt         $v1, $t3, $a3
    ctx->pc = 0x25ca6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x25ca70: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25CA70u;
    {
        const bool branch_taken_0x25ca70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CA70u;
            // 0x25ca74: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca70) {
            ctx->pc = 0x25CA98u;
            goto label_25ca98;
        }
    }
    ctx->pc = 0x25CA78u;
    // 0x25ca78: 0x14c082a  slt         $at, $t2, $t4
    ctx->pc = 0x25ca78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x25ca7c: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x25ca7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25ca80: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x25ca80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca84: 0xa527fffc  sh          $a3, -0x4($t1)
    ctx->pc = 0x25ca84u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4294967292), (uint16_t)GPR_U32(ctx, 7));
    // 0x25ca88: 0x9503fffe  lhu         $v1, -0x2($t0)
    ctx->pc = 0x25ca88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294967294)));
    // 0x25ca8c: 0x1020ffe8  beqz        $at, . + 4 + (-0x18 << 2)
    ctx->pc = 0x25CA8Cu;
    {
        const bool branch_taken_0x25ca8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CA8Cu;
            // 0x25ca90: 0xa523fffe  sh          $v1, -0x2($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 4294967294), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca8c) {
            ctx->pc = 0x25CA30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25ca30;
        }
    }
    ctx->pc = 0x25CA94u;
    // 0x25ca94: 0x0  nop
    ctx->pc = 0x25ca94u;
    // NOP
label_25ca98:
    // 0x25ca98: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25ca9c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25caa0: 0x97a3000c  lhu         $v1, 0xC($sp)
    ctx->pc = 0x25caa0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x25caa4: 0xa483fffc  sh          $v1, -0x4($a0)
    ctx->pc = 0x25caa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967292), (uint16_t)GPR_U32(ctx, 3));
    // 0x25caa8: 0x97a3000e  lhu         $v1, 0xE($sp)
    ctx->pc = 0x25caa8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
    // 0x25caac: 0xa483fffe  sh          $v1, -0x2($a0)
    ctx->pc = 0x25caacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x25cab0: 0x3e00008  jr          $ra
    ctx->pc = 0x25CAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CAB0u;
            // 0x25cab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CAB8u;
    // 0x25cab8: 0x0  nop
    ctx->pc = 0x25cab8u;
    // NOP
    // 0x25cabc: 0x0  nop
    ctx->pc = 0x25cabcu;
    // NOP
}
