#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039BAC0
// Address: 0x39bac0 - 0x39bcf0
void sub_0039BAC0_0x39bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BAC0_0x39bac0");
#endif

    switch (ctx->pc) {
        case 0x39baf0u: goto label_39baf0;
        case 0x39bb24u: goto label_39bb24;
        case 0x39bb34u: goto label_39bb34;
        case 0x39bb50u: goto label_39bb50;
        case 0x39bb5cu: goto label_39bb5c;
        case 0x39bb6cu: goto label_39bb6c;
        case 0x39bb7cu: goto label_39bb7c;
        case 0x39bb88u: goto label_39bb88;
        case 0x39bb98u: goto label_39bb98;
        case 0x39bc3cu: goto label_39bc3c;
        case 0x39bc80u: goto label_39bc80;
        case 0x39bc98u: goto label_39bc98;
        case 0x39bcccu: goto label_39bccc;
        default: break;
    }

    ctx->pc = 0x39bac0u;

    // 0x39bac0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x39bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x39bac4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x39bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x39bac8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x39bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x39bacc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39baccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x39bad0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39bad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x39bad4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39bad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39bad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39bad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39badc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39badcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39bae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39bae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bae4: 0x8c84009c  lw          $a0, 0x9C($a0)
    ctx->pc = 0x39bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x39bae8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x39BAE8u;
    SET_GPR_U32(ctx, 31, 0x39BAF0u);
    ctx->pc = 0x39BAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39BAE8u;
            // 0x39baec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BAF0u; }
        if (ctx->pc != 0x39BAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BAF0u; }
        if (ctx->pc != 0x39BAF0u) { return; }
    }
    ctx->pc = 0x39BAF0u;
label_39baf0:
    // 0x39baf0: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x39baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x39baf4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x39baf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39baf8: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x39baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x39bafc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x39bafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x39bb00: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x39bb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x39bb04: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x39bb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39bb08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x39bb08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39bb0c: 0x0  nop
    ctx->pc = 0x39bb0cu;
    // NOP
    // 0x39bb10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x39bb10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x39bb14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39bb14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x39bb18: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x39bb18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x39bb1c: 0xc04f2b8  jal         func_13CAE0
    ctx->pc = 0x39BB1Cu;
    SET_GPR_U32(ctx, 31, 0x39BB24u);
    ctx->pc = 0x39BB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39BB1Cu;
            // 0x39bb20: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BB24u; }
        if (ctx->pc != 0x39BB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BB24u; }
        if (ctx->pc != 0x39BB24u) { return; }
    }
    ctx->pc = 0x39BB24u;
label_39bb24:
    // 0x39bb24: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x39bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x39bb28: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x39bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x39bb2c: 0xc04ce78  jal         func_1339E0
    ctx->pc = 0x39BB2Cu;
    SET_GPR_U32(ctx, 31, 0x39BB34u);
    ctx->pc = 0x39BB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39BB2Cu;
            // 0x39bb30: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1339E0u;
    if (runtime->hasFunction(0x1339E0u)) {
        auto targetFn = runtime->lookupFunction(0x1339E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BB34u; }
        if (ctx->pc != 0x39BB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001339E0_0x1339e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BB34u; }
        if (ctx->pc != 0x39BB34u) { return; }
    }
    ctx->pc = 0x39BB34u;
label_39bb34:
    // 0x39bb34: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x39bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x39bb38: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x39bb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x39bb3c: 0xc44c0024  lwc1        $f12, 0x24($v0)
    ctx->pc = 0x39bb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x39bb40: 0xc44d0028  lwc1        $f13, 0x28($v0)
    ctx->pc = 0x39bb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x39bb44: 0xc44e002c  lwc1        $f14, 0x2C($v0)
    ctx->pc = 0x39bb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x39bb48: 0xc04ce50  jal         func_133940
    ctx->pc = 0x39BB48u;
    SET_GPR_U32(ctx, 31, 0x39BB50u);
    ctx->pc = 0x39BB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39BB48u;
            // 0x39bb4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BB50u; }
        if (ctx->pc != 0x39BB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BB50u; }
        if (ctx->pc != 0x39BB50u) { return; }
    }
    ctx->pc = 0x39BB50u;
label_39bb50:
    // 0x39bb50: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x39bb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x39bb54: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x39BB54u;
    SET_GPR_U32(ctx, 31, 0x39BB5Cu);
    ctx->pc = 0x39BB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39BB54u;
            // 0x39bb58: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BB5Cu; }
        if (ctx->pc != 0x39BB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BB5Cu; }
        if (ctx->pc != 0x39BB5Cu) { return; }
    }
    ctx->pc = 0x39BB5Cu;
label_39bb5c:
    // 0x39bb5c: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x39bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x39bb60: 0x8e350090  lw          $s5, 0x90($s1)
    ctx->pc = 0x39bb60u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x39bb64: 0x18600030  blez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x39BB64u;
    {
        const bool branch_taken_0x39bb64 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x39BB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BB64u;
            // 0x39bb68: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bb64) {
            ctx->pc = 0x39BC28u;
            goto label_39bc28;
        }
    }
    ctx->pc = 0x39BB6Cu;
label_39bb6c:
    // 0x39bb6c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x39bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x39bb70: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x39bb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x39bb74: 0xc04cca0  jal         func_133280
    ctx->pc = 0x39BB74u;
    SET_GPR_U32(ctx, 31, 0x39BB7Cu);
    ctx->pc = 0x39BB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39BB74u;
            // 0x39bb78: 0x26a60010  addiu       $a2, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BB7Cu; }
        if (ctx->pc != 0x39BB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BB7Cu; }
        if (ctx->pc != 0x39BB7Cu) { return; }
    }
    ctx->pc = 0x39BB7Cu;
label_39bb7c:
    // 0x39bb7c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x39bb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39bb80: 0xc049514  jal         func_125450
    ctx->pc = 0x39BB80u;
    SET_GPR_U32(ctx, 31, 0x39BB88u);
    ctx->pc = 0x39BB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39BB80u;
            // 0x39bb84: 0x46000302  mul.s       $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BB88u; }
        if (ctx->pc != 0x39BB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BB88u; }
        if (ctx->pc != 0x39BB88u) { return; }
    }
    ctx->pc = 0x39BB88u;
label_39bb88:
    // 0x39bb88: 0x3c033fe8  lui         $v1, 0x3FE8
    ctx->pc = 0x39bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16360 << 16));
    // 0x39bb8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39bb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bb90: 0xc040220  jal         func_100880
    ctx->pc = 0x39BB90u;
    SET_GPR_U32(ctx, 31, 0x39BB98u);
    ctx->pc = 0x39BB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39BB90u;
            // 0x39bb94: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100880u;
    if (runtime->hasFunction(0x100880u)) {
        auto targetFn = runtime->lookupFunction(0x100880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BB98u; }
        if (ctx->pc != 0x39BB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100880_0x100880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BB98u; }
        if (ctx->pc != 0x39BB98u) { return; }
    }
    ctx->pc = 0x39BB98u;
label_39bb98:
    // 0x39bb98: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x39BB98u;
    {
        const bool branch_taken_0x39bb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bb98) {
            ctx->pc = 0x39BC08u;
            goto label_39bc08;
        }
    }
    ctx->pc = 0x39BBA0u;
    // 0x39bba0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x39bba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39bba4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x39bba8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x39bba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39bbac: 0x0  nop
    ctx->pc = 0x39bbacu;
    // NOP
    // 0x39bbb0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x39bbb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x39bbb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x39bbb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39bbb8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x39BBB8u;
    {
        const bool branch_taken_0x39bbb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39bbb8) {
            ctx->pc = 0x39BC08u;
            goto label_39bc08;
        }
    }
    ctx->pc = 0x39BBC0u;
    // 0x39bbc0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x39bbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39bbc4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x39bbc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x39bbc8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x39bbc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39bbcc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x39BBCCu;
    {
        const bool branch_taken_0x39bbcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39bbcc) {
            ctx->pc = 0x39BC08u;
            goto label_39bc08;
        }
    }
    ctx->pc = 0x39BBD4u;
    // 0x39bbd4: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x39bbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x39bbd8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39BBD8u;
    {
        const bool branch_taken_0x39bbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39bbd8) {
            ctx->pc = 0x39BBF8u;
            goto label_39bbf8;
        }
    }
    ctx->pc = 0x39BBE0u;
    // 0x39bbe0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39bbe4: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x39bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x39bbe8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x39bbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x39bbec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39BBECu;
    {
        const bool branch_taken_0x39bbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BBECu;
            // 0x39bbf0: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bbec) {
            ctx->pc = 0x39BC10u;
            goto label_39bc10;
        }
    }
    ctx->pc = 0x39BBF4u;
    // 0x39bbf4: 0x0  nop
    ctx->pc = 0x39bbf4u;
    // NOP
label_39bbf8:
    // 0x39bbf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39bbfc: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x39bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x39bc00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39BC00u;
    {
        const bool branch_taken_0x39bc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BC00u;
            // 0x39bc04: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bc00) {
            ctx->pc = 0x39BC10u;
            goto label_39bc10;
        }
    }
    ctx->pc = 0x39BC08u;
label_39bc08:
    // 0x39bc08: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x39bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x39bc0c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x39bc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_39bc10:
    // 0x39bc10: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x39bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x39bc14: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x39bc14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x39bc18: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x39bc18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39bc1c: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x39BC1Cu;
    {
        const bool branch_taken_0x39bc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39BC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BC1Cu;
            // 0x39bc20: 0x26b501b0  addiu       $s5, $s5, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bc1c) {
            ctx->pc = 0x39BB6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39bb6c;
        }
    }
    ctx->pc = 0x39BC24u;
    // 0x39bc24: 0x0  nop
    ctx->pc = 0x39bc24u;
    // NOP
label_39bc28:
    // 0x39bc28: 0x52400026  beql        $s2, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x39BC28u;
    {
        const bool branch_taken_0x39bc28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bc28) {
            ctx->pc = 0x39BC2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39BC28u;
            // 0x39bc2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39BCC4u;
            goto label_39bcc4;
        }
    }
    ctx->pc = 0x39BC30u;
    // 0x39bc30: 0x8e330090  lw          $s3, 0x90($s1)
    ctx->pc = 0x39bc30u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x39bc34: 0x18600020  blez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x39BC34u;
    {
        const bool branch_taken_0x39bc34 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x39BC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BC34u;
            // 0x39bc38: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bc34) {
            ctx->pc = 0x39BCB8u;
            goto label_39bcb8;
        }
    }
    ctx->pc = 0x39BC3Cu;
label_39bc3c:
    // 0x39bc3c: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x39bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x39bc40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39bc44: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x39bc44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39bc48: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x39BC48u;
    {
        const bool branch_taken_0x39bc48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x39bc48) {
            ctx->pc = 0x39BC88u;
            goto label_39bc88;
        }
    }
    ctx->pc = 0x39BC50u;
    // 0x39bc50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39bc54: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39BC54u;
    {
        const bool branch_taken_0x39bc54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x39bc54) {
            ctx->pc = 0x39BC70u;
            goto label_39bc70;
        }
    }
    ctx->pc = 0x39BC5Cu;
    // 0x39bc5c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x39BC5Cu;
    {
        const bool branch_taken_0x39bc5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bc5c) {
            ctx->pc = 0x39BC98u;
            goto label_39bc98;
        }
    }
    ctx->pc = 0x39BC64u;
    // 0x39bc64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39BC64u;
    {
        const bool branch_taken_0x39bc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bc64) {
            ctx->pc = 0x39BC98u;
            goto label_39bc98;
        }
    }
    ctx->pc = 0x39BC6Cu;
    // 0x39bc6c: 0x0  nop
    ctx->pc = 0x39bc6cu;
    // NOP
label_39bc70:
    // 0x39bc70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39bc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bc74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39bc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bc78: 0xc0e730c  jal         func_39CC30
    ctx->pc = 0x39BC78u;
    SET_GPR_U32(ctx, 31, 0x39BC80u);
    ctx->pc = 0x39BC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39BC78u;
            // 0x39bc7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39CC30u;
    if (runtime->hasFunction(0x39CC30u)) {
        auto targetFn = runtime->lookupFunction(0x39CC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BC80u; }
        if (ctx->pc != 0x39BC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039CC30_0x39cc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BC80u; }
        if (ctx->pc != 0x39BC80u) { return; }
    }
    ctx->pc = 0x39BC80u;
label_39bc80:
    // 0x39bc80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39BC80u;
    {
        const bool branch_taken_0x39bc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bc80) {
            ctx->pc = 0x39BC98u;
            goto label_39bc98;
        }
    }
    ctx->pc = 0x39BC88u;
label_39bc88:
    // 0x39bc88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39bc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bc8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39bc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bc90: 0xc0e730c  jal         func_39CC30
    ctx->pc = 0x39BC90u;
    SET_GPR_U32(ctx, 31, 0x39BC98u);
    ctx->pc = 0x39BC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39BC90u;
            // 0x39bc94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39CC30u;
    if (runtime->hasFunction(0x39CC30u)) {
        auto targetFn = runtime->lookupFunction(0x39CC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BC98u; }
        if (ctx->pc != 0x39BC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039CC30_0x39cc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BC98u; }
        if (ctx->pc != 0x39BC98u) { return; }
    }
    ctx->pc = 0x39BC98u;
label_39bc98:
    // 0x39bc98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39bc9c: 0xae620140  sw          $v0, 0x140($s3)
    ctx->pc = 0x39bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 320), GPR_U32(ctx, 2));
    // 0x39bca0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39bca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x39bca4: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x39bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x39bca8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x39bca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x39bcac: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x39BCACu;
    {
        const bool branch_taken_0x39bcac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39BCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BCACu;
            // 0x39bcb0: 0x267301b0  addiu       $s3, $s3, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bcac) {
            ctx->pc = 0x39BC3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39bc3c;
        }
    }
    ctx->pc = 0x39BCB4u;
    // 0x39bcb4: 0x0  nop
    ctx->pc = 0x39bcb4u;
    // NOP
label_39bcb8:
    // 0x39bcb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39bcbc: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x39bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    // 0x39bcc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39bcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39bcc4:
    // 0x39bcc4: 0xc04008c  jal         func_100230
    ctx->pc = 0x39BCC4u;
    SET_GPR_U32(ctx, 31, 0x39BCCCu);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BCCCu; }
        if (ctx->pc != 0x39BCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BCCCu; }
        if (ctx->pc != 0x39BCCCu) { return; }
    }
    ctx->pc = 0x39BCCCu;
label_39bccc:
    // 0x39bccc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x39bcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39bcd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39bcd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39bcd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39bcd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39bcd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39bcd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39bcdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39bcdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39bce0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39bce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39bce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39bce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39bce8: 0x3e00008  jr          $ra
    ctx->pc = 0x39BCE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BCE8u;
            // 0x39bcec: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39BCF0u;
}
