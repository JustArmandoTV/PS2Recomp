#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00448260
// Address: 0x448260 - 0x4483d0
void sub_00448260_0x448260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00448260_0x448260");
#endif

    switch (ctx->pc) {
        case 0x448290u: goto label_448290;
        case 0x448298u: goto label_448298;
        case 0x44831cu: goto label_44831c;
        case 0x448338u: goto label_448338;
        case 0x448348u: goto label_448348;
        case 0x448354u: goto label_448354;
        case 0x448360u: goto label_448360;
        case 0x448380u: goto label_448380;
        default: break;
    }

    ctx->pc = 0x448260u;

    // 0x448260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x448260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x448264: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x448264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x448268: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x448268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x44826c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x44826cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x448270: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x448270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x448274: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x448274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448278: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x448278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x44827c: 0x26510070  addiu       $s1, $s2, 0x70
    ctx->pc = 0x44827cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x448280: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x448280u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x448284: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x448284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x448288: 0xc112108  jal         func_448420
    ctx->pc = 0x448288u;
    SET_GPR_U32(ctx, 31, 0x448290u);
    ctx->pc = 0x44828Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448288u;
            // 0x44828c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x448420u;
    if (runtime->hasFunction(0x448420u)) {
        auto targetFn = runtime->lookupFunction(0x448420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448290u; }
        if (ctx->pc != 0x448290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00448420_0x448420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448290u; }
        if (ctx->pc != 0x448290u) { return; }
    }
    ctx->pc = 0x448290u;
label_448290:
    // 0x448290: 0xc1120f4  jal         func_4483D0
    ctx->pc = 0x448290u;
    SET_GPR_U32(ctx, 31, 0x448298u);
    ctx->pc = 0x448294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448290u;
            // 0x448294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4483D0u;
    if (runtime->hasFunction(0x4483D0u)) {
        auto targetFn = runtime->lookupFunction(0x4483D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448298u; }
        if (ctx->pc != 0x448298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004483D0_0x4483d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448298u; }
        if (ctx->pc != 0x448298u) { return; }
    }
    ctx->pc = 0x448298u;
label_448298:
    // 0x448298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x448298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44829c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x44829cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4482a0: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x4482a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4482a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4482a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4482a8: 0x0  nop
    ctx->pc = 0x4482a8u;
    // NOP
    // 0x4482ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4482acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4482b0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x4482B0u;
    {
        const bool branch_taken_0x4482b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4482b0) {
            ctx->pc = 0x4482B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4482B0u;
            // 0x4482b4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4482C8u;
            goto label_4482c8;
        }
    }
    ctx->pc = 0x4482B8u;
    // 0x4482b8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4482b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4482bc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4482bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4482c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4482C0u;
    {
        const bool branch_taken_0x4482c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4482C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4482C0u;
            // 0x4482c4: 0xc6410034  lwc1        $f1, 0x34($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4482c0) {
            ctx->pc = 0x4482E0u;
            goto label_4482e0;
        }
    }
    ctx->pc = 0x4482C8u;
label_4482c8:
    // 0x4482c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4482c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4482cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4482ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4482d0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4482d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4482d4: 0x0  nop
    ctx->pc = 0x4482d4u;
    // NOP
    // 0x4482d8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4482d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4482dc: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x4482dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4482e0:
    // 0x4482e0: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x4482e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x4482e4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4482e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4482e8: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x4482e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
    // 0x4482ec: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4482ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x4482f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4482f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4482f4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4482f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4482f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4482f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4482fc: 0x0  nop
    ctx->pc = 0x4482fcu;
    // NOP
    // 0x448300: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x448300u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x448304: 0xc64d0038  lwc1        $f13, 0x38($s2)
    ctx->pc = 0x448304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x448308: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x448308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x44830c: 0x0  nop
    ctx->pc = 0x44830cu;
    // NOP
    // 0x448310: 0x0  nop
    ctx->pc = 0x448310u;
    // NOP
    // 0x448314: 0xc122b58  jal         func_48AD60
    ctx->pc = 0x448314u;
    SET_GPR_U32(ctx, 31, 0x44831Cu);
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44831Cu; }
        if (ctx->pc != 0x44831Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44831Cu; }
        if (ctx->pc != 0x44831Cu) { return; }
    }
    ctx->pc = 0x44831Cu;
label_44831c:
    // 0x44831c: 0xc6140150  lwc1        $f20, 0x150($s0)
    ctx->pc = 0x44831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x448320: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x448320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x448324: 0x26130030  addiu       $s3, $s0, 0x30
    ctx->pc = 0x448324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x448328: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x448328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44832c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x44832cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x448330: 0xc0d87e0  jal         func_361F80
    ctx->pc = 0x448330u;
    SET_GPR_U32(ctx, 31, 0x448338u);
    ctx->pc = 0x448334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448330u;
            // 0x448334: 0xae020150  sw          $v0, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361F80u;
    if (runtime->hasFunction(0x361F80u)) {
        auto targetFn = runtime->lookupFunction(0x361F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448338u; }
        if (ctx->pc != 0x448338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361F80_0x361f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448338u; }
        if (ctx->pc != 0x448338u) { return; }
    }
    ctx->pc = 0x448338u;
label_448338:
    // 0x448338: 0x26040200  addiu       $a0, $s0, 0x200
    ctx->pc = 0x448338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x44833c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x44833cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x448340: 0xc04cc04  jal         func_133010
    ctx->pc = 0x448340u;
    SET_GPR_U32(ctx, 31, 0x448348u);
    ctx->pc = 0x448344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448340u;
            // 0x448344: 0xe6740120  swc1        $f20, 0x120($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 288), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448348u; }
        if (ctx->pc != 0x448348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448348u; }
        if (ctx->pc != 0x448348u) { return; }
    }
    ctx->pc = 0x448348u;
label_448348:
    // 0x448348: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x448348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x44834c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x44834Cu;
    SET_GPR_U32(ctx, 31, 0x448354u);
    ctx->pc = 0x448350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44834Cu;
            // 0x448350: 0x266500f0  addiu       $a1, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448354u; }
        if (ctx->pc != 0x448354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448354u; }
        if (ctx->pc != 0x448354u) { return; }
    }
    ctx->pc = 0x448354u;
label_448354:
    // 0x448354: 0x26650090  addiu       $a1, $s3, 0x90
    ctx->pc = 0x448354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x448358: 0xc04c720  jal         func_131C80
    ctx->pc = 0x448358u;
    SET_GPR_U32(ctx, 31, 0x448360u);
    ctx->pc = 0x44835Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448358u;
            // 0x44835c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448360u; }
        if (ctx->pc != 0x448360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448360u; }
        if (ctx->pc != 0x448360u) { return; }
    }
    ctx->pc = 0x448360u;
label_448360:
    // 0x448360: 0xae1201c8  sw          $s2, 0x1C8($s0)
    ctx->pc = 0x448360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 18));
    // 0x448364: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x448364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x448368: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x448368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x44836c: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x44836cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x448370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448374: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x448374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448378: 0xc112100  jal         func_448400
    ctx->pc = 0x448378u;
    SET_GPR_U32(ctx, 31, 0x448380u);
    ctx->pc = 0x44837Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448378u;
            // 0x44837c: 0xae0201c4  sw          $v0, 0x1C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x448400u;
    if (runtime->hasFunction(0x448400u)) {
        auto targetFn = runtime->lookupFunction(0x448400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448380u; }
        if (ctx->pc != 0x448380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00448400_0x448400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448380u; }
        if (ctx->pc != 0x448380u) { return; }
    }
    ctx->pc = 0x448380u;
label_448380:
    // 0x448380: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x448380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x448384: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x448384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x448388: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x448388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44838c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x44838cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x448390: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x448390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x448394: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x448394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x448398: 0x3e00008  jr          $ra
    ctx->pc = 0x448398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44839Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448398u;
            // 0x44839c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4483A0u;
    // 0x4483a0: 0x8ca30db0  lw          $v1, 0xDB0($a1)
    ctx->pc = 0x4483a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
    // 0x4483a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4483A4u;
    {
        const bool branch_taken_0x4483a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4483a4) {
            ctx->pc = 0x4483B4u;
            goto label_4483b4;
        }
    }
    ctx->pc = 0x4483ACu;
    // 0x4483ac: 0x8ca30d60  lw          $v1, 0xD60($a1)
    ctx->pc = 0x4483acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3424)));
    // 0x4483b0: 0xa060001c  sb          $zero, 0x1C($v1)
    ctx->pc = 0x4483b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 0));
label_4483b4:
    // 0x4483b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4483B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4483BCu;
    // 0x4483bc: 0x0  nop
    ctx->pc = 0x4483bcu;
    // NOP
    // 0x4483c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4483C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4483C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4483C0u;
            // 0x4483c4: 0x24024e48  addiu       $v0, $zero, 0x4E48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4483C8u;
    // 0x4483c8: 0x0  nop
    ctx->pc = 0x4483c8u;
    // NOP
    // 0x4483cc: 0x0  nop
    ctx->pc = 0x4483ccu;
    // NOP
}
