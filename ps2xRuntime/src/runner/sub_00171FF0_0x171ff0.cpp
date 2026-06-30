#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171FF0
// Address: 0x171ff0 - 0x172038
void sub_00171FF0_0x171ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171FF0_0x171ff0");
#endif

    switch (ctx->pc) {
        case 0x172014u: goto label_172014;
        case 0x17201cu: goto label_17201c;
        case 0x172024u: goto label_172024;
        default: break;
    }

    ctx->pc = 0x171ff0u;

    // 0x171ff0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x171ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x171ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x171FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171FF4u;
            // 0x171ff8: 0xac442e74  sw          $a0, 0x2E74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11892), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171FFCu;
    // 0x171ffc: 0x0  nop
    ctx->pc = 0x171ffcu;
    // NOP
    // 0x172000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172008: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x172008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17200c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17200Cu;
    SET_GPR_U32(ctx, 31, 0x172014u);
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172014u; }
        if (ctx->pc != 0x172014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172014u; }
        if (ctx->pc != 0x172014u) { return; }
    }
    ctx->pc = 0x172014u;
label_172014:
    // 0x172014: 0xc05c80e  jal         func_172038
    ctx->pc = 0x172014u;
    SET_GPR_U32(ctx, 31, 0x17201Cu);
    ctx->pc = 0x172038u;
    if (runtime->hasFunction(0x172038u)) {
        auto targetFn = runtime->lookupFunction(0x172038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17201Cu; }
        if (ctx->pc != 0x17201Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172038_0x172038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17201Cu; }
        if (ctx->pc != 0x17201Cu) { return; }
    }
    ctx->pc = 0x17201Cu;
label_17201c:
    // 0x17201c: 0xc0599e0  jal         func_166780
    ctx->pc = 0x17201Cu;
    SET_GPR_U32(ctx, 31, 0x172024u);
    ctx->pc = 0x172020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17201Cu;
            // 0x172020: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172024u; }
        if (ctx->pc != 0x172024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172024u; }
        if (ctx->pc != 0x172024u) { return; }
    }
    ctx->pc = 0x172024u;
label_172024:
    // 0x172024: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x172024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172028: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x172028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17202c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17202cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172030: 0x3e00008  jr          $ra
    ctx->pc = 0x172030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172030u;
            // 0x172034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172038u;
}
