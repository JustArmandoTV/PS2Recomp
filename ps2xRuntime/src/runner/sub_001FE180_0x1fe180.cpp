#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FE180
// Address: 0x1fe180 - 0x1fe1b0
void sub_001FE180_0x1fe180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE180_0x1fe180");
#endif

    switch (ctx->pc) {
        case 0x1fe198u: goto label_1fe198;
        default: break;
    }

    ctx->pc = 0x1fe180u;

    // 0x1fe180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fe180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fe184: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe188: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1fe188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1fe18c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe190: 0xc07f86c  jal         func_1FE1B0
    ctx->pc = 0x1FE190u;
    SET_GPR_U32(ctx, 31, 0x1FE198u);
    ctx->pc = 0x1FE194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE190u;
            // 0x1fe194: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1B0u;
    if (runtime->hasFunction(0x1FE1B0u)) {
        auto targetFn = runtime->lookupFunction(0x1FE1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE198u; }
        if (ctx->pc != 0x1FE198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE1B0_0x1fe1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE198u; }
        if (ctx->pc != 0x1FE198u) { return; }
    }
    ctx->pc = 0x1FE198u;
label_1fe198:
    // 0x1fe198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe19c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE19Cu;
            // 0x1fe1a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE1A4u;
    // 0x1fe1a4: 0x0  nop
    ctx->pc = 0x1fe1a4u;
    // NOP
    // 0x1fe1a8: 0x0  nop
    ctx->pc = 0x1fe1a8u;
    // NOP
    // 0x1fe1ac: 0x0  nop
    ctx->pc = 0x1fe1acu;
    // NOP
}
