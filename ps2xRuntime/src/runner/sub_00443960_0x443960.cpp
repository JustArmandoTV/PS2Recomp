#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00443960
// Address: 0x443960 - 0x4439a0
void sub_00443960_0x443960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443960_0x443960");
#endif

    switch (ctx->pc) {
        case 0x443980u: goto label_443980;
        case 0x44398cu: goto label_44398c;
        default: break;
    }

    ctx->pc = 0x443960u;

    // 0x443960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x443960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x443964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x443964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x443968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x443968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44396c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44396cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x443970: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x443970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443974: 0x263000f0  addiu       $s0, $s1, 0xF0
    ctx->pc = 0x443974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x443978: 0xc0c6278  jal         func_3189E0
    ctx->pc = 0x443978u;
    SET_GPR_U32(ctx, 31, 0x443980u);
    ctx->pc = 0x44397Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443978u;
            // 0x44397c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3189E0u;
    if (runtime->hasFunction(0x3189E0u)) {
        auto targetFn = runtime->lookupFunction(0x3189E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443980u; }
        if (ctx->pc != 0x443980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003189E0_0x3189e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443980u; }
        if (ctx->pc != 0x443980u) { return; }
    }
    ctx->pc = 0x443980u;
label_443980:
    // 0x443980: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x443980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x443984: 0xc04c720  jal         func_131C80
    ctx->pc = 0x443984u;
    SET_GPR_U32(ctx, 31, 0x44398Cu);
    ctx->pc = 0x443988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443984u;
            // 0x443988: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44398Cu; }
        if (ctx->pc != 0x44398Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44398Cu; }
        if (ctx->pc != 0x44398Cu) { return; }
    }
    ctx->pc = 0x44398Cu;
label_44398c:
    // 0x44398c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44398cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x443990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x443990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x443994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443998: 0x3e00008  jr          $ra
    ctx->pc = 0x443998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44399Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443998u;
            // 0x44399c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4439A0u;
}
