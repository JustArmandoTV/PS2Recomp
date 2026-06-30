#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00520410
// Address: 0x520410 - 0x5205a0
void sub_00520410_0x520410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00520410_0x520410");
#endif

    switch (ctx->pc) {
        case 0x52042cu: goto label_52042c;
        case 0x52044cu: goto label_52044c;
        case 0x520490u: goto label_520490;
        case 0x5204b4u: goto label_5204b4;
        case 0x5204d0u: goto label_5204d0;
        case 0x520530u: goto label_520530;
        case 0x52053cu: goto label_52053c;
        case 0x520548u: goto label_520548;
        case 0x520554u: goto label_520554;
        case 0x520560u: goto label_520560;
        case 0x52056cu: goto label_52056c;
        case 0x520584u: goto label_520584;
        default: break;
    }

    ctx->pc = 0x520410u;

    // 0x520410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x520410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x520414: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x520414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x520418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x520418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x52041c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x52041cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x520420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x520420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x520424: 0xc1481a0  jal         func_520680
    ctx->pc = 0x520424u;
    SET_GPR_U32(ctx, 31, 0x52042Cu);
    ctx->pc = 0x520428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520424u;
            // 0x520428: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x520680u;
    if (runtime->hasFunction(0x520680u)) {
        auto targetFn = runtime->lookupFunction(0x520680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52042Cu; }
        if (ctx->pc != 0x52042Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00520680_0x520680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52042Cu; }
        if (ctx->pc != 0x52042Cu) { return; }
    }
    ctx->pc = 0x52042Cu;
label_52042c:
    // 0x52042c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52042cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x520430: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x520430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x520434: 0x24635cc0  addiu       $v1, $v1, 0x5CC0
    ctx->pc = 0x520434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23744));
    // 0x520438: 0x24425cf8  addiu       $v0, $v0, 0x5CF8
    ctx->pc = 0x520438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23800));
    // 0x52043c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52043cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x520440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x520440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x520444: 0xc14819c  jal         func_520670
    ctx->pc = 0x520444u;
    SET_GPR_U32(ctx, 31, 0x52044Cu);
    ctx->pc = 0x520448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520444u;
            // 0x520448: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x520670u;
    if (runtime->hasFunction(0x520670u)) {
        auto targetFn = runtime->lookupFunction(0x520670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52044Cu; }
        if (ctx->pc != 0x52044Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00520670_0x520670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52044Cu; }
        if (ctx->pc != 0x52044Cu) { return; }
    }
    ctx->pc = 0x52044Cu;
label_52044c:
    // 0x52044c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x52044cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x520450: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x520450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x520454: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x520454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x520458: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x520458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x52045c: 0x24425b60  addiu       $v0, $v0, 0x5B60
    ctx->pc = 0x52045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23392));
    // 0x520460: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x520460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x520464: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x520464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x520468: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x520468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52046c: 0x24425b98  addiu       $v0, $v0, 0x5B98
    ctx->pc = 0x52046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23448));
    // 0x520470: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x520470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x520474: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x520474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x520478: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x520478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x52047c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x52047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x520480: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x520480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x520484: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x520484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x520488: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x520488u;
    SET_GPR_U32(ctx, 31, 0x520490u);
    ctx->pc = 0x52048Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520488u;
            // 0x52048c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520490u; }
        if (ctx->pc != 0x520490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520490u; }
        if (ctx->pc != 0x520490u) { return; }
    }
    ctx->pc = 0x520490u;
label_520490:
    // 0x520490: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x520490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x520494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x520494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x520498: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x520498u;
    {
        const bool branch_taken_0x520498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x52049Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520498u;
            // 0x52049c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520498) {
            ctx->pc = 0x5204B8u;
            goto label_5204b8;
        }
    }
    ctx->pc = 0x5204A0u;
    // 0x5204a0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x5204a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x5204a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x5204a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x5204a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5204a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5204ac: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x5204ACu;
    SET_GPR_U32(ctx, 31, 0x5204B4u);
    ctx->pc = 0x5204B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5204ACu;
            // 0x5204b0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5204B4u; }
        if (ctx->pc != 0x5204B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5204B4u; }
        if (ctx->pc != 0x5204B4u) { return; }
    }
    ctx->pc = 0x5204B4u;
label_5204b4:
    // 0x5204b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x5204b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5204b8:
    // 0x5204b8: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x5204b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x5204bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5204bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5204c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5204c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5204c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5204c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5204c8: 0x3e00008  jr          $ra
    ctx->pc = 0x5204C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5204CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5204C8u;
            // 0x5204cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5204D0u;
label_5204d0:
    // 0x5204d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5204d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5204d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5204d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x5204d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5204d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x5204dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5204dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5204e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5204e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5204e4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x5204E4u;
    {
        const bool branch_taken_0x5204e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5204E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5204E4u;
            // 0x5204e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5204e4) {
            ctx->pc = 0x520584u;
            goto label_520584;
        }
    }
    ctx->pc = 0x5204ECu;
    // 0x5204ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5204ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x5204f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5204f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5204f4: 0x24635cc0  addiu       $v1, $v1, 0x5CC0
    ctx->pc = 0x5204f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23744));
    // 0x5204f8: 0x24425cf8  addiu       $v0, $v0, 0x5CF8
    ctx->pc = 0x5204f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23800));
    // 0x5204fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5204fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x520500: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x520500u;
    {
        const bool branch_taken_0x520500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x520504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520500u;
            // 0x520504: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520500) {
            ctx->pc = 0x52056Cu;
            goto label_52056c;
        }
    }
    ctx->pc = 0x520508u;
    // 0x520508: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x520508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x52050c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52050cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x520510: 0x24635c70  addiu       $v1, $v1, 0x5C70
    ctx->pc = 0x520510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23664));
    // 0x520514: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x520514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
    // 0x520518: 0x24425ca8  addiu       $v0, $v0, 0x5CA8
    ctx->pc = 0x520518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23720));
    // 0x52051c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52051cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x520520: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x520520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x520524: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x520524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x520528: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x520528u;
    SET_GPR_U32(ctx, 31, 0x520530u);
    ctx->pc = 0x52052Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520528u;
            // 0x52052c: 0x24a5ff40  addiu       $a1, $a1, -0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520530u; }
        if (ctx->pc != 0x520530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520530u; }
        if (ctx->pc != 0x520530u) { return; }
    }
    ctx->pc = 0x520530u;
label_520530:
    // 0x520530: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x520530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x520534: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x520534u;
    SET_GPR_U32(ctx, 31, 0x52053Cu);
    ctx->pc = 0x520538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520534u;
            // 0x520538: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52053Cu; }
        if (ctx->pc != 0x52053Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52053Cu; }
        if (ctx->pc != 0x52053Cu) { return; }
    }
    ctx->pc = 0x52053Cu;
label_52053c:
    // 0x52053c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x52053cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x520540: 0xc148180  jal         func_520600
    ctx->pc = 0x520540u;
    SET_GPR_U32(ctx, 31, 0x520548u);
    ctx->pc = 0x520544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520540u;
            // 0x520544: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x520600u;
    if (runtime->hasFunction(0x520600u)) {
        auto targetFn = runtime->lookupFunction(0x520600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520548u; }
        if (ctx->pc != 0x520548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00520600_0x520600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520548u; }
        if (ctx->pc != 0x520548u) { return; }
    }
    ctx->pc = 0x520548u;
label_520548:
    // 0x520548: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x520548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x52054c: 0xc148180  jal         func_520600
    ctx->pc = 0x52054Cu;
    SET_GPR_U32(ctx, 31, 0x520554u);
    ctx->pc = 0x520550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52054Cu;
            // 0x520550: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x520600u;
    if (runtime->hasFunction(0x520600u)) {
        auto targetFn = runtime->lookupFunction(0x520600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520554u; }
        if (ctx->pc != 0x520554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00520600_0x520600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520554u; }
        if (ctx->pc != 0x520554u) { return; }
    }
    ctx->pc = 0x520554u;
label_520554:
    // 0x520554: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x520554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x520558: 0xc148168  jal         func_5205A0
    ctx->pc = 0x520558u;
    SET_GPR_U32(ctx, 31, 0x520560u);
    ctx->pc = 0x52055Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520558u;
            // 0x52055c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5205A0u;
    if (runtime->hasFunction(0x5205A0u)) {
        auto targetFn = runtime->lookupFunction(0x5205A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520560u; }
        if (ctx->pc != 0x520560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005205A0_0x5205a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520560u; }
        if (ctx->pc != 0x520560u) { return; }
    }
    ctx->pc = 0x520560u;
label_520560:
    // 0x520560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x520560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x520564: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x520564u;
    SET_GPR_U32(ctx, 31, 0x52056Cu);
    ctx->pc = 0x520568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520564u;
            // 0x520568: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52056Cu; }
        if (ctx->pc != 0x52056Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52056Cu; }
        if (ctx->pc != 0x52056Cu) { return; }
    }
    ctx->pc = 0x52056Cu;
label_52056c:
    // 0x52056c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x52056cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x520570: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x520570u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x520574: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x520574u;
    {
        const bool branch_taken_0x520574 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x520574) {
            ctx->pc = 0x520578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520574u;
            // 0x520578: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520588u;
            goto label_520588;
        }
    }
    ctx->pc = 0x52057Cu;
    // 0x52057c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x52057Cu;
    SET_GPR_U32(ctx, 31, 0x520584u);
    ctx->pc = 0x520580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52057Cu;
            // 0x520580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520584u; }
        if (ctx->pc != 0x520584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520584u; }
        if (ctx->pc != 0x520584u) { return; }
    }
    ctx->pc = 0x520584u;
label_520584:
    // 0x520584: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x520584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_520588:
    // 0x520588: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x520588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x52058c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52058cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x520590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x520590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x520594: 0x3e00008  jr          $ra
    ctx->pc = 0x520594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x520598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520594u;
            // 0x520598: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52059Cu;
    // 0x52059c: 0x0  nop
    ctx->pc = 0x52059cu;
    // NOP
}
