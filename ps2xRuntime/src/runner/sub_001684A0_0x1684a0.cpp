#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001684A0
// Address: 0x1684a0 - 0x168510
void sub_001684A0_0x1684a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001684A0_0x1684a0");
#endif

    switch (ctx->pc) {
        case 0x1684c8u: goto label_1684c8;
        case 0x1684d8u: goto label_1684d8;
        case 0x1684e8u: goto label_1684e8;
        case 0x1684fcu: goto label_1684fc;
        default: break;
    }

    ctx->pc = 0x1684a0u;

    // 0x1684a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1684a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1684a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1684a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1684a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1684a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1684acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1684b0: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1684B0u;
    {
        const bool branch_taken_0x1684b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1684B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1684B0u;
            // 0x1684b4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684b0) {
            ctx->pc = 0x1684FCu;
            goto label_1684fc;
        }
    }
    ctx->pc = 0x1684B8u;
    // 0x1684b8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1684b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x1684bc: 0x24513388  addiu       $s1, $v0, 0x3388
    ctx->pc = 0x1684bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13192));
    // 0x1684c0: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1684C0u;
    SET_GPR_U32(ctx, 31, 0x1684C8u);
    ctx->pc = 0x1684C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1684C0u;
            // 0x1684c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1684C8u; }
        if (ctx->pc != 0x1684C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1684C8u; }
        if (ctx->pc != 0x1684C8u) { return; }
    }
    ctx->pc = 0x1684C8u;
label_1684c8:
    // 0x1684c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1684C8u;
    {
        const bool branch_taken_0x1684c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1684CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1684C8u;
            // 0x1684cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684c8) {
            ctx->pc = 0x1684FCu;
            goto label_1684fc;
        }
    }
    ctx->pc = 0x1684D0u;
    // 0x1684d0: 0xc05e1cc  jal         func_178730
    ctx->pc = 0x1684D0u;
    SET_GPR_U32(ctx, 31, 0x1684D8u);
    ctx->pc = 0x178730u;
    if (runtime->hasFunction(0x178730u)) {
        auto targetFn = runtime->lookupFunction(0x178730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1684D8u; }
        if (ctx->pc != 0x1684D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178730_0x178730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1684D8u; }
        if (ctx->pc != 0x1684D8u) { return; }
    }
    ctx->pc = 0x1684D8u;
label_1684d8:
    // 0x1684d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1684d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1684dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684e0: 0xc05e7c4  jal         func_179F10
    ctx->pc = 0x1684E0u;
    SET_GPR_U32(ctx, 31, 0x1684E8u);
    ctx->pc = 0x1684E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1684E0u;
            // 0x1684e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179F10u;
    if (runtime->hasFunction(0x179F10u)) {
        auto targetFn = runtime->lookupFunction(0x179F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1684E8u; }
        if (ctx->pc != 0x1684E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00179F10_0x179f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1684E8u; }
        if (ctx->pc != 0x1684E8u) { return; }
    }
    ctx->pc = 0x1684E8u;
label_1684e8:
    // 0x1684e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1684e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684ec: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1684ECu;
    {
        const bool branch_taken_0x1684ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1684F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1684ECu;
            // 0x1684f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684ec) {
            ctx->pc = 0x1684FCu;
            goto label_1684fc;
        }
    }
    ctx->pc = 0x1684F4u;
    // 0x1684f4: 0xc05e7f8  jal         func_179FE0
    ctx->pc = 0x1684F4u;
    SET_GPR_U32(ctx, 31, 0x1684FCu);
    ctx->pc = 0x179FE0u;
    if (runtime->hasFunction(0x179FE0u)) {
        auto targetFn = runtime->lookupFunction(0x179FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1684FCu; }
        if (ctx->pc != 0x1684FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00179FE0_0x179fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1684FCu; }
        if (ctx->pc != 0x1684FCu) { return; }
    }
    ctx->pc = 0x1684FCu;
label_1684fc:
    // 0x1684fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1684fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168500: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x168500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168504: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x168504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168508: 0x3e00008  jr          $ra
    ctx->pc = 0x168508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16850Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168508u;
            // 0x16850c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168510u;
}
