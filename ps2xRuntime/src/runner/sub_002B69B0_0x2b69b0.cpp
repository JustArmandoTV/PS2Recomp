#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B69B0
// Address: 0x2b69b0 - 0x2b69f0
void sub_002B69B0_0x2b69b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B69B0_0x2b69b0");
#endif

    switch (ctx->pc) {
        case 0x2b69d8u: goto label_2b69d8;
        default: break;
    }

    ctx->pc = 0x2b69b0u;

    // 0x2b69b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b69b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b69b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b69b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b69b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b69b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b69bc: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2b69bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2b69c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b69c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b69c4: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x2b69c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x2b69c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b69c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b69cc: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x2b69ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x2b69d0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B69D0u;
    SET_GPR_U32(ctx, 31, 0x2B69D8u);
    ctx->pc = 0x2B69D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B69D0u;
            // 0x2b69d4: 0xac8000c8  sw          $zero, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B69D8u; }
        if (ctx->pc != 0x2B69D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B69D8u; }
        if (ctx->pc != 0x2B69D8u) { return; }
    }
    ctx->pc = 0x2B69D8u;
label_2b69d8:
    // 0x2b69d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b69d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b69dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b69dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b69e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b69e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b69e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B69E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B69E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B69E4u;
            // 0x2b69e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B69ECu;
    // 0x2b69ec: 0x0  nop
    ctx->pc = 0x2b69ecu;
    // NOP
}
