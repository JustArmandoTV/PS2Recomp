#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175658
// Address: 0x175658 - 0x175698
void sub_00175658_0x175658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175658_0x175658");
#endif

    switch (ctx->pc) {
        case 0x175674u: goto label_175674;
        case 0x175680u: goto label_175680;
        default: break;
    }

    ctx->pc = 0x175658u;

    // 0x175658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17565c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175664: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17566c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17566Cu;
    SET_GPR_U32(ctx, 31, 0x175674u);
    ctx->pc = 0x175670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17566Cu;
            // 0x175670: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175674u; }
        if (ctx->pc != 0x175674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175674u; }
        if (ctx->pc != 0x175674u) { return; }
    }
    ctx->pc = 0x175674u;
label_175674:
    // 0x175674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175678: 0xc05d5a6  jal         func_175698
    ctx->pc = 0x175678u;
    SET_GPR_U32(ctx, 31, 0x175680u);
    ctx->pc = 0x17567Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175678u;
            // 0x17567c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175698u;
    if (runtime->hasFunction(0x175698u)) {
        auto targetFn = runtime->lookupFunction(0x175698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175680u; }
        if (ctx->pc != 0x175680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175698_0x175698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175680u; }
        if (ctx->pc != 0x175680u) { return; }
    }
    ctx->pc = 0x175680u;
label_175680:
    // 0x175680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175684: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17568c: 0x80599e0  j           func_166780
    ctx->pc = 0x17568Cu;
    ctx->pc = 0x175690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17568Cu;
            // 0x175690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x175694u;
    // 0x175694: 0x0  nop
    ctx->pc = 0x175694u;
    // NOP
}
