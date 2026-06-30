#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047E000
// Address: 0x47e000 - 0x47e190
void sub_0047E000_0x47e000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E000_0x47e000");
#endif

    switch (ctx->pc) {
        case 0x47e01cu: goto label_47e01c;
        case 0x47e03cu: goto label_47e03c;
        case 0x47e084u: goto label_47e084;
        case 0x47e0a0u: goto label_47e0a0;
        case 0x47e0c0u: goto label_47e0c0;
        case 0x47e120u: goto label_47e120;
        case 0x47e12cu: goto label_47e12c;
        case 0x47e138u: goto label_47e138;
        case 0x47e144u: goto label_47e144;
        case 0x47e150u: goto label_47e150;
        case 0x47e15cu: goto label_47e15c;
        case 0x47e174u: goto label_47e174;
        default: break;
    }

    ctx->pc = 0x47e000u;

    // 0x47e000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47e000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47e004: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x47e004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x47e008: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47e008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47e00c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x47e00cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x47e010: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47e010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47e014: 0xc11f89c  jal         func_47E270
    ctx->pc = 0x47E014u;
    SET_GPR_U32(ctx, 31, 0x47E01Cu);
    ctx->pc = 0x47E018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E014u;
            // 0x47e018: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47E270u;
    if (runtime->hasFunction(0x47E270u)) {
        auto targetFn = runtime->lookupFunction(0x47E270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E01Cu; }
        if (ctx->pc != 0x47E01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047E270_0x47e270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E01Cu; }
        if (ctx->pc != 0x47E01Cu) { return; }
    }
    ctx->pc = 0x47E01Cu;
label_47e01c:
    // 0x47e01c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x47e020: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47e020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x47e024: 0x2463ee60  addiu       $v1, $v1, -0x11A0
    ctx->pc = 0x47e024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962784));
    // 0x47e028: 0x2442ee98  addiu       $v0, $v0, -0x1168
    ctx->pc = 0x47e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962840));
    // 0x47e02c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x47e030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e034: 0xc11f898  jal         func_47E260
    ctx->pc = 0x47E034u;
    SET_GPR_U32(ctx, 31, 0x47E03Cu);
    ctx->pc = 0x47E038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E034u;
            // 0x47e038: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47E260u;
    if (runtime->hasFunction(0x47E260u)) {
        auto targetFn = runtime->lookupFunction(0x47E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E03Cu; }
        if (ctx->pc != 0x47E03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047E260_0x47e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E03Cu; }
        if (ctx->pc != 0x47E03Cu) { return; }
    }
    ctx->pc = 0x47E03Cu;
label_47e03c:
    // 0x47e03c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x47e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x47e040: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x47e040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x47e044: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47e044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x47e048: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x47e048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x47e04c: 0x2442ed10  addiu       $v0, $v0, -0x12F0
    ctx->pc = 0x47e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962448));
    // 0x47e050: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x47e050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x47e054: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x47e054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x47e058: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47e058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x47e05c: 0x2442ed48  addiu       $v0, $v0, -0x12B8
    ctx->pc = 0x47e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962504));
    // 0x47e060: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x47e060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x47e064: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47e064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x47e068: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x47e068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x47e06c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x47e06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x47e070: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47e070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x47e074: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x47e074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x47e078: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x47e078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x47e07c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x47E07Cu;
    SET_GPR_U32(ctx, 31, 0x47E084u);
    ctx->pc = 0x47E080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E07Cu;
            // 0x47e080: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E084u; }
        if (ctx->pc != 0x47E084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E084u; }
        if (ctx->pc != 0x47E084u) { return; }
    }
    ctx->pc = 0x47E084u;
label_47e084:
    // 0x47e084: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x47e084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x47e088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47e088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e08c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47E08Cu;
    {
        const bool branch_taken_0x47e08c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E08Cu;
            // 0x47e090: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e08c) {
            ctx->pc = 0x47E0A4u;
            goto label_47e0a4;
        }
    }
    ctx->pc = 0x47E094u;
    // 0x47e094: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x47e094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x47e098: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x47E098u;
    SET_GPR_U32(ctx, 31, 0x47E0A0u);
    ctx->pc = 0x47E09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E098u;
            // 0x47e09c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E0A0u; }
        if (ctx->pc != 0x47E0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E0A0u; }
        if (ctx->pc != 0x47E0A0u) { return; }
    }
    ctx->pc = 0x47E0A0u;
label_47e0a0:
    // 0x47e0a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47e0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47e0a4:
    // 0x47e0a4: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x47e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x47e0a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47e0a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e0ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47e0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47e0b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47e0b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47e0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x47E0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E0B4u;
            // 0x47e0b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47E0BCu;
    // 0x47e0bc: 0x0  nop
    ctx->pc = 0x47e0bcu;
    // NOP
label_47e0c0:
    // 0x47e0c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47e0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47e0c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47e0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x47e0c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47e0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47e0cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47e0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47e0d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47e0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e0d4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x47E0D4u;
    {
        const bool branch_taken_0x47e0d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E0D4u;
            // 0x47e0d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e0d4) {
            ctx->pc = 0x47E174u;
            goto label_47e174;
        }
    }
    ctx->pc = 0x47E0DCu;
    // 0x47e0dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x47e0e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x47e0e4: 0x2463ee60  addiu       $v1, $v1, -0x11A0
    ctx->pc = 0x47e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962784));
    // 0x47e0e8: 0x2442ee98  addiu       $v0, $v0, -0x1168
    ctx->pc = 0x47e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962840));
    // 0x47e0ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x47e0f0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x47E0F0u;
    {
        const bool branch_taken_0x47e0f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E0F0u;
            // 0x47e0f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e0f0) {
            ctx->pc = 0x47E15Cu;
            goto label_47e15c;
        }
    }
    ctx->pc = 0x47E0F8u;
    // 0x47e0f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x47e0fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x47e100: 0x2463ee10  addiu       $v1, $v1, -0x11F0
    ctx->pc = 0x47e100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962704));
    // 0x47e104: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x47e104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x47e108: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x47e108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x47e10c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47e10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x47e110: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x47e110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x47e114: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x47e114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x47e118: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x47E118u;
    SET_GPR_U32(ctx, 31, 0x47E120u);
    ctx->pc = 0x47E11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E118u;
            // 0x47e11c: 0x24a5dbc0  addiu       $a1, $a1, -0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E120u; }
        if (ctx->pc != 0x47E120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E120u; }
        if (ctx->pc != 0x47E120u) { return; }
    }
    ctx->pc = 0x47E120u;
label_47e120:
    // 0x47e120: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x47e120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x47e124: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x47E124u;
    SET_GPR_U32(ctx, 31, 0x47E12Cu);
    ctx->pc = 0x47E128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E124u;
            // 0x47e128: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E12Cu; }
        if (ctx->pc != 0x47E12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E12Cu; }
        if (ctx->pc != 0x47E12Cu) { return; }
    }
    ctx->pc = 0x47E12Cu;
label_47e12c:
    // 0x47e12c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x47e12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x47e130: 0xc11f87c  jal         func_47E1F0
    ctx->pc = 0x47E130u;
    SET_GPR_U32(ctx, 31, 0x47E138u);
    ctx->pc = 0x47E134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E130u;
            // 0x47e134: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47E1F0u;
    if (runtime->hasFunction(0x47E1F0u)) {
        auto targetFn = runtime->lookupFunction(0x47E1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E138u; }
        if (ctx->pc != 0x47E138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047E1F0_0x47e1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E138u; }
        if (ctx->pc != 0x47E138u) { return; }
    }
    ctx->pc = 0x47E138u;
label_47e138:
    // 0x47e138: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x47e138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x47e13c: 0xc11f87c  jal         func_47E1F0
    ctx->pc = 0x47E13Cu;
    SET_GPR_U32(ctx, 31, 0x47E144u);
    ctx->pc = 0x47E140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E13Cu;
            // 0x47e140: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47E1F0u;
    if (runtime->hasFunction(0x47E1F0u)) {
        auto targetFn = runtime->lookupFunction(0x47E1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E144u; }
        if (ctx->pc != 0x47E144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047E1F0_0x47e1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E144u; }
        if (ctx->pc != 0x47E144u) { return; }
    }
    ctx->pc = 0x47E144u;
label_47e144:
    // 0x47e144: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x47e144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x47e148: 0xc11f864  jal         func_47E190
    ctx->pc = 0x47E148u;
    SET_GPR_U32(ctx, 31, 0x47E150u);
    ctx->pc = 0x47E14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E148u;
            // 0x47e14c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47E190u;
    if (runtime->hasFunction(0x47E190u)) {
        auto targetFn = runtime->lookupFunction(0x47E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E150u; }
        if (ctx->pc != 0x47E150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047E190_0x47e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E150u; }
        if (ctx->pc != 0x47E150u) { return; }
    }
    ctx->pc = 0x47E150u;
label_47e150:
    // 0x47e150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e154: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x47E154u;
    SET_GPR_U32(ctx, 31, 0x47E15Cu);
    ctx->pc = 0x47E158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E154u;
            // 0x47e158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E15Cu; }
        if (ctx->pc != 0x47E15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E15Cu; }
        if (ctx->pc != 0x47E15Cu) { return; }
    }
    ctx->pc = 0x47E15Cu;
label_47e15c:
    // 0x47e15c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x47e15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x47e160: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47e160u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x47e164: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47E164u;
    {
        const bool branch_taken_0x47e164 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47e164) {
            ctx->pc = 0x47E168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47E164u;
            // 0x47e168: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47E178u;
            goto label_47e178;
        }
    }
    ctx->pc = 0x47E16Cu;
    // 0x47e16c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x47E16Cu;
    SET_GPR_U32(ctx, 31, 0x47E174u);
    ctx->pc = 0x47E170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47E16Cu;
            // 0x47e170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E174u; }
        if (ctx->pc != 0x47E174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E174u; }
        if (ctx->pc != 0x47E174u) { return; }
    }
    ctx->pc = 0x47E174u;
label_47e174:
    // 0x47e174: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47e174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47e178:
    // 0x47e178: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47e178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47e17c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47e17cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47e180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47e180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47e184: 0x3e00008  jr          $ra
    ctx->pc = 0x47E184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E184u;
            // 0x47e188: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47E18Cu;
    // 0x47e18c: 0x0  nop
    ctx->pc = 0x47e18cu;
    // NOP
}
