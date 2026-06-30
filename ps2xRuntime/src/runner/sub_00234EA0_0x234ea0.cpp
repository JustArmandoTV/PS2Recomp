#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234EA0
// Address: 0x234ea0 - 0x234f50
void sub_00234EA0_0x234ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234EA0_0x234ea0");
#endif

    switch (ctx->pc) {
        case 0x234eb4u: goto label_234eb4;
        case 0x234ee0u: goto label_234ee0;
        default: break;
    }

    ctx->pc = 0x234ea0u;

    // 0x234ea0: 0x8ca70050  lw          $a3, 0x50($a1)
    ctx->pc = 0x234ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x234ea4: 0x18e00024  blez        $a3, . + 4 + (0x24 << 2)
    ctx->pc = 0x234EA4u;
    {
        const bool branch_taken_0x234ea4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x234EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234EA4u;
            // 0x234ea8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ea4) {
            ctx->pc = 0x234F38u;
            goto label_234f38;
        }
    }
    ctx->pc = 0x234EACu;
    // 0x234eac: 0x8ca8004c  lw          $t0, 0x4C($a1)
    ctx->pc = 0x234eacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x234eb0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x234eb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_234eb4:
    // 0x234eb4: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x234eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x234eb8: 0x54c7001b  bnel        $a2, $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x234EB8u;
    {
        const bool branch_taken_0x234eb8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x234eb8) {
            ctx->pc = 0x234EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234EB8u;
            // 0x234ebc: 0x8ca70050  lw          $a3, 0x50($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234F28u;
            goto label_234f28;
        }
    }
    ctx->pc = 0x234EC0u;
    // 0x234ec0: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x234ec0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x234ec4: 0x8ca60050  lw          $a2, 0x50($a1)
    ctx->pc = 0x234ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x234ec8: 0x10a3821  addu        $a3, $t0, $t2
    ctx->pc = 0x234ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x234ecc: 0xdce90008  ld          $t1, 0x8($a3)
    ctx->pc = 0x234eccu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x234ed0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x234ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x234ed4: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x234ed4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x234ed8: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x234ED8u;
    {
        const bool branch_taken_0x234ed8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x234EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234ED8u;
            // 0x234edc: 0xaca60050  sw          $a2, 0x50($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ed8) {
            ctx->pc = 0x234F20u;
            goto label_234f20;
        }
    }
    ctx->pc = 0x234EE0u;
label_234ee0:
    // 0x234ee0: 0x8ca7004c  lw          $a3, 0x4C($a1)
    ctx->pc = 0x234ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x234ee4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x234ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x234ee8: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x234ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x234eec: 0xe64021  addu        $t0, $a3, $a2
    ctx->pc = 0x234eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x234ef0: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x234ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x234ef4: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x234ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x234ef8: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x234ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x234efc: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x234efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x234f00: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x234f00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x234f04: 0xdd060008  ld          $a2, 0x8($t0)
    ctx->pc = 0x234f04u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x234f08: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x234f08u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x234f0c: 0x8ca60050  lw          $a2, 0x50($a1)
    ctx->pc = 0x234f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x234f10: 0x66302a  slt         $a2, $v1, $a2
    ctx->pc = 0x234f10u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x234f14: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x234F14u;
    {
        const bool branch_taken_0x234f14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x234F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234F14u;
            // 0x234f18: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f14) {
            ctx->pc = 0x234EE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234ee0;
        }
    }
    ctx->pc = 0x234F1Cu;
    // 0x234f1c: 0x0  nop
    ctx->pc = 0x234f1cu;
    // NOP
label_234f20:
    // 0x234f20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x234F20u;
    {
        const bool branch_taken_0x234f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234F20u;
            // 0x234f24: 0xfc890000  sd          $t1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f20) {
            ctx->pc = 0x234F3Cu;
            goto label_234f3c;
        }
    }
    ctx->pc = 0x234F28u;
label_234f28:
    // 0x234f28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x234f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x234f2c: 0x67382a  slt         $a3, $v1, $a3
    ctx->pc = 0x234f2cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x234f30: 0x14e0ffe0  bnez        $a3, . + 4 + (-0x20 << 2)
    ctx->pc = 0x234F30u;
    {
        const bool branch_taken_0x234f30 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x234F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234F30u;
            // 0x234f34: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f30) {
            ctx->pc = 0x234EB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234eb4;
        }
    }
    ctx->pc = 0x234F38u;
label_234f38:
    // 0x234f38: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x234f38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
label_234f3c:
    // 0x234f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x234F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234F44u;
    // 0x234f44: 0x0  nop
    ctx->pc = 0x234f44u;
    // NOP
    // 0x234f48: 0x0  nop
    ctx->pc = 0x234f48u;
    // NOP
    // 0x234f4c: 0x0  nop
    ctx->pc = 0x234f4cu;
    // NOP
}
