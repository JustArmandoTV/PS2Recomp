#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029FF00
// Address: 0x29ff00 - 0x29ff30
void sub_0029FF00_0x29ff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FF00_0x29ff00");
#endif

    switch (ctx->pc) {
        case 0x29ff18u: goto label_29ff18;
        default: break;
    }

    ctx->pc = 0x29ff00u;

    // 0x29ff00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29ff00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29ff04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29ff04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29ff08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ff08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29ff0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ff0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff10: 0xc0a7f44  jal         func_29FD10
    ctx->pc = 0x29FF10u;
    SET_GPR_U32(ctx, 31, 0x29FF18u);
    ctx->pc = 0x29FF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF10u;
            // 0x29ff14: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FD10u;
    if (runtime->hasFunction(0x29FD10u)) {
        auto targetFn = runtime->lookupFunction(0x29FD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF18u; }
        if (ctx->pc != 0x29FF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FD10_0x29fd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF18u; }
        if (ctx->pc != 0x29FF18u) { return; }
    }
    ctx->pc = 0x29FF18u;
label_29ff18:
    // 0x29ff18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29ff18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29ff1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ff20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ff20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ff24: 0x3e00008  jr          $ra
    ctx->pc = 0x29FF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF24u;
            // 0x29ff28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29FF2Cu;
    // 0x29ff2c: 0x0  nop
    ctx->pc = 0x29ff2cu;
    // NOP
}
