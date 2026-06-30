#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001973C0
// Address: 0x1973c0 - 0x197410
void sub_001973C0_0x1973c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001973C0_0x1973c0");
#endif

    switch (ctx->pc) {
        case 0x1973d0u: goto label_1973d0;
        default: break;
    }

    ctx->pc = 0x1973c0u;

    // 0x1973c0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1973c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1973c4: 0x248b000a  addiu       $t3, $a0, 0xA
    ctx->pc = 0x1973c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x1973c8: 0x252a0040  addiu       $t2, $t1, 0x40
    ctx->pc = 0x1973c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x1973cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1973ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1973d0:
    // 0x1973d0: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x1973d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1973d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1973d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1973d8: 0x1641021  addu        $v0, $t3, $a0
    ctx->pc = 0x1973d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1973dc: 0x8a3021  addu        $a2, $a0, $t2
    ctx->pc = 0x1973dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1973e0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1973e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1973e4: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1973e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1973e8: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x1973e8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1973ec: 0x29070020  slti        $a3, $t0, 0x20
    ctx->pc = 0x1973ecu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1973f0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1973f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1973f4: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x1973f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x1973f8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1973f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1973fc: 0x14e0fff4  bnez        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x1973FCu;
    {
        const bool branch_taken_0x1973fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x197400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1973FCu;
            // 0x197400: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973fc) {
            ctx->pc = 0x1973D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1973d0;
        }
    }
    ctx->pc = 0x197404u;
    // 0x197404: 0x3e00008  jr          $ra
    ctx->pc = 0x197404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19740Cu;
    // 0x19740c: 0x0  nop
    ctx->pc = 0x19740cu;
    // NOP
}
