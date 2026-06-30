#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D8000
// Address: 0x3d8000 - 0x3d81a0
void sub_003D8000_0x3d8000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8000_0x3d8000");
#endif

    switch (ctx->pc) {
        case 0x3d801cu: goto label_3d801c;
        case 0x3d803cu: goto label_3d803c;
        case 0x3d8098u: goto label_3d8098;
        case 0x3d80b4u: goto label_3d80b4;
        case 0x3d80d0u: goto label_3d80d0;
        case 0x3d8130u: goto label_3d8130;
        case 0x3d813cu: goto label_3d813c;
        case 0x3d8148u: goto label_3d8148;
        case 0x3d8154u: goto label_3d8154;
        case 0x3d8160u: goto label_3d8160;
        case 0x3d816cu: goto label_3d816c;
        case 0x3d8184u: goto label_3d8184;
        default: break;
    }

    ctx->pc = 0x3d8000u;

    // 0x3d8000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d8000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d8004: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d8004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3d8008: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d8008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d800c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x3d800cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x3d8010: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d8010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d8014: 0xc0f60a0  jal         func_3D8280
    ctx->pc = 0x3D8014u;
    SET_GPR_U32(ctx, 31, 0x3D801Cu);
    ctx->pc = 0x3D8018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8014u;
            // 0x3d8018: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D8280u;
    if (runtime->hasFunction(0x3D8280u)) {
        auto targetFn = runtime->lookupFunction(0x3D8280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D801Cu; }
        if (ctx->pc != 0x3D801Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D8280_0x3d8280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D801Cu; }
        if (ctx->pc != 0x3D801Cu) { return; }
    }
    ctx->pc = 0x3D801Cu;
label_3d801c:
    // 0x3d801c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d801cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3d8020: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d8020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d8024: 0x24639710  addiu       $v1, $v1, -0x68F0
    ctx->pc = 0x3d8024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940432));
    // 0x3d8028: 0x24429748  addiu       $v0, $v0, -0x68B8
    ctx->pc = 0x3d8028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940488));
    // 0x3d802c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d802cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3d8030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8034: 0xc0f609c  jal         func_3D8270
    ctx->pc = 0x3D8034u;
    SET_GPR_U32(ctx, 31, 0x3D803Cu);
    ctx->pc = 0x3D8038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8034u;
            // 0x3d8038: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D8270u;
    if (runtime->hasFunction(0x3D8270u)) {
        auto targetFn = runtime->lookupFunction(0x3D8270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D803Cu; }
        if (ctx->pc != 0x3D803Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D8270_0x3d8270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D803Cu; }
        if (ctx->pc != 0x3D803Cu) { return; }
    }
    ctx->pc = 0x3D803Cu;
label_3d803c:
    // 0x3d803c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3d803cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3d8040: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3d8040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3d8044: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d8044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d8048: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3d8048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3d804c: 0x244295b0  addiu       $v0, $v0, -0x6A50
    ctx->pc = 0x3d804cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940080));
    // 0x3d8050: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d8050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3d8054: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d8054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d8058: 0x244295e8  addiu       $v0, $v0, -0x6A18
    ctx->pc = 0x3d8058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940136));
    // 0x3d805c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3d805cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3d8060: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d8060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3d8064: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x3d8064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x3d8068: 0xc4409a88  lwc1        $f0, -0x6578($v0)
    ctx->pc = 0x3d8068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d806c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x3d806cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x3d8070: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d8070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3d8074: 0xc4419a8c  lwc1        $f1, -0x6574($v0)
    ctx->pc = 0x3d8074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d8078: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3d8078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3d807c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d807cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3d8080: 0xc4409a90  lwc1        $f0, -0x6570($v0)
    ctx->pc = 0x3d8080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d8084: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3d8084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3d8088: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d8088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3d808c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3d808cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x3d8090: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x3D8090u;
    SET_GPR_U32(ctx, 31, 0x3D8098u);
    ctx->pc = 0x3D8094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8090u;
            // 0x3d8094: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8098u; }
        if (ctx->pc != 0x3D8098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8098u; }
        if (ctx->pc != 0x3D8098u) { return; }
    }
    ctx->pc = 0x3D8098u;
label_3d8098:
    // 0x3d8098: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3d8098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3d809c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d809cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d80a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D80A0u;
    {
        const bool branch_taken_0x3d80a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D80A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D80A0u;
            // 0x3d80a4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d80a0) {
            ctx->pc = 0x3D80B8u;
            goto label_3d80b8;
        }
    }
    ctx->pc = 0x3D80A8u;
    // 0x3d80a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d80a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d80ac: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x3D80ACu;
    SET_GPR_U32(ctx, 31, 0x3D80B4u);
    ctx->pc = 0x3D80B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D80ACu;
            // 0x3d80b0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D80B4u; }
        if (ctx->pc != 0x3D80B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D80B4u; }
        if (ctx->pc != 0x3D80B4u) { return; }
    }
    ctx->pc = 0x3D80B4u;
label_3d80b4:
    // 0x3d80b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d80b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d80b8:
    // 0x3d80b8: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x3d80b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x3d80bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d80bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d80c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d80c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d80c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d80c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d80c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D80C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D80CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D80C8u;
            // 0x3d80cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D80D0u;
label_3d80d0:
    // 0x3d80d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d80d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d80d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d80d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d80d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d80d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d80dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d80dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d80e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d80e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d80e4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3D80E4u;
    {
        const bool branch_taken_0x3d80e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D80E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D80E4u;
            // 0x3d80e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d80e4) {
            ctx->pc = 0x3D8184u;
            goto label_3d8184;
        }
    }
    ctx->pc = 0x3D80ECu;
    // 0x3d80ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d80ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3d80f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d80f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d80f4: 0x24639710  addiu       $v1, $v1, -0x68F0
    ctx->pc = 0x3d80f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940432));
    // 0x3d80f8: 0x24429748  addiu       $v0, $v0, -0x68B8
    ctx->pc = 0x3d80f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940488));
    // 0x3d80fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d80fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3d8100: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D8100u;
    {
        const bool branch_taken_0x3d8100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8100u;
            // 0x3d8104: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8100) {
            ctx->pc = 0x3D816Cu;
            goto label_3d816c;
        }
    }
    ctx->pc = 0x3D8108u;
    // 0x3d8108: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d8108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3d810c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d810cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d8110: 0x246396c0  addiu       $v1, $v1, -0x6940
    ctx->pc = 0x3d8110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940352));
    // 0x3d8114: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3d8114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3d8118: 0x244296f8  addiu       $v0, $v0, -0x6908
    ctx->pc = 0x3d8118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940408));
    // 0x3d811c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d811cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3d8120: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3d8120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3d8124: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3d8124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3d8128: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x3D8128u;
    SET_GPR_U32(ctx, 31, 0x3D8130u);
    ctx->pc = 0x3D812Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8128u;
            // 0x3d812c: 0x24a57ca0  addiu       $a1, $a1, 0x7CA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8130u; }
        if (ctx->pc != 0x3D8130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8130u; }
        if (ctx->pc != 0x3D8130u) { return; }
    }
    ctx->pc = 0x3D8130u;
label_3d8130:
    // 0x3d8130: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3d8130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x3d8134: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x3D8134u;
    SET_GPR_U32(ctx, 31, 0x3D813Cu);
    ctx->pc = 0x3D8138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8134u;
            // 0x3d8138: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D813Cu; }
        if (ctx->pc != 0x3D813Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D813Cu; }
        if (ctx->pc != 0x3D813Cu) { return; }
    }
    ctx->pc = 0x3D813Cu;
label_3d813c:
    // 0x3d813c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x3d813cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x3d8140: 0xc0f6080  jal         func_3D8200
    ctx->pc = 0x3D8140u;
    SET_GPR_U32(ctx, 31, 0x3D8148u);
    ctx->pc = 0x3D8144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8140u;
            // 0x3d8144: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D8200u;
    if (runtime->hasFunction(0x3D8200u)) {
        auto targetFn = runtime->lookupFunction(0x3D8200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8148u; }
        if (ctx->pc != 0x3D8148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D8200_0x3d8200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8148u; }
        if (ctx->pc != 0x3D8148u) { return; }
    }
    ctx->pc = 0x3D8148u;
label_3d8148:
    // 0x3d8148: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3d8148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x3d814c: 0xc0f6080  jal         func_3D8200
    ctx->pc = 0x3D814Cu;
    SET_GPR_U32(ctx, 31, 0x3D8154u);
    ctx->pc = 0x3D8150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D814Cu;
            // 0x3d8150: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D8200u;
    if (runtime->hasFunction(0x3D8200u)) {
        auto targetFn = runtime->lookupFunction(0x3D8200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8154u; }
        if (ctx->pc != 0x3D8154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D8200_0x3d8200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8154u; }
        if (ctx->pc != 0x3D8154u) { return; }
    }
    ctx->pc = 0x3D8154u;
label_3d8154:
    // 0x3d8154: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x3d8154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x3d8158: 0xc0f6068  jal         func_3D81A0
    ctx->pc = 0x3D8158u;
    SET_GPR_U32(ctx, 31, 0x3D8160u);
    ctx->pc = 0x3D815Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8158u;
            // 0x3d815c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D81A0u;
    if (runtime->hasFunction(0x3D81A0u)) {
        auto targetFn = runtime->lookupFunction(0x3D81A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8160u; }
        if (ctx->pc != 0x3D8160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D81A0_0x3d81a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8160u; }
        if (ctx->pc != 0x3D8160u) { return; }
    }
    ctx->pc = 0x3D8160u;
label_3d8160:
    // 0x3d8160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8164: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x3D8164u;
    SET_GPR_U32(ctx, 31, 0x3D816Cu);
    ctx->pc = 0x3D8168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8164u;
            // 0x3d8168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D816Cu; }
        if (ctx->pc != 0x3D816Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D816Cu; }
        if (ctx->pc != 0x3D816Cu) { return; }
    }
    ctx->pc = 0x3D816Cu;
label_3d816c:
    // 0x3d816c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3d816cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3d8170: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d8170u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3d8174: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8174u;
    {
        const bool branch_taken_0x3d8174 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d8174) {
            ctx->pc = 0x3D8178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8174u;
            // 0x3d8178: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D8188u;
            goto label_3d8188;
        }
    }
    ctx->pc = 0x3D817Cu;
    // 0x3d817c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3D817Cu;
    SET_GPR_U32(ctx, 31, 0x3D8184u);
    ctx->pc = 0x3D8180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D817Cu;
            // 0x3d8180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8184u; }
        if (ctx->pc != 0x3D8184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8184u; }
        if (ctx->pc != 0x3D8184u) { return; }
    }
    ctx->pc = 0x3D8184u;
label_3d8184:
    // 0x3d8184: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d8184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d8188:
    // 0x3d8188: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d8188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d818c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d818cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d8190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8194: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8194u;
            // 0x3d8198: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D819Cu;
    // 0x3d819c: 0x0  nop
    ctx->pc = 0x3d819cu;
    // NOP
}
