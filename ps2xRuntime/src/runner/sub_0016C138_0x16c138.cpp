#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016C138
// Address: 0x16c138 - 0x16c178
void sub_0016C138_0x16c138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C138_0x16c138");
#endif

    switch (ctx->pc) {
        case 0x16c154u: goto label_16c154;
        case 0x16c160u: goto label_16c160;
        default: break;
    }

    ctx->pc = 0x16c138u;

    // 0x16c138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c13c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16c14c: 0xc0599de  jal         func_166778
    ctx->pc = 0x16C14Cu;
    SET_GPR_U32(ctx, 31, 0x16C154u);
    ctx->pc = 0x16C150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C14Cu;
            // 0x16c150: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C154u; }
        if (ctx->pc != 0x16C154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C154u; }
        if (ctx->pc != 0x16C154u) { return; }
    }
    ctx->pc = 0x16C154u;
label_16c154:
    // 0x16c154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c158: 0xc05b05e  jal         func_16C178
    ctx->pc = 0x16C158u;
    SET_GPR_U32(ctx, 31, 0x16C160u);
    ctx->pc = 0x16C15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C158u;
            // 0x16c15c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C178u;
    if (runtime->hasFunction(0x16C178u)) {
        auto targetFn = runtime->lookupFunction(0x16C178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C160u; }
        if (ctx->pc != 0x16C160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C178_0x16c178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C160u; }
        if (ctx->pc != 0x16C160u) { return; }
    }
    ctx->pc = 0x16C160u;
label_16c160:
    // 0x16c160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c164: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c16c: 0x80599e0  j           func_166780
    ctx->pc = 0x16C16Cu;
    ctx->pc = 0x16C170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C16Cu;
            // 0x16c170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C174u;
    // 0x16c174: 0x0  nop
    ctx->pc = 0x16c174u;
    // NOP
}
