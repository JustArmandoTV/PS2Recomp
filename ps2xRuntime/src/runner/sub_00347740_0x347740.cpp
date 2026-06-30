#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00347740
// Address: 0x347740 - 0x347920
void sub_00347740_0x347740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347740_0x347740");
#endif

    switch (ctx->pc) {
        case 0x347788u: goto label_347788;
        case 0x3477a0u: goto label_3477a0;
        case 0x3477b4u: goto label_3477b4;
        case 0x3477bcu: goto label_3477bc;
        case 0x34781cu: goto label_34781c;
        case 0x347828u: goto label_347828;
        case 0x347848u: goto label_347848;
        case 0x347854u: goto label_347854;
        case 0x34785cu: goto label_34785c;
        case 0x3478b0u: goto label_3478b0;
        case 0x3478bcu: goto label_3478bc;
        case 0x3478dcu: goto label_3478dc;
        default: break;
    }

    ctx->pc = 0x347740u;

    // 0x347740: 0x3e00008  jr          $ra
    ctx->pc = 0x347740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347740u;
            // 0x347744: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347748u;
    // 0x347748: 0x0  nop
    ctx->pc = 0x347748u;
    // NOP
    // 0x34774c: 0x0  nop
    ctx->pc = 0x34774cu;
    // NOP
    // 0x347750: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x347750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x347754: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x347754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x347758: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x347758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x34775c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x347760: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x347760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x347764: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x347764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x347768: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x347768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34776c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34776cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x347770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x347774: 0x8c930070  lw          $s3, 0x70($a0)
    ctx->pc = 0x347774u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x347778: 0x1260005d  beqz        $s3, . + 4 + (0x5D << 2)
    ctx->pc = 0x347778u;
    {
        const bool branch_taken_0x347778 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x34777Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347778u;
            // 0x34777c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347778) {
            ctx->pc = 0x3478F0u;
            goto label_3478f0;
        }
    }
    ctx->pc = 0x347780u;
    // 0x347780: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x347780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347784: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x347784u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347788:
    // 0x347788: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x347788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x34778c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x34778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x347790: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x347790u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x347794: 0x265000a4  addiu       $s0, $s2, 0xA4
    ctx->pc = 0x347794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 164));
    // 0x347798: 0xc0d2240  jal         func_348900
    ctx->pc = 0x347798u;
    SET_GPR_U32(ctx, 31, 0x3477A0u);
    ctx->pc = 0x34779Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347798u;
            // 0x34779c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348900u;
    if (runtime->hasFunction(0x348900u)) {
        auto targetFn = runtime->lookupFunction(0x348900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3477A0u; }
        if (ctx->pc != 0x3477A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348900_0x348900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3477A0u; }
        if (ctx->pc != 0x3477A0u) { return; }
    }
    ctx->pc = 0x3477A0u;
label_3477a0:
    // 0x3477a0: 0x26440084  addiu       $a0, $s2, 0x84
    ctx->pc = 0x3477a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
    // 0x3477a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3477a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3477a8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3477a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3477ac: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3477ACu;
    SET_GPR_U32(ctx, 31, 0x3477B4u);
    ctx->pc = 0x3477B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3477ACu;
            // 0x3477b0: 0xae400080  sw          $zero, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3477B4u; }
        if (ctx->pc != 0x3477B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3477B4u; }
        if (ctx->pc != 0x3477B4u) { return; }
    }
    ctx->pc = 0x3477B4u;
label_3477b4:
    // 0x3477b4: 0xc0d21cc  jal         func_348730
    ctx->pc = 0x3477B4u;
    SET_GPR_U32(ctx, 31, 0x3477BCu);
    ctx->pc = 0x3477B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3477B4u;
            // 0x3477b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348730u;
    if (runtime->hasFunction(0x348730u)) {
        auto targetFn = runtime->lookupFunction(0x348730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3477BCu; }
        if (ctx->pc != 0x3477BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348730_0x348730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3477BCu; }
        if (ctx->pc != 0x3477BCu) { return; }
    }
    ctx->pc = 0x3477BCu;
label_3477bc:
    // 0x3477bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3477bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3477c0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3477c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3477c4: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x3477c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3477c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3477c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3477cc: 0x0  nop
    ctx->pc = 0x3477ccu;
    // NOP
    // 0x3477d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3477d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3477d4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3477D4u;
    {
        const bool branch_taken_0x3477d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3477d4) {
            ctx->pc = 0x3477D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3477D4u;
            // 0x3477d8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3477ECu;
            goto label_3477ec;
        }
    }
    ctx->pc = 0x3477DCu;
    // 0x3477dc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3477dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3477e0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3477e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3477e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3477E4u;
    {
        const bool branch_taken_0x3477e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3477E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3477E4u;
            // 0x3477e8: 0x3c023f66  lui         $v0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3477e4) {
            ctx->pc = 0x347804u;
            goto label_347804;
        }
    }
    ctx->pc = 0x3477ECu;
label_3477ec:
    // 0x3477ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3477ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3477f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3477f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3477f4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3477f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3477f8: 0x0  nop
    ctx->pc = 0x3477f8u;
    // NOP
    // 0x3477fc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3477fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x347800: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x347800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_347804:
    // 0x347804: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x347804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x347808: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x347808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34780c: 0xc64d0038  lwc1        $f13, 0x38($s2)
    ctx->pc = 0x34780cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x347810: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x347810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x347814: 0xc122b58  jal         func_48AD60
    ctx->pc = 0x347814u;
    SET_GPR_U32(ctx, 31, 0x34781Cu);
    ctx->pc = 0x347818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347814u;
            // 0x347818: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34781Cu; }
        if (ctx->pc != 0x34781Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34781Cu; }
        if (ctx->pc != 0x34781Cu) { return; }
    }
    ctx->pc = 0x34781Cu;
label_34781c:
    // 0x34781c: 0x268401d0  addiu       $a0, $s4, 0x1D0
    ctx->pc = 0x34781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 464));
    // 0x347820: 0xc04cc04  jal         func_133010
    ctx->pc = 0x347820u;
    SET_GPR_U32(ctx, 31, 0x347828u);
    ctx->pc = 0x347824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347820u;
            // 0x347824: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347828u; }
        if (ctx->pc != 0x347828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347828u; }
        if (ctx->pc != 0x347828u) { return; }
    }
    ctx->pc = 0x347828u;
label_347828:
    // 0x347828: 0xae9201c8  sw          $s2, 0x1C8($s4)
    ctx->pc = 0x347828u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 456), GPR_U32(ctx, 18));
    // 0x34782c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347830: 0xae8201c0  sw          $v0, 0x1C0($s4)
    ctx->pc = 0x347830u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 448), GPR_U32(ctx, 2));
    // 0x347834: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x347834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x347838: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x347838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x34783c: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x34783cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x347840: 0xc04cc04  jal         func_133010
    ctx->pc = 0x347840u;
    SET_GPR_U32(ctx, 31, 0x347848u);
    ctx->pc = 0x347844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347840u;
            // 0x347844: 0xae8201c4  sw          $v0, 0x1C4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347848u; }
        if (ctx->pc != 0x347848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347848u; }
        if (ctx->pc != 0x347848u) { return; }
    }
    ctx->pc = 0x347848u;
label_347848:
    // 0x347848: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x347848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34784c: 0xc0d21d8  jal         func_348760
    ctx->pc = 0x34784Cu;
    SET_GPR_U32(ctx, 31, 0x347854u);
    ctx->pc = 0x347850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34784Cu;
            // 0x347850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348760u;
    if (runtime->hasFunction(0x348760u)) {
        auto targetFn = runtime->lookupFunction(0x348760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347854u; }
        if (ctx->pc != 0x347854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348760_0x348760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347854u; }
        if (ctx->pc != 0x347854u) { return; }
    }
    ctx->pc = 0x347854u;
label_347854:
    // 0x347854: 0xc0d21cc  jal         func_348730
    ctx->pc = 0x347854u;
    SET_GPR_U32(ctx, 31, 0x34785Cu);
    ctx->pc = 0x347858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347854u;
            // 0x347858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348730u;
    if (runtime->hasFunction(0x348730u)) {
        auto targetFn = runtime->lookupFunction(0x348730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34785Cu; }
        if (ctx->pc != 0x34785Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348730_0x348730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34785Cu; }
        if (ctx->pc != 0x34785Cu) { return; }
    }
    ctx->pc = 0x34785Cu;
label_34785c:
    // 0x34785c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x34785cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347860: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x347860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x347864: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x347864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x347868: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x347868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x34786c: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x34786cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x347870: 0x24a52f18  addiu       $a1, $a1, 0x2F18
    ctx->pc = 0x347870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12056));
    // 0x347874: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x347874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x347878: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x347878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
    // 0x34787c: 0x8cc60968  lw          $a2, 0x968($a2)
    ctx->pc = 0x34787cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
    // 0x347880: 0x3444097b  ori         $a0, $v0, 0x97B
    ctx->pc = 0x347880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
    // 0x347884: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x347884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x347888: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x347888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x34788c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x34788cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x347890: 0x38c20009  xori        $v0, $a2, 0x9
    ctx->pc = 0x347890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)9);
    // 0x347894: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x347894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x347898: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x347898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34789c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x34789cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3478a0: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x3478a0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3478a4: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x3478a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3478a8: 0xc122b58  jal         func_48AD60
    ctx->pc = 0x3478A8u;
    SET_GPR_U32(ctx, 31, 0x3478B0u);
    ctx->pc = 0x3478ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3478A8u;
            // 0x3478ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3478B0u; }
        if (ctx->pc != 0x3478B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3478B0u; }
        if (ctx->pc != 0x3478B0u) { return; }
    }
    ctx->pc = 0x3478B0u;
label_3478b0:
    // 0x3478b0: 0x268401d0  addiu       $a0, $s4, 0x1D0
    ctx->pc = 0x3478b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 464));
    // 0x3478b4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3478B4u;
    SET_GPR_U32(ctx, 31, 0x3478BCu);
    ctx->pc = 0x3478B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3478B4u;
            // 0x3478b8: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3478BCu; }
        if (ctx->pc != 0x3478BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3478BCu; }
        if (ctx->pc != 0x3478BCu) { return; }
    }
    ctx->pc = 0x3478BCu;
label_3478bc:
    // 0x3478bc: 0xae9201c8  sw          $s2, 0x1C8($s4)
    ctx->pc = 0x3478bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 456), GPR_U32(ctx, 18));
    // 0x3478c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3478c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3478c4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3478c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3478c8: 0xae8301c0  sw          $v1, 0x1C0($s4)
    ctx->pc = 0x3478c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 448), GPR_U32(ctx, 3));
    // 0x3478cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3478ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3478d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3478d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3478d4: 0xc0d21d8  jal         func_348760
    ctx->pc = 0x3478D4u;
    SET_GPR_U32(ctx, 31, 0x3478DCu);
    ctx->pc = 0x3478D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3478D4u;
            // 0x3478d8: 0xae8201c4  sw          $v0, 0x1C4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348760u;
    if (runtime->hasFunction(0x348760u)) {
        auto targetFn = runtime->lookupFunction(0x348760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3478DCu; }
        if (ctx->pc != 0x3478DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348760_0x348760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3478DCu; }
        if (ctx->pc != 0x3478DCu) { return; }
    }
    ctx->pc = 0x3478DCu;
label_3478dc:
    // 0x3478dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3478dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3478e0: 0x233182b  sltu        $v1, $s1, $s3
    ctx->pc = 0x3478e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3478e4: 0x1460ffa8  bnez        $v1, . + 4 + (-0x58 << 2)
    ctx->pc = 0x3478E4u;
    {
        const bool branch_taken_0x3478e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3478E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3478E4u;
            // 0x3478e8: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3478e4) {
            ctx->pc = 0x347788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_347788;
        }
    }
    ctx->pc = 0x3478ECu;
    // 0x3478ec: 0x0  nop
    ctx->pc = 0x3478ecu;
    // NOP
label_3478f0:
    // 0x3478f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3478f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3478f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3478f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3478f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3478f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3478fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3478fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x347900: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x347900u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x347904: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x347904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34790c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34790cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347910: 0x3e00008  jr          $ra
    ctx->pc = 0x347910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347910u;
            // 0x347914: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347918u;
    // 0x347918: 0x0  nop
    ctx->pc = 0x347918u;
    // NOP
    // 0x34791c: 0x0  nop
    ctx->pc = 0x34791cu;
    // NOP
}
