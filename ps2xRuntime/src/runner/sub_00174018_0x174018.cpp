#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174018
// Address: 0x174018 - 0x174058
void sub_00174018_0x174018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174018_0x174018");
#endif

    switch (ctx->pc) {
        case 0x174034u: goto label_174034;
        case 0x174040u: goto label_174040;
        default: break;
    }

    ctx->pc = 0x174018u;

    // 0x174018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17401c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17401cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174024: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x174024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x174028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17402c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17402Cu;
    SET_GPR_U32(ctx, 31, 0x174034u);
    ctx->pc = 0x174030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17402Cu;
            // 0x174030: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174034u; }
        if (ctx->pc != 0x174034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174034u; }
        if (ctx->pc != 0x174034u) { return; }
    }
    ctx->pc = 0x174034u;
label_174034:
    // 0x174034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174038: 0xc05d016  jal         func_174058
    ctx->pc = 0x174038u;
    SET_GPR_U32(ctx, 31, 0x174040u);
    ctx->pc = 0x17403Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174038u;
            // 0x17403c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174058u;
    if (runtime->hasFunction(0x174058u)) {
        auto targetFn = runtime->lookupFunction(0x174058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174040u; }
        if (ctx->pc != 0x174040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174058_0x174058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174040u; }
        if (ctx->pc != 0x174040u) { return; }
    }
    ctx->pc = 0x174040u;
label_174040:
    // 0x174040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174044: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x174044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174048: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x174048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17404c: 0x80599e0  j           func_166780
    ctx->pc = 0x17404Cu;
    ctx->pc = 0x174050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17404Cu;
            // 0x174050: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x174054u;
    // 0x174054: 0x0  nop
    ctx->pc = 0x174054u;
    // NOP
}
