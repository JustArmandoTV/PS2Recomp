#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A91C0
// Address: 0x1a91c0 - 0x1a92a0
void sub_001A91C0_0x1a91c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A91C0_0x1a91c0");
#endif

    switch (ctx->pc) {
        case 0x1a9210u: goto label_1a9210;
        case 0x1a9228u: goto label_1a9228;
        case 0x1a9234u: goto label_1a9234;
        case 0x1a926cu: goto label_1a926c;
        default: break;
    }

    ctx->pc = 0x1a91c0u;

    // 0x1a91c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a91c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a91c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a91c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a91c8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a91c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a91cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a91ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a91d0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a91d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a91d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a91d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a91d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a91d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a91dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a91dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a91e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a91e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a91e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a91e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a91e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a91e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a91ec: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1a91ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1a91f0: 0x8eb20028  lw          $s2, 0x28($s5)
    ctx->pc = 0x1a91f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1a91f4: 0x26420003  addiu       $v0, $s2, 0x3
    ctx->pc = 0x1a91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x1a91f8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a91f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a91fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A91FCu;
    {
        const bool branch_taken_0x1a91fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A91FCu;
            // 0x1a9200: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a91fc) {
            ctx->pc = 0x1A9218u;
            goto label_1a9218;
        }
    }
    ctx->pc = 0x1A9204u;
    // 0x1a9204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9208: 0xc06a4a8  jal         func_1A92A0
    ctx->pc = 0x1A9208u;
    SET_GPR_U32(ctx, 31, 0x1A9210u);
    ctx->pc = 0x1A920Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9208u;
            // 0x1a920c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A92A0u;
    if (runtime->hasFunction(0x1A92A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A92A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9210u; }
        if (ctx->pc != 0x1A9210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A92A0_0x1a92a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9210u; }
        if (ctx->pc != 0x1A9210u) { return; }
    }
    ctx->pc = 0x1A9210u;
label_1a9210:
    // 0x1a9210: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A9210u;
    {
        const bool branch_taken_0x1a9210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9210) {
            ctx->pc = 0x1A9214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9210u;
            // 0x1a9214: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9278u;
            goto label_1a9278;
        }
    }
    ctx->pc = 0x1A9218u;
label_1a9218:
    // 0x1a9218: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1a9218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a921c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A921Cu;
    {
        const bool branch_taken_0x1a921c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A921Cu;
            // 0x1a9220: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a921c) {
            ctx->pc = 0x1A9250u;
            goto label_1a9250;
        }
    }
    ctx->pc = 0x1A9224u;
    // 0x1a9224: 0x3c14000d  lui         $s4, 0xD
    ctx->pc = 0x1a9224u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)13 << 16));
label_1a9228:
    // 0x1a9228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a922c: 0xc064928  jal         func_1924A0
    ctx->pc = 0x1A922Cu;
    SET_GPR_U32(ctx, 31, 0x1A9234u);
    ctx->pc = 0x1A9230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A922Cu;
            // 0x1a9230: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1924A0u;
    if (runtime->hasFunction(0x1924A0u)) {
        auto targetFn = runtime->lookupFunction(0x1924A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9234u; }
        if (ctx->pc != 0x1A9234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001924A0_0x1924a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9234u; }
        if (ctx->pc != 0x1A9234u) { return; }
    }
    ctx->pc = 0x1A9234u;
label_1a9234:
    // 0x1a9234: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x1a9234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x1a9238: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1A9238u;
    {
        const bool branch_taken_0x1a9238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9238) {
            ctx->pc = 0x1A923Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9238u;
            // 0x1a923c: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9278u;
            goto label_1a9278;
        }
    }
    ctx->pc = 0x1A9240u;
    // 0x1a9240: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a9240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a9244: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1a9244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a9248: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A9248u;
    {
        const bool branch_taken_0x1a9248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A924Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9248u;
            // 0x1a924c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9248) {
            ctx->pc = 0x1A9228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a9228;
        }
    }
    ctx->pc = 0x1A9250u;
label_1a9250:
    // 0x1a9250: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1a9250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a9254: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1a9254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a9258: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A9258u;
    {
        const bool branch_taken_0x1a9258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9258) {
            ctx->pc = 0x1A925Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9258u;
            // 0x1a925c: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9278u;
            goto label_1a9278;
        }
    }
    ctx->pc = 0x1A9260u;
    // 0x1a9260: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9264: 0xc06a4b8  jal         func_1A92E0
    ctx->pc = 0x1A9264u;
    SET_GPR_U32(ctx, 31, 0x1A926Cu);
    ctx->pc = 0x1A9268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9264u;
            // 0x1a9268: 0x2302821  addu        $a1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A92E0u;
    if (runtime->hasFunction(0x1A92E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A92E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A926Cu; }
        if (ctx->pc != 0x1A926Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A92E0_0x1a92e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A926Cu; }
        if (ctx->pc != 0x1A926Cu) { return; }
    }
    ctx->pc = 0x1A926Cu;
label_1a926c:
    // 0x1a926c: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x1a926cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1a9270: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x1a9270u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x1a9274: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x1a9274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
label_1a9278:
    // 0x1a9278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a927c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a927cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9280: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9284: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a9284u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9288: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a9288u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a928c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a928cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a9290: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a9290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a9294: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9294u;
            // 0x1a9298: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A929Cu;
    // 0x1a929c: 0x0  nop
    ctx->pc = 0x1a929cu;
    // NOP
}
