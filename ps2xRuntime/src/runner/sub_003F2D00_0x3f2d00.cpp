#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F2D00
// Address: 0x3f2d00 - 0x3f2d30
void sub_003F2D00_0x3f2d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2D00_0x3f2d00");
#endif

    switch (ctx->pc) {
        case 0x3f2d18u: goto label_3f2d18;
        case 0x3f2d20u: goto label_3f2d20;
        default: break;
    }

    ctx->pc = 0x3f2d00u;

    // 0x3f2d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f2d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f2d04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f2d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f2d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f2d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f2d0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f2d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2d10: 0xc0fc41c  jal         func_3F1070
    ctx->pc = 0x3F2D10u;
    SET_GPR_U32(ctx, 31, 0x3F2D18u);
    ctx->pc = 0x3F2D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2D10u;
            // 0x3f2d14: 0x260401a0  addiu       $a0, $s0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F1070u;
    if (runtime->hasFunction(0x3F1070u)) {
        auto targetFn = runtime->lookupFunction(0x3F1070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2D18u; }
        if (ctx->pc != 0x3F2D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F1070_0x3f1070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2D18u; }
        if (ctx->pc != 0x3F2D18u) { return; }
    }
    ctx->pc = 0x3F2D18u;
label_3f2d18:
    // 0x3f2d18: 0xc0fc41c  jal         func_3F1070
    ctx->pc = 0x3F2D18u;
    SET_GPR_U32(ctx, 31, 0x3F2D20u);
    ctx->pc = 0x3F2D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2D18u;
            // 0x3f2d1c: 0x260401fc  addiu       $a0, $s0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 508));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F1070u;
    if (runtime->hasFunction(0x3F1070u)) {
        auto targetFn = runtime->lookupFunction(0x3F1070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2D20u; }
        if (ctx->pc != 0x3F2D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F1070_0x3f1070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2D20u; }
        if (ctx->pc != 0x3F2D20u) { return; }
    }
    ctx->pc = 0x3F2D20u;
label_3f2d20:
    // 0x3f2d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f2d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f2d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f2d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2d28: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2D28u;
            // 0x3f2d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F2D30u;
}
