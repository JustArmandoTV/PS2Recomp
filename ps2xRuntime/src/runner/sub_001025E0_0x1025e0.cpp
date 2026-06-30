#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001025E0
// Address: 0x1025e0 - 0x102680
void sub_001025E0_0x1025e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001025E0_0x1025e0");
#endif

    switch (ctx->pc) {
        case 0x102604u: goto label_102604;
        case 0x102620u: goto label_102620;
        case 0x10263cu: goto label_10263c;
        case 0x102650u: goto label_102650;
        case 0x10265cu: goto label_10265c;
        default: break;
    }

    ctx->pc = 0x1025e0u;

    // 0x1025e0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1025e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1025e4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1025e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1025e8: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x1025e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x1025ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1025ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1025f0: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1025f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x1025f4: 0x2484e3b8  addiu       $a0, $a0, -0x1C48
    ctx->pc = 0x1025f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960056));
    // 0x1025f8: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x1025f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x1025fc: 0xc04461c  jal         func_111870
    ctx->pc = 0x1025FCu;
    SET_GPR_U32(ctx, 31, 0x102604u);
    ctx->pc = 0x102600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1025FCu;
            // 0x102600: 0xffb00100  sd          $s0, 0x100($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111870u;
    if (runtime->hasFunction(0x111870u)) {
        auto targetFn = runtime->lookupFunction(0x111870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102604u; }
        if (ctx->pc != 0x102604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111870_0x111870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102604u; }
        if (ctx->pc != 0x102604u) { return; }
    }
    ctx->pc = 0x102604u;
label_102604:
    // 0x102604: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x102604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102608: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x102608u;
    {
        const bool branch_taken_0x102608 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x10260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102608u;
            // 0x10260c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102608) {
            ctx->pc = 0x102618u;
            goto label_102618;
        }
    }
    ctx->pc = 0x102610u;
    // 0x102610: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x102610u;
    {
        const bool branch_taken_0x102610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102610u;
            // 0x102614: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102610) {
            ctx->pc = 0x102668u;
            goto label_102668;
        }
    }
    ctx->pc = 0x102618u;
label_102618:
    // 0x102618: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x102618u;
    {
        const bool branch_taken_0x102618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10261Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102618u;
            // 0x10261c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102618) {
            ctx->pc = 0x102624u;
            goto label_102624;
        }
    }
    ctx->pc = 0x102620u;
label_102620:
    // 0x102620: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x102620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_102624:
    // 0x102624: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x102624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x102628: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x102628u;
    {
        const bool branch_taken_0x102628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10262Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102628u;
            // 0x10262c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102628) {
            ctx->pc = 0x102648u;
            goto label_102648;
        }
    }
    ctx->pc = 0x102630u;
    // 0x102630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102634: 0xc0447ae  jal         func_111EB8
    ctx->pc = 0x102634u;
    SET_GPR_U32(ctx, 31, 0x10263Cu);
    ctx->pc = 0x102638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102634u;
            // 0x102638: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111EB8u;
    if (runtime->hasFunction(0x111EB8u)) {
        auto targetFn = runtime->lookupFunction(0x111EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10263Cu; }
        if (ctx->pc != 0x10263Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111EB8_0x111eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10263Cu; }
        if (ctx->pc != 0x10263Cu) { return; }
    }
    ctx->pc = 0x10263Cu;
label_10263c:
    // 0x10263c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x10263cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102640: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x102640u;
    {
        const bool branch_taken_0x102640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x102644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102640u;
            // 0x102644: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102640) {
            ctx->pc = 0x102620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_102620;
        }
    }
    ctx->pc = 0x102648u;
label_102648:
    // 0x102648: 0xc0446c0  jal         func_111B00
    ctx->pc = 0x102648u;
    SET_GPR_U32(ctx, 31, 0x102650u);
    ctx->pc = 0x10264Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102648u;
            // 0x10264c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B00u;
    if (runtime->hasFunction(0x111B00u)) {
        auto targetFn = runtime->lookupFunction(0x111B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102650u; }
        if (ctx->pc != 0x102650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B00_0x111b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102650u; }
        if (ctx->pc != 0x102650u) { return; }
    }
    ctx->pc = 0x102650u;
label_102650:
    // 0x102650: 0x2624fff7  addiu       $a0, $s1, -0x9
    ctx->pc = 0x102650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x102654: 0xc049824  jal         func_126090
    ctx->pc = 0x102654u;
    SET_GPR_U32(ctx, 31, 0x10265Cu);
    ctx->pc = 0x102658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102654u;
            // 0x102658: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126090u;
    if (runtime->hasFunction(0x126090u)) {
        auto targetFn = runtime->lookupFunction(0x126090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10265Cu; }
        if (ctx->pc != 0x10265Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126090_0x126090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10265Cu; }
        if (ctx->pc != 0x10265Cu) { return; }
    }
    ctx->pc = 0x10265Cu;
label_10265c:
    // 0x10265c: 0x3c030131  lui         $v1, 0x131
    ctx->pc = 0x10265cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)305 << 16));
    // 0x102660: 0x34635670  ori         $v1, $v1, 0x5670
    ctx->pc = 0x102660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22128);
    // 0x102664: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x102664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_102668:
    // 0x102668: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x102668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10266c: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x10266cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x102670: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x102670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x102674: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x102674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x102678: 0x3e00008  jr          $ra
    ctx->pc = 0x102678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10267Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102678u;
            // 0x10267c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102680u;
}
