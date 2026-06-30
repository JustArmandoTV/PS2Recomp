#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00499560
// Address: 0x499560 - 0x499940
void sub_00499560_0x499560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499560_0x499560");
#endif

    switch (ctx->pc) {
        case 0x4995b8u: goto label_4995b8;
        case 0x4995ccu: goto label_4995cc;
        case 0x4995e0u: goto label_4995e0;
        case 0x499620u: goto label_499620;
        case 0x499658u: goto label_499658;
        case 0x499680u: goto label_499680;
        case 0x499690u: goto label_499690;
        case 0x4996ccu: goto label_4996cc;
        case 0x4996e8u: goto label_4996e8;
        case 0x499708u: goto label_499708;
        case 0x49974cu: goto label_49974c;
        case 0x499788u: goto label_499788;
        case 0x499794u: goto label_499794;
        case 0x4997a8u: goto label_4997a8;
        case 0x4997f8u: goto label_4997f8;
        case 0x499808u: goto label_499808;
        case 0x49983cu: goto label_49983c;
        case 0x499890u: goto label_499890;
        case 0x4998a0u: goto label_4998a0;
        case 0x4998d4u: goto label_4998d4;
        default: break;
    }

    ctx->pc = 0x499560u;

    // 0x499560: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x499560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x499564: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x499564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x499568: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x499568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x49956c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x49956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x499570: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x499570u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499574: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x499574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x499578: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x499578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x49957c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x49957cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499580: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x499580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x499584: 0x26f40004  addiu       $s4, $s7, 0x4
    ctx->pc = 0x499584u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x499588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x499588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x49958c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x499590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x499590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x499594: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x499594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x499598: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x499598u;
    {
        const bool branch_taken_0x499598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49959Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499598u;
            // 0x49959c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499598) {
            ctx->pc = 0x499728u;
            goto label_499728;
        }
    }
    ctx->pc = 0x4995A0u;
    // 0x4995a0: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x4995a0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4995a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4995a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4995a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4995a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4995ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4995acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4995b0: 0xc0400c4  jal         func_100310
    ctx->pc = 0x4995B0u;
    SET_GPR_U32(ctx, 31, 0x4995B8u);
    ctx->pc = 0x4995B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4995B0u;
            // 0x4995b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4995B8u; }
        if (ctx->pc != 0x4995B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4995B8u; }
        if (ctx->pc != 0x4995B8u) { return; }
    }
    ctx->pc = 0x4995B8u;
label_4995b8:
    // 0x4995b8: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x4995b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x4995bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4995bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4995c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4995c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4995c4: 0xc04a508  jal         func_129420
    ctx->pc = 0x4995C4u;
    SET_GPR_U32(ctx, 31, 0x4995CCu);
    ctx->pc = 0x4995C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4995C4u;
            // 0x4995c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4995CCu; }
        if (ctx->pc != 0x4995CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4995CCu; }
        if (ctx->pc != 0x4995CCu) { return; }
    }
    ctx->pc = 0x4995CCu;
label_4995cc:
    // 0x4995cc: 0x26a40008  addiu       $a0, $s5, 0x8
    ctx->pc = 0x4995ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x4995d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4995d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4995d4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4995d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4995d8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4995D8u;
    SET_GPR_U32(ctx, 31, 0x4995E0u);
    ctx->pc = 0x4995DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4995D8u;
            // 0x4995dc: 0x2929021  addu        $s2, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4995E0u; }
        if (ctx->pc != 0x4995E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4995E0u; }
        if (ctx->pc != 0x4995E0u) { return; }
    }
    ctx->pc = 0x4995E0u;
label_4995e0:
    // 0x4995e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4995e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4995e4: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x4995e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x4995e8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4995e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4995ec: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x4995ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    // 0x4995f0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4995f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4995f4: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x4995f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x4995f8: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x4995f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x4995fc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4995FCu;
    {
        const bool branch_taken_0x4995fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x499600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4995FCu;
            // 0x499600: 0x2654000c  addiu       $s4, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4995fc) {
            ctx->pc = 0x49962Cu;
            goto label_49962c;
        }
    }
    ctx->pc = 0x499604u;
    // 0x499604: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x499604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x499608: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49960c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49960cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x499610: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499614: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x499614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x499618: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499618u;
    SET_GPR_U32(ctx, 31, 0x499620u);
    ctx->pc = 0x49961Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499618u;
            // 0x49961c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499620u; }
        if (ctx->pc != 0x499620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499620u; }
        if (ctx->pc != 0x499620u) { return; }
    }
    ctx->pc = 0x499620u;
label_499620:
    // 0x499620: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x499620u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x499624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x499624u;
    {
        const bool branch_taken_0x499624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499624u;
            // 0x499628: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499624) {
            ctx->pc = 0x499630u;
            goto label_499630;
        }
    }
    ctx->pc = 0x49962Cu;
label_49962c:
    // 0x49962c: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x49962cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
label_499630:
    // 0x499630: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x499630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x499634: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x499634u;
    {
        const bool branch_taken_0x499634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x499634) {
            ctx->pc = 0x499638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x499634u;
            // 0x499638: 0xaea0001c  sw          $zero, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x499660u;
            goto label_499660;
        }
    }
    ctx->pc = 0x49963Cu;
    // 0x49963c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x49963cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x499640: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x499644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x499648: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49964c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x49964cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x499650: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499650u;
    SET_GPR_U32(ctx, 31, 0x499658u);
    ctx->pc = 0x499654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499650u;
            // 0x499654: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499658u; }
        if (ctx->pc != 0x499658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499658u; }
        if (ctx->pc != 0x499658u) { return; }
    }
    ctx->pc = 0x499658u;
label_499658:
    // 0x499658: 0xaea2001c  sw          $v0, 0x1C($s5)
    ctx->pc = 0x499658u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
    // 0x49965c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49965cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_499660:
    // 0x499660: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x499660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x499664: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x499664u;
    {
        const bool branch_taken_0x499664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x499664) {
            ctx->pc = 0x499668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x499664u;
            // 0x499668: 0xaea00020  sw          $zero, 0x20($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x499688u;
            goto label_499688;
        }
    }
    ctx->pc = 0x49966Cu;
    // 0x49966c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x49966cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x499670: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499674: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499678: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499678u;
    SET_GPR_U32(ctx, 31, 0x499680u);
    ctx->pc = 0x49967Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499678u;
            // 0x49967c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499680u; }
        if (ctx->pc != 0x499680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499680u; }
        if (ctx->pc != 0x499680u) { return; }
    }
    ctx->pc = 0x499680u;
label_499680:
    // 0x499680: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x499680u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
    // 0x499684: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x499684u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_499688:
    // 0x499688: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x499688u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x49968c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49968cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_499690:
    // 0x499690: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x499690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x499694: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x499694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x499698: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x499698u;
    {
        const bool branch_taken_0x499698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x499698) {
            ctx->pc = 0x4996F8u;
            goto label_4996f8;
        }
    }
    ctx->pc = 0x4996A0u;
    // 0x4996a0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x4996a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4996a4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4996A4u;
    {
        const bool branch_taken_0x4996a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4996a4) {
            ctx->pc = 0x4996D8u;
            goto label_4996d8;
        }
    }
    ctx->pc = 0x4996ACu;
    // 0x4996ac: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4996acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4996b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4996B0u;
    {
        const bool branch_taken_0x4996b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4996b0) {
            ctx->pc = 0x4996C0u;
            goto label_4996c0;
        }
    }
    ctx->pc = 0x4996B8u;
    // 0x4996b8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4996B8u;
    {
        const bool branch_taken_0x4996b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4996b8) {
            ctx->pc = 0x499710u;
            goto label_499710;
        }
    }
    ctx->pc = 0x4996C0u;
label_4996c0:
    // 0x4996c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4996c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4996c4: 0xc1264f0  jal         func_4993C0
    ctx->pc = 0x4996C4u;
    SET_GPR_U32(ctx, 31, 0x4996CCu);
    ctx->pc = 0x4996C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4996C4u;
            // 0x4996c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4993C0u;
    if (runtime->hasFunction(0x4993C0u)) {
        auto targetFn = runtime->lookupFunction(0x4993C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4996CCu; }
        if (ctx->pc != 0x4996CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004993C0_0x4993c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4996CCu; }
        if (ctx->pc != 0x4996CCu) { return; }
    }
    ctx->pc = 0x4996CCu;
label_4996cc:
    // 0x4996cc: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x4996ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x4996d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4996D0u;
    {
        const bool branch_taken_0x4996d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4996D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4996D0u;
            // 0x4996d4: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4996d0) {
            ctx->pc = 0x499710u;
            goto label_499710;
        }
    }
    ctx->pc = 0x4996D8u;
label_4996d8:
    // 0x4996d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4996d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4996dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4996dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4996e0: 0xc04a508  jal         func_129420
    ctx->pc = 0x4996E0u;
    SET_GPR_U32(ctx, 31, 0x4996E8u);
    ctx->pc = 0x4996E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4996E0u;
            // 0x4996e4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4996E8u; }
        if (ctx->pc != 0x4996E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4996E8u; }
        if (ctx->pc != 0x4996E8u) { return; }
    }
    ctx->pc = 0x4996E8u;
label_4996e8:
    // 0x4996e8: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x4996e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x4996ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4996ECu;
    {
        const bool branch_taken_0x4996ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4996F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4996ECu;
            // 0x4996f0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4996ec) {
            ctx->pc = 0x499710u;
            goto label_499710;
        }
    }
    ctx->pc = 0x4996F4u;
    // 0x4996f4: 0x0  nop
    ctx->pc = 0x4996f4u;
    // NOP
label_4996f8:
    // 0x4996f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4996f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4996fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4996fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499700: 0xc04a508  jal         func_129420
    ctx->pc = 0x499700u;
    SET_GPR_U32(ctx, 31, 0x499708u);
    ctx->pc = 0x499704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499700u;
            // 0x499704: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499708u; }
        if (ctx->pc != 0x499708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499708u; }
        if (ctx->pc != 0x499708u) { return; }
    }
    ctx->pc = 0x499708u;
label_499708:
    // 0x499708: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x499708u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x49970c: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x49970cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_499710:
    // 0x499710: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x499710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x499714: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x499714u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x499718: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x499718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x49971c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x49971Cu;
    {
        const bool branch_taken_0x49971c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49971Cu;
            // 0x499720: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49971c) {
            ctx->pc = 0x499690u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_499690;
        }
    }
    ctx->pc = 0x499724u;
    // 0x499724: 0x0  nop
    ctx->pc = 0x499724u;
    // NOP
label_499728:
    // 0x499728: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x499728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x49972c: 0x50400076  beql        $v0, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x49972Cu;
    {
        const bool branch_taken_0x49972c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49972c) {
            ctx->pc = 0x499730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49972Cu;
            // 0x499730: 0xaea00024  sw          $zero, 0x24($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x499908u;
            goto label_499908;
        }
    }
    ctx->pc = 0x499734u;
    // 0x499734: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x499734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x499738: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49973c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49973cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499740: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x499740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499744: 0xc040140  jal         func_100500
    ctx->pc = 0x499744u;
    SET_GPR_U32(ctx, 31, 0x49974Cu);
    ctx->pc = 0x499748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499744u;
            // 0x499748: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49974Cu; }
        if (ctx->pc != 0x49974Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49974Cu; }
        if (ctx->pc != 0x49974Cu) { return; }
    }
    ctx->pc = 0x49974Cu;
label_49974c:
    // 0x49974c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49974cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499750: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499754: 0xaeb10024  sw          $s1, 0x24($s5)
    ctx->pc = 0x499754u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 17));
    // 0x499758: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49975c: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x49975cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x499760: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x499760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499764: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x499764u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x499768: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x499768u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x49976c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x49976cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x499770: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x499770u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x499774: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x499774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x499778: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x499778u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49977c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x499780: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499780u;
    SET_GPR_U32(ctx, 31, 0x499788u);
    ctx->pc = 0x499784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499780u;
            // 0x499784: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499788u; }
        if (ctx->pc != 0x499788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499788u; }
        if (ctx->pc != 0x499788u) { return; }
    }
    ctx->pc = 0x499788u;
label_499788:
    // 0x499788: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x499788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x49978c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49978cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499790: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x499790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_499794:
    // 0x499794: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x499794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x499798: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x499798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49979c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x49979cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4997a0: 0xc04a508  jal         func_129420
    ctx->pc = 0x4997A0u;
    SET_GPR_U32(ctx, 31, 0x4997A8u);
    ctx->pc = 0x4997A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4997A0u;
            // 0x4997a4: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4997A8u; }
        if (ctx->pc != 0x4997A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4997A8u; }
        if (ctx->pc != 0x4997A8u) { return; }
    }
    ctx->pc = 0x4997A8u;
label_4997a8:
    // 0x4997a8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4997a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4997ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4997acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4997b0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4997b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4997b4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x4997b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x4997b8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x4997b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4997bc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x4997bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4997c0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x4997c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4997c4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x4997c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x4997c8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x4997C8u;
    {
        const bool branch_taken_0x4997c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4997CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4997C8u;
            // 0x4997cc: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4997c8) {
            ctx->pc = 0x499794u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_499794;
        }
    }
    ctx->pc = 0x4997D0u;
    // 0x4997d0: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x4997d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x4997d4: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x4997D4u;
    {
        const bool branch_taken_0x4997d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4997d4) {
            ctx->pc = 0x4997D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4997D4u;
            // 0x4997d8: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x499878u;
            goto label_499878;
        }
    }
    ctx->pc = 0x4997DCu;
    // 0x4997dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4997dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4997e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4997e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4997e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4997e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4997e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4997e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4997ec: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4997ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4997f0: 0xc0400c4  jal         func_100310
    ctx->pc = 0x4997F0u;
    SET_GPR_U32(ctx, 31, 0x4997F8u);
    ctx->pc = 0x4997F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4997F0u;
            // 0x4997f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4997F8u; }
        if (ctx->pc != 0x4997F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4997F8u; }
        if (ctx->pc != 0x4997F8u) { return; }
    }
    ctx->pc = 0x4997F8u;
label_4997f8:
    // 0x4997f8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4997f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x4997fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4997fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499800: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x499800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499804: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x499804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_499808:
    // 0x499808: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x499808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x49980c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x49980cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x499810: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x499810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x499814: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x499814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499818: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x499818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x49981c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x49981cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x499820: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x499820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x499824: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x499824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x499828: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x499828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x49982c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x49982cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x499830: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x499830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x499834: 0xc04a508  jal         func_129420
    ctx->pc = 0x499834u;
    SET_GPR_U32(ctx, 31, 0x49983Cu);
    ctx->pc = 0x499838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499834u;
            // 0x499838: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49983Cu; }
        if (ctx->pc != 0x49983Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49983Cu; }
        if (ctx->pc != 0x49983Cu) { return; }
    }
    ctx->pc = 0x49983Cu;
label_49983c:
    // 0x49983c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x49983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x499840: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x499840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x499844: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x499844u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x499848: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x499848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x49984c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x49984cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x499850: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x499850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x499854: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x499854u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x499858: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x499858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x49985c: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x49985cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x499860: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x499860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x499864: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x499864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x499868: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x499868u;
    {
        const bool branch_taken_0x499868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49986Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499868u;
            // 0x49986c: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499868) {
            ctx->pc = 0x499808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_499808;
        }
    }
    ctx->pc = 0x499870u;
    // 0x499870: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x499870u;
    {
        const bool branch_taken_0x499870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499870u;
            // 0x499874: 0x2971023  subu        $v0, $s4, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499870) {
            ctx->pc = 0x49990Cu;
            goto label_49990c;
        }
    }
    ctx->pc = 0x499878u;
label_499878:
    // 0x499878: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49987c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x49987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x499880: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499884: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x499884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x499888: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499888u;
    SET_GPR_U32(ctx, 31, 0x499890u);
    ctx->pc = 0x49988Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499888u;
            // 0x49988c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499890u; }
        if (ctx->pc != 0x499890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499890u; }
        if (ctx->pc != 0x499890u) { return; }
    }
    ctx->pc = 0x499890u;
label_499890:
    // 0x499890: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x499890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x499894: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x499894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499898: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x499898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49989c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49989cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4998a0:
    // 0x4998a0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4998a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4998a4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4998a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4998a8: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x4998a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4998ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4998acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4998b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4998b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4998b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4998b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4998b8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x4998b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4998bc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4998bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4998c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4998c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4998c4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4998c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4998c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4998c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4998cc: 0xc04a508  jal         func_129420
    ctx->pc = 0x4998CCu;
    SET_GPR_U32(ctx, 31, 0x4998D4u);
    ctx->pc = 0x4998D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4998CCu;
            // 0x4998d0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4998D4u; }
        if (ctx->pc != 0x4998D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4998D4u; }
        if (ctx->pc != 0x4998D4u) { return; }
    }
    ctx->pc = 0x4998D4u;
label_4998d4:
    // 0x4998d4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4998d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4998d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4998d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4998dc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4998dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4998e0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x4998e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4998e4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4998e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4998e8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x4998e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4998ec: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x4998ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x4998f0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x4998f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4998f4: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x4998f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x4998f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4998f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4998fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4998fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x499900: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x499900u;
    {
        const bool branch_taken_0x499900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499900u;
            // 0x499904: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499900) {
            ctx->pc = 0x4998A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4998a0;
        }
    }
    ctx->pc = 0x499908u;
label_499908:
    // 0x499908: 0x2971023  subu        $v0, $s4, $s7
    ctx->pc = 0x499908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
label_49990c:
    // 0x49990c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x49990cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x499910: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x499910u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x499914: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x499914u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x499918: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x499918u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49991c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x49991cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x499920: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x499920u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x499924: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x499924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x499928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49992c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49992cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499930: 0x3e00008  jr          $ra
    ctx->pc = 0x499930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499930u;
            // 0x499934: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x499938u;
    // 0x499938: 0x0  nop
    ctx->pc = 0x499938u;
    // NOP
    // 0x49993c: 0x0  nop
    ctx->pc = 0x49993cu;
    // NOP
}
