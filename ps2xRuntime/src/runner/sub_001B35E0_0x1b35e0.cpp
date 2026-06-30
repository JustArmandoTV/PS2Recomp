#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B35E0
// Address: 0x1b35e0 - 0x1b3678
void sub_001B35E0_0x1b35e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B35E0_0x1b35e0");
#endif

    switch (ctx->pc) {
        case 0x1b360cu: goto label_1b360c;
        case 0x1b361cu: goto label_1b361c;
        case 0x1b363cu: goto label_1b363c;
        case 0x1b3650u: goto label_1b3650;
        default: break;
    }

    ctx->pc = 0x1b35e0u;

    // 0x1b35e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b35e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b35e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b35e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b35e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b35ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b35ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b35f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b35f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b35f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b35f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b35fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b35fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b3600: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b3600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b3604: 0xc06cd9e  jal         func_1B3678
    ctx->pc = 0x1B3604u;
    SET_GPR_U32(ctx, 31, 0x1B360Cu);
    ctx->pc = 0x1B3608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3604u;
            // 0x1b3608: 0x24539b8c  addiu       $s3, $v0, -0x6474 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941580));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3678u;
    if (runtime->hasFunction(0x1B3678u)) {
        auto targetFn = runtime->lookupFunction(0x1B3678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B360Cu; }
        if (ctx->pc != 0x1B360Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3678_0x1b3678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B360Cu; }
        if (ctx->pc != 0x1B360Cu) { return; }
    }
    ctx->pc = 0x1B360Cu;
label_1b360c:
    // 0x1b360c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B360Cu;
    {
        const bool branch_taken_0x1b360c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B360Cu;
            // 0x1b3610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b360c) {
            ctx->pc = 0x1B365Cu;
            goto label_1b365c;
        }
    }
    ctx->pc = 0x1B3614u;
    // 0x1b3614: 0xc06cdb8  jal         func_1B36E0
    ctx->pc = 0x1B3614u;
    SET_GPR_U32(ctx, 31, 0x1B361Cu);
    ctx->pc = 0x1B36E0u;
    if (runtime->hasFunction(0x1B36E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B36E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B361Cu; }
        if (ctx->pc != 0x1B361Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B36E0_0x1b36e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B361Cu; }
        if (ctx->pc != 0x1B361Cu) { return; }
    }
    ctx->pc = 0x1B361Cu;
label_1b361c:
    // 0x1b361c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b361cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3620: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b3620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3624: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3624u;
    {
        const bool branch_taken_0x1b3624 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B3628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3624u;
            // 0x1b3628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3624) {
            ctx->pc = 0x1B3648u;
            goto label_1b3648;
        }
    }
    ctx->pc = 0x1B362Cu;
    // 0x1b362c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b362cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b3630: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b3630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3634: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1B3634u;
    SET_GPR_U32(ctx, 31, 0x1B363Cu);
    ctx->pc = 0x1B3638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3634u;
            // 0x1b3638: 0x34a50206  ori         $a1, $a1, 0x206 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)518);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B363Cu; }
        if (ctx->pc != 0x1B363Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B363Cu; }
        if (ctx->pc != 0x1B363Cu) { return; }
    }
    ctx->pc = 0x1B363Cu;
label_1b363c:
    // 0x1b363c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B363Cu;
    {
        const bool branch_taken_0x1b363c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B363Cu;
            // 0x1b3640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b363c) {
            ctx->pc = 0x1B365Cu;
            goto label_1b365c;
        }
    }
    ctx->pc = 0x1B3644u;
    // 0x1b3644: 0x0  nop
    ctx->pc = 0x1b3644u;
    // NOP
label_1b3648:
    // 0x1b3648: 0xc06cdc8  jal         func_1B3720
    ctx->pc = 0x1B3648u;
    SET_GPR_U32(ctx, 31, 0x1B3650u);
    ctx->pc = 0x1B364Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3648u;
            // 0x1b364c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3720u;
    if (runtime->hasFunction(0x1B3720u)) {
        auto targetFn = runtime->lookupFunction(0x1B3720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3650u; }
        if (ctx->pc != 0x1B3650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3720_0x1b3720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3650u; }
        if (ctx->pc != 0x1B3650u) { return; }
    }
    ctx->pc = 0x1B3650u;
label_1b3650:
    // 0x1b3650: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1b3650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b3654: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1b3654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1b3658: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b3658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1b365c:
    // 0x1b365c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b365cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b3660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3664: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b3664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3668: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b3668u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b366c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b366cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3670: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3670u;
            // 0x1b3674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3678u;
}
