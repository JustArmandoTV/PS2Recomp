#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B610
// Address: 0x16b610 - 0x16b680
void sub_0016B610_0x16b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B610_0x16b610");
#endif

    switch (ctx->pc) {
        case 0x16b628u: goto label_16b628;
        case 0x16b65cu: goto label_16b65c;
        case 0x16b664u: goto label_16b664;
        case 0x16b66cu: goto label_16b66c;
        default: break;
    }

    ctx->pc = 0x16b610u;

    // 0x16b610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b614: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16B614u;
    {
        const bool branch_taken_0x16b614 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B614u;
            // 0x16b618: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b614) {
            ctx->pc = 0x16B638u;
            goto label_16b638;
        }
    }
    ctx->pc = 0x16B61Cu;
    // 0x16b61c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16b61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16b620: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16B620u;
    SET_GPR_U32(ctx, 31, 0x16B628u);
    ctx->pc = 0x16B624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B620u;
            // 0x16b624: 0x24843b68  addiu       $a0, $a0, 0x3B68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B628u; }
        if (ctx->pc != 0x16B628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B628u; }
        if (ctx->pc != 0x16B628u) { return; }
    }
    ctx->pc = 0x16B628u;
label_16b628:
    // 0x16b628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16b628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b630: 0x3e00008  jr          $ra
    ctx->pc = 0x16B630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B630u;
            // 0x16b634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B638u;
label_16b638:
    // 0x16b638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b63c: 0x805c6e2  j           func_171B88
    ctx->pc = 0x16B63Cu;
    ctx->pc = 0x16B640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B63Cu;
            // 0x16b640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B88u;
    {
        auto targetFn = runtime->lookupFunction(0x171B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16B644u;
    // 0x16b644: 0x0  nop
    ctx->pc = 0x16b644u;
    // NOP
    // 0x16b648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b64c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b650: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16b650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b654: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16B654u;
    SET_GPR_U32(ctx, 31, 0x16B65Cu);
    ctx->pc = 0x16B658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B654u;
            // 0x16b658: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B65Cu; }
        if (ctx->pc != 0x16B65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B65Cu; }
        if (ctx->pc != 0x16B65Cu) { return; }
    }
    ctx->pc = 0x16B65Cu;
label_16b65c:
    // 0x16b65c: 0xc05ada0  jal         func_16B680
    ctx->pc = 0x16B65Cu;
    SET_GPR_U32(ctx, 31, 0x16B664u);
    ctx->pc = 0x16B660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B65Cu;
            // 0x16b660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B680u;
    if (runtime->hasFunction(0x16B680u)) {
        auto targetFn = runtime->lookupFunction(0x16B680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B664u; }
        if (ctx->pc != 0x16B664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B680_0x16b680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B664u; }
        if (ctx->pc != 0x16B664u) { return; }
    }
    ctx->pc = 0x16B664u;
label_16b664:
    // 0x16b664: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16B664u;
    SET_GPR_U32(ctx, 31, 0x16B66Cu);
    ctx->pc = 0x16B668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B664u;
            // 0x16b668: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B66Cu; }
        if (ctx->pc != 0x16B66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B66Cu; }
        if (ctx->pc != 0x16B66Cu) { return; }
    }
    ctx->pc = 0x16B66Cu;
label_16b66c:
    // 0x16b66c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16b66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b670: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16b670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b678: 0x3e00008  jr          $ra
    ctx->pc = 0x16B678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B678u;
            // 0x16b67c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B680u;
}
