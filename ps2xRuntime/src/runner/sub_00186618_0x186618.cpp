#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186618
// Address: 0x186618 - 0x1866c0
void sub_00186618_0x186618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186618_0x186618");
#endif

    switch (ctx->pc) {
        case 0x18665cu: goto label_18665c;
        case 0x186694u: goto label_186694;
        case 0x1866a4u: goto label_1866a4;
        default: break;
    }

    ctx->pc = 0x186618u;

    // 0x186618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18661c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18661Cu;
    {
        const bool branch_taken_0x18661c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18661Cu;
            // 0x186620: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18661c) {
            ctx->pc = 0x186638u;
            goto label_186638;
        }
    }
    ctx->pc = 0x186624u;
    // 0x186624: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x186624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x186628: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x186628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x18662c: 0x24847ce0  addiu       $a0, $a0, 0x7CE0
    ctx->pc = 0x18662cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31968));
    // 0x186630: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x186630u;
    {
        const bool branch_taken_0x186630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186630u;
            // 0x186634: 0x24a57c90  addiu       $a1, $a1, 0x7C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186630) {
            ctx->pc = 0x186654u;
            goto label_186654;
        }
    }
    ctx->pc = 0x186638u;
label_186638:
    // 0x186638: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x186638u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18663c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18663Cu;
    {
        const bool branch_taken_0x18663c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18663c) {
            ctx->pc = 0x186640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18663Cu;
            // 0x186640: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186660u;
            goto label_186660;
        }
    }
    ctx->pc = 0x186644u;
    // 0x186644: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x186644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x186648: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x186648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x18664c: 0x24847cf0  addiu       $a0, $a0, 0x7CF0
    ctx->pc = 0x18664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31984));
    // 0x186650: 0x24a57cc0  addiu       $a1, $a1, 0x7CC0
    ctx->pc = 0x186650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31936));
label_186654:
    // 0x186654: 0xc0618a8  jal         func_1862A0
    ctx->pc = 0x186654u;
    SET_GPR_U32(ctx, 31, 0x18665Cu);
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18665Cu; }
        if (ctx->pc != 0x18665Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001862A0_0x1862a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18665Cu; }
        if (ctx->pc != 0x18665Cu) { return; }
    }
    ctx->pc = 0x18665Cu;
label_18665c:
    // 0x18665c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18665cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186660:
    // 0x186660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186664: 0x3e00008  jr          $ra
    ctx->pc = 0x186664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186664u;
            // 0x186668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18666Cu;
    // 0x18666c: 0x0  nop
    ctx->pc = 0x18666cu;
    // NOP
    // 0x186670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186678: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18667c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18667cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x186680: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x186680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186684: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x186684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x186688: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x186688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18668c: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x18668Cu;
    SET_GPR_U32(ctx, 31, 0x186694u);
    ctx->pc = 0x186690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18668Cu;
            // 0x186690: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186694u; }
        if (ctx->pc != 0x186694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186694u; }
        if (ctx->pc != 0x186694u) { return; }
    }
    ctx->pc = 0x186694u;
label_186694:
    // 0x186694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186698: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18669c: 0xc0619b0  jal         func_1866C0
    ctx->pc = 0x18669Cu;
    SET_GPR_U32(ctx, 31, 0x1866A4u);
    ctx->pc = 0x1866A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18669Cu;
            // 0x1866a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1866C0u;
    if (runtime->hasFunction(0x1866C0u)) {
        auto targetFn = runtime->lookupFunction(0x1866C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866A4u; }
        if (ctx->pc != 0x1866A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001866C0_0x1866c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866A4u; }
        if (ctx->pc != 0x1866A4u) { return; }
    }
    ctx->pc = 0x1866A4u;
label_1866a4:
    // 0x1866a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1866a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1866a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1866a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1866ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1866acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1866b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1866b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1866b4: 0x8061282  j           func_184A08
    ctx->pc = 0x1866B4u;
    ctx->pc = 0x1866B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1866B4u;
            // 0x1866b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1866BCu;
    // 0x1866bc: 0x0  nop
    ctx->pc = 0x1866bcu;
    // NOP
}
