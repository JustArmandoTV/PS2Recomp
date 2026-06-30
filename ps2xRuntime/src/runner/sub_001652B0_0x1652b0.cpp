#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001652B0
// Address: 0x1652b0 - 0x1652f0
void sub_001652B0_0x1652b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001652B0_0x1652b0");
#endif

    switch (ctx->pc) {
        case 0x1652d8u: goto label_1652d8;
        default: break;
    }

    ctx->pc = 0x1652b0u;

    // 0x1652b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1652b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1652b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1652b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1652b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1652b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1652bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1652bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1652c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1652c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1652c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1652c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1652c8: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1652C8u;
    {
        const bool branch_taken_0x1652c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1652c8) {
            ctx->pc = 0x1652CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1652C8u;
            // 0x1652cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1652E4u;
            goto label_1652e4;
        }
    }
    ctx->pc = 0x1652D0u;
    // 0x1652d0: 0xc05dfa6  jal         func_177E98
    ctx->pc = 0x1652D0u;
    SET_GPR_U32(ctx, 31, 0x1652D8u);
    ctx->pc = 0x1652D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1652D0u;
            // 0x1652d4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177E98u;
    if (runtime->hasFunction(0x177E98u)) {
        auto targetFn = runtime->lookupFunction(0x177E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1652D8u; }
        if (ctx->pc != 0x1652D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177E98_0x177e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1652D8u; }
        if (ctx->pc != 0x1652D8u) { return; }
    }
    ctx->pc = 0x1652D8u;
label_1652d8:
    // 0x1652d8: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1652d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x1652dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1652dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1652e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1652e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1652e4:
    // 0x1652e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1652e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1652e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1652E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1652ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1652E8u;
            // 0x1652ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1652F0u;
}
