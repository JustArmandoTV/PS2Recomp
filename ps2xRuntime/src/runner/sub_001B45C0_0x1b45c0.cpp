#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B45C0
// Address: 0x1b45c0 - 0x1b4670
void sub_001B45C0_0x1b45c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B45C0_0x1b45c0");
#endif

    switch (ctx->pc) {
        case 0x1b45dcu: goto label_1b45dc;
        case 0x1b4618u: goto label_1b4618;
        case 0x1b4630u: goto label_1b4630;
        case 0x1b4660u: goto label_1b4660;
        default: break;
    }

    ctx->pc = 0x1b45c0u;

    // 0x1b45c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b45c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b45c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b45c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b45c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b45c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b45cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b45ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b45d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b45d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b45d4: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B45D4u;
    SET_GPR_U32(ctx, 31, 0x1B45DCu);
    ctx->pc = 0x1B45D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B45D4u;
            // 0x1b45d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B45DCu; }
        if (ctx->pc != 0x1B45DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B45DCu; }
        if (ctx->pc != 0x1B45DCu) { return; }
    }
    ctx->pc = 0x1B45DCu;
label_1b45dc:
    // 0x1b45dc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b45dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b45e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b45e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B45E4u;
    {
        const bool branch_taken_0x1b45e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B45E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B45E4u;
            // 0x1b45e8: 0x34a50135  ori         $a1, $a1, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)309);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b45e4) {
            ctx->pc = 0x1B4608u;
            goto label_1b4608;
        }
    }
    ctx->pc = 0x1B45ECu;
    // 0x1b45ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b45ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b45f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b45f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b45f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b45f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b45f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b45fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b45fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b4600: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B4600u;
    ctx->pc = 0x1B4604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4600u;
            // 0x1b4604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B4608u;
label_1b4608:
    // 0x1b4608: 0x8e301fb4  lw          $s0, 0x1FB4($s1)
    ctx->pc = 0x1b4608u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8116)));
    // 0x1b460c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b460cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4610: 0xc069962  jal         func_1A6588
    ctx->pc = 0x1B4610u;
    SET_GPR_U32(ctx, 31, 0x1B4618u);
    ctx->pc = 0x1B4614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4610u;
            // 0x1b4614: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6588u;
    if (runtime->hasFunction(0x1A6588u)) {
        auto targetFn = runtime->lookupFunction(0x1A6588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4618u; }
        if (ctx->pc != 0x1B4618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6588_0x1a6588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4618u; }
        if (ctx->pc != 0x1B4618u) { return; }
    }
    ctx->pc = 0x1B4618u;
label_1b4618:
    // 0x1b4618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b461c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b461cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4620: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4620u;
    {
        const bool branch_taken_0x1b4620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1B4624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4620u;
            // 0x1b4624: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4620) {
            ctx->pc = 0x1B4634u;
            goto label_1b4634;
        }
    }
    ctx->pc = 0x1B4628u;
    // 0x1b4628: 0xc069956  jal         func_1A6558
    ctx->pc = 0x1B4628u;
    SET_GPR_U32(ctx, 31, 0x1B4630u);
    ctx->pc = 0x1A6558u;
    if (runtime->hasFunction(0x1A6558u)) {
        auto targetFn = runtime->lookupFunction(0x1A6558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4630u; }
        if (ctx->pc != 0x1B4630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6558_0x1a6558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4630u; }
        if (ctx->pc != 0x1B4630u) { return; }
    }
    ctx->pc = 0x1B4630u;
label_1b4630:
    // 0x1b4630: 0xae320044  sw          $s2, 0x44($s1)
    ctx->pc = 0x1b4630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 18));
label_1b4634:
    // 0x1b4634: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b463c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b463cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4640: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b4640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4644: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b4644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b4648: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B464Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4648u;
            // 0x1b464c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4650u;
    // 0x1b4650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4658: 0xc069962  jal         func_1A6588
    ctx->pc = 0x1B4658u;
    SET_GPR_U32(ctx, 31, 0x1B4660u);
    ctx->pc = 0x1B465Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4658u;
            // 0x1b465c: 0x8c851fb4  lw          $a1, 0x1FB4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6588u;
    if (runtime->hasFunction(0x1A6588u)) {
        auto targetFn = runtime->lookupFunction(0x1A6588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4660u; }
        if (ctx->pc != 0x1B4660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6588_0x1a6588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4660u; }
        if (ctx->pc != 0x1B4660u) { return; }
    }
    ctx->pc = 0x1B4660u;
label_1b4660:
    // 0x1b4660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4664: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b4664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b4668: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B466Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4668u;
            // 0x1b466c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4670u;
}
