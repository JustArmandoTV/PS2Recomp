#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0790
// Address: 0x2c0790 - 0x2c07d0
void sub_002C0790_0x2c0790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0790_0x2c0790");
#endif

    switch (ctx->pc) {
        case 0x2c07bcu: goto label_2c07bc;
        default: break;
    }

    ctx->pc = 0x2c0790u;

    // 0x2c0790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c0794: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2c0794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2c0798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c0798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c079c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2c079cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x2c07a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c07a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c07a4: 0x24a53440  addiu       $a1, $a1, 0x3440
    ctx->pc = 0x2c07a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13376));
    // 0x2c07a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c07a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c07ac: 0x24c633e0  addiu       $a2, $a2, 0x33E0
    ctx->pc = 0x2c07acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13280));
    // 0x2c07b0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2c07b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c07b4: 0xc040804  jal         func_102010
    ctx->pc = 0x2C07B4u;
    SET_GPR_U32(ctx, 31, 0x2C07BCu);
    ctx->pc = 0x2C07B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C07B4u;
            // 0x2c07b8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C07BCu; }
        if (ctx->pc != 0x2C07BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C07BCu; }
        if (ctx->pc != 0x2C07BCu) { return; }
    }
    ctx->pc = 0x2C07BCu;
label_2c07bc:
    // 0x2c07bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c07bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c07c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c07c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c07c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c07c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c07c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C07C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C07CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C07C8u;
            // 0x2c07cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C07D0u;
}
