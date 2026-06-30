#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043E590
// Address: 0x43e590 - 0x43e7b0
void sub_0043E590_0x43e590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E590_0x43e590");
#endif

    switch (ctx->pc) {
        case 0x43e5c0u: goto label_43e5c0;
        case 0x43e614u: goto label_43e614;
        case 0x43e698u: goto label_43e698;
        case 0x43e6b8u: goto label_43e6b8;
        case 0x43e6ccu: goto label_43e6cc;
        case 0x43e6d8u: goto label_43e6d8;
        case 0x43e6dcu: goto label_43e6dc;
        case 0x43e700u: goto label_43e700;
        case 0x43e744u: goto label_43e744;
        default: break;
    }

    ctx->pc = 0x43e590u;

    // 0x43e590: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x43e590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x43e594: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x43e594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x43e598: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x43e598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x43e59c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43e59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x43e5a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43e5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x43e5a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x43e5a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e5a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43e5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43e5ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43e5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43e5b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43e5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e5b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x43e5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e5b8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x43E5B8u;
    SET_GPR_U32(ctx, 31, 0x43E5C0u);
    ctx->pc = 0x43E5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E5B8u;
            // 0x43e5bc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E5C0u; }
        if (ctx->pc != 0x43E5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E5C0u; }
        if (ctx->pc != 0x43E5C0u) { return; }
    }
    ctx->pc = 0x43E5C0u;
label_43e5c0:
    // 0x43e5c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x43e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x43e5c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x43e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x43e5c8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x43e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x43e5cc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x43e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x43e5d0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x43e5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x43e5d4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x43e5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x43e5d8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x43e5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x43e5dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43e5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43e5e0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x43e5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x43e5e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x43e5e8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x43e5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x43e5ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x43e5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x43e5f0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x43e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x43e5f4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x43e5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x43e5f8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x43e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x43e5fc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x43e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x43e600: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x43e600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x43e604: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x43e604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x43e608: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x43e608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x43e60c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x43E60Cu;
    SET_GPR_U32(ctx, 31, 0x43E614u);
    ctx->pc = 0x43E610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E60Cu;
            // 0x43e610: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E614u; }
        if (ctx->pc != 0x43E614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E614u; }
        if (ctx->pc != 0x43E614u) { return; }
    }
    ctx->pc = 0x43E614u;
label_43e614:
    // 0x43e614: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43e614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43e618: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x43e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x43e61c: 0x2463d250  addiu       $v1, $v1, -0x2DB0
    ctx->pc = 0x43e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955600));
    // 0x43e620: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x43e620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x43e624: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x43e624u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x43e628: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43e628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x43e62c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43e630: 0xac440d00  sw          $a0, 0xD00($v0)
    ctx->pc = 0x43e630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3328), GPR_U32(ctx, 4));
    // 0x43e634: 0x2463d260  addiu       $v1, $v1, -0x2DA0
    ctx->pc = 0x43e634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955616));
    // 0x43e638: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43e638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43e63c: 0x2442d298  addiu       $v0, $v0, -0x2D68
    ctx->pc = 0x43e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955672));
    // 0x43e640: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x43e640u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x43e644: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x43e644u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x43e648: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x43e648u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x43e64c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x43e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x43e650: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x43e650u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x43e654: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x43e654u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x43e658: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x43e658u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x43e65c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x43e65cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x43e660: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x43e660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x43e664: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x43e664u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x43e668: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x43e668u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x43e66c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x43e66cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x43e670: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x43e670u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x43e674: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x43E674u;
    {
        const bool branch_taken_0x43e674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43e674) {
            ctx->pc = 0x43E710u;
            goto label_43e710;
        }
    }
    ctx->pc = 0x43E67Cu;
    // 0x43e67c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x43e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x43e680: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x43e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x43e684: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x43e684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x43e688: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x43e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x43e68c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x43e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x43e690: 0xc040138  jal         func_1004E0
    ctx->pc = 0x43E690u;
    SET_GPR_U32(ctx, 31, 0x43E698u);
    ctx->pc = 0x43E694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E690u;
            // 0x43e694: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E698u; }
        if (ctx->pc != 0x43E698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E698u; }
        if (ctx->pc != 0x43E698u) { return; }
    }
    ctx->pc = 0x43E698u;
label_43e698:
    // 0x43e698: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x43e698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x43e69c: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x43e69cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
    // 0x43e6a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43e6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e6a4: 0x24a5e730  addiu       $a1, $a1, -0x18D0
    ctx->pc = 0x43e6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960944));
    // 0x43e6a8: 0x24c6de90  addiu       $a2, $a2, -0x2170
    ctx->pc = 0x43e6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958736));
    // 0x43e6ac: 0x24070130  addiu       $a3, $zero, 0x130
    ctx->pc = 0x43e6acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x43e6b0: 0xc040840  jal         func_102100
    ctx->pc = 0x43E6B0u;
    SET_GPR_U32(ctx, 31, 0x43E6B8u);
    ctx->pc = 0x43E6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E6B0u;
            // 0x43e6b4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E6B8u; }
        if (ctx->pc != 0x43E6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E6B8u; }
        if (ctx->pc != 0x43E6B8u) { return; }
    }
    ctx->pc = 0x43E6B8u;
label_43e6b8:
    // 0x43e6b8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x43e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x43e6bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x43e6bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e6c0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x43e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x43e6c4: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x43E6C4u;
    SET_GPR_U32(ctx, 31, 0x43E6CCu);
    ctx->pc = 0x43E6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E6C4u;
            // 0x43e6c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E6CCu; }
        if (ctx->pc != 0x43E6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E6CCu; }
        if (ctx->pc != 0x43E6CCu) { return; }
    }
    ctx->pc = 0x43E6CCu;
label_43e6cc:
    // 0x43e6cc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x43e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x43e6d0: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x43E6D0u;
    SET_GPR_U32(ctx, 31, 0x43E6D8u);
    ctx->pc = 0x43E6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E6D0u;
            // 0x43e6d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E6D8u; }
        if (ctx->pc != 0x43E6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E6D8u; }
        if (ctx->pc != 0x43E6D8u) { return; }
    }
    ctx->pc = 0x43E6D8u;
label_43e6d8:
    // 0x43e6d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x43e6d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43e6dc:
    // 0x43e6dc: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x43e6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x43e6e0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x43e6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x43e6e4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x43e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x43e6e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43e6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43e6ec: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x43e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x43e6f0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x43e6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x43e6f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43e6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x43e6f8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x43E6F8u;
    SET_GPR_U32(ctx, 31, 0x43E700u);
    ctx->pc = 0x43E6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E6F8u;
            // 0x43e6fc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E700u; }
        if (ctx->pc != 0x43E700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E700u; }
        if (ctx->pc != 0x43E700u) { return; }
    }
    ctx->pc = 0x43E700u;
label_43e700:
    // 0x43e700: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x43e700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x43e704: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x43e704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x43e708: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x43E708u;
    {
        const bool branch_taken_0x43e708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43E70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E708u;
            // 0x43e70c: 0x26520130  addiu       $s2, $s2, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e708) {
            ctx->pc = 0x43E6DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43e6dc;
        }
    }
    ctx->pc = 0x43E710u;
label_43e710:
    // 0x43e710: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x43e710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e714: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x43e714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43e718: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43e718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43e71c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43e71cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43e720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43e720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43e724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43e724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43e728: 0x3e00008  jr          $ra
    ctx->pc = 0x43E728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E728u;
            // 0x43e72c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43E730u;
    // 0x43e730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43e730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43e734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43e734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43e738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43e738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43e73c: 0xc0b1370  jal         func_2C4DC0
    ctx->pc = 0x43E73Cu;
    SET_GPR_U32(ctx, 31, 0x43E744u);
    ctx->pc = 0x43E740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E73Cu;
            // 0x43e740: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E744u; }
        if (ctx->pc != 0x43E744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E744u; }
        if (ctx->pc != 0x43E744u) { return; }
    }
    ctx->pc = 0x43E744u;
label_43e744:
    // 0x43e744: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43e744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43e748: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43e748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43e74c: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x43e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
    // 0x43e750: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x43e750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x43e754: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43e754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x43e758: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x43e758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
    // 0x43e75c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x43e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x43e760: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x43e760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x43e764: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x43e764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x43e768: 0x24a5d1a0  addiu       $a1, $a1, -0x2E60
    ctx->pc = 0x43e768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955424));
    // 0x43e76c: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x43e76cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
    // 0x43e770: 0x2484d1e0  addiu       $a0, $a0, -0x2E20
    ctx->pc = 0x43e770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955488));
    // 0x43e774: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x43e774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x43e778: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43e778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43e77c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x43e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x43e780: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43e780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e784: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x43e784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x43e788: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x43e788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x43e78c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x43e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x43e790: 0xa20300d5  sb          $v1, 0xD5($s0)
    ctx->pc = 0x43e790u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 3));
    // 0x43e794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43e794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43e798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43e798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43e79c: 0x3e00008  jr          $ra
    ctx->pc = 0x43E79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E79Cu;
            // 0x43e7a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43E7A4u;
    // 0x43e7a4: 0x0  nop
    ctx->pc = 0x43e7a4u;
    // NOP
    // 0x43e7a8: 0x0  nop
    ctx->pc = 0x43e7a8u;
    // NOP
    // 0x43e7ac: 0x0  nop
    ctx->pc = 0x43e7acu;
    // NOP
}
