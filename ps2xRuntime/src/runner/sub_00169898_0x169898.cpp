#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169898
// Address: 0x169898 - 0x1698e0
void sub_00169898_0x169898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169898_0x169898");
#endif

    switch (ctx->pc) {
        case 0x1698b4u: goto label_1698b4;
        case 0x1698c0u: goto label_1698c0;
        case 0x1698c8u: goto label_1698c8;
        default: break;
    }

    ctx->pc = 0x169898u;

    // 0x169898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16989c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16989cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1698a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1698a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1698a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1698a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1698a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1698a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1698ac: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x1698ACu;
    SET_GPR_U32(ctx, 31, 0x1698B4u);
    ctx->pc = 0x1698B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1698ACu;
            // 0x1698b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1698B4u; }
        if (ctx->pc != 0x1698B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1698B4u; }
        if (ctx->pc != 0x1698B4u) { return; }
    }
    ctx->pc = 0x1698B4u;
label_1698b4:
    // 0x1698b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1698b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1698b8: 0xc05a638  jal         func_1698E0
    ctx->pc = 0x1698B8u;
    SET_GPR_U32(ctx, 31, 0x1698C0u);
    ctx->pc = 0x1698BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1698B8u;
            // 0x1698bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1698E0u;
    if (runtime->hasFunction(0x1698E0u)) {
        auto targetFn = runtime->lookupFunction(0x1698E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1698C0u; }
        if (ctx->pc != 0x1698C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001698E0_0x1698e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1698C0u; }
        if (ctx->pc != 0x1698C0u) { return; }
    }
    ctx->pc = 0x1698C0u;
label_1698c0:
    // 0x1698c0: 0xc05adca  jal         func_16B728
    ctx->pc = 0x1698C0u;
    SET_GPR_U32(ctx, 31, 0x1698C8u);
    ctx->pc = 0x1698C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1698C0u;
            // 0x1698c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1698C8u; }
        if (ctx->pc != 0x1698C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1698C8u; }
        if (ctx->pc != 0x1698C8u) { return; }
    }
    ctx->pc = 0x1698C8u;
label_1698c8:
    // 0x1698c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1698c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1698cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1698ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1698d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1698d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1698d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1698d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1698d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1698D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1698DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1698D8u;
            // 0x1698dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1698E0u;
}
