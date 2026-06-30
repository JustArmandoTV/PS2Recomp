#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127A48
// Address: 0x127a48 - 0x127a80
void sub_00127A48_0x127a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127A48_0x127a48");
#endif

    switch (ctx->pc) {
        case 0x127a70u: goto label_127a70;
        default: break;
    }

    ctx->pc = 0x127a48u;

    // 0x127a48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x127a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x127a4c: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x127a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x127a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x127a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x127a54: 0xffa70018  sd          $a3, 0x18($sp)
    ctx->pc = 0x127a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 7));
    // 0x127a58: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x127a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x127a5c: 0xffa80020  sd          $t0, 0x20($sp)
    ctx->pc = 0x127a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 8));
    // 0x127a60: 0xffa90028  sd          $t1, 0x28($sp)
    ctx->pc = 0x127a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 9));
    // 0x127a64: 0xffaa0030  sd          $t2, 0x30($sp)
    ctx->pc = 0x127a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 10));
    // 0x127a68: 0xc04b792  jal         func_12DE48
    ctx->pc = 0x127A68u;
    SET_GPR_U32(ctx, 31, 0x127A70u);
    ctx->pc = 0x127A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127A68u;
            // 0x127a6c: 0xffab0038  sd          $t3, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE48u;
    if (runtime->hasFunction(0x12DE48u)) {
        auto targetFn = runtime->lookupFunction(0x12DE48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127A70u; }
        if (ctx->pc != 0x127A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DE48_0x12de48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127A70u; }
        if (ctx->pc != 0x127A70u) { return; }
    }
    ctx->pc = 0x127A70u;
label_127a70:
    // 0x127a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x127a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127a74: 0x3e00008  jr          $ra
    ctx->pc = 0x127A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127A74u;
            // 0x127a78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127A7Cu;
    // 0x127a7c: 0x0  nop
    ctx->pc = 0x127a7cu;
    // NOP
}
