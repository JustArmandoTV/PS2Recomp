#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019A760
// Address: 0x19a760 - 0x19a790
void sub_0019A760_0x19a760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A760_0x19a760");
#endif

    switch (ctx->pc) {
        case 0x19a770u: goto label_19a770;
        default: break;
    }

    ctx->pc = 0x19a760u;

    // 0x19a760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a768: 0xc06eaba  jal         func_1BAAE8
    ctx->pc = 0x19A768u;
    SET_GPR_U32(ctx, 31, 0x19A770u);
    ctx->pc = 0x19A76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A768u;
            // 0x19a76c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAAE8u;
    if (runtime->hasFunction(0x1BAAE8u)) {
        auto targetFn = runtime->lookupFunction(0x1BAAE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A770u; }
        if (ctx->pc != 0x19A770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAAE8_0x1baae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A770u; }
        if (ctx->pc != 0x19A770u) { return; }
    }
    ctx->pc = 0x19A770u;
label_19a770:
    // 0x19a770: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a774: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19a774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a778: 0x432026  xor         $a0, $v0, $v1
    ctx->pc = 0x19a778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x19a77c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a780: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19a780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a784: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x19a784u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x19a788: 0x3e00008  jr          $ra
    ctx->pc = 0x19A788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A788u;
            // 0x19a78c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A790u;
}
