#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168290
// Address: 0x168290 - 0x168380
void sub_00168290_0x168290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168290_0x168290");
#endif

    switch (ctx->pc) {
        case 0x1682d4u: goto label_1682d4;
        case 0x1682f8u: goto label_1682f8;
        case 0x16831cu: goto label_16831c;
        case 0x16832cu: goto label_16832c;
        case 0x168364u: goto label_168364;
        case 0x16836cu: goto label_16836c;
        default: break;
    }

    ctx->pc = 0x168290u;

    // 0x168290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168294: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x168294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x168298: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16829c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16829cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1682a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1682a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1682a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1682a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1682ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1682acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1682b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1682b4: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1682B4u;
    {
        const bool branch_taken_0x1682b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1682B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1682B4u;
            // 0x1682b8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682b4) {
            ctx->pc = 0x168330u;
            goto label_168330;
        }
    }
    ctx->pc = 0x1682BCu;
    // 0x1682bc: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1682BCu;
    {
        const bool branch_taken_0x1682bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1682bc) {
            ctx->pc = 0x1682C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1682BCu;
            // 0x1682c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x168334u;
            goto label_168334;
        }
    }
    ctx->pc = 0x1682C4u;
    // 0x1682c4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1682c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x1682c8: 0x24523388  addiu       $s2, $v0, 0x3388
    ctx->pc = 0x1682c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 13192));
    // 0x1682cc: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1682CCu;
    SET_GPR_U32(ctx, 31, 0x1682D4u);
    ctx->pc = 0x1682D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1682CCu;
            // 0x1682d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1682D4u; }
        if (ctx->pc != 0x1682D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1682D4u; }
        if (ctx->pc != 0x1682D4u) { return; }
    }
    ctx->pc = 0x1682D4u;
label_1682d4:
    // 0x1682d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1682d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1682d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1682DCu;
    {
        const bool branch_taken_0x1682dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1682E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1682DCu;
            // 0x1682e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682dc) {
            ctx->pc = 0x1682F0u;
            goto label_1682f0;
        }
    }
    ctx->pc = 0x1682E4u;
    // 0x1682e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1682E4u;
    {
        const bool branch_taken_0x1682e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1682E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1682E4u;
            // 0x1682e8: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682e4) {
            ctx->pc = 0x168330u;
            goto label_168330;
        }
    }
    ctx->pc = 0x1682ECu;
    // 0x1682ec: 0x0  nop
    ctx->pc = 0x1682ecu;
    // NOP
label_1682f0:
    // 0x1682f0: 0xc05e24c  jal         func_178930
    ctx->pc = 0x1682F0u;
    SET_GPR_U32(ctx, 31, 0x1682F8u);
    ctx->pc = 0x178930u;
    if (runtime->hasFunction(0x178930u)) {
        auto targetFn = runtime->lookupFunction(0x178930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1682F8u; }
        if (ctx->pc != 0x1682F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178930_0x178930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1682F8u; }
        if (ctx->pc != 0x1682F8u) { return; }
    }
    ctx->pc = 0x1682F8u;
label_1682f8:
    // 0x1682f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1682f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1682fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168300: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168304: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x168304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168308: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16830c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16830Cu;
    {
        const bool branch_taken_0x16830c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16830Cu;
            // 0x168310: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16830c) {
            ctx->pc = 0x168330u;
            goto label_168330;
        }
    }
    ctx->pc = 0x168314u;
    // 0x168314: 0xc05e752  jal         func_179D48
    ctx->pc = 0x168314u;
    SET_GPR_U32(ctx, 31, 0x16831Cu);
    ctx->pc = 0x179D48u;
    if (runtime->hasFunction(0x179D48u)) {
        auto targetFn = runtime->lookupFunction(0x179D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16831Cu; }
        if (ctx->pc != 0x16831Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00179D48_0x179d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16831Cu; }
        if (ctx->pc != 0x16831Cu) { return; }
    }
    ctx->pc = 0x16831Cu;
label_16831c:
    // 0x16831c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16831Cu;
    {
        const bool branch_taken_0x16831c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16831c) {
            ctx->pc = 0x168320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16831Cu;
            // 0x168320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x168330u;
            goto label_168330;
        }
    }
    ctx->pc = 0x168324u;
    // 0x168324: 0xc05e320  jal         func_178C80
    ctx->pc = 0x168324u;
    SET_GPR_U32(ctx, 31, 0x16832Cu);
    ctx->pc = 0x168328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168324u;
            // 0x168328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178C80u;
    if (runtime->hasFunction(0x178C80u)) {
        auto targetFn = runtime->lookupFunction(0x178C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16832Cu; }
        if (ctx->pc != 0x16832Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178C80_0x178c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16832Cu; }
        if (ctx->pc != 0x16832Cu) { return; }
    }
    ctx->pc = 0x16832Cu;
label_16832c:
    // 0x16832c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_168330:
    // 0x168330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_168334:
    // 0x168334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168338: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x168338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16833c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16833cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168340: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x168340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168344: 0x3e00008  jr          $ra
    ctx->pc = 0x168344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168344u;
            // 0x168348: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16834Cu;
    // 0x16834c: 0x0  nop
    ctx->pc = 0x16834cu;
    // NOP
    // 0x168350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x168354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168358: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x168358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16835c: 0xc05a144  jal         func_168510
    ctx->pc = 0x16835Cu;
    SET_GPR_U32(ctx, 31, 0x168364u);
    ctx->pc = 0x168360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16835Cu;
            // 0x168360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168510u;
    if (runtime->hasFunction(0x168510u)) {
        auto targetFn = runtime->lookupFunction(0x168510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168364u; }
        if (ctx->pc != 0x168364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168510_0x168510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168364u; }
        if (ctx->pc != 0x168364u) { return; }
    }
    ctx->pc = 0x168364u;
label_168364:
    // 0x168364: 0xc05a0e0  jal         func_168380
    ctx->pc = 0x168364u;
    SET_GPR_U32(ctx, 31, 0x16836Cu);
    ctx->pc = 0x168368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168364u;
            // 0x168368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168380u;
    if (runtime->hasFunction(0x168380u)) {
        auto targetFn = runtime->lookupFunction(0x168380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16836Cu; }
        if (ctx->pc != 0x16836Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168380_0x168380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16836Cu; }
        if (ctx->pc != 0x16836Cu) { return; }
    }
    ctx->pc = 0x16836Cu;
label_16836c:
    // 0x16836c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16836cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168370: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x168370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168374: 0x805a146  j           func_168518
    ctx->pc = 0x168374u;
    ctx->pc = 0x168378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168374u;
            // 0x168378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168518u;
    if (runtime->hasFunction(0x168518u)) {
        auto targetFn = runtime->lookupFunction(0x168518u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00168518_0x168518(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16837Cu;
    // 0x16837c: 0x0  nop
    ctx->pc = 0x16837cu;
    // NOP
}
