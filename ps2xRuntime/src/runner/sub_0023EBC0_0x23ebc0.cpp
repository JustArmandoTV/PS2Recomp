#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023EBC0
// Address: 0x23ebc0 - 0x23ec00
void sub_0023EBC0_0x23ebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EBC0_0x23ebc0");
#endif

    switch (ctx->pc) {
        case 0x23ebdcu: goto label_23ebdc;
        case 0x23ebe8u: goto label_23ebe8;
        default: break;
    }

    ctx->pc = 0x23ebc0u;

    // 0x23ebc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ebc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23ebc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23ebc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23ebc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23ebcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23ebccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23ebd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23ebd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ebd4: 0xc08ea9c  jal         func_23AA70
    ctx->pc = 0x23EBD4u;
    SET_GPR_U32(ctx, 31, 0x23EBDCu);
    ctx->pc = 0x23EBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EBD4u;
            // 0x23ebd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AA70u;
    if (runtime->hasFunction(0x23AA70u)) {
        auto targetFn = runtime->lookupFunction(0x23AA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EBDCu; }
        if (ctx->pc != 0x23EBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023AA70_0x23aa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EBDCu; }
        if (ctx->pc != 0x23EBDCu) { return; }
    }
    ctx->pc = 0x23EBDCu;
label_23ebdc:
    // 0x23ebdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23ebdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ebe0: 0xc08e5ac  jal         func_2396B0
    ctx->pc = 0x23EBE0u;
    SET_GPR_U32(ctx, 31, 0x23EBE8u);
    ctx->pc = 0x23EBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EBE0u;
            // 0x23ebe4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2396B0u;
    if (runtime->hasFunction(0x2396B0u)) {
        auto targetFn = runtime->lookupFunction(0x2396B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EBE8u; }
        if (ctx->pc != 0x23EBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002396B0_0x2396b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EBE8u; }
        if (ctx->pc != 0x23EBE8u) { return; }
    }
    ctx->pc = 0x23EBE8u;
label_23ebe8:
    // 0x23ebe8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23ebe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ebec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23ebecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ebf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23ebf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ebf4: 0x3e00008  jr          $ra
    ctx->pc = 0x23EBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EBF4u;
            // 0x23ebf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EBFCu;
    // 0x23ebfc: 0x0  nop
    ctx->pc = 0x23ebfcu;
    // NOP
}
