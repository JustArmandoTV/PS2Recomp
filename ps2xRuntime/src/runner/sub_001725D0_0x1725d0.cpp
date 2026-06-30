#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001725D0
// Address: 0x1725d0 - 0x172620
void sub_001725D0_0x1725d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001725D0_0x1725d0");
#endif

    switch (ctx->pc) {
        case 0x1725fcu: goto label_1725fc;
        case 0x172604u: goto label_172604;
        case 0x17260cu: goto label_17260c;
        default: break;
    }

    ctx->pc = 0x1725d0u;

    // 0x1725d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1725d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1725d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1725d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1725d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1725d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1725dc: 0x805bb18  j           func_16EC60
    ctx->pc = 0x1725DCu;
    ctx->pc = 0x1725E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1725DCu;
            // 0x1725e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EC60u;
    {
        auto targetFn = runtime->lookupFunction(0x16EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1725E4u;
    // 0x1725e4: 0x0  nop
    ctx->pc = 0x1725e4u;
    // NOP
    // 0x1725e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1725e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1725ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1725ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1725f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1725f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1725f4: 0xc0599de  jal         func_166778
    ctx->pc = 0x1725F4u;
    SET_GPR_U32(ctx, 31, 0x1725FCu);
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725FCu; }
        if (ctx->pc != 0x1725FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725FCu; }
        if (ctx->pc != 0x1725FCu) { return; }
    }
    ctx->pc = 0x1725FCu;
label_1725fc:
    // 0x1725fc: 0xc05c988  jal         func_172620
    ctx->pc = 0x1725FCu;
    SET_GPR_U32(ctx, 31, 0x172604u);
    ctx->pc = 0x172620u;
    if (runtime->hasFunction(0x172620u)) {
        auto targetFn = runtime->lookupFunction(0x172620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172604u; }
        if (ctx->pc != 0x172604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172620_0x172620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172604u; }
        if (ctx->pc != 0x172604u) { return; }
    }
    ctx->pc = 0x172604u;
label_172604:
    // 0x172604: 0xc0599e0  jal         func_166780
    ctx->pc = 0x172604u;
    SET_GPR_U32(ctx, 31, 0x17260Cu);
    ctx->pc = 0x172608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172604u;
            // 0x172608: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17260Cu; }
        if (ctx->pc != 0x17260Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17260Cu; }
        if (ctx->pc != 0x17260Cu) { return; }
    }
    ctx->pc = 0x17260Cu;
label_17260c:
    // 0x17260c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17260cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172610: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x172610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172618: 0x3e00008  jr          $ra
    ctx->pc = 0x172618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17261Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172618u;
            // 0x17261c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172620u;
}
