#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039A5D0
// Address: 0x39a5d0 - 0x39a760
void sub_0039A5D0_0x39a5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A5D0_0x39a5d0");
#endif

    switch (ctx->pc) {
        case 0x39a5ecu: goto label_39a5ec;
        case 0x39a60cu: goto label_39a60c;
        case 0x39a650u: goto label_39a650;
        case 0x39a66cu: goto label_39a66c;
        case 0x39a690u: goto label_39a690;
        case 0x39a6f0u: goto label_39a6f0;
        case 0x39a6fcu: goto label_39a6fc;
        case 0x39a708u: goto label_39a708;
        case 0x39a714u: goto label_39a714;
        case 0x39a720u: goto label_39a720;
        case 0x39a72cu: goto label_39a72c;
        case 0x39a744u: goto label_39a744;
        default: break;
    }

    ctx->pc = 0x39a5d0u;

    // 0x39a5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39a5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39a5d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x39a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x39a5d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39a5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39a5dc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x39a5dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x39a5e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39a5e4: 0xc0e6a10  jal         func_39A840
    ctx->pc = 0x39A5E4u;
    SET_GPR_U32(ctx, 31, 0x39A5ECu);
    ctx->pc = 0x39A5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A5E4u;
            // 0x39a5e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39A840u;
    if (runtime->hasFunction(0x39A840u)) {
        auto targetFn = runtime->lookupFunction(0x39A840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A5ECu; }
        if (ctx->pc != 0x39A5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039A840_0x39a840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A5ECu; }
        if (ctx->pc != 0x39A5ECu) { return; }
    }
    ctx->pc = 0x39A5ECu;
label_39a5ec:
    // 0x39a5ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x39a5f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x39a5f4: 0x24638370  addiu       $v1, $v1, -0x7C90
    ctx->pc = 0x39a5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935408));
    // 0x39a5f8: 0x244283a8  addiu       $v0, $v0, -0x7C58
    ctx->pc = 0x39a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935464));
    // 0x39a5fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x39a600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39a600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a604: 0xc0e6a0c  jal         func_39A830
    ctx->pc = 0x39A604u;
    SET_GPR_U32(ctx, 31, 0x39A60Cu);
    ctx->pc = 0x39A608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A604u;
            // 0x39a608: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39A830u;
    if (runtime->hasFunction(0x39A830u)) {
        auto targetFn = runtime->lookupFunction(0x39A830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A60Cu; }
        if (ctx->pc != 0x39A60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039A830_0x39a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A60Cu; }
        if (ctx->pc != 0x39A60Cu) { return; }
    }
    ctx->pc = 0x39A60Cu;
label_39a60c:
    // 0x39a60c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x39a60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x39a610: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x39a610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x39a614: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39a614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x39a618: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x39a618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x39a61c: 0x244282c0  addiu       $v0, $v0, -0x7D40
    ctx->pc = 0x39a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935232));
    // 0x39a620: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x39a620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x39a624: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x39a624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x39a628: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39a628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x39a62c: 0x244282f8  addiu       $v0, $v0, -0x7D08
    ctx->pc = 0x39a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935288));
    // 0x39a630: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x39a630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x39a634: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39a634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x39a638: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x39a638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x39a63c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x39a63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x39a640: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x39a640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x39a644: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x39a644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x39a648: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x39A648u;
    SET_GPR_U32(ctx, 31, 0x39A650u);
    ctx->pc = 0x39A64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A648u;
            // 0x39a64c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A650u; }
        if (ctx->pc != 0x39A650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A650u; }
        if (ctx->pc != 0x39A650u) { return; }
    }
    ctx->pc = 0x39A650u;
label_39a650:
    // 0x39a650: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x39a650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x39a654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39a654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a658: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39A658u;
    {
        const bool branch_taken_0x39a658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A658u;
            // 0x39a65c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a658) {
            ctx->pc = 0x39A670u;
            goto label_39a670;
        }
    }
    ctx->pc = 0x39A660u;
    // 0x39a660: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39a660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x39a664: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x39A664u;
    SET_GPR_U32(ctx, 31, 0x39A66Cu);
    ctx->pc = 0x39A668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A664u;
            // 0x39a668: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A66Cu; }
        if (ctx->pc != 0x39A66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A66Cu; }
        if (ctx->pc != 0x39A66Cu) { return; }
    }
    ctx->pc = 0x39A66Cu;
label_39a66c:
    // 0x39a66c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39a66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39a670:
    // 0x39a670: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x39a670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x39a674: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39a674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a678: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39a678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a67c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a67cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a680: 0x3e00008  jr          $ra
    ctx->pc = 0x39A680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A680u;
            // 0x39a684: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39A688u;
    // 0x39a688: 0x0  nop
    ctx->pc = 0x39a688u;
    // NOP
    // 0x39a68c: 0x0  nop
    ctx->pc = 0x39a68cu;
    // NOP
label_39a690:
    // 0x39a690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39a690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39a694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39a694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39a698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39a698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39a69c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39a6a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39a6a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a6a4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x39A6A4u;
    {
        const bool branch_taken_0x39a6a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A6A4u;
            // 0x39a6a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a6a4) {
            ctx->pc = 0x39A744u;
            goto label_39a744;
        }
    }
    ctx->pc = 0x39A6ACu;
    // 0x39a6ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x39a6b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x39a6b4: 0x24638370  addiu       $v1, $v1, -0x7C90
    ctx->pc = 0x39a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935408));
    // 0x39a6b8: 0x244283a8  addiu       $v0, $v0, -0x7C58
    ctx->pc = 0x39a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935464));
    // 0x39a6bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39a6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x39a6c0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x39A6C0u;
    {
        const bool branch_taken_0x39a6c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A6C0u;
            // 0x39a6c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a6c0) {
            ctx->pc = 0x39A72Cu;
            goto label_39a72c;
        }
    }
    ctx->pc = 0x39A6C8u;
    // 0x39a6c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x39a6cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x39a6d0: 0x24638320  addiu       $v1, $v1, -0x7CE0
    ctx->pc = 0x39a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935328));
    // 0x39a6d4: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39a6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39a6d8: 0x24428358  addiu       $v0, $v0, -0x7CA8
    ctx->pc = 0x39a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935384));
    // 0x39a6dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x39a6e0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x39a6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x39a6e4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x39a6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x39a6e8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x39A6E8u;
    SET_GPR_U32(ctx, 31, 0x39A6F0u);
    ctx->pc = 0x39A6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A6E8u;
            // 0x39a6ec: 0x24a5a250  addiu       $a1, $a1, -0x5DB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A6F0u; }
        if (ctx->pc != 0x39A6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A6F0u; }
        if (ctx->pc != 0x39A6F0u) { return; }
    }
    ctx->pc = 0x39A6F0u;
label_39a6f0:
    // 0x39a6f0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x39a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x39a6f4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x39A6F4u;
    SET_GPR_U32(ctx, 31, 0x39A6FCu);
    ctx->pc = 0x39A6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A6F4u;
            // 0x39a6f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A6FCu; }
        if (ctx->pc != 0x39A6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A6FCu; }
        if (ctx->pc != 0x39A6FCu) { return; }
    }
    ctx->pc = 0x39A6FCu;
label_39a6fc:
    // 0x39a6fc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x39a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x39a700: 0xc0e69f0  jal         func_39A7C0
    ctx->pc = 0x39A700u;
    SET_GPR_U32(ctx, 31, 0x39A708u);
    ctx->pc = 0x39A704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A700u;
            // 0x39a704: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39A7C0u;
    if (runtime->hasFunction(0x39A7C0u)) {
        auto targetFn = runtime->lookupFunction(0x39A7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A708u; }
        if (ctx->pc != 0x39A708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039A7C0_0x39a7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A708u; }
        if (ctx->pc != 0x39A708u) { return; }
    }
    ctx->pc = 0x39A708u;
label_39a708:
    // 0x39a708: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x39a708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x39a70c: 0xc0e69f0  jal         func_39A7C0
    ctx->pc = 0x39A70Cu;
    SET_GPR_U32(ctx, 31, 0x39A714u);
    ctx->pc = 0x39A710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A70Cu;
            // 0x39a710: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39A7C0u;
    if (runtime->hasFunction(0x39A7C0u)) {
        auto targetFn = runtime->lookupFunction(0x39A7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A714u; }
        if (ctx->pc != 0x39A714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039A7C0_0x39a7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A714u; }
        if (ctx->pc != 0x39A714u) { return; }
    }
    ctx->pc = 0x39A714u;
label_39a714:
    // 0x39a714: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x39a714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x39a718: 0xc0e69d8  jal         func_39A760
    ctx->pc = 0x39A718u;
    SET_GPR_U32(ctx, 31, 0x39A720u);
    ctx->pc = 0x39A71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A718u;
            // 0x39a71c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39A760u;
    if (runtime->hasFunction(0x39A760u)) {
        auto targetFn = runtime->lookupFunction(0x39A760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A720u; }
        if (ctx->pc != 0x39A720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039A760_0x39a760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A720u; }
        if (ctx->pc != 0x39A720u) { return; }
    }
    ctx->pc = 0x39A720u;
label_39a720:
    // 0x39a720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39a720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a724: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x39A724u;
    SET_GPR_U32(ctx, 31, 0x39A72Cu);
    ctx->pc = 0x39A728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A724u;
            // 0x39a728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A72Cu; }
        if (ctx->pc != 0x39A72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A72Cu; }
        if (ctx->pc != 0x39A72Cu) { return; }
    }
    ctx->pc = 0x39A72Cu;
label_39a72c:
    // 0x39a72c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x39a72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x39a730: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x39a730u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x39a734: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A734u;
    {
        const bool branch_taken_0x39a734 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x39a734) {
            ctx->pc = 0x39A738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A734u;
            // 0x39a738: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A748u;
            goto label_39a748;
        }
    }
    ctx->pc = 0x39A73Cu;
    // 0x39a73c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x39A73Cu;
    SET_GPR_U32(ctx, 31, 0x39A744u);
    ctx->pc = 0x39A740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A73Cu;
            // 0x39a740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A744u; }
        if (ctx->pc != 0x39A744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A744u; }
        if (ctx->pc != 0x39A744u) { return; }
    }
    ctx->pc = 0x39A744u;
label_39a744:
    // 0x39a744: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39a744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a748:
    // 0x39a748: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39a748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39a74c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39a74cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a754: 0x3e00008  jr          $ra
    ctx->pc = 0x39A754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A754u;
            // 0x39a758: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39A75Cu;
    // 0x39a75c: 0x0  nop
    ctx->pc = 0x39a75cu;
    // NOP
}
