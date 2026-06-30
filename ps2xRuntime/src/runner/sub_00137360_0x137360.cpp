#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00137360
// Address: 0x137360 - 0x137530
void sub_00137360_0x137360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137360_0x137360");
#endif

    switch (ctx->pc) {
        case 0x137394u: goto label_137394;
        case 0x137414u: goto label_137414;
        case 0x137424u: goto label_137424;
        case 0x137434u: goto label_137434;
        case 0x137490u: goto label_137490;
        case 0x1374a0u: goto label_1374a0;
        case 0x1374b0u: goto label_1374b0;
        case 0x1374e0u: goto label_1374e0;
        case 0x1374f0u: goto label_1374f0;
        case 0x137500u: goto label_137500;
        case 0x137514u: goto label_137514;
        default: break;
    }

    ctx->pc = 0x137360u;

    // 0x137360: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x137360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x137364: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x137364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x137368: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x137368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13736c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13736cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x137370: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x137370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137374: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x137374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x137378: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x137378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13737c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x13737cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137380: 0x2cc10002  sltiu       $at, $a2, 0x2
    ctx->pc = 0x137380u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x137384: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x137384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137388: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x137388u;
    {
        const bool branch_taken_0x137388 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137388u;
            // 0x13738c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137388) {
            ctx->pc = 0x1373D0u;
            goto label_1373d0;
        }
    }
    ctx->pc = 0x137390u;
    // 0x137390: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x137390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_137394:
    // 0x137394: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x137394u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x137398: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x137398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13739c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1373a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1373a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1373a4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1373a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1373a8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1373A8u;
    {
        const bool branch_taken_0x1373a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1373a8) {
            ctx->pc = 0x1373B8u;
            goto label_1373b8;
        }
    }
    ctx->pc = 0x1373B0u;
    // 0x1373b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1373B0u;
    {
        const bool branch_taken_0x1373b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1373B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1373B0u;
            // 0x1373b4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1373b0) {
            ctx->pc = 0x1373C0u;
            goto label_1373c0;
        }
    }
    ctx->pc = 0x1373B8u;
label_1373b8:
    // 0x1373b8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1373b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373bc: 0x0  nop
    ctx->pc = 0x1373bcu;
    // NOP
label_1373c0:
    // 0x1373c0: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x1373c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1373c4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1373c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1373c8: 0x5020fff2  beql        $at, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1373C8u;
    {
        const bool branch_taken_0x1373c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1373c8) {
            ctx->pc = 0x1373CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1373C8u;
            // 0x1373cc: 0xe61021  addu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137394u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_137394;
        }
    }
    ctx->pc = 0x1373D0u;
label_1373d0:
    // 0x1373d0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1373d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1373d4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x1373d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1373d8: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x1373d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1373dc: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1373DCu;
    {
        const bool branch_taken_0x1373dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1373E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1373DCu;
            // 0x1373e0: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1373dc) {
            ctx->pc = 0x13743Cu;
            goto label_13743c;
        }
    }
    ctx->pc = 0x1373E4u;
    // 0x1373e4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1373e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1373e8: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1373e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1373ec: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1373ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1373f0: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1373F0u;
    {
        const bool branch_taken_0x1373f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1373F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1373F0u;
            // 0x1373f4: 0x8c67000c  lw          $a3, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1373f0) {
            ctx->pc = 0x13741Cu;
            goto label_13741c;
        }
    }
    ctx->pc = 0x1373F8u;
    // 0x1373f8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1373f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1373fc: 0x52020003  beql        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1373FCu;
    {
        const bool branch_taken_0x1373fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1373fc) {
            ctx->pc = 0x137400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1373FCu;
            // 0x137400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13740Cu;
            goto label_13740c;
        }
    }
    ctx->pc = 0x137404u;
    // 0x137404: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x137404u;
    {
        const bool branch_taken_0x137404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137404u;
            // 0x137408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137404) {
            ctx->pc = 0x13742Cu;
            goto label_13742c;
        }
    }
    ctx->pc = 0x13740Cu;
label_13740c:
    // 0x13740c: 0xc04ca64  jal         func_132990
    ctx->pc = 0x13740Cu;
    SET_GPR_U32(ctx, 31, 0x137414u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137414u; }
        if (ctx->pc != 0x137414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137414u; }
        if (ctx->pc != 0x137414u) { return; }
    }
    ctx->pc = 0x137414u;
label_137414:
    // 0x137414: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x137414u;
    {
        const bool branch_taken_0x137414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137414) {
            ctx->pc = 0x137434u;
            goto label_137434;
        }
    }
    ctx->pc = 0x13741Cu;
label_13741c:
    // 0x13741c: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x13741Cu;
    SET_GPR_U32(ctx, 31, 0x137424u);
    ctx->pc = 0x137420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13741Cu;
            // 0x137420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137424u; }
        if (ctx->pc != 0x137424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137424u; }
        if (ctx->pc != 0x137424u) { return; }
    }
    ctx->pc = 0x137424u;
label_137424:
    // 0x137424: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137424u;
    {
        const bool branch_taken_0x137424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137424) {
            ctx->pc = 0x137434u;
            goto label_137434;
        }
    }
    ctx->pc = 0x13742Cu;
label_13742c:
    // 0x13742c: 0xc04ca18  jal         func_132860
    ctx->pc = 0x13742Cu;
    SET_GPR_U32(ctx, 31, 0x137434u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137434u; }
        if (ctx->pc != 0x137434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137434u; }
        if (ctx->pc != 0x137434u) { return; }
    }
    ctx->pc = 0x137434u;
label_137434:
    // 0x137434: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x137434u;
    {
        const bool branch_taken_0x137434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137434u;
            // 0x137438: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137434) {
            ctx->pc = 0x137518u;
            goto label_137518;
        }
    }
    ctx->pc = 0x13743Cu;
label_13743c:
    // 0x13743c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x13743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137440: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x137440u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x137444: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x137444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137448: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x137448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x13744c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x13744cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x137450: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x137450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x137454: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x137454u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x137458: 0x24720010  addiu       $s2, $v1, 0x10
    ctx->pc = 0x137458u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13745c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x13745cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x137460: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x137460u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x137464: 0x0  nop
    ctx->pc = 0x137464u;
    // NOP
    // 0x137468: 0x0  nop
    ctx->pc = 0x137468u;
    // NOP
    // 0x13746c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13746Cu;
    {
        const bool branch_taken_0x13746c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x13746c) {
            ctx->pc = 0x137498u;
            goto label_137498;
        }
    }
    ctx->pc = 0x137474u;
    // 0x137474: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x137474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x137478: 0x52020003  beql        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137478u;
    {
        const bool branch_taken_0x137478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x137478) {
            ctx->pc = 0x13747Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137478u;
            // 0x13747c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137488u;
            goto label_137488;
        }
    }
    ctx->pc = 0x137480u;
    // 0x137480: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x137480u;
    {
        const bool branch_taken_0x137480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137480u;
            // 0x137484: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137480) {
            ctx->pc = 0x1374A8u;
            goto label_1374a8;
        }
    }
    ctx->pc = 0x137488u;
label_137488:
    // 0x137488: 0xc04ca64  jal         func_132990
    ctx->pc = 0x137488u;
    SET_GPR_U32(ctx, 31, 0x137490u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137490u; }
        if (ctx->pc != 0x137490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137490u; }
        if (ctx->pc != 0x137490u) { return; }
    }
    ctx->pc = 0x137490u;
label_137490:
    // 0x137490: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x137490u;
    {
        const bool branch_taken_0x137490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137490u;
            // 0x137494: 0x8e47000c  lw          $a3, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137490) {
            ctx->pc = 0x1374B4u;
            goto label_1374b4;
        }
    }
    ctx->pc = 0x137498u;
label_137498:
    // 0x137498: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x137498u;
    SET_GPR_U32(ctx, 31, 0x1374A0u);
    ctx->pc = 0x13749Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137498u;
            // 0x13749c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374A0u; }
        if (ctx->pc != 0x1374A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374A0u; }
        if (ctx->pc != 0x1374A0u) { return; }
    }
    ctx->pc = 0x1374A0u;
label_1374a0:
    // 0x1374a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1374A0u;
    {
        const bool branch_taken_0x1374a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1374a0) {
            ctx->pc = 0x1374B0u;
            goto label_1374b0;
        }
    }
    ctx->pc = 0x1374A8u;
label_1374a8:
    // 0x1374a8: 0xc04ca18  jal         func_132860
    ctx->pc = 0x1374A8u;
    SET_GPR_U32(ctx, 31, 0x1374B0u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374B0u; }
        if (ctx->pc != 0x1374B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374B0u; }
        if (ctx->pc != 0x1374B0u) { return; }
    }
    ctx->pc = 0x1374B0u;
label_1374b0:
    // 0x1374b0: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x1374b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1374b4:
    // 0x1374b4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1374b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1374b8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1374b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1374bc: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1374BCu;
    {
        const bool branch_taken_0x1374bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1374C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1374BCu;
            // 0x1374c0: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1374bc) {
            ctx->pc = 0x1374E8u;
            goto label_1374e8;
        }
    }
    ctx->pc = 0x1374C4u;
    // 0x1374c4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1374c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1374c8: 0x52020003  beql        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1374C8u;
    {
        const bool branch_taken_0x1374c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1374c8) {
            ctx->pc = 0x1374CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1374C8u;
            // 0x1374cc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1374D8u;
            goto label_1374d8;
        }
    }
    ctx->pc = 0x1374D0u;
    // 0x1374d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1374D0u;
    {
        const bool branch_taken_0x1374d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1374D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1374D0u;
            // 0x1374d4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1374d0) {
            ctx->pc = 0x1374F8u;
            goto label_1374f8;
        }
    }
    ctx->pc = 0x1374D8u;
label_1374d8:
    // 0x1374d8: 0xc04ca64  jal         func_132990
    ctx->pc = 0x1374D8u;
    SET_GPR_U32(ctx, 31, 0x1374E0u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374E0u; }
        if (ctx->pc != 0x1374E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374E0u; }
        if (ctx->pc != 0x1374E0u) { return; }
    }
    ctx->pc = 0x1374E0u;
label_1374e0:
    // 0x1374e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1374E0u;
    {
        const bool branch_taken_0x1374e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1374E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1374E0u;
            // 0x1374e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1374e0) {
            ctx->pc = 0x137504u;
            goto label_137504;
        }
    }
    ctx->pc = 0x1374E8u;
label_1374e8:
    // 0x1374e8: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x1374E8u;
    SET_GPR_U32(ctx, 31, 0x1374F0u);
    ctx->pc = 0x1374ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1374E8u;
            // 0x1374ec: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374F0u; }
        if (ctx->pc != 0x1374F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374F0u; }
        if (ctx->pc != 0x1374F0u) { return; }
    }
    ctx->pc = 0x1374F0u;
label_1374f0:
    // 0x1374f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1374F0u;
    {
        const bool branch_taken_0x1374f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1374f0) {
            ctx->pc = 0x137500u;
            goto label_137500;
        }
    }
    ctx->pc = 0x1374F8u;
label_1374f8:
    // 0x1374f8: 0xc04ca18  jal         func_132860
    ctx->pc = 0x1374F8u;
    SET_GPR_U32(ctx, 31, 0x137500u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137500u; }
        if (ctx->pc != 0x137500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137500u; }
        if (ctx->pc != 0x137500u) { return; }
    }
    ctx->pc = 0x137500u;
label_137500:
    // 0x137500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_137504:
    // 0x137504: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x137504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x137508: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x137508u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13750c: 0xc04c8f0  jal         func_1323C0
    ctx->pc = 0x13750Cu;
    SET_GPR_U32(ctx, 31, 0x137514u);
    ctx->pc = 0x137510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13750Cu;
            // 0x137510: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (runtime->hasFunction(0x1323C0u)) {
        auto targetFn = runtime->lookupFunction(0x1323C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137514u; }
        if (ctx->pc != 0x137514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001323C0_0x1323c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137514u; }
        if (ctx->pc != 0x137514u) { return; }
    }
    ctx->pc = 0x137514u;
label_137514:
    // 0x137514: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x137514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_137518:
    // 0x137518: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x137518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13751c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13751cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137520: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x137520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137524: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x137524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137528: 0x3e00008  jr          $ra
    ctx->pc = 0x137528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13752Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137528u;
            // 0x13752c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137530u;
}
