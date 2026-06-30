#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BF6D8
// Address: 0x4bf6d8 - 0x4bf770
void sub_004BF6D8_0x4bf6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF6D8_0x4bf6d8");
#endif

    switch (ctx->pc) {
        case 0x4bf6d8u: goto label_4bf6d8;
        case 0x4bf6dcu: goto label_4bf6dc;
        case 0x4bf6e0u: goto label_4bf6e0;
        case 0x4bf6e4u: goto label_4bf6e4;
        case 0x4bf6e8u: goto label_4bf6e8;
        case 0x4bf6ecu: goto label_4bf6ec;
        case 0x4bf6f0u: goto label_4bf6f0;
        case 0x4bf6f4u: goto label_4bf6f4;
        case 0x4bf6f8u: goto label_4bf6f8;
        case 0x4bf6fcu: goto label_4bf6fc;
        case 0x4bf700u: goto label_4bf700;
        case 0x4bf704u: goto label_4bf704;
        case 0x4bf708u: goto label_4bf708;
        case 0x4bf70cu: goto label_4bf70c;
        case 0x4bf710u: goto label_4bf710;
        case 0x4bf714u: goto label_4bf714;
        case 0x4bf718u: goto label_4bf718;
        case 0x4bf71cu: goto label_4bf71c;
        case 0x4bf720u: goto label_4bf720;
        case 0x4bf724u: goto label_4bf724;
        case 0x4bf728u: goto label_4bf728;
        case 0x4bf72cu: goto label_4bf72c;
        case 0x4bf730u: goto label_4bf730;
        case 0x4bf734u: goto label_4bf734;
        case 0x4bf738u: goto label_4bf738;
        case 0x4bf73cu: goto label_4bf73c;
        case 0x4bf740u: goto label_4bf740;
        case 0x4bf744u: goto label_4bf744;
        case 0x4bf748u: goto label_4bf748;
        case 0x4bf74cu: goto label_4bf74c;
        case 0x4bf750u: goto label_4bf750;
        case 0x4bf754u: goto label_4bf754;
        case 0x4bf758u: goto label_4bf758;
        case 0x4bf75cu: goto label_4bf75c;
        case 0x4bf760u: goto label_4bf760;
        case 0x4bf764u: goto label_4bf764;
        case 0x4bf768u: goto label_4bf768;
        case 0x4bf76cu: goto label_4bf76c;
        default: break;
    }

    ctx->pc = 0x4bf6d8u;

label_4bf6d8:
    // 0x4bf6d8: 0x24421230  addiu       $v0, $v0, 0x1230
    ctx->pc = 0x4bf6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4656));
label_4bf6dc:
    // 0x4bf6dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bf6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4bf6e0:
    // 0x4bf6e0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4bf6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4bf6e4:
    // 0x4bf6e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bf6e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bf6e8:
    // 0x4bf6e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4bf6e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4bf6ec:
    // 0x4bf6ec: 0x320f809  jalr        $t9
label_4bf6f0:
    if (ctx->pc == 0x4BF6F0u) {
        ctx->pc = 0x4BF6F4u;
        goto label_4bf6f4;
    }
    ctx->pc = 0x4BF6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BF6F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BF6F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BF6F4u; }
            if (ctx->pc != 0x4BF6F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4BF6F4u;
label_4bf6f4:
    // 0x4bf6f4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_4bf6f8:
    if (ctx->pc == 0x4BF6F8u) {
        ctx->pc = 0x4BF6F8u;
            // 0x4bf6f8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4BF6FCu;
        goto label_4bf6fc;
    }
    ctx->pc = 0x4BF6F4u;
    {
        const bool branch_taken_0x4bf6f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf6f4) {
            ctx->pc = 0x4BF6F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF6F4u;
            // 0x4bf6f8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF778u;
            return;
        }
    }
    ctx->pc = 0x4BF6FCu;
label_4bf6fc:
    // 0x4bf6fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4bf6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4bf700:
    // 0x4bf700: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4bf700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4bf704:
    // 0x4bf704: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4bf704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4bf708:
    // 0x4bf708: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4bf708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4bf70c:
    // 0x4bf70c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bf70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4bf710:
    // 0x4bf710: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4bf710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4bf714:
    // 0x4bf714: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4bf714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4bf718:
    // 0x4bf718: 0xc0aecc4  jal         func_2BB310
label_4bf71c:
    if (ctx->pc == 0x4BF71Cu) {
        ctx->pc = 0x4BF71Cu;
            // 0x4bf71c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BF720u;
        goto label_4bf720;
    }
    ctx->pc = 0x4BF718u;
    SET_GPR_U32(ctx, 31, 0x4BF720u);
    ctx->pc = 0x4BF71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF718u;
            // 0x4bf71c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF720u; }
        if (ctx->pc != 0x4BF720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF720u; }
        if (ctx->pc != 0x4BF720u) { return; }
    }
    ctx->pc = 0x4BF720u;
label_4bf720:
    // 0x4bf720: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4bf720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4bf724:
    // 0x4bf724: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4bf724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4bf728:
    // 0x4bf728: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4bf72c:
    if (ctx->pc == 0x4BF72Cu) {
        ctx->pc = 0x4BF72Cu;
            // 0x4bf72c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4BF730u;
        goto label_4bf730;
    }
    ctx->pc = 0x4BF728u;
    {
        const bool branch_taken_0x4bf728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf728) {
            ctx->pc = 0x4BF72Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF728u;
            // 0x4bf72c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF744u;
            goto label_4bf744;
        }
    }
    ctx->pc = 0x4BF730u;
label_4bf730:
    // 0x4bf730: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4bf730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4bf734:
    // 0x4bf734: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4bf734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4bf738:
    // 0x4bf738: 0x320f809  jalr        $t9
label_4bf73c:
    if (ctx->pc == 0x4BF73Cu) {
        ctx->pc = 0x4BF73Cu;
            // 0x4bf73c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BF740u;
        goto label_4bf740;
    }
    ctx->pc = 0x4BF738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BF740u);
        ctx->pc = 0x4BF73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF738u;
            // 0x4bf73c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BF740u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BF740u; }
            if (ctx->pc != 0x4BF740u) { return; }
        }
        }
    }
    ctx->pc = 0x4BF740u;
label_4bf740:
    // 0x4bf740: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4bf740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4bf744:
    // 0x4bf744: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4bf744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4bf748:
    // 0x4bf748: 0xc0aec9c  jal         func_2BB270
label_4bf74c:
    if (ctx->pc == 0x4BF74Cu) {
        ctx->pc = 0x4BF74Cu;
            // 0x4bf74c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4BF750u;
        goto label_4bf750;
    }
    ctx->pc = 0x4BF748u;
    SET_GPR_U32(ctx, 31, 0x4BF750u);
    ctx->pc = 0x4BF74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF748u;
            // 0x4bf74c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF750u; }
        if (ctx->pc != 0x4BF750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF750u; }
        if (ctx->pc != 0x4BF750u) { return; }
    }
    ctx->pc = 0x4BF750u;
label_4bf750:
    // 0x4bf750: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4bf750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4bf754:
    // 0x4bf754: 0xc0aec88  jal         func_2BB220
label_4bf758:
    if (ctx->pc == 0x4BF758u) {
        ctx->pc = 0x4BF758u;
            // 0x4bf758: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4BF75Cu;
        goto label_4bf75c;
    }
    ctx->pc = 0x4BF754u;
    SET_GPR_U32(ctx, 31, 0x4BF75Cu);
    ctx->pc = 0x4BF758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF754u;
            // 0x4bf758: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF75Cu; }
        if (ctx->pc != 0x4BF75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF75Cu; }
        if (ctx->pc != 0x4BF75Cu) { return; }
    }
    ctx->pc = 0x4BF75Cu;
label_4bf75c:
    // 0x4bf75c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4bf75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4bf760:
    // 0x4bf760: 0xc0aec0c  jal         func_2BB030
label_4bf764:
    if (ctx->pc == 0x4BF764u) {
        ctx->pc = 0x4BF764u;
            // 0x4bf764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF768u;
        goto label_4bf768;
    }
    ctx->pc = 0x4BF760u;
    SET_GPR_U32(ctx, 31, 0x4BF768u);
    ctx->pc = 0x4BF764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF760u;
            // 0x4bf764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF768u; }
        if (ctx->pc != 0x4BF768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF768u; }
        if (ctx->pc != 0x4BF768u) { return; }
    }
    ctx->pc = 0x4BF768u;
label_4bf768:
    // 0x4bf768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bf768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bf76c:
    // 0x4bf76c: 0xc0aeaa8  jal         func_2BAAA0
    ctx->pc = 0x4BF76Cu;
    SET_GPR_U32(ctx, 31, 0x4BF774u);
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF774u; }
        if (ctx->pc != 0x4BF774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF774u; }
        if (ctx->pc != 0x4BF774u) { return; }
    }
    ctx->pc = 0x4BF774u;
}
