#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175260
// Address: 0x175260 - 0x1752b0
void sub_00175260_0x175260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175260_0x175260");
#endif

    switch (ctx->pc) {
        case 0x17528cu: goto label_17528c;
        case 0x175294u: goto label_175294;
        case 0x17529cu: goto label_17529c;
        default: break;
    }

    ctx->pc = 0x175260u;

    // 0x175260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17526c: 0x805baf4  j           func_16EBD0
    ctx->pc = 0x17526Cu;
    ctx->pc = 0x175270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17526Cu;
            // 0x175270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EBD0u;
    {
        auto targetFn = runtime->lookupFunction(0x16EBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x175274u;
    // 0x175274: 0x0  nop
    ctx->pc = 0x175274u;
    // NOP
    // 0x175278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17527c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17527cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175280: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175284: 0xc0599de  jal         func_166778
    ctx->pc = 0x175284u;
    SET_GPR_U32(ctx, 31, 0x17528Cu);
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17528Cu; }
        if (ctx->pc != 0x17528Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17528Cu; }
        if (ctx->pc != 0x17528Cu) { return; }
    }
    ctx->pc = 0x17528Cu;
label_17528c:
    // 0x17528c: 0xc05d4ac  jal         func_1752B0
    ctx->pc = 0x17528Cu;
    SET_GPR_U32(ctx, 31, 0x175294u);
    ctx->pc = 0x1752B0u;
    if (runtime->hasFunction(0x1752B0u)) {
        auto targetFn = runtime->lookupFunction(0x1752B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175294u; }
        if (ctx->pc != 0x175294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001752B0_0x1752b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175294u; }
        if (ctx->pc != 0x175294u) { return; }
    }
    ctx->pc = 0x175294u;
label_175294:
    // 0x175294: 0xc0599e0  jal         func_166780
    ctx->pc = 0x175294u;
    SET_GPR_U32(ctx, 31, 0x17529Cu);
    ctx->pc = 0x175298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175294u;
            // 0x175298: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17529Cu; }
        if (ctx->pc != 0x17529Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17529Cu; }
        if (ctx->pc != 0x17529Cu) { return; }
    }
    ctx->pc = 0x17529Cu;
label_17529c:
    // 0x17529c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17529cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1752a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1752a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1752a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1752a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1752A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1752ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1752A8u;
            // 0x1752ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1752B0u;
}
