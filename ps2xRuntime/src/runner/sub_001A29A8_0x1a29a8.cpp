#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A29A8
// Address: 0x1a29a8 - 0x1a29d8
void sub_001A29A8_0x1a29a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A29A8_0x1a29a8");
#endif

    switch (ctx->pc) {
        case 0x1a29b8u: goto label_1a29b8;
        case 0x1a29c0u: goto label_1a29c0;
        default: break;
    }

    ctx->pc = 0x1a29a8u;

    // 0x1a29a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a29a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a29ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a29acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a29b0: 0xc067536  jal         func_19D4D8
    ctx->pc = 0x1A29B0u;
    SET_GPR_U32(ctx, 31, 0x1A29B8u);
    ctx->pc = 0x19D4D8u;
    if (runtime->hasFunction(0x19D4D8u)) {
        auto targetFn = runtime->lookupFunction(0x19D4D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29B8u; }
        if (ctx->pc != 0x1A29B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D4D8_0x19d4d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29B8u; }
        if (ctx->pc != 0x1A29B8u) { return; }
    }
    ctx->pc = 0x1A29B8u;
label_1a29b8:
    // 0x1a29b8: 0xc068b36  jal         func_1A2CD8
    ctx->pc = 0x1A29B8u;
    SET_GPR_U32(ctx, 31, 0x1A29C0u);
    ctx->pc = 0x1A29BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A29B8u;
            // 0x1a29bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2CD8u;
    if (runtime->hasFunction(0x1A2CD8u)) {
        auto targetFn = runtime->lookupFunction(0x1A2CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29C0u; }
        if (ctx->pc != 0x1A29C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2CD8_0x1a2cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29C0u; }
        if (ctx->pc != 0x1A29C0u) { return; }
    }
    ctx->pc = 0x1A29C0u;
label_1a29c0:
    // 0x1a29c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a29c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a29c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a29c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a29c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a29c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a29cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A29CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A29D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A29CCu;
            // 0x1a29d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A29D4u;
    // 0x1a29d4: 0x0  nop
    ctx->pc = 0x1a29d4u;
    // NOP
}
