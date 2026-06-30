#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138780
// Address: 0x138780 - 0x1388f0
void sub_00138780_0x138780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138780_0x138780");
#endif

    switch (ctx->pc) {
        case 0x1387b0u: goto label_1387b0;
        case 0x138860u: goto label_138860;
        case 0x138870u: goto label_138870;
        case 0x138880u: goto label_138880;
        default: break;
    }

    ctx->pc = 0x138780u;

    // 0x138780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x138780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x138784: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x138784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x138788: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x138788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13878c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13878cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x138790: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x138790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138794: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x138794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x138798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x138798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13879c: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x13879cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1387a0: 0x18600049  blez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1387A0u;
    {
        const bool branch_taken_0x1387a0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1387A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1387A0u;
            // 0x1387a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387a0) {
            ctx->pc = 0x1388C8u;
            goto label_1388c8;
        }
    }
    ctx->pc = 0x1387A8u;
    // 0x1387a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1387a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1387ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1387acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1387b0:
    // 0x1387b0: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x1387b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1387b4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1387b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1387b8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1387b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1387bc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1387bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1387c0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1387c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1387c4: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x1387c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1387c8: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x1387c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1387cc: 0x30a80f00  andi        $t0, $a1, 0xF00
    ctx->pc = 0x1387ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3840);
    // 0x1387d0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1387d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1387d4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1387d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1387d8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1387d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1387dc: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x1387dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1387e0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1387e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1387e4: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x1387e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1387e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1387E8u;
    {
        const bool branch_taken_0x1387e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1387E8u;
            // 0x1387ec: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387e8) {
            ctx->pc = 0x138808u;
            goto label_138808;
        }
    }
    ctx->pc = 0x1387F0u;
    // 0x1387f0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1387f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1387f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1387f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1387f8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1387f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1387fc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1387fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x138800: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x138800u;
    {
        const bool branch_taken_0x138800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138800u;
            // 0x138804: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138800) {
            ctx->pc = 0x138880u;
            goto label_138880;
        }
    }
    ctx->pc = 0x138808u;
label_138808:
    // 0x138808: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x138808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x13880c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x13880cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x138810: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x138810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x138814: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x138814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x138818: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x138818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13881c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13881Cu;
    {
        const bool branch_taken_0x13881c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13881Cu;
            // 0x138820: 0x8c650018  lw          $a1, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13881c) {
            ctx->pc = 0x138830u;
            goto label_138830;
        }
    }
    ctx->pc = 0x138824u;
    // 0x138824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138828: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x138828u;
    {
        const bool branch_taken_0x138828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13882Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138828u;
            // 0x13882c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138828) {
            ctx->pc = 0x138838u;
            goto label_138838;
        }
    }
    ctx->pc = 0x138830u;
label_138830:
    // 0x138830: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x138830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x138834: 0x8c670020  lw          $a3, 0x20($v1)
    ctx->pc = 0x138834u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_138838:
    // 0x138838: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x138838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x13883c: 0x1102000a  beq         $t0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13883Cu;
    {
        const bool branch_taken_0x13883c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x13883c) {
            ctx->pc = 0x138868u;
            goto label_138868;
        }
    }
    ctx->pc = 0x138844u;
    // 0x138844: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x138844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x138848: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138848u;
    {
        const bool branch_taken_0x138848 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x138848) {
            ctx->pc = 0x138858u;
            goto label_138858;
        }
    }
    ctx->pc = 0x138850u;
    // 0x138850: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x138850u;
    {
        const bool branch_taken_0x138850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138850) {
            ctx->pc = 0x138878u;
            goto label_138878;
        }
    }
    ctx->pc = 0x138858u;
label_138858:
    // 0x138858: 0xc04ca64  jal         func_132990
    ctx->pc = 0x138858u;
    SET_GPR_U32(ctx, 31, 0x138860u);
    ctx->pc = 0x13885Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138858u;
            // 0x13885c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138860u; }
        if (ctx->pc != 0x138860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138860u; }
        if (ctx->pc != 0x138860u) { return; }
    }
    ctx->pc = 0x138860u;
label_138860:
    // 0x138860: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x138860u;
    {
        const bool branch_taken_0x138860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138860) {
            ctx->pc = 0x138880u;
            goto label_138880;
        }
    }
    ctx->pc = 0x138868u;
label_138868:
    // 0x138868: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x138868u;
    SET_GPR_U32(ctx, 31, 0x138870u);
    ctx->pc = 0x13886Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138868u;
            // 0x13886c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138870u; }
        if (ctx->pc != 0x138870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138870u; }
        if (ctx->pc != 0x138870u) { return; }
    }
    ctx->pc = 0x138870u;
label_138870:
    // 0x138870: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x138870u;
    {
        const bool branch_taken_0x138870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138870) {
            ctx->pc = 0x138880u;
            goto label_138880;
        }
    }
    ctx->pc = 0x138878u;
label_138878:
    // 0x138878: 0xc04ca18  jal         func_132860
    ctx->pc = 0x138878u;
    SET_GPR_U32(ctx, 31, 0x138880u);
    ctx->pc = 0x13887Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138878u;
            // 0x13887c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138880u; }
        if (ctx->pc != 0x138880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138880u; }
        if (ctx->pc != 0x138880u) { return; }
    }
    ctx->pc = 0x138880u;
label_138880:
    // 0x138880: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x138880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x138884: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x138884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x138888: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x138888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13888c: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x13888cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138890: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x138890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x138894: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x138894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x138898: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x138898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13889c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x13889cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1388a0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1388a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1388a4: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x1388a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1388a8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1388a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1388ac: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x1388acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1388b0: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x1388b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1388b4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1388b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1388b8: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x1388b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1388bc: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1388bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1388c0: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1388C0u;
    {
        const bool branch_taken_0x1388c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1388C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1388C0u;
            // 0x1388c4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388c0) {
            ctx->pc = 0x1387B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1387b0;
        }
    }
    ctx->pc = 0x1388C8u;
label_1388c8:
    // 0x1388c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1388c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1388cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1388ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1388d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1388d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1388d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1388d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1388d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1388d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1388dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1388DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1388E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1388DCu;
            // 0x1388e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1388E4u;
    // 0x1388e4: 0x0  nop
    ctx->pc = 0x1388e4u;
    // NOP
    // 0x1388e8: 0x0  nop
    ctx->pc = 0x1388e8u;
    // NOP
    // 0x1388ec: 0x0  nop
    ctx->pc = 0x1388ecu;
    // NOP
}
