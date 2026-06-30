#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024A840
// Address: 0x24a840 - 0x24a890
void sub_0024A840_0x24a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A840_0x24a840");
#endif

    switch (ctx->pc) {
        case 0x24a860u: goto label_24a860;
        default: break;
    }

    ctx->pc = 0x24a840u;

    // 0x24a840: 0x24a9000c  addiu       $t1, $a1, 0xC
    ctx->pc = 0x24a840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x24a844: 0x90a5000e  lbu         $a1, 0xE($a1)
    ctx->pc = 0x24a844u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x24a848: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x24a848u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x24a84c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x24A84Cu;
    {
        const bool branch_taken_0x24a84c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A84Cu;
            // 0x24a850: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a84c) {
            ctx->pc = 0x24A888u;
            goto label_24a888;
        }
    }
    ctx->pc = 0x24A854u;
    // 0x24a854: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x24a854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a858: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24a858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24a85c: 0x0  nop
    ctx->pc = 0x24a85cu;
    // NOP
label_24a860:
    // 0x24a860: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x24a860u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x24a864: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A864u;
    {
        const bool branch_taken_0x24a864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24A868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A864u;
            // 0x24a868: 0x818c0  sll         $v1, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a864) {
            ctx->pc = 0x24A878u;
            goto label_24a878;
        }
    }
    ctx->pc = 0x24A86Cu;
    // 0x24a86c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x24a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x24a870: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24A870u;
    {
        const bool branch_taken_0x24a870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A870u;
            // 0x24a874: 0xa4660006  sh          $a2, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a870) {
            ctx->pc = 0x24A888u;
            goto label_24a888;
        }
    }
    ctx->pc = 0x24A878u;
label_24a878:
    // 0x24a878: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x24a878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x24a87c: 0x105182a  slt         $v1, $t0, $a1
    ctx->pc = 0x24a87cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x24a880: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x24A880u;
    {
        const bool branch_taken_0x24a880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A880u;
            // 0x24a884: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a880) {
            ctx->pc = 0x24A860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24a860;
        }
    }
    ctx->pc = 0x24A888u;
label_24a888:
    // 0x24a888: 0x3e00008  jr          $ra
    ctx->pc = 0x24A888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24A890u;
}
