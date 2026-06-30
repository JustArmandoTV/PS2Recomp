#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004744B0
// Address: 0x4744b0 - 0x474670
void sub_004744B0_0x4744b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004744B0_0x4744b0");
#endif

    switch (ctx->pc) {
        case 0x474504u: goto label_474504;
        case 0x47451cu: goto label_47451c;
        case 0x474530u: goto label_474530;
        case 0x474538u: goto label_474538;
        case 0x474594u: goto label_474594;
        case 0x4745a0u: goto label_4745a0;
        case 0x4745c0u: goto label_4745c0;
        case 0x4745ccu: goto label_4745cc;
        case 0x4745d4u: goto label_4745d4;
        case 0x474600u: goto label_474600;
        case 0x47460cu: goto label_47460c;
        case 0x47462cu: goto label_47462c;
        default: break;
    }

    ctx->pc = 0x4744b0u;

    // 0x4744b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4744B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4744B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4744B0u;
            // 0x4744b4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4744B8u;
    // 0x4744b8: 0x0  nop
    ctx->pc = 0x4744b8u;
    // NOP
    // 0x4744bc: 0x0  nop
    ctx->pc = 0x4744bcu;
    // NOP
    // 0x4744c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4744c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4744c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4744c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4744c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4744c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x4744cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4744ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4744d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4744d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4744d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4744d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4744d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4744d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4744dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4744dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4744e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4744e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4744e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4744e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4744e8: 0x8c930070  lw          $s3, 0x70($a0)
    ctx->pc = 0x4744e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x4744ec: 0x12600054  beqz        $s3, . + 4 + (0x54 << 2)
    ctx->pc = 0x4744ECu;
    {
        const bool branch_taken_0x4744ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4744F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4744ECu;
            // 0x4744f0: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4744ec) {
            ctx->pc = 0x474640u;
            goto label_474640;
        }
    }
    ctx->pc = 0x4744F4u;
    // 0x4744f4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4744f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4744f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4744f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4744fc: 0x9057f258  lbu         $s7, -0xDA8($v0)
    ctx->pc = 0x4744fcu;
    SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294963800)));
    // 0x474500: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x474500u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_474504:
    // 0x474504: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x474504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x474508: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x474508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x47450c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x47450cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x474510: 0x265000ac  addiu       $s0, $s2, 0xAC
    ctx->pc = 0x474510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
    // 0x474514: 0xc11d4e4  jal         func_475390
    ctx->pc = 0x474514u;
    SET_GPR_U32(ctx, 31, 0x47451Cu);
    ctx->pc = 0x474518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474514u;
            // 0x474518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x475390u;
    if (runtime->hasFunction(0x475390u)) {
        auto targetFn = runtime->lookupFunction(0x475390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47451Cu; }
        if (ctx->pc != 0x47451Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00475390_0x475390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47451Cu; }
        if (ctx->pc != 0x47451Cu) { return; }
    }
    ctx->pc = 0x47451Cu;
label_47451c:
    // 0x47451c: 0x2644008c  addiu       $a0, $s2, 0x8C
    ctx->pc = 0x47451cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
    // 0x474520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x474520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474524: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x474524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x474528: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x474528u;
    SET_GPR_U32(ctx, 31, 0x474530u);
    ctx->pc = 0x47452Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474528u;
            // 0x47452c: 0xae400088  sw          $zero, 0x88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474530u; }
        if (ctx->pc != 0x474530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474530u; }
        if (ctx->pc != 0x474530u) { return; }
    }
    ctx->pc = 0x474530u;
label_474530:
    // 0x474530: 0xc11d470  jal         func_4751C0
    ctx->pc = 0x474530u;
    SET_GPR_U32(ctx, 31, 0x474538u);
    ctx->pc = 0x474534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474530u;
            // 0x474534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4751C0u;
    if (runtime->hasFunction(0x4751C0u)) {
        auto targetFn = runtime->lookupFunction(0x4751C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474538u; }
        if (ctx->pc != 0x474538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004751C0_0x4751c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474538u; }
        if (ctx->pc != 0x474538u) { return; }
    }
    ctx->pc = 0x474538u;
label_474538:
    // 0x474538: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x474538u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47453c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x47453cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x474540: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x474540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x474544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x474544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x474548: 0x0  nop
    ctx->pc = 0x474548u;
    // NOP
    // 0x47454c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x47454cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x474550: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x474550u;
    {
        const bool branch_taken_0x474550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x474550) {
            ctx->pc = 0x474554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x474550u;
            // 0x474554: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x474568u;
            goto label_474568;
        }
    }
    ctx->pc = 0x474558u;
    // 0x474558: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x474558u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x47455c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x47455cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x474560: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x474560u;
    {
        const bool branch_taken_0x474560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474560u;
            // 0x474564: 0xc64c0084  lwc1        $f12, 0x84($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x474560) {
            ctx->pc = 0x474580u;
            goto label_474580;
        }
    }
    ctx->pc = 0x474568u;
label_474568:
    // 0x474568: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x474568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x47456c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47456cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x474570: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x474570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x474574: 0x0  nop
    ctx->pc = 0x474574u;
    // NOP
    // 0x474578: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x474578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x47457c: 0xc64c0084  lwc1        $f12, 0x84($s2)
    ctx->pc = 0x47457cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_474580:
    // 0x474580: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x474580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x474584: 0xc64d0038  lwc1        $f13, 0x38($s2)
    ctx->pc = 0x474584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x474588: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x474588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x47458c: 0xc122b58  jal         func_48AD60
    ctx->pc = 0x47458Cu;
    SET_GPR_U32(ctx, 31, 0x474594u);
    ctx->pc = 0x474590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47458Cu;
            // 0x474590: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474594u; }
        if (ctx->pc != 0x474594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474594u; }
        if (ctx->pc != 0x474594u) { return; }
    }
    ctx->pc = 0x474594u;
label_474594:
    // 0x474594: 0x268401d0  addiu       $a0, $s4, 0x1D0
    ctx->pc = 0x474594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 464));
    // 0x474598: 0xc04cc04  jal         func_133010
    ctx->pc = 0x474598u;
    SET_GPR_U32(ctx, 31, 0x4745A0u);
    ctx->pc = 0x47459Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474598u;
            // 0x47459c: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4745A0u; }
        if (ctx->pc != 0x4745A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4745A0u; }
        if (ctx->pc != 0x4745A0u) { return; }
    }
    ctx->pc = 0x4745A0u;
label_4745a0:
    // 0x4745a0: 0xae9201c8  sw          $s2, 0x1C8($s4)
    ctx->pc = 0x4745a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 456), GPR_U32(ctx, 18));
    // 0x4745a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4745a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4745a8: 0xae8201c0  sw          $v0, 0x1C0($s4)
    ctx->pc = 0x4745a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 448), GPR_U32(ctx, 2));
    // 0x4745ac: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x4745acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x4745b0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4745b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4745b4: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x4745b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4745b8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4745B8u;
    SET_GPR_U32(ctx, 31, 0x4745C0u);
    ctx->pc = 0x4745BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4745B8u;
            // 0x4745bc: 0xae8201c4  sw          $v0, 0x1C4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4745C0u; }
        if (ctx->pc != 0x4745C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4745C0u; }
        if (ctx->pc != 0x4745C0u) { return; }
    }
    ctx->pc = 0x4745C0u;
label_4745c0:
    // 0x4745c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4745c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4745c4: 0xc11d47c  jal         func_4751F0
    ctx->pc = 0x4745C4u;
    SET_GPR_U32(ctx, 31, 0x4745CCu);
    ctx->pc = 0x4745C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4745C4u;
            // 0x4745c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4751F0u;
    if (runtime->hasFunction(0x4751F0u)) {
        auto targetFn = runtime->lookupFunction(0x4751F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4745CCu; }
        if (ctx->pc != 0x4745CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004751F0_0x4751f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4745CCu; }
        if (ctx->pc != 0x4745CCu) { return; }
    }
    ctx->pc = 0x4745CCu;
label_4745cc:
    // 0x4745cc: 0xc11d470  jal         func_4751C0
    ctx->pc = 0x4745CCu;
    SET_GPR_U32(ctx, 31, 0x4745D4u);
    ctx->pc = 0x4745D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4745CCu;
            // 0x4745d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4751C0u;
    if (runtime->hasFunction(0x4751C0u)) {
        auto targetFn = runtime->lookupFunction(0x4751C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4745D4u; }
        if (ctx->pc != 0x4745D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004751C0_0x4751c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4745D4u; }
        if (ctx->pc != 0x4745D4u) { return; }
    }
    ctx->pc = 0x4745D4u;
label_4745d4:
    // 0x4745d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4745d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4745d8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x4745d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x4745dc: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x4745dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
    // 0x4745e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4745e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4745e4: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x4745e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
    // 0x4745e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4745e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4745ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4745ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4745f0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4745f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4745f4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4745f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x4745f8: 0xc122b58  jal         func_48AD60
    ctx->pc = 0x4745F8u;
    SET_GPR_U32(ctx, 31, 0x474600u);
    ctx->pc = 0x4745FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4745F8u;
            // 0x4745fc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474600u; }
        if (ctx->pc != 0x474600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474600u; }
        if (ctx->pc != 0x474600u) { return; }
    }
    ctx->pc = 0x474600u;
label_474600:
    // 0x474600: 0x268401d0  addiu       $a0, $s4, 0x1D0
    ctx->pc = 0x474600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 464));
    // 0x474604: 0xc04cc04  jal         func_133010
    ctx->pc = 0x474604u;
    SET_GPR_U32(ctx, 31, 0x47460Cu);
    ctx->pc = 0x474608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474604u;
            // 0x474608: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47460Cu; }
        if (ctx->pc != 0x47460Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47460Cu; }
        if (ctx->pc != 0x47460Cu) { return; }
    }
    ctx->pc = 0x47460Cu;
label_47460c:
    // 0x47460c: 0xae9201c8  sw          $s2, 0x1C8($s4)
    ctx->pc = 0x47460cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 456), GPR_U32(ctx, 18));
    // 0x474610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x474610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x474614: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x474614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x474618: 0xae8301c0  sw          $v1, 0x1C0($s4)
    ctx->pc = 0x474618u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 448), GPR_U32(ctx, 3));
    // 0x47461c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47461cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474620: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x474620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474624: 0xc11d47c  jal         func_4751F0
    ctx->pc = 0x474624u;
    SET_GPR_U32(ctx, 31, 0x47462Cu);
    ctx->pc = 0x474628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474624u;
            // 0x474628: 0xae8201c4  sw          $v0, 0x1C4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4751F0u;
    if (runtime->hasFunction(0x4751F0u)) {
        auto targetFn = runtime->lookupFunction(0x4751F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47462Cu; }
        if (ctx->pc != 0x47462Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004751F0_0x4751f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47462Cu; }
        if (ctx->pc != 0x47462Cu) { return; }
    }
    ctx->pc = 0x47462Cu;
label_47462c:
    // 0x47462c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x47462cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x474630: 0x233182b  sltu        $v1, $s1, $s3
    ctx->pc = 0x474630u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x474634: 0x1460ffb3  bnez        $v1, . + 4 + (-0x4D << 2)
    ctx->pc = 0x474634u;
    {
        const bool branch_taken_0x474634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x474638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474634u;
            // 0x474638: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474634) {
            ctx->pc = 0x474504u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_474504;
        }
    }
    ctx->pc = 0x47463Cu;
    // 0x47463c: 0x0  nop
    ctx->pc = 0x47463cu;
    // NOP
label_474640:
    // 0x474640: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x474640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x474644: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x474644u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x474648: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x474648u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47464c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47464cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x474650: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x474650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x474654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x474654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x474658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x474658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47465c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47465cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x474660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x474660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x474664: 0x3e00008  jr          $ra
    ctx->pc = 0x474664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x474668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474664u;
            // 0x474668: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47466Cu;
    // 0x47466c: 0x0  nop
    ctx->pc = 0x47466cu;
    // NOP
}
