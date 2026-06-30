#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E40A0
// Address: 0x4e40a0 - 0x4e4230
void sub_004E40A0_0x4e40a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E40A0_0x4e40a0");
#endif

    switch (ctx->pc) {
        case 0x4e40bcu: goto label_4e40bc;
        case 0x4e40dcu: goto label_4e40dc;
        case 0x4e4128u: goto label_4e4128;
        case 0x4e4144u: goto label_4e4144;
        case 0x4e4160u: goto label_4e4160;
        case 0x4e41c0u: goto label_4e41c0;
        case 0x4e41ccu: goto label_4e41cc;
        case 0x4e41d8u: goto label_4e41d8;
        case 0x4e41e4u: goto label_4e41e4;
        case 0x4e41f0u: goto label_4e41f0;
        case 0x4e41fcu: goto label_4e41fc;
        case 0x4e4214u: goto label_4e4214;
        default: break;
    }

    ctx->pc = 0x4e40a0u;

    // 0x4e40a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e40a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e40a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4e40a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4e40a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e40a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e40ac: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4e40acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4e40b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e40b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e40b4: 0xc1390c4  jal         func_4E4310
    ctx->pc = 0x4E40B4u;
    SET_GPR_U32(ctx, 31, 0x4E40BCu);
    ctx->pc = 0x4E40B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E40B4u;
            // 0x4e40b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E4310u;
    if (runtime->hasFunction(0x4E4310u)) {
        auto targetFn = runtime->lookupFunction(0x4E4310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E40BCu; }
        if (ctx->pc != 0x4E40BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E4310_0x4e4310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E40BCu; }
        if (ctx->pc != 0x4E40BCu) { return; }
    }
    ctx->pc = 0x4E40BCu;
label_4e40bc:
    // 0x4e40bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e40bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4e40c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e40c4: 0x246338e0  addiu       $v1, $v1, 0x38E0
    ctx->pc = 0x4e40c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14560));
    // 0x4e40c8: 0x24423918  addiu       $v0, $v0, 0x3918
    ctx->pc = 0x4e40c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14616));
    // 0x4e40cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e40ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e40d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e40d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e40d4: 0xc1390c0  jal         func_4E4300
    ctx->pc = 0x4E40D4u;
    SET_GPR_U32(ctx, 31, 0x4E40DCu);
    ctx->pc = 0x4E40D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E40D4u;
            // 0x4e40d8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E4300u;
    if (runtime->hasFunction(0x4E4300u)) {
        auto targetFn = runtime->lookupFunction(0x4E4300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E40DCu; }
        if (ctx->pc != 0x4E40DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E4300_0x4e4300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E40DCu; }
        if (ctx->pc != 0x4E40DCu) { return; }
    }
    ctx->pc = 0x4E40DCu;
label_4e40dc:
    // 0x4e40dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e40dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4e40e0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4e40e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4e40e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e40e8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4e40e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4e40ec: 0x24423790  addiu       $v0, $v0, 0x3790
    ctx->pc = 0x4e40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14224));
    // 0x4e40f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e40f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e40f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e40f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e40f8: 0x244237c8  addiu       $v0, $v0, 0x37C8
    ctx->pc = 0x4e40f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14280));
    // 0x4e40fc: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4e40fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4e4100: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x4e4100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x4e4104: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4e4104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x4e4108: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x4e4108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x4e410c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4e410cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4e4110: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x4e4110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x4e4114: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4e4114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x4e4118: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e4118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4e411c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4e411cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4e4120: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4E4120u;
    SET_GPR_U32(ctx, 31, 0x4E4128u);
    ctx->pc = 0x4E4124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4120u;
            // 0x4e4124: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4128u; }
        if (ctx->pc != 0x4E4128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4128u; }
        if (ctx->pc != 0x4E4128u) { return; }
    }
    ctx->pc = 0x4E4128u;
label_4e4128:
    // 0x4e4128: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4e4128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4e412c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e412cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4130: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E4130u;
    {
        const bool branch_taken_0x4e4130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4130u;
            // 0x4e4134: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4130) {
            ctx->pc = 0x4E4148u;
            goto label_4e4148;
        }
    }
    ctx->pc = 0x4E4138u;
    // 0x4e4138: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4e4138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4e413c: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4E413Cu;
    SET_GPR_U32(ctx, 31, 0x4E4144u);
    ctx->pc = 0x4E4140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E413Cu;
            // 0x4e4140: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4144u; }
        if (ctx->pc != 0x4E4144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4144u; }
        if (ctx->pc != 0x4E4144u) { return; }
    }
    ctx->pc = 0x4E4144u;
label_4e4144:
    // 0x4e4144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e4144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e4148:
    // 0x4e4148: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4e4148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4e414c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e414cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e4150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e4154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4158: 0x3e00008  jr          $ra
    ctx->pc = 0x4E4158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E415Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4158u;
            // 0x4e415c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E4160u;
label_4e4160:
    // 0x4e4160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e4160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e4164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e4164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e4168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e4168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e416c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e416cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e4170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e4170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4174: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4E4174u;
    {
        const bool branch_taken_0x4e4174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4174u;
            // 0x4e4178: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4174) {
            ctx->pc = 0x4E4214u;
            goto label_4e4214;
        }
    }
    ctx->pc = 0x4E417Cu;
    // 0x4e417c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e417cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4e4180: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e4180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e4184: 0x246338e0  addiu       $v1, $v1, 0x38E0
    ctx->pc = 0x4e4184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14560));
    // 0x4e4188: 0x24423918  addiu       $v0, $v0, 0x3918
    ctx->pc = 0x4e4188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14616));
    // 0x4e418c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e418cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e4190: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4E4190u;
    {
        const bool branch_taken_0x4e4190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4190u;
            // 0x4e4194: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4190) {
            ctx->pc = 0x4E41FCu;
            goto label_4e41fc;
        }
    }
    ctx->pc = 0x4E4198u;
    // 0x4e4198: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e4198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4e419c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e419cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e41a0: 0x24633890  addiu       $v1, $v1, 0x3890
    ctx->pc = 0x4e41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14480));
    // 0x4e41a4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4e41a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x4e41a8: 0x244238c8  addiu       $v0, $v0, 0x38C8
    ctx->pc = 0x4e41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14536));
    // 0x4e41ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e41acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e41b0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4e41b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4e41b4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4e41b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4e41b8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4E41B8u;
    SET_GPR_U32(ctx, 31, 0x4E41C0u);
    ctx->pc = 0x4E41BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E41B8u;
            // 0x4e41bc: 0x24a53a00  addiu       $a1, $a1, 0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E41C0u; }
        if (ctx->pc != 0x4E41C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E41C0u; }
        if (ctx->pc != 0x4E41C0u) { return; }
    }
    ctx->pc = 0x4E41C0u;
label_4e41c0:
    // 0x4e41c0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4e41c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4e41c4: 0xc0aeacc  jal         func_2BAB30
    ctx->pc = 0x4E41C4u;
    SET_GPR_U32(ctx, 31, 0x4E41CCu);
    ctx->pc = 0x4E41C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E41C4u;
            // 0x4e41c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB30u;
    if (runtime->hasFunction(0x2BAB30u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E41CCu; }
        if (ctx->pc != 0x4E41CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB30_0x2bab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E41CCu; }
        if (ctx->pc != 0x4E41CCu) { return; }
    }
    ctx->pc = 0x4E41CCu;
label_4e41cc:
    // 0x4e41cc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4e41ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4e41d0: 0xc1390a4  jal         func_4E4290
    ctx->pc = 0x4E41D0u;
    SET_GPR_U32(ctx, 31, 0x4E41D8u);
    ctx->pc = 0x4E41D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E41D0u;
            // 0x4e41d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E4290u;
    if (runtime->hasFunction(0x4E4290u)) {
        auto targetFn = runtime->lookupFunction(0x4E4290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E41D8u; }
        if (ctx->pc != 0x4E41D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E4290_0x4e4290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E41D8u; }
        if (ctx->pc != 0x4E41D8u) { return; }
    }
    ctx->pc = 0x4E41D8u;
label_4e41d8:
    // 0x4e41d8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4e41d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4e41dc: 0xc1390a4  jal         func_4E4290
    ctx->pc = 0x4E41DCu;
    SET_GPR_U32(ctx, 31, 0x4E41E4u);
    ctx->pc = 0x4E41E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E41DCu;
            // 0x4e41e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E4290u;
    if (runtime->hasFunction(0x4E4290u)) {
        auto targetFn = runtime->lookupFunction(0x4E4290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E41E4u; }
        if (ctx->pc != 0x4E41E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E4290_0x4e4290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E41E4u; }
        if (ctx->pc != 0x4E41E4u) { return; }
    }
    ctx->pc = 0x4E41E4u;
label_4e41e4:
    // 0x4e41e4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4e41e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4e41e8: 0xc13908c  jal         func_4E4230
    ctx->pc = 0x4E41E8u;
    SET_GPR_U32(ctx, 31, 0x4E41F0u);
    ctx->pc = 0x4E41ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E41E8u;
            // 0x4e41ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E4230u;
    if (runtime->hasFunction(0x4E4230u)) {
        auto targetFn = runtime->lookupFunction(0x4E4230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E41F0u; }
        if (ctx->pc != 0x4E41F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E4230_0x4e4230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E41F0u; }
        if (ctx->pc != 0x4E41F0u) { return; }
    }
    ctx->pc = 0x4E41F0u;
label_4e41f0:
    // 0x4e41f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e41f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e41f4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4E41F4u;
    SET_GPR_U32(ctx, 31, 0x4E41FCu);
    ctx->pc = 0x4E41F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E41F4u;
            // 0x4e41f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E41FCu; }
        if (ctx->pc != 0x4E41FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E41FCu; }
        if (ctx->pc != 0x4E41FCu) { return; }
    }
    ctx->pc = 0x4E41FCu;
label_4e41fc:
    // 0x4e41fc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4e41fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4e4200: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e4200u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4e4204: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E4204u;
    {
        const bool branch_taken_0x4e4204 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e4204) {
            ctx->pc = 0x4E4208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4204u;
            // 0x4e4208: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E4218u;
            goto label_4e4218;
        }
    }
    ctx->pc = 0x4E420Cu;
    // 0x4e420c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4E420Cu;
    SET_GPR_U32(ctx, 31, 0x4E4214u);
    ctx->pc = 0x4E4210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E420Cu;
            // 0x4e4210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4214u; }
        if (ctx->pc != 0x4E4214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4214u; }
        if (ctx->pc != 0x4E4214u) { return; }
    }
    ctx->pc = 0x4E4214u;
label_4e4214:
    // 0x4e4214: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e4214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e4218:
    // 0x4e4218: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e4218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e421c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e421cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e4220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4224: 0x3e00008  jr          $ra
    ctx->pc = 0x4E4224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4224u;
            // 0x4e4228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E422Cu;
    // 0x4e422c: 0x0  nop
    ctx->pc = 0x4e422cu;
    // NOP
}
