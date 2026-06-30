#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004842B0
// Address: 0x4842b0 - 0x484440
void sub_004842B0_0x4842b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004842B0_0x4842b0");
#endif

    switch (ctx->pc) {
        case 0x4842ccu: goto label_4842cc;
        case 0x4842ecu: goto label_4842ec;
        case 0x484334u: goto label_484334;
        case 0x484350u: goto label_484350;
        case 0x484370u: goto label_484370;
        case 0x4843d0u: goto label_4843d0;
        case 0x4843dcu: goto label_4843dc;
        case 0x4843e8u: goto label_4843e8;
        case 0x4843f4u: goto label_4843f4;
        case 0x484400u: goto label_484400;
        case 0x48440cu: goto label_48440c;
        case 0x484424u: goto label_484424;
        default: break;
    }

    ctx->pc = 0x4842b0u;

    // 0x4842b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4842b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4842b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4842b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4842b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4842b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4842bc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4842bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4842c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4842c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4842c4: 0xc121148  jal         func_484520
    ctx->pc = 0x4842C4u;
    SET_GPR_U32(ctx, 31, 0x4842CCu);
    ctx->pc = 0x4842C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4842C4u;
            // 0x4842c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x484520u;
    if (runtime->hasFunction(0x484520u)) {
        auto targetFn = runtime->lookupFunction(0x484520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4842CCu; }
        if (ctx->pc != 0x4842CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00484520_0x484520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4842CCu; }
        if (ctx->pc != 0x4842CCu) { return; }
    }
    ctx->pc = 0x4842CCu;
label_4842cc:
    // 0x4842cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4842ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4842d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4842d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4842d4: 0x2463f2f0  addiu       $v1, $v1, -0xD10
    ctx->pc = 0x4842d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
    // 0x4842d8: 0x2442f328  addiu       $v0, $v0, -0xCD8
    ctx->pc = 0x4842d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964008));
    // 0x4842dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4842dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4842e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4842e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4842e4: 0xc121144  jal         func_484510
    ctx->pc = 0x4842E4u;
    SET_GPR_U32(ctx, 31, 0x4842ECu);
    ctx->pc = 0x4842E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4842E4u;
            // 0x4842e8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x484510u;
    if (runtime->hasFunction(0x484510u)) {
        auto targetFn = runtime->lookupFunction(0x484510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4842ECu; }
        if (ctx->pc != 0x4842ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00484510_0x484510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4842ECu; }
        if (ctx->pc != 0x4842ECu) { return; }
    }
    ctx->pc = 0x4842ECu;
label_4842ec:
    // 0x4842ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4842ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4842f0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x4842f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x4842f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4842f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4842f8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4842f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4842fc: 0x2442f240  addiu       $v0, $v0, -0xDC0
    ctx->pc = 0x4842fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
    // 0x484300: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x484300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x484304: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x484304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x484308: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x484308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x48430c: 0x2442f278  addiu       $v0, $v0, -0xD88
    ctx->pc = 0x48430cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963832));
    // 0x484310: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x484310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x484314: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x484314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x484318: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x484318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x48431c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x48431cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x484320: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x484320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x484324: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x484324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x484328: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x484328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x48432c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x48432Cu;
    SET_GPR_U32(ctx, 31, 0x484334u);
    ctx->pc = 0x484330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48432Cu;
            // 0x484330: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484334u; }
        if (ctx->pc != 0x484334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484334u; }
        if (ctx->pc != 0x484334u) { return; }
    }
    ctx->pc = 0x484334u;
label_484334:
    // 0x484334: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x484334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x484338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x484338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48433c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48433Cu;
    {
        const bool branch_taken_0x48433c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x484340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48433Cu;
            // 0x484340: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48433c) {
            ctx->pc = 0x484354u;
            goto label_484354;
        }
    }
    ctx->pc = 0x484344u;
    // 0x484344: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x484344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x484348: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x484348u;
    SET_GPR_U32(ctx, 31, 0x484350u);
    ctx->pc = 0x48434Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484348u;
            // 0x48434c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484350u; }
        if (ctx->pc != 0x484350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484350u; }
        if (ctx->pc != 0x484350u) { return; }
    }
    ctx->pc = 0x484350u;
label_484350:
    // 0x484350: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x484350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484354:
    // 0x484354: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x484354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x484358: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x484358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48435c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48435cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x484360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x484364: 0x3e00008  jr          $ra
    ctx->pc = 0x484364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484364u;
            // 0x484368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48436Cu;
    // 0x48436c: 0x0  nop
    ctx->pc = 0x48436cu;
    // NOP
label_484370:
    // 0x484370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x484370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x484374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x484374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x484378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x484378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48437c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48437cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x484380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x484380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484384: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x484384u;
    {
        const bool branch_taken_0x484384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x484388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484384u;
            // 0x484388: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484384) {
            ctx->pc = 0x484424u;
            goto label_484424;
        }
    }
    ctx->pc = 0x48438Cu;
    // 0x48438c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x48438cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x484390: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x484390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x484394: 0x2463f2f0  addiu       $v1, $v1, -0xD10
    ctx->pc = 0x484394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
    // 0x484398: 0x2442f328  addiu       $v0, $v0, -0xCD8
    ctx->pc = 0x484398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964008));
    // 0x48439c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x48439cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4843a0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4843A0u;
    {
        const bool branch_taken_0x4843a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4843A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4843A0u;
            // 0x4843a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4843a0) {
            ctx->pc = 0x48440Cu;
            goto label_48440c;
        }
    }
    ctx->pc = 0x4843A8u;
    // 0x4843a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4843a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4843ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4843acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4843b0: 0x2463f2a0  addiu       $v1, $v1, -0xD60
    ctx->pc = 0x4843b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963872));
    // 0x4843b4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x4843b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x4843b8: 0x2442f2d8  addiu       $v0, $v0, -0xD28
    ctx->pc = 0x4843b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963928));
    // 0x4843bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4843bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4843c0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4843c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4843c4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4843c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4843c8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4843C8u;
    SET_GPR_U32(ctx, 31, 0x4843D0u);
    ctx->pc = 0x4843CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4843C8u;
            // 0x4843cc: 0x24a53cf0  addiu       $a1, $a1, 0x3CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4843D0u; }
        if (ctx->pc != 0x4843D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4843D0u; }
        if (ctx->pc != 0x4843D0u) { return; }
    }
    ctx->pc = 0x4843D0u;
label_4843d0:
    // 0x4843d0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4843d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4843d4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4843D4u;
    SET_GPR_U32(ctx, 31, 0x4843DCu);
    ctx->pc = 0x4843D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4843D4u;
            // 0x4843d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4843DCu; }
        if (ctx->pc != 0x4843DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4843DCu; }
        if (ctx->pc != 0x4843DCu) { return; }
    }
    ctx->pc = 0x4843DCu;
label_4843dc:
    // 0x4843dc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4843dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4843e0: 0xc121128  jal         func_4844A0
    ctx->pc = 0x4843E0u;
    SET_GPR_U32(ctx, 31, 0x4843E8u);
    ctx->pc = 0x4843E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4843E0u;
            // 0x4843e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4844A0u;
    if (runtime->hasFunction(0x4844A0u)) {
        auto targetFn = runtime->lookupFunction(0x4844A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4843E8u; }
        if (ctx->pc != 0x4843E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004844A0_0x4844a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4843E8u; }
        if (ctx->pc != 0x4843E8u) { return; }
    }
    ctx->pc = 0x4843E8u;
label_4843e8:
    // 0x4843e8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4843e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4843ec: 0xc121128  jal         func_4844A0
    ctx->pc = 0x4843ECu;
    SET_GPR_U32(ctx, 31, 0x4843F4u);
    ctx->pc = 0x4843F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4843ECu;
            // 0x4843f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4844A0u;
    if (runtime->hasFunction(0x4844A0u)) {
        auto targetFn = runtime->lookupFunction(0x4844A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4843F4u; }
        if (ctx->pc != 0x4843F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004844A0_0x4844a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4843F4u; }
        if (ctx->pc != 0x4843F4u) { return; }
    }
    ctx->pc = 0x4843F4u;
label_4843f4:
    // 0x4843f4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4843f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4843f8: 0xc121110  jal         func_484440
    ctx->pc = 0x4843F8u;
    SET_GPR_U32(ctx, 31, 0x484400u);
    ctx->pc = 0x4843FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4843F8u;
            // 0x4843fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x484440u;
    if (runtime->hasFunction(0x484440u)) {
        auto targetFn = runtime->lookupFunction(0x484440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484400u; }
        if (ctx->pc != 0x484400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00484440_0x484440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484400u; }
        if (ctx->pc != 0x484400u) { return; }
    }
    ctx->pc = 0x484400u;
label_484400:
    // 0x484400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x484400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484404: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x484404u;
    SET_GPR_U32(ctx, 31, 0x48440Cu);
    ctx->pc = 0x484408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484404u;
            // 0x484408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48440Cu; }
        if (ctx->pc != 0x48440Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48440Cu; }
        if (ctx->pc != 0x48440Cu) { return; }
    }
    ctx->pc = 0x48440Cu;
label_48440c:
    // 0x48440c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x48440cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x484410: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x484410u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x484414: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x484414u;
    {
        const bool branch_taken_0x484414 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x484414) {
            ctx->pc = 0x484418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x484414u;
            // 0x484418: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x484428u;
            goto label_484428;
        }
    }
    ctx->pc = 0x48441Cu;
    // 0x48441c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x48441Cu;
    SET_GPR_U32(ctx, 31, 0x484424u);
    ctx->pc = 0x484420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48441Cu;
            // 0x484420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484424u; }
        if (ctx->pc != 0x484424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484424u; }
        if (ctx->pc != 0x484424u) { return; }
    }
    ctx->pc = 0x484424u;
label_484424:
    // 0x484424: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x484424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484428:
    // 0x484428: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x484428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48442c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48442cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x484430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x484434: 0x3e00008  jr          $ra
    ctx->pc = 0x484434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484434u;
            // 0x484438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48443Cu;
    // 0x48443c: 0x0  nop
    ctx->pc = 0x48443cu;
    // NOP
}
