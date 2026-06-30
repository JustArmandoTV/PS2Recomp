#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029DA70
// Address: 0x29da70 - 0x29dac0
void sub_0029DA70_0x29da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DA70_0x29da70");
#endif

    ctx->pc = 0x29da70u;

    // 0x29da70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29da70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x29da74: 0x2442f6f0  addiu       $v0, $v0, -0x910
    ctx->pc = 0x29da74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964976));
    // 0x29da78: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x29da78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x29da7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29da80: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x29da80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x29da84: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x29da84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x29da88: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x29da88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x29da8c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x29da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x29da90: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x29da90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29da94: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x29da94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x29da98: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29da98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29da9c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x29da9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x29daa0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x29daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x29daa4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x29daa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x29daa8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x29daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x29daac: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x29daacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x29dab0: 0x3e00008  jr          $ra
    ctx->pc = 0x29DAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DAB0u;
            // 0x29dab4: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DAB8u;
    // 0x29dab8: 0x0  nop
    ctx->pc = 0x29dab8u;
    // NOP
    // 0x29dabc: 0x0  nop
    ctx->pc = 0x29dabcu;
    // NOP
}
