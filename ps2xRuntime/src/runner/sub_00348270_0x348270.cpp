#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00348270
// Address: 0x348270 - 0x3483f0
void sub_00348270_0x348270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348270_0x348270");
#endif

    switch (ctx->pc) {
        case 0x348294u: goto label_348294;
        case 0x3482a8u: goto label_3482a8;
        case 0x3482b0u: goto label_3482b0;
        case 0x348310u: goto label_348310;
        case 0x34831cu: goto label_34831c;
        case 0x34833cu: goto label_34833c;
        case 0x348348u: goto label_348348;
        case 0x348350u: goto label_348350;
        case 0x3483a4u: goto label_3483a4;
        case 0x3483b0u: goto label_3483b0;
        case 0x3483d0u: goto label_3483d0;
        default: break;
    }

    ctx->pc = 0x348270u;

    // 0x348270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x348270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x348274: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x348274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x348278: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x348278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34827c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34827cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x348280: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x348280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348284: 0x265100a4  addiu       $s1, $s2, 0xA4
    ctx->pc = 0x348284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 164));
    // 0x348288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x348288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34828c: 0xc0d2240  jal         func_348900
    ctx->pc = 0x34828Cu;
    SET_GPR_U32(ctx, 31, 0x348294u);
    ctx->pc = 0x348290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34828Cu;
            // 0x348290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348900u;
    if (runtime->hasFunction(0x348900u)) {
        auto targetFn = runtime->lookupFunction(0x348900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348294u; }
        if (ctx->pc != 0x348294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348900_0x348900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348294u; }
        if (ctx->pc != 0x348294u) { return; }
    }
    ctx->pc = 0x348294u;
label_348294:
    // 0x348294: 0x26440084  addiu       $a0, $s2, 0x84
    ctx->pc = 0x348294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
    // 0x348298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x348298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34829c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34829cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3482a0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3482A0u;
    SET_GPR_U32(ctx, 31, 0x3482A8u);
    ctx->pc = 0x3482A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3482A0u;
            // 0x3482a4: 0xae400080  sw          $zero, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3482A8u; }
        if (ctx->pc != 0x3482A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3482A8u; }
        if (ctx->pc != 0x3482A8u) { return; }
    }
    ctx->pc = 0x3482A8u;
label_3482a8:
    // 0x3482a8: 0xc0d21cc  jal         func_348730
    ctx->pc = 0x3482A8u;
    SET_GPR_U32(ctx, 31, 0x3482B0u);
    ctx->pc = 0x3482ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3482A8u;
            // 0x3482ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348730u;
    if (runtime->hasFunction(0x348730u)) {
        auto targetFn = runtime->lookupFunction(0x348730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3482B0u; }
        if (ctx->pc != 0x3482B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348730_0x348730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3482B0u; }
        if (ctx->pc != 0x3482B0u) { return; }
    }
    ctx->pc = 0x3482B0u;
label_3482b0:
    // 0x3482b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3482b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3482b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3482b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3482b8: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x3482b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3482bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3482bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3482c0: 0x0  nop
    ctx->pc = 0x3482c0u;
    // NOP
    // 0x3482c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3482c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3482c8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3482C8u;
    {
        const bool branch_taken_0x3482c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3482c8) {
            ctx->pc = 0x3482CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3482C8u;
            // 0x3482cc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3482E0u;
            goto label_3482e0;
        }
    }
    ctx->pc = 0x3482D0u;
    // 0x3482d0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3482d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3482d4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3482d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3482d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3482D8u;
    {
        const bool branch_taken_0x3482d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3482DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3482D8u;
            // 0x3482dc: 0x3c023f66  lui         $v0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3482d8) {
            ctx->pc = 0x3482F8u;
            goto label_3482f8;
        }
    }
    ctx->pc = 0x3482E0u;
label_3482e0:
    // 0x3482e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3482e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3482e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3482e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3482e8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3482e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3482ec: 0x0  nop
    ctx->pc = 0x3482ecu;
    // NOP
    // 0x3482f0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3482f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3482f4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x3482f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_3482f8:
    // 0x3482f8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x3482f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x3482fc: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x3482fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x348300: 0xc64d0038  lwc1        $f13, 0x38($s2)
    ctx->pc = 0x348300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x348304: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x348304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x348308: 0xc122b58  jal         func_48AD60
    ctx->pc = 0x348308u;
    SET_GPR_U32(ctx, 31, 0x348310u);
    ctx->pc = 0x34830Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348308u;
            // 0x34830c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348310u; }
        if (ctx->pc != 0x348310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348310u; }
        if (ctx->pc != 0x348310u) { return; }
    }
    ctx->pc = 0x348310u;
label_348310:
    // 0x348310: 0x260401d0  addiu       $a0, $s0, 0x1D0
    ctx->pc = 0x348310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x348314: 0xc04cc04  jal         func_133010
    ctx->pc = 0x348314u;
    SET_GPR_U32(ctx, 31, 0x34831Cu);
    ctx->pc = 0x348318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348314u;
            // 0x348318: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34831Cu; }
        if (ctx->pc != 0x34831Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34831Cu; }
        if (ctx->pc != 0x34831Cu) { return; }
    }
    ctx->pc = 0x34831Cu;
label_34831c:
    // 0x34831c: 0xae1201c8  sw          $s2, 0x1C8($s0)
    ctx->pc = 0x34831cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 18));
    // 0x348320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x348320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348324: 0xae0201c0  sw          $v0, 0x1C0($s0)
    ctx->pc = 0x348324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 2));
    // 0x348328: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x348328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x34832c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x34832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x348330: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x348330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x348334: 0xc04cc04  jal         func_133010
    ctx->pc = 0x348334u;
    SET_GPR_U32(ctx, 31, 0x34833Cu);
    ctx->pc = 0x348338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348334u;
            // 0x348338: 0xae0201c4  sw          $v0, 0x1C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34833Cu; }
        if (ctx->pc != 0x34833Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34833Cu; }
        if (ctx->pc != 0x34833Cu) { return; }
    }
    ctx->pc = 0x34833Cu;
label_34833c:
    // 0x34833c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34833cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348340: 0xc0d21d8  jal         func_348760
    ctx->pc = 0x348340u;
    SET_GPR_U32(ctx, 31, 0x348348u);
    ctx->pc = 0x348344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348340u;
            // 0x348344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348760u;
    if (runtime->hasFunction(0x348760u)) {
        auto targetFn = runtime->lookupFunction(0x348760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348348u; }
        if (ctx->pc != 0x348348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348760_0x348760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348348u; }
        if (ctx->pc != 0x348348u) { return; }
    }
    ctx->pc = 0x348348u;
label_348348:
    // 0x348348: 0xc0d21cc  jal         func_348730
    ctx->pc = 0x348348u;
    SET_GPR_U32(ctx, 31, 0x348350u);
    ctx->pc = 0x34834Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348348u;
            // 0x34834c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348730u;
    if (runtime->hasFunction(0x348730u)) {
        auto targetFn = runtime->lookupFunction(0x348730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348350u; }
        if (ctx->pc != 0x348350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348730_0x348730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348350u; }
        if (ctx->pc != 0x348350u) { return; }
    }
    ctx->pc = 0x348350u;
label_348350:
    // 0x348350: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x348350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348354: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x348354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x348358: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x348358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x34835c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x34835cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x348360: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x348360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x348364: 0x24a52f18  addiu       $a1, $a1, 0x2F18
    ctx->pc = 0x348364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12056));
    // 0x348368: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x348368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34836c: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x34836cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
    // 0x348370: 0x8cc60968  lw          $a2, 0x968($a2)
    ctx->pc = 0x348370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
    // 0x348374: 0x3444097b  ori         $a0, $v0, 0x97B
    ctx->pc = 0x348374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
    // 0x348378: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x348378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x34837c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x34837cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x348380: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x348380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x348384: 0x38c20009  xori        $v0, $a2, 0x9
    ctx->pc = 0x348384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)9);
    // 0x348388: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x348388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x34838c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x34838cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x348390: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x348390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x348394: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x348394u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348398: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x348398u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34839c: 0xc122b58  jal         func_48AD60
    ctx->pc = 0x34839Cu;
    SET_GPR_U32(ctx, 31, 0x3483A4u);
    ctx->pc = 0x3483A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34839Cu;
            // 0x3483a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3483A4u; }
        if (ctx->pc != 0x3483A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3483A4u; }
        if (ctx->pc != 0x3483A4u) { return; }
    }
    ctx->pc = 0x3483A4u;
label_3483a4:
    // 0x3483a4: 0x260401d0  addiu       $a0, $s0, 0x1D0
    ctx->pc = 0x3483a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x3483a8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3483A8u;
    SET_GPR_U32(ctx, 31, 0x3483B0u);
    ctx->pc = 0x3483ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3483A8u;
            // 0x3483ac: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3483B0u; }
        if (ctx->pc != 0x3483B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3483B0u; }
        if (ctx->pc != 0x3483B0u) { return; }
    }
    ctx->pc = 0x3483B0u;
label_3483b0:
    // 0x3483b0: 0xae1201c8  sw          $s2, 0x1C8($s0)
    ctx->pc = 0x3483b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 18));
    // 0x3483b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3483b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3483b8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3483b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3483bc: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x3483bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x3483c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3483c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3483c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3483c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3483c8: 0xc0d21d8  jal         func_348760
    ctx->pc = 0x3483C8u;
    SET_GPR_U32(ctx, 31, 0x3483D0u);
    ctx->pc = 0x3483CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3483C8u;
            // 0x3483cc: 0xae0201c4  sw          $v0, 0x1C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348760u;
    if (runtime->hasFunction(0x348760u)) {
        auto targetFn = runtime->lookupFunction(0x348760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3483D0u; }
        if (ctx->pc != 0x3483D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348760_0x348760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3483D0u; }
        if (ctx->pc != 0x3483D0u) { return; }
    }
    ctx->pc = 0x3483D0u;
label_3483d0:
    // 0x3483d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3483d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3483d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3483d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3483d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3483d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3483dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3483dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3483e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3483E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3483E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3483E0u;
            // 0x3483e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3483E8u;
    // 0x3483e8: 0x0  nop
    ctx->pc = 0x3483e8u;
    // NOP
    // 0x3483ec: 0x0  nop
    ctx->pc = 0x3483ecu;
    // NOP
}
