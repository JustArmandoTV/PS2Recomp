#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00351A80
// Address: 0x351a80 - 0x351ac0
void sub_00351A80_0x351a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351A80_0x351a80");
#endif

    switch (ctx->pc) {
        case 0x351aa4u: goto label_351aa4;
        default: break;
    }

    ctx->pc = 0x351a80u;

    // 0x351a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x351a84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x351a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x351a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x351a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x351a8c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x351a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x351a90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x351a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x351a94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x351a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351a98: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x351a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x351a9c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x351A9Cu;
    SET_GPR_U32(ctx, 31, 0x351AA4u);
    ctx->pc = 0x351AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351A9Cu;
            // 0x351aa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351AA4u; }
        if (ctx->pc != 0x351AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351AA4u; }
        if (ctx->pc != 0x351AA4u) { return; }
    }
    ctx->pc = 0x351AA4u;
label_351aa4:
    // 0x351aa4: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x351aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x351aa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x351aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351aac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x351aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x351AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351AB0u;
            // 0x351ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351AB8u;
    // 0x351ab8: 0x0  nop
    ctx->pc = 0x351ab8u;
    // NOP
    // 0x351abc: 0x0  nop
    ctx->pc = 0x351abcu;
    // NOP
}
