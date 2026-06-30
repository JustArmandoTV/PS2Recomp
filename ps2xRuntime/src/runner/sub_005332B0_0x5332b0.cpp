#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005332B0
// Address: 0x5332b0 - 0x533380
void sub_005332B0_0x5332b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005332B0_0x5332b0");
#endif

    switch (ctx->pc) {
        case 0x53332cu: goto label_53332c;
        default: break;
    }

    ctx->pc = 0x5332b0u;

    // 0x5332b0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x5332B0u;
    {
        const bool branch_taken_0x5332b0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x5332B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5332B0u;
            // 0x5332b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5332b0) {
            ctx->pc = 0x5332C8u;
            goto label_5332c8;
        }
    }
    ctx->pc = 0x5332B8u;
    // 0x5332b8: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x5332b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x5332bc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x5332bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x5332c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x5332C0u;
    {
        const bool branch_taken_0x5332c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5332C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5332C0u;
            // 0x5332c4: 0xac850014  sw          $a1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5332c0) {
            ctx->pc = 0x5332F0u;
            goto label_5332f0;
        }
    }
    ctx->pc = 0x5332C8u;
label_5332c8:
    // 0x5332c8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x5332c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x5332cc: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x5332CCu;
    {
        const bool branch_taken_0x5332cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x5332cc) {
            ctx->pc = 0x5332D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5332CCu;
            // 0x5332d0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5332F0u;
            goto label_5332f0;
        }
    }
    ctx->pc = 0x5332D4u;
    // 0x5332d4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x5332d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x5332d8: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x5332D8u;
    {
        const bool branch_taken_0x5332d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x5332d8) {
            ctx->pc = 0x5332DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5332D8u;
            // 0x5332dc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5332F0u;
            goto label_5332f0;
        }
    }
    ctx->pc = 0x5332E0u;
    // 0x5332e0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x5332e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x5332e4: 0x50a20002  beql        $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x5332E4u;
    {
        const bool branch_taken_0x5332e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x5332e4) {
            ctx->pc = 0x5332E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5332E4u;
            // 0x5332e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5332F0u;
            goto label_5332f0;
        }
    }
    ctx->pc = 0x5332ECu;
    // 0x5332ec: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x5332ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_5332f0:
    // 0x5332f0: 0x3e00008  jr          $ra
    ctx->pc = 0x5332F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5332F8u;
    // 0x5332f8: 0x0  nop
    ctx->pc = 0x5332f8u;
    // NOP
    // 0x5332fc: 0x0  nop
    ctx->pc = 0x5332fcu;
    // NOP
    // 0x533300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x533300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x533304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x533304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x533308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x533308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53330c: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x53330Cu;
    {
        const bool branch_taken_0x53330c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x533310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53330Cu;
            // 0x533310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53330c) {
            ctx->pc = 0x533318u;
            goto label_533318;
        }
    }
    ctx->pc = 0x533314u;
    // 0x533314: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x533314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_533318:
    // 0x533318: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x533318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x53331c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x53331cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x533320: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x533320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x533324: 0xc0486a2  jal         func_121A88
    ctx->pc = 0x533324u;
    SET_GPR_U32(ctx, 31, 0x53332Cu);
    ctx->pc = 0x533328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x533324u;
            // 0x533328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121A88u;
    if (runtime->hasFunction(0x121A88u)) {
        auto targetFn = runtime->lookupFunction(0x121A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53332Cu; }
        if (ctx->pc != 0x53332Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121A88_0x121a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53332Cu; }
        if (ctx->pc != 0x53332Cu) { return; }
    }
    ctx->pc = 0x53332Cu;
label_53332c:
    // 0x53332c: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x53332cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x533330: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x533330u;
    {
        const bool branch_taken_0x533330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x533334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533330u;
            // 0x533334: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533330) {
            ctx->pc = 0x533364u;
            goto label_533364;
        }
    }
    ctx->pc = 0x533338u;
    // 0x533338: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x533338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x53333c: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x53333Cu;
    {
        const bool branch_taken_0x53333c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x53333c) {
            ctx->pc = 0x533340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53333Cu;
            // 0x533340: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533368u;
            goto label_533368;
        }
    }
    ctx->pc = 0x533344u;
    // 0x533344: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x533344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x533348: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x533348u;
    {
        const bool branch_taken_0x533348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x533348) {
            ctx->pc = 0x533364u;
            goto label_533364;
        }
    }
    ctx->pc = 0x533350u;
    // 0x533350: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x533350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
    // 0x533354: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x533354u;
    {
        const bool branch_taken_0x533354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x533354) {
            ctx->pc = 0x533364u;
            goto label_533364;
        }
    }
    ctx->pc = 0x53335Cu;
    // 0x53335c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x53335Cu;
    {
        const bool branch_taken_0x53335c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53335c) {
            ctx->pc = 0x533360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53335Cu;
            // 0x533360: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533368u;
            goto label_533368;
        }
    }
    ctx->pc = 0x533364u;
label_533364:
    // 0x533364: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x533364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533368:
    // 0x533368: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x533368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x53336c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53336cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x533370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x533370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x533374: 0x3e00008  jr          $ra
    ctx->pc = 0x533374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x533378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533374u;
            // 0x533378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53337Cu;
    // 0x53337c: 0x0  nop
    ctx->pc = 0x53337cu;
    // NOP
}
