#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A648
// Address: 0x16a648 - 0x16a6a0
void sub_0016A648_0x16a648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A648_0x16a648");
#endif

    switch (ctx->pc) {
        case 0x16a66cu: goto label_16a66c;
        case 0x16a67cu: goto label_16a67c;
        case 0x16a684u: goto label_16a684;
        default: break;
    }

    ctx->pc = 0x16a648u;

    // 0x16a648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a64c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a650: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a654: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a658: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16a658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a65c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16a65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16a660: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16a660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16a664: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16A664u;
    SET_GPR_U32(ctx, 31, 0x16A66Cu);
    ctx->pc = 0x16A668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A664u;
            // 0x16a668: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A66Cu; }
        if (ctx->pc != 0x16A66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A66Cu; }
        if (ctx->pc != 0x16A66Cu) { return; }
    }
    ctx->pc = 0x16A66Cu;
label_16a66c:
    // 0x16a66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16a670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a674: 0xc05a9a8  jal         func_16A6A0
    ctx->pc = 0x16A674u;
    SET_GPR_U32(ctx, 31, 0x16A67Cu);
    ctx->pc = 0x16A678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A674u;
            // 0x16a678: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A6A0u;
    if (runtime->hasFunction(0x16A6A0u)) {
        auto targetFn = runtime->lookupFunction(0x16A6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A67Cu; }
        if (ctx->pc != 0x16A67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A6A0_0x16a6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A67Cu; }
        if (ctx->pc != 0x16A67Cu) { return; }
    }
    ctx->pc = 0x16A67Cu;
label_16a67c:
    // 0x16a67c: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16A67Cu;
    SET_GPR_U32(ctx, 31, 0x16A684u);
    ctx->pc = 0x16A680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A67Cu;
            // 0x16a680: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A684u; }
        if (ctx->pc != 0x16A684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A684u; }
        if (ctx->pc != 0x16A684u) { return; }
    }
    ctx->pc = 0x16A684u;
label_16a684:
    // 0x16a684: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a688: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a68c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16a68cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a694: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16a694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a698: 0x3e00008  jr          $ra
    ctx->pc = 0x16A698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A698u;
            // 0x16a69c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A6A0u;
}
