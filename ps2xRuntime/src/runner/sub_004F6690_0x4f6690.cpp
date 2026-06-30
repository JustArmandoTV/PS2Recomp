#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F6690
// Address: 0x4f6690 - 0x4f6770
void sub_004F6690_0x4f6690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F6690_0x4f6690");
#endif

    switch (ctx->pc) {
        case 0x4f6690u: goto label_4f6690;
        case 0x4f6694u: goto label_4f6694;
        case 0x4f6698u: goto label_4f6698;
        case 0x4f669cu: goto label_4f669c;
        case 0x4f66a0u: goto label_4f66a0;
        case 0x4f66a4u: goto label_4f66a4;
        case 0x4f66a8u: goto label_4f66a8;
        case 0x4f66acu: goto label_4f66ac;
        case 0x4f66b0u: goto label_4f66b0;
        case 0x4f66b4u: goto label_4f66b4;
        case 0x4f66b8u: goto label_4f66b8;
        case 0x4f66bcu: goto label_4f66bc;
        case 0x4f66c0u: goto label_4f66c0;
        case 0x4f66c4u: goto label_4f66c4;
        case 0x4f66c8u: goto label_4f66c8;
        case 0x4f66ccu: goto label_4f66cc;
        case 0x4f66d0u: goto label_4f66d0;
        case 0x4f66d4u: goto label_4f66d4;
        case 0x4f66d8u: goto label_4f66d8;
        case 0x4f66dcu: goto label_4f66dc;
        case 0x4f66e0u: goto label_4f66e0;
        case 0x4f66e4u: goto label_4f66e4;
        case 0x4f66e8u: goto label_4f66e8;
        case 0x4f66ecu: goto label_4f66ec;
        case 0x4f66f0u: goto label_4f66f0;
        case 0x4f66f4u: goto label_4f66f4;
        case 0x4f66f8u: goto label_4f66f8;
        case 0x4f66fcu: goto label_4f66fc;
        case 0x4f6700u: goto label_4f6700;
        case 0x4f6704u: goto label_4f6704;
        case 0x4f6708u: goto label_4f6708;
        case 0x4f670cu: goto label_4f670c;
        case 0x4f6710u: goto label_4f6710;
        case 0x4f6714u: goto label_4f6714;
        case 0x4f6718u: goto label_4f6718;
        case 0x4f671cu: goto label_4f671c;
        case 0x4f6720u: goto label_4f6720;
        case 0x4f6724u: goto label_4f6724;
        case 0x4f6728u: goto label_4f6728;
        case 0x4f672cu: goto label_4f672c;
        case 0x4f6730u: goto label_4f6730;
        case 0x4f6734u: goto label_4f6734;
        case 0x4f6738u: goto label_4f6738;
        case 0x4f673cu: goto label_4f673c;
        case 0x4f6740u: goto label_4f6740;
        case 0x4f6744u: goto label_4f6744;
        case 0x4f6748u: goto label_4f6748;
        case 0x4f674cu: goto label_4f674c;
        case 0x4f6750u: goto label_4f6750;
        case 0x4f6754u: goto label_4f6754;
        case 0x4f6758u: goto label_4f6758;
        case 0x4f675cu: goto label_4f675c;
        case 0x4f6760u: goto label_4f6760;
        case 0x4f6764u: goto label_4f6764;
        case 0x4f6768u: goto label_4f6768;
        case 0x4f676cu: goto label_4f676c;
        default: break;
    }

    ctx->pc = 0x4f6690u;

label_4f6690:
    // 0x4f6690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f6690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4f6694:
    // 0x4f6694: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f6694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f6698:
    // 0x4f6698: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f6698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4f669c:
    // 0x4f669c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f669cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f66a0:
    // 0x4f66a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f66a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f66a4:
    // 0x4f66a4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4f66a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f66a8:
    // 0x4f66a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f66a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f66ac:
    // 0x4f66ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4f66acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f66b0:
    // 0x4f66b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f66b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f66b4:
    // 0x4f66b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4f66b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4f66b8:
    // 0x4f66b8: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x4f66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4f66bc:
    // 0x4f66bc: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x4f66bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_4f66c0:
    // 0x4f66c0: 0xa7a00050  sh          $zero, 0x50($sp)
    ctx->pc = 0x4f66c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 0));
label_4f66c4:
    // 0x4f66c4: 0xa7a00052  sh          $zero, 0x52($sp)
    ctx->pc = 0x4f66c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 82), (uint16_t)GPR_U32(ctx, 0));
label_4f66c8:
    // 0x4f66c8: 0x24510130  addiu       $s1, $v0, 0x130
    ctx->pc = 0x4f66c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_4f66cc:
    // 0x4f66cc: 0xc04a576  jal         func_1295D8
label_4f66d0:
    if (ctx->pc == 0x4F66D0u) {
        ctx->pc = 0x4F66D0u;
            // 0x4f66d0: 0xa7a00054  sh          $zero, 0x54($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4F66D4u;
        goto label_4f66d4;
    }
    ctx->pc = 0x4F66CCu;
    SET_GPR_U32(ctx, 31, 0x4F66D4u);
    ctx->pc = 0x4F66D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F66CCu;
            // 0x4f66d0: 0xa7a00054  sh          $zero, 0x54($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F66D4u; }
        if (ctx->pc != 0x4F66D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F66D4u; }
        if (ctx->pc != 0x4F66D4u) { return; }
    }
    ctx->pc = 0x4F66D4u;
label_4f66d4:
    // 0x4f66d4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4f66d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f66d8:
    // 0x4f66d8: 0xc0754b4  jal         func_1D52D0
label_4f66dc:
    if (ctx->pc == 0x4F66DCu) {
        ctx->pc = 0x4F66DCu;
            // 0x4f66dc: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->pc = 0x4F66E0u;
        goto label_4f66e0;
    }
    ctx->pc = 0x4F66D8u;
    SET_GPR_U32(ctx, 31, 0x4F66E0u);
    ctx->pc = 0x4F66DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F66D8u;
            // 0x4f66dc: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F66E0u; }
        if (ctx->pc != 0x4F66E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F66E0u; }
        if (ctx->pc != 0x4F66E0u) { return; }
    }
    ctx->pc = 0x4F66E0u;
label_4f66e0:
    // 0x4f66e0: 0x96440054  lhu         $a0, 0x54($s2)
    ctx->pc = 0x4f66e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 84)));
label_4f66e4:
    // 0x4f66e4: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x4f66e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_4f66e8:
    // 0x4f66e8: 0x5083001b  beql        $a0, $v1, . + 4 + (0x1B << 2)
label_4f66ec:
    if (ctx->pc == 0x4F66ECu) {
        ctx->pc = 0x4F66ECu;
            // 0x4f66ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4F66F0u;
        goto label_4f66f0;
    }
    ctx->pc = 0x4F66E8u;
    {
        const bool branch_taken_0x4f66e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f66e8) {
            ctx->pc = 0x4F66ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F66E8u;
            // 0x4f66ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6758u;
            goto label_4f6758;
        }
    }
    ctx->pc = 0x4F66F0u;
label_4f66f0:
    // 0x4f66f0: 0x96460058  lhu         $a2, 0x58($s2)
    ctx->pc = 0x4f66f0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
label_4f66f4:
    // 0x4f66f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f66f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f66f8:
    // 0x4f66f8: 0xc13da04  jal         func_4F6810
label_4f66fc:
    if (ctx->pc == 0x4F66FCu) {
        ctx->pc = 0x4F66FCu;
            // 0x4f66fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F6700u;
        goto label_4f6700;
    }
    ctx->pc = 0x4F66F8u;
    SET_GPR_U32(ctx, 31, 0x4F6700u);
    ctx->pc = 0x4F66FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F66F8u;
            // 0x4f66fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6810u;
    if (runtime->hasFunction(0x4F6810u)) {
        auto targetFn = runtime->lookupFunction(0x4F6810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6700u; }
        if (ctx->pc != 0x4F6700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6810_0x4f6810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6700u; }
        if (ctx->pc != 0x4F6700u) { return; }
    }
    ctx->pc = 0x4F6700u;
label_4f6700:
    // 0x4f6700: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4f6700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4f6704:
    // 0x4f6704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f6704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f6708:
    // 0x4f6708: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x4f6708u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_4f670c:
    // 0x4f670c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4f670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f6710:
    // 0x4f6710: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4f6710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4f6714:
    // 0x4f6714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f6714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f6718:
    // 0x4f6718: 0x94460002  lhu         $a2, 0x2($v0)
    ctx->pc = 0x4f6718u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_4f671c:
    // 0x4f671c: 0xc0c5ba8  jal         func_316EA0
label_4f6720:
    if (ctx->pc == 0x4F6720u) {
        ctx->pc = 0x4F6720u;
            // 0x4f6720: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4F6724u;
        goto label_4f6724;
    }
    ctx->pc = 0x4F671Cu;
    SET_GPR_U32(ctx, 31, 0x4F6724u);
    ctx->pc = 0x4F6720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F671Cu;
            // 0x4f6720: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316EA0u;
    if (runtime->hasFunction(0x316EA0u)) {
        auto targetFn = runtime->lookupFunction(0x316EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6724u; }
        if (ctx->pc != 0x4F6724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316EA0_0x316ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6724u; }
        if (ctx->pc != 0x4F6724u) { return; }
    }
    ctx->pc = 0x4F6724u;
label_4f6724:
    // 0x4f6724: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x4f6724u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_4f6728:
    // 0x4f6728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f6728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f672c:
    // 0x4f672c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4f672cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4f6730:
    // 0x4f6730: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x4f6730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_4f6734:
    // 0x4f6734: 0xc13da04  jal         func_4F6810
label_4f6738:
    if (ctx->pc == 0x4F6738u) {
        ctx->pc = 0x4F6738u;
            // 0x4f6738: 0xa7a20054  sh          $v0, 0x54($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4F673Cu;
        goto label_4f673c;
    }
    ctx->pc = 0x4F6734u;
    SET_GPR_U32(ctx, 31, 0x4F673Cu);
    ctx->pc = 0x4F6738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6734u;
            // 0x4f6738: 0xa7a20054  sh          $v0, 0x54($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6810u;
    if (runtime->hasFunction(0x4F6810u)) {
        auto targetFn = runtime->lookupFunction(0x4F6810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F673Cu; }
        if (ctx->pc != 0x4F673Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6810_0x4f6810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F673Cu; }
        if (ctx->pc != 0x4F673Cu) { return; }
    }
    ctx->pc = 0x4F673Cu;
label_4f673c:
    // 0x4f673c: 0x97a20052  lhu         $v0, 0x52($sp)
    ctx->pc = 0x4f673cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
label_4f6740:
    // 0x4f6740: 0xa6420058  sh          $v0, 0x58($s2)
    ctx->pc = 0x4f6740u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 88), (uint16_t)GPR_U32(ctx, 2));
label_4f6744:
    // 0x4f6744: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4f6744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4f6748:
    // 0x4f6748: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4f6748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4f674c:
    // 0x4f674c: 0x320f809  jalr        $t9
label_4f6750:
    if (ctx->pc == 0x4F6750u) {
        ctx->pc = 0x4F6750u;
            // 0x4f6750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F6754u;
        goto label_4f6754;
    }
    ctx->pc = 0x4F674Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F6754u);
        ctx->pc = 0x4F6750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F674Cu;
            // 0x4f6750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F6754u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F6754u; }
            if (ctx->pc != 0x4F6754u) { return; }
        }
        }
    }
    ctx->pc = 0x4F6754u;
label_4f6754:
    // 0x4f6754: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f6754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4f6758:
    // 0x4f6758: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f6758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f675c:
    // 0x4f675c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f675cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f6760:
    // 0x4f6760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f6760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f6764:
    // 0x4f6764: 0x3e00008  jr          $ra
label_4f6768:
    if (ctx->pc == 0x4F6768u) {
        ctx->pc = 0x4F6768u;
            // 0x4f6768: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4F676Cu;
        goto label_4f676c;
    }
    ctx->pc = 0x4F6764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F6768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6764u;
            // 0x4f6768: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F676Cu;
label_4f676c:
    // 0x4f676c: 0x0  nop
    ctx->pc = 0x4f676cu;
    // NOP
}
