#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028D7E0
// Address: 0x28d7e0 - 0x28d840
void sub_0028D7E0_0x28d7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D7E0_0x28d7e0");
#endif

    switch (ctx->pc) {
        case 0x28d7fcu: goto label_28d7fc;
        case 0x28d808u: goto label_28d808;
        case 0x28d814u: goto label_28d814;
        case 0x28d820u: goto label_28d820;
        default: break;
    }

    ctx->pc = 0x28d7e0u;

    // 0x28d7e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28d7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28d7e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28d7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28d7e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28d7ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28d7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28d7f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28d7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d7f4: 0xc0a330c  jal         func_28CC30
    ctx->pc = 0x28D7F4u;
    SET_GPR_U32(ctx, 31, 0x28D7FCu);
    ctx->pc = 0x28D7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D7F4u;
            // 0x28d7f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CC30u;
    if (runtime->hasFunction(0x28CC30u)) {
        auto targetFn = runtime->lookupFunction(0x28CC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D7FCu; }
        if (ctx->pc != 0x28D7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CC30_0x28cc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D7FCu; }
        if (ctx->pc != 0x28D7FCu) { return; }
    }
    ctx->pc = 0x28D7FCu;
label_28d7fc:
    // 0x28d7fc: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x28d7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x28d800: 0xc0a330c  jal         func_28CC30
    ctx->pc = 0x28D800u;
    SET_GPR_U32(ctx, 31, 0x28D808u);
    ctx->pc = 0x28D804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D800u;
            // 0x28d804: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CC30u;
    if (runtime->hasFunction(0x28CC30u)) {
        auto targetFn = runtime->lookupFunction(0x28CC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D808u; }
        if (ctx->pc != 0x28D808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CC30_0x28cc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D808u; }
        if (ctx->pc != 0x28D808u) { return; }
    }
    ctx->pc = 0x28D808u;
label_28d808:
    // 0x28d808: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x28d808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x28d80c: 0xc0a330c  jal         func_28CC30
    ctx->pc = 0x28D80Cu;
    SET_GPR_U32(ctx, 31, 0x28D814u);
    ctx->pc = 0x28D810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D80Cu;
            // 0x28d810: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CC30u;
    if (runtime->hasFunction(0x28CC30u)) {
        auto targetFn = runtime->lookupFunction(0x28CC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D814u; }
        if (ctx->pc != 0x28D814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CC30_0x28cc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D814u; }
        if (ctx->pc != 0x28D814u) { return; }
    }
    ctx->pc = 0x28D814u;
label_28d814:
    // 0x28d814: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x28d814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x28d818: 0xc0a330c  jal         func_28CC30
    ctx->pc = 0x28D818u;
    SET_GPR_U32(ctx, 31, 0x28D820u);
    ctx->pc = 0x28D81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D818u;
            // 0x28d81c: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CC30u;
    if (runtime->hasFunction(0x28CC30u)) {
        auto targetFn = runtime->lookupFunction(0x28CC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D820u; }
        if (ctx->pc != 0x28D820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CC30_0x28cc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D820u; }
        if (ctx->pc != 0x28D820u) { return; }
    }
    ctx->pc = 0x28D820u;
label_28d820:
    // 0x28d820: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28d820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28d824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28d828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d82c: 0x3e00008  jr          $ra
    ctx->pc = 0x28D82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D82Cu;
            // 0x28d830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D834u;
    // 0x28d834: 0x0  nop
    ctx->pc = 0x28d834u;
    // NOP
    // 0x28d838: 0x0  nop
    ctx->pc = 0x28d838u;
    // NOP
    // 0x28d83c: 0x0  nop
    ctx->pc = 0x28d83cu;
    // NOP
}
