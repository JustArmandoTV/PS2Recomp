#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160650
// Address: 0x160650 - 0x1608a0
void sub_00160650_0x160650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160650_0x160650");
#endif

    switch (ctx->pc) {
        case 0x160698u: goto label_160698;
        case 0x1606acu: goto label_1606ac;
        case 0x1606b8u: goto label_1606b8;
        case 0x1606c4u: goto label_1606c4;
        case 0x1606ccu: goto label_1606cc;
        case 0x1606dcu: goto label_1606dc;
        case 0x1606fcu: goto label_1606fc;
        case 0x160710u: goto label_160710;
        case 0x16071cu: goto label_16071c;
        case 0x160728u: goto label_160728;
        case 0x160730u: goto label_160730;
        case 0x160740u: goto label_160740;
        case 0x16074cu: goto label_16074c;
        case 0x160754u: goto label_160754;
        case 0x160768u: goto label_160768;
        case 0x160794u: goto label_160794;
        case 0x1607a8u: goto label_1607a8;
        case 0x1607b4u: goto label_1607b4;
        case 0x1607c0u: goto label_1607c0;
        case 0x1607c8u: goto label_1607c8;
        case 0x1607d8u: goto label_1607d8;
        case 0x1607f8u: goto label_1607f8;
        case 0x16080cu: goto label_16080c;
        case 0x160818u: goto label_160818;
        case 0x160824u: goto label_160824;
        case 0x16082cu: goto label_16082c;
        case 0x16083cu: goto label_16083c;
        case 0x160848u: goto label_160848;
        case 0x160850u: goto label_160850;
        case 0x160864u: goto label_160864;
        case 0x16087cu: goto label_16087c;
        default: break;
    }

    ctx->pc = 0x160650u;

label_160650:
    // 0x160650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x160650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x160654: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x160654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x160658: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x160658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16065c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16065cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x160660: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160664: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160668: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x160668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16066c: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x16066cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x160670: 0x1260003d  beqz        $s3, . + 4 + (0x3D << 2)
    ctx->pc = 0x160670u;
    {
        const bool branch_taken_0x160670 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x160674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160670u;
            // 0x160674: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160670) {
            ctx->pc = 0x160768u;
            goto label_160768;
        }
    }
    ctx->pc = 0x160678u;
    // 0x160678: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x160678u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16067c: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x16067Cu;
    {
        const bool branch_taken_0x16067c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16067c) {
            ctx->pc = 0x160680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16067Cu;
            // 0x160680: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1606E0u;
            goto label_1606e0;
        }
    }
    ctx->pc = 0x160684u;
    // 0x160684: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x160684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x160688: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x160688u;
    {
        const bool branch_taken_0x160688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x160688) {
            ctx->pc = 0x16068Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160688u;
            // 0x16068c: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16069Cu;
            goto label_16069c;
        }
    }
    ctx->pc = 0x160690u;
    // 0x160690: 0xc058194  jal         func_160650
    ctx->pc = 0x160690u;
    SET_GPR_U32(ctx, 31, 0x160698u);
    ctx->pc = 0x160650u;
    goto label_160650;
    ctx->pc = 0x160698u;
label_160698:
    // 0x160698: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x160698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_16069c:
    // 0x16069c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16069Cu;
    {
        const bool branch_taken_0x16069c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16069c) {
            ctx->pc = 0x1606A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16069Cu;
            // 0x1606a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1606B0u;
            goto label_1606b0;
        }
    }
    ctx->pc = 0x1606A4u;
    // 0x1606a4: 0xc058194  jal         func_160650
    ctx->pc = 0x1606A4u;
    SET_GPR_U32(ctx, 31, 0x1606ACu);
    ctx->pc = 0x1606A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1606A4u;
            // 0x1606a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160650u;
    goto label_160650;
    ctx->pc = 0x1606ACu;
label_1606ac:
    // 0x1606ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1606acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1606b0:
    // 0x1606b0: 0xc058238  jal         func_1608E0
    ctx->pc = 0x1606B0u;
    SET_GPR_U32(ctx, 31, 0x1606B8u);
    ctx->pc = 0x1608E0u;
    if (runtime->hasFunction(0x1608E0u)) {
        auto targetFn = runtime->lookupFunction(0x1608E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606B8u; }
        if (ctx->pc != 0x1606B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608E0_0x1608e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606B8u; }
        if (ctx->pc != 0x1606B8u) { return; }
    }
    ctx->pc = 0x1606B8u;
label_1606b8:
    // 0x1606b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1606b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606bc: 0xc058234  jal         func_1608D0
    ctx->pc = 0x1606BCu;
    SET_GPR_U32(ctx, 31, 0x1606C4u);
    ctx->pc = 0x1606C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1606BCu;
            // 0x1606c0: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1608D0u;
    if (runtime->hasFunction(0x1608D0u)) {
        auto targetFn = runtime->lookupFunction(0x1608D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606C4u; }
        if (ctx->pc != 0x1606C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608D0_0x1608d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606C4u; }
        if (ctx->pc != 0x1606C4u) { return; }
    }
    ctx->pc = 0x1606C4u;
label_1606c4:
    // 0x1606c4: 0xc058230  jal         func_1608C0
    ctx->pc = 0x1606C4u;
    SET_GPR_U32(ctx, 31, 0x1606CCu);
    ctx->pc = 0x1606C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1606C4u;
            // 0x1606c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1608C0u;
    if (runtime->hasFunction(0x1608C0u)) {
        auto targetFn = runtime->lookupFunction(0x1608C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606CCu; }
        if (ctx->pc != 0x1606CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608C0_0x1608c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606CCu; }
        if (ctx->pc != 0x1606CCu) { return; }
    }
    ctx->pc = 0x1606CCu;
label_1606cc:
    // 0x1606cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1606ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1606d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606d4: 0xc058228  jal         func_1608A0
    ctx->pc = 0x1606D4u;
    SET_GPR_U32(ctx, 31, 0x1606DCu);
    ctx->pc = 0x1606D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1606D4u;
            // 0x1606d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1608A0u;
    if (runtime->hasFunction(0x1608A0u)) {
        auto targetFn = runtime->lookupFunction(0x1608A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606DCu; }
        if (ctx->pc != 0x1606DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608A0_0x1608a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606DCu; }
        if (ctx->pc != 0x1606DCu) { return; }
    }
    ctx->pc = 0x1606DCu;
label_1606dc:
    // 0x1606dc: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x1606dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1606e0:
    // 0x1606e0: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1606E0u;
    {
        const bool branch_taken_0x1606e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1606e0) {
            ctx->pc = 0x1606E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1606E0u;
            // 0x1606e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160744u;
            goto label_160744;
        }
    }
    ctx->pc = 0x1606E8u;
    // 0x1606e8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1606e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1606ec: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1606ECu;
    {
        const bool branch_taken_0x1606ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1606ec) {
            ctx->pc = 0x1606F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1606ECu;
            // 0x1606f0: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160700u;
            goto label_160700;
        }
    }
    ctx->pc = 0x1606F4u;
    // 0x1606f4: 0xc058194  jal         func_160650
    ctx->pc = 0x1606F4u;
    SET_GPR_U32(ctx, 31, 0x1606FCu);
    ctx->pc = 0x1606F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1606F4u;
            // 0x1606f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160650u;
    goto label_160650;
    ctx->pc = 0x1606FCu;
label_1606fc:
    // 0x1606fc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1606fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_160700:
    // 0x160700: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x160700u;
    {
        const bool branch_taken_0x160700 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x160700) {
            ctx->pc = 0x160704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160700u;
            // 0x160704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160714u;
            goto label_160714;
        }
    }
    ctx->pc = 0x160708u;
    // 0x160708: 0xc058194  jal         func_160650
    ctx->pc = 0x160708u;
    SET_GPR_U32(ctx, 31, 0x160710u);
    ctx->pc = 0x16070Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160708u;
            // 0x16070c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160650u;
    goto label_160650;
    ctx->pc = 0x160710u;
label_160710:
    // 0x160710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160714:
    // 0x160714: 0xc058238  jal         func_1608E0
    ctx->pc = 0x160714u;
    SET_GPR_U32(ctx, 31, 0x16071Cu);
    ctx->pc = 0x1608E0u;
    if (runtime->hasFunction(0x1608E0u)) {
        auto targetFn = runtime->lookupFunction(0x1608E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16071Cu; }
        if (ctx->pc != 0x16071Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608E0_0x1608e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16071Cu; }
        if (ctx->pc != 0x16071Cu) { return; }
    }
    ctx->pc = 0x16071Cu;
label_16071c:
    // 0x16071c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16071cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160720: 0xc058234  jal         func_1608D0
    ctx->pc = 0x160720u;
    SET_GPR_U32(ctx, 31, 0x160728u);
    ctx->pc = 0x160724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160720u;
            // 0x160724: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1608D0u;
    if (runtime->hasFunction(0x1608D0u)) {
        auto targetFn = runtime->lookupFunction(0x1608D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160728u; }
        if (ctx->pc != 0x160728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608D0_0x1608d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160728u; }
        if (ctx->pc != 0x160728u) { return; }
    }
    ctx->pc = 0x160728u;
label_160728:
    // 0x160728: 0xc058230  jal         func_1608C0
    ctx->pc = 0x160728u;
    SET_GPR_U32(ctx, 31, 0x160730u);
    ctx->pc = 0x16072Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160728u;
            // 0x16072c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1608C0u;
    if (runtime->hasFunction(0x1608C0u)) {
        auto targetFn = runtime->lookupFunction(0x1608C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160730u; }
        if (ctx->pc != 0x160730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608C0_0x1608c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160730u; }
        if (ctx->pc != 0x160730u) { return; }
    }
    ctx->pc = 0x160730u;
label_160730:
    // 0x160730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160734: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x160734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160738: 0xc058228  jal         func_1608A0
    ctx->pc = 0x160738u;
    SET_GPR_U32(ctx, 31, 0x160740u);
    ctx->pc = 0x16073Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160738u;
            // 0x16073c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1608A0u;
    if (runtime->hasFunction(0x1608A0u)) {
        auto targetFn = runtime->lookupFunction(0x1608A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160740u; }
        if (ctx->pc != 0x160740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608A0_0x1608a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160740u; }
        if (ctx->pc != 0x160740u) { return; }
    }
    ctx->pc = 0x160740u;
label_160740:
    // 0x160740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160744:
    // 0x160744: 0xc058238  jal         func_1608E0
    ctx->pc = 0x160744u;
    SET_GPR_U32(ctx, 31, 0x16074Cu);
    ctx->pc = 0x1608E0u;
    if (runtime->hasFunction(0x1608E0u)) {
        auto targetFn = runtime->lookupFunction(0x1608E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16074Cu; }
        if (ctx->pc != 0x16074Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608E0_0x1608e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16074Cu; }
        if (ctx->pc != 0x16074Cu) { return; }
    }
    ctx->pc = 0x16074Cu;
label_16074c:
    // 0x16074c: 0xc058230  jal         func_1608C0
    ctx->pc = 0x16074Cu;
    SET_GPR_U32(ctx, 31, 0x160754u);
    ctx->pc = 0x160750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16074Cu;
            // 0x160750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1608C0u;
    if (runtime->hasFunction(0x1608C0u)) {
        auto targetFn = runtime->lookupFunction(0x1608C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160754u; }
        if (ctx->pc != 0x160754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608C0_0x1608c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160754u; }
        if (ctx->pc != 0x160754u) { return; }
    }
    ctx->pc = 0x160754u;
label_160754:
    // 0x160754: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x160754u;
    {
        const bool branch_taken_0x160754 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x160754) {
            ctx->pc = 0x160758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160754u;
            // 0x160758: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16076Cu;
            goto label_16076c;
        }
    }
    ctx->pc = 0x16075Cu;
    // 0x16075c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16075cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160760: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x160760u;
    SET_GPR_U32(ctx, 31, 0x160768u);
    ctx->pc = 0x160764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160760u;
            // 0x160764: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160768u; }
        if (ctx->pc != 0x160768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160768u; }
        if (ctx->pc != 0x160768u) { return; }
    }
    ctx->pc = 0x160768u;
label_160768:
    // 0x160768: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x160768u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16076c:
    // 0x16076c: 0x5260003e  beql        $s3, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x16076Cu;
    {
        const bool branch_taken_0x16076c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16076c) {
            ctx->pc = 0x160770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16076Cu;
            // 0x160770: 0x26230008  addiu       $v1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160868u;
            goto label_160868;
        }
    }
    ctx->pc = 0x160774u;
    // 0x160774: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x160774u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x160778: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x160778u;
    {
        const bool branch_taken_0x160778 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x160778) {
            ctx->pc = 0x16077Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160778u;
            // 0x16077c: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1607DCu;
            goto label_1607dc;
        }
    }
    ctx->pc = 0x160780u;
    // 0x160780: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x160780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x160784: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x160784u;
    {
        const bool branch_taken_0x160784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x160784) {
            ctx->pc = 0x160788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160784u;
            // 0x160788: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160798u;
            goto label_160798;
        }
    }
    ctx->pc = 0x16078Cu;
    // 0x16078c: 0xc058194  jal         func_160650
    ctx->pc = 0x16078Cu;
    SET_GPR_U32(ctx, 31, 0x160794u);
    ctx->pc = 0x160790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16078Cu;
            // 0x160790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160650u;
    goto label_160650;
    ctx->pc = 0x160794u;
label_160794:
    // 0x160794: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x160794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_160798:
    // 0x160798: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x160798u;
    {
        const bool branch_taken_0x160798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x160798) {
            ctx->pc = 0x16079Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160798u;
            // 0x16079c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1607ACu;
            goto label_1607ac;
        }
    }
    ctx->pc = 0x1607A0u;
    // 0x1607a0: 0xc058194  jal         func_160650
    ctx->pc = 0x1607A0u;
    SET_GPR_U32(ctx, 31, 0x1607A8u);
    ctx->pc = 0x1607A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1607A0u;
            // 0x1607a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160650u;
    goto label_160650;
    ctx->pc = 0x1607A8u;
label_1607a8:
    // 0x1607a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1607a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1607ac:
    // 0x1607ac: 0xc058238  jal         func_1608E0
    ctx->pc = 0x1607ACu;
    SET_GPR_U32(ctx, 31, 0x1607B4u);
    ctx->pc = 0x1608E0u;
    if (runtime->hasFunction(0x1608E0u)) {
        auto targetFn = runtime->lookupFunction(0x1608E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607B4u; }
        if (ctx->pc != 0x1607B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608E0_0x1608e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607B4u; }
        if (ctx->pc != 0x1607B4u) { return; }
    }
    ctx->pc = 0x1607B4u;
label_1607b4:
    // 0x1607b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1607b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607b8: 0xc058234  jal         func_1608D0
    ctx->pc = 0x1607B8u;
    SET_GPR_U32(ctx, 31, 0x1607C0u);
    ctx->pc = 0x1607BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1607B8u;
            // 0x1607bc: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1608D0u;
    if (runtime->hasFunction(0x1608D0u)) {
        auto targetFn = runtime->lookupFunction(0x1608D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607C0u; }
        if (ctx->pc != 0x1607C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608D0_0x1608d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607C0u; }
        if (ctx->pc != 0x1607C0u) { return; }
    }
    ctx->pc = 0x1607C0u;
label_1607c0:
    // 0x1607c0: 0xc058230  jal         func_1608C0
    ctx->pc = 0x1607C0u;
    SET_GPR_U32(ctx, 31, 0x1607C8u);
    ctx->pc = 0x1607C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1607C0u;
            // 0x1607c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1608C0u;
    if (runtime->hasFunction(0x1608C0u)) {
        auto targetFn = runtime->lookupFunction(0x1608C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607C8u; }
        if (ctx->pc != 0x1607C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608C0_0x1608c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607C8u; }
        if (ctx->pc != 0x1607C8u) { return; }
    }
    ctx->pc = 0x1607C8u;
label_1607c8:
    // 0x1607c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1607c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1607ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607d0: 0xc058228  jal         func_1608A0
    ctx->pc = 0x1607D0u;
    SET_GPR_U32(ctx, 31, 0x1607D8u);
    ctx->pc = 0x1607D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1607D0u;
            // 0x1607d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1608A0u;
    if (runtime->hasFunction(0x1608A0u)) {
        auto targetFn = runtime->lookupFunction(0x1608A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607D8u; }
        if (ctx->pc != 0x1607D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608A0_0x1608a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607D8u; }
        if (ctx->pc != 0x1607D8u) { return; }
    }
    ctx->pc = 0x1607D8u;
label_1607d8:
    // 0x1607d8: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x1607d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1607dc:
    // 0x1607dc: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1607DCu;
    {
        const bool branch_taken_0x1607dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1607dc) {
            ctx->pc = 0x1607E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1607DCu;
            // 0x1607e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160840u;
            goto label_160840;
        }
    }
    ctx->pc = 0x1607E4u;
    // 0x1607e4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1607e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1607e8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1607E8u;
    {
        const bool branch_taken_0x1607e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1607e8) {
            ctx->pc = 0x1607ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1607E8u;
            // 0x1607ec: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1607FCu;
            goto label_1607fc;
        }
    }
    ctx->pc = 0x1607F0u;
    // 0x1607f0: 0xc058194  jal         func_160650
    ctx->pc = 0x1607F0u;
    SET_GPR_U32(ctx, 31, 0x1607F8u);
    ctx->pc = 0x1607F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1607F0u;
            // 0x1607f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160650u;
    goto label_160650;
    ctx->pc = 0x1607F8u;
label_1607f8:
    // 0x1607f8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1607f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1607fc:
    // 0x1607fc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1607FCu;
    {
        const bool branch_taken_0x1607fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1607fc) {
            ctx->pc = 0x160800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1607FCu;
            // 0x160800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160810u;
            goto label_160810;
        }
    }
    ctx->pc = 0x160804u;
    // 0x160804: 0xc058194  jal         func_160650
    ctx->pc = 0x160804u;
    SET_GPR_U32(ctx, 31, 0x16080Cu);
    ctx->pc = 0x160808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160804u;
            // 0x160808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160650u;
    goto label_160650;
    ctx->pc = 0x16080Cu;
label_16080c:
    // 0x16080c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16080cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160810:
    // 0x160810: 0xc058238  jal         func_1608E0
    ctx->pc = 0x160810u;
    SET_GPR_U32(ctx, 31, 0x160818u);
    ctx->pc = 0x1608E0u;
    if (runtime->hasFunction(0x1608E0u)) {
        auto targetFn = runtime->lookupFunction(0x1608E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160818u; }
        if (ctx->pc != 0x160818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608E0_0x1608e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160818u; }
        if (ctx->pc != 0x160818u) { return; }
    }
    ctx->pc = 0x160818u;
label_160818:
    // 0x160818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16081c: 0xc058234  jal         func_1608D0
    ctx->pc = 0x16081Cu;
    SET_GPR_U32(ctx, 31, 0x160824u);
    ctx->pc = 0x160820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16081Cu;
            // 0x160820: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1608D0u;
    if (runtime->hasFunction(0x1608D0u)) {
        auto targetFn = runtime->lookupFunction(0x1608D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160824u; }
        if (ctx->pc != 0x160824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608D0_0x1608d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160824u; }
        if (ctx->pc != 0x160824u) { return; }
    }
    ctx->pc = 0x160824u;
label_160824:
    // 0x160824: 0xc058230  jal         func_1608C0
    ctx->pc = 0x160824u;
    SET_GPR_U32(ctx, 31, 0x16082Cu);
    ctx->pc = 0x160828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160824u;
            // 0x160828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1608C0u;
    if (runtime->hasFunction(0x1608C0u)) {
        auto targetFn = runtime->lookupFunction(0x1608C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16082Cu; }
        if (ctx->pc != 0x16082Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608C0_0x1608c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16082Cu; }
        if (ctx->pc != 0x16082Cu) { return; }
    }
    ctx->pc = 0x16082Cu;
label_16082c:
    // 0x16082c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16082cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160830: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x160830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160834: 0xc058228  jal         func_1608A0
    ctx->pc = 0x160834u;
    SET_GPR_U32(ctx, 31, 0x16083Cu);
    ctx->pc = 0x160838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160834u;
            // 0x160838: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1608A0u;
    if (runtime->hasFunction(0x1608A0u)) {
        auto targetFn = runtime->lookupFunction(0x1608A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16083Cu; }
        if (ctx->pc != 0x16083Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608A0_0x1608a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16083Cu; }
        if (ctx->pc != 0x16083Cu) { return; }
    }
    ctx->pc = 0x16083Cu;
label_16083c:
    // 0x16083c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16083cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160840:
    // 0x160840: 0xc058238  jal         func_1608E0
    ctx->pc = 0x160840u;
    SET_GPR_U32(ctx, 31, 0x160848u);
    ctx->pc = 0x1608E0u;
    if (runtime->hasFunction(0x1608E0u)) {
        auto targetFn = runtime->lookupFunction(0x1608E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160848u; }
        if (ctx->pc != 0x160848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608E0_0x1608e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160848u; }
        if (ctx->pc != 0x160848u) { return; }
    }
    ctx->pc = 0x160848u;
label_160848:
    // 0x160848: 0xc058230  jal         func_1608C0
    ctx->pc = 0x160848u;
    SET_GPR_U32(ctx, 31, 0x160850u);
    ctx->pc = 0x16084Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160848u;
            // 0x16084c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1608C0u;
    if (runtime->hasFunction(0x1608C0u)) {
        auto targetFn = runtime->lookupFunction(0x1608C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160850u; }
        if (ctx->pc != 0x160850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001608C0_0x1608c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160850u; }
        if (ctx->pc != 0x160850u) { return; }
    }
    ctx->pc = 0x160850u;
label_160850:
    // 0x160850: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x160850u;
    {
        const bool branch_taken_0x160850 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x160850) {
            ctx->pc = 0x160864u;
            goto label_160864;
        }
    }
    ctx->pc = 0x160858u;
    // 0x160858: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x160858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16085c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x16085Cu;
    SET_GPR_U32(ctx, 31, 0x160864u);
    ctx->pc = 0x160860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16085Cu;
            // 0x160860: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160864u; }
        if (ctx->pc != 0x160864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160864u; }
        if (ctx->pc != 0x160864u) { return; }
    }
    ctx->pc = 0x160864u;
label_160864:
    // 0x160864: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x160864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_160868:
    // 0x160868: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x160868u;
    {
        const bool branch_taken_0x160868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x160868) {
            ctx->pc = 0x16086Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160868u;
            // 0x16086c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160880u;
            goto label_160880;
        }
    }
    ctx->pc = 0x160870u;
    // 0x160870: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x160870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160874: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x160874u;
    SET_GPR_U32(ctx, 31, 0x16087Cu);
    ctx->pc = 0x160878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160874u;
            // 0x160878: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16087Cu; }
        if (ctx->pc != 0x16087Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16087Cu; }
        if (ctx->pc != 0x16087Cu) { return; }
    }
    ctx->pc = 0x16087Cu;
label_16087c:
    // 0x16087c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16087cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_160880:
    // 0x160880: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160880u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160884: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160884u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16088c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16088cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160890: 0x3e00008  jr          $ra
    ctx->pc = 0x160890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160890u;
            // 0x160894: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160898u;
    // 0x160898: 0x0  nop
    ctx->pc = 0x160898u;
    // NOP
    // 0x16089c: 0x0  nop
    ctx->pc = 0x16089cu;
    // NOP
}
