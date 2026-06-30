#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00441DA0
// Address: 0x441da0 - 0x442230
void sub_00441DA0_0x441da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00441DA0_0x441da0");
#endif

    switch (ctx->pc) {
        case 0x441ea0u: goto label_441ea0;
        case 0x441ef4u: goto label_441ef4;
        case 0x442120u: goto label_442120;
        case 0x442200u: goto label_442200;
        default: break;
    }

    ctx->pc = 0x441da0u;

    // 0x441da0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x441da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x441da4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x441da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x441da8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x441da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x441dac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x441dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x441db0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x441db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x441db4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x441db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x441db8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x441db8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441dbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x441dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x441dc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x441dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x441dc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x441dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x441dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x441dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x441dcc: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x441dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x441dd0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x441dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x441dd4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x441dd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x441dd8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x441dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x441ddc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x441ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x441de0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x441de0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x441de4: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x441de4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x441de8: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x441de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x441dec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x441DECu;
    {
        const bool branch_taken_0x441dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x441DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441DECu;
            // 0x441df0: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441dec) {
            ctx->pc = 0x441DF8u;
            goto label_441df8;
        }
    }
    ctx->pc = 0x441DF4u;
    // 0x441df4: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x441df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_441df8:
    // 0x441df8: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x441df8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
    // 0x441dfc: 0x3c160064  lui         $s6, 0x64
    ctx->pc = 0x441dfcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
    // 0x441e00: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x441e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x441e04: 0x26109bc0  addiu       $s0, $s0, -0x6440
    ctx->pc = 0x441e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941632));
    // 0x441e08: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x441e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x441e0c: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x441e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x441e10: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x441e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x441e14: 0x26d62100  addiu       $s6, $s6, 0x2100
    ctx->pc = 0x441e14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8448));
    // 0x441e18: 0x84652100  lh          $a1, 0x2100($v1)
    ctx->pc = 0x441e18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8448)));
    // 0x441e1c: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x441e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x441e20: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x441e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x441e24: 0x640700ff  daddiu      $a3, $zero, 0xFF
    ctx->pc = 0x441e24u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
    // 0x441e28: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x441e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x441e2c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x441e2cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x441e30: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x441e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x441e34: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x441e34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x441e38: 0x84632102  lh          $v1, 0x2102($v1)
    ctx->pc = 0x441e38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8450)));
    // 0x441e3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x441e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x441e40: 0x0  nop
    ctx->pc = 0x441e40u;
    // NOP
    // 0x441e44: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x441e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x441e48: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x441e48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x441e4c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x441e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x441e50: 0x46042983  div.s       $f6, $f5, $f4
    ctx->pc = 0x441e50u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[6] = ctx->f[5] / ctx->f[4];
    // 0x441e54: 0x460219c3  div.s       $f7, $f3, $f2
    ctx->pc = 0x441e54u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[7] = ctx->f[3] / ctx->f[2];
    // 0x441e58: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x441e58u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x441e5c: 0x0  nop
    ctx->pc = 0x441e5cu;
    // NOP
    // 0x441e60: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x441e60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x441e64: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x441e64u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x441e68: 0x0  nop
    ctx->pc = 0x441e68u;
    // NOP
    // 0x441e6c: 0x0  nop
    ctx->pc = 0x441e6cu;
    // NOP
    // 0x441e70: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x441E70u;
    {
        const bool branch_taken_0x441e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x441e70) {
            ctx->pc = 0x441E88u;
            goto label_441e88;
        }
    }
    ctx->pc = 0x441E78u;
    // 0x441e78: 0x8ea3003c  lw          $v1, 0x3C($s5)
    ctx->pc = 0x441e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x441e7c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x441E7Cu;
    {
        const bool branch_taken_0x441e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x441e7c) {
            ctx->pc = 0x441E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x441E7Cu;
            // 0x441e80: 0x30f700ff  andi        $s7, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x441E8Cu;
            goto label_441e8c;
        }
    }
    ctx->pc = 0x441E84u;
    // 0x441e84: 0x90670116  lbu         $a3, 0x116($v1)
    ctx->pc = 0x441e84u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
label_441e88:
    // 0x441e88: 0x30f700ff  andi        $s7, $a3, 0xFF
    ctx->pc = 0x441e88u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_441e8c:
    // 0x441e8c: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x441e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x441e90: 0x2e32825  or          $a1, $s7, $v1
    ctx->pc = 0x441e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x441e94: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x441e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x441e98: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x441E98u;
    {
        const bool branch_taken_0x441e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x441E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441E98u;
            // 0x441e9c: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441e98) {
            ctx->pc = 0x441EBCu;
            goto label_441ebc;
        }
    }
    ctx->pc = 0x441EA0u;
label_441ea0:
    // 0x441ea0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x441ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x441ea4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x441ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x441ea8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x441ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x441eac: 0x0  nop
    ctx->pc = 0x441eacu;
    // NOP
    // 0x441eb0: 0x0  nop
    ctx->pc = 0x441eb0u;
    // NOP
    // 0x441eb4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x441EB4u;
    {
        const bool branch_taken_0x441eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x441eb4) {
            ctx->pc = 0x441EA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_441ea0;
        }
    }
    ctx->pc = 0x441EBCu;
label_441ebc:
    // 0x441ebc: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x441ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x441ec0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x441ec0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441ec4: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x441ec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x441ec8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x441ec8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441ecc: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x441eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x441ed0: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x441ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
    // 0x441ed4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x441ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x441ed8: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x441ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x441edc: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x441edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x441ee0: 0xafa500d4  sw          $a1, 0xD4($sp)
    ctx->pc = 0x441ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
    // 0x441ee4: 0xe7a700b4  swc1        $f7, 0xB4($sp)
    ctx->pc = 0x441ee4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x441ee8: 0xe7a700dc  swc1        $f7, 0xDC($sp)
    ctx->pc = 0x441ee8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x441eec: 0xe7a600c4  swc1        $f6, 0xC4($sp)
    ctx->pc = 0x441eecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x441ef0: 0xe7a600d8  swc1        $f6, 0xD8($sp)
    ctx->pc = 0x441ef0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_441ef4:
    // 0x441ef4: 0x8ea40038  lw          $a0, 0x38($s5)
    ctx->pc = 0x441ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x441ef8: 0x2663000c  addiu       $v1, $s3, 0xC
    ctx->pc = 0x441ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x441efc: 0x291082a  slt         $at, $s4, $s1
    ctx->pc = 0x441efcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x441f00: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x441f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x441f04: 0x14200086  bnez        $at, . + 4 + (0x86 << 2)
    ctx->pc = 0x441F04u;
    {
        const bool branch_taken_0x441f04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x441F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441F04u;
            // 0x441f08: 0x933021  addu        $a2, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441f04) {
            ctx->pc = 0x442120u;
            goto label_442120;
        }
    }
    ctx->pc = 0x441F0Cu;
    // 0x441f0c: 0x16340020  bne         $s1, $s4, . + 4 + (0x20 << 2)
    ctx->pc = 0x441F0Cu;
    {
        const bool branch_taken_0x441f0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        if (branch_taken_0x441f0c) {
            ctx->pc = 0x441F90u;
            goto label_441f90;
        }
    }
    ctx->pc = 0x441F14u;
    // 0x441f14: 0x86a2002c  lh          $v0, 0x2C($s5)
    ctx->pc = 0x441f14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x441f18: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x441f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x441f1c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x441f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x441f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x441f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x441f24: 0x0  nop
    ctx->pc = 0x441f24u;
    // NOP
    // 0x441f28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x441f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x441f2c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x441f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x441f30: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x441f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x441f34: 0x86a2002e  lh          $v0, 0x2E($s5)
    ctx->pc = 0x441f34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 46)));
    // 0x441f38: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x441f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x441f3c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x441f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x441f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x441f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x441f44: 0x0  nop
    ctx->pc = 0x441f44u;
    // NOP
    // 0x441f48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x441f48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x441f4c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x441f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x441f50: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x441f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x441f54: 0x86a20030  lh          $v0, 0x30($s5)
    ctx->pc = 0x441f54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x441f58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x441f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x441f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x441f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x441f60: 0x0  nop
    ctx->pc = 0x441f60u;
    // NOP
    // 0x441f64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x441f64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x441f68: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x441f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x441f6c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x441f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x441f70: 0x86a20032  lh          $v0, 0x32($s5)
    ctx->pc = 0x441f70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 50)));
    // 0x441f74: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x441f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x441f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x441f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x441f7c: 0x0  nop
    ctx->pc = 0x441f7cu;
    // NOP
    // 0x441f80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x441f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x441f84: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x441f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x441f88: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x441F88u;
    {
        const bool branch_taken_0x441f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x441F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441F88u;
            // 0x441f8c: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x441f88) {
            ctx->pc = 0x442008u;
            goto label_442008;
        }
    }
    ctx->pc = 0x441F90u;
label_441f90:
    // 0x441f90: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x441f90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x441f94: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x441f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x441f98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x441f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x441f9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x441f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x441fa0: 0x0  nop
    ctx->pc = 0x441fa0u;
    // NOP
    // 0x441fa4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x441fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x441fa8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x441fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x441fac: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x441facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x441fb0: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x441fb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x441fb4: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x441fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x441fb8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x441fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x441fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x441fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x441fc0: 0x0  nop
    ctx->pc = 0x441fc0u;
    // NOP
    // 0x441fc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x441fc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x441fc8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x441fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x441fcc: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x441fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x441fd0: 0x84c20008  lh          $v0, 0x8($a2)
    ctx->pc = 0x441fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x441fd4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x441fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x441fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x441fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x441fdc: 0x0  nop
    ctx->pc = 0x441fdcu;
    // NOP
    // 0x441fe0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x441fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x441fe4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x441fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x441fe8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x441fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x441fec: 0x84c2000a  lh          $v0, 0xA($a2)
    ctx->pc = 0x441fecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x441ff0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x441ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x441ff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x441ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x441ff8: 0x0  nop
    ctx->pc = 0x441ff8u;
    // NOP
    // 0x441ffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x441ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x442000: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x442000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x442004: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x442004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_442008:
    // 0x442008: 0x16540021  bne         $s2, $s4, . + 4 + (0x21 << 2)
    ctx->pc = 0x442008u;
    {
        const bool branch_taken_0x442008 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x442008) {
            ctx->pc = 0x442090u;
            goto label_442090;
        }
    }
    ctx->pc = 0x442010u;
    // 0x442010: 0x86a20020  lh          $v0, 0x20($s5)
    ctx->pc = 0x442010u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x442014: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x442014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x442018: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x442018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x44201c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x44201cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x442020: 0x0  nop
    ctx->pc = 0x442020u;
    // NOP
    // 0x442024: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x442024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x442028: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x442028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x44202c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x44202cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x442030: 0x86a20022  lh          $v0, 0x22($s5)
    ctx->pc = 0x442030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 34)));
    // 0x442034: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x442034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x442038: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x442038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x44203c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x44203cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x442040: 0x0  nop
    ctx->pc = 0x442040u;
    // NOP
    // 0x442044: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x442044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x442048: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x442048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x44204c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x44204cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x442050: 0x86a20024  lh          $v0, 0x24($s5)
    ctx->pc = 0x442050u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x442054: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x442054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x442058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x442058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x44205c: 0x0  nop
    ctx->pc = 0x44205cu;
    // NOP
    // 0x442060: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x442060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x442064: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x442064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x442068: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x442068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x44206c: 0x86a20026  lh          $v0, 0x26($s5)
    ctx->pc = 0x44206cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 38)));
    // 0x442070: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x442070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x442074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x442074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x442078: 0x0  nop
    ctx->pc = 0x442078u;
    // NOP
    // 0x44207c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x44207cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x442080: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x442080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x442084: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x442084u;
    {
        const bool branch_taken_0x442084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x442088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x442084u;
            // 0x442088: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x442084) {
            ctx->pc = 0x442108u;
            goto label_442108;
        }
    }
    ctx->pc = 0x44208Cu;
    // 0x44208c: 0x0  nop
    ctx->pc = 0x44208cu;
    // NOP
label_442090:
    // 0x442090: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x442090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x442094: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x442094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x442098: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x442098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x44209c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x44209cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4420a0: 0x0  nop
    ctx->pc = 0x4420a0u;
    // NOP
    // 0x4420a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4420a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4420a8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x4420a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x4420ac: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x4420acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x4420b0: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x4420b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x4420b4: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x4420b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4420b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4420b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4420bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4420bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4420c0: 0x0  nop
    ctx->pc = 0x4420c0u;
    // NOP
    // 0x4420c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4420c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4420c8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x4420c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x4420cc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x4420ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x4420d0: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x4420d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4420d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4420d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4420d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4420d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4420dc: 0x0  nop
    ctx->pc = 0x4420dcu;
    // NOP
    // 0x4420e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4420e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4420e4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x4420e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x4420e8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x4420e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x4420ec: 0x8462000a  lh          $v0, 0xA($v1)
    ctx->pc = 0x4420ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x4420f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4420f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4420f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4420f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4420f8: 0x0  nop
    ctx->pc = 0x4420f8u;
    // NOP
    // 0x4420fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4420fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x442100: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x442100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x442104: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x442104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_442108:
    // 0x442108: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x442108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x44210c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x44210cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x442110: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x442110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x442114: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x442114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x442118: 0xc050780  jal         func_141E00
    ctx->pc = 0x442118u;
    SET_GPR_U32(ctx, 31, 0x442120u);
    ctx->pc = 0x44211Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442118u;
            // 0x44211c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    if (runtime->hasFunction(0x141E00u)) {
        auto targetFn = runtime->lookupFunction(0x141E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442120u; }
        if (ctx->pc != 0x442120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141E00_0x141e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442120u; }
        if (ctx->pc != 0x442120u) { return; }
    }
    ctx->pc = 0x442120u;
label_442120:
    // 0x442120: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x442120u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x442124: 0x254082a  slt         $at, $s2, $s4
    ctx->pc = 0x442124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x442128: 0x1020ff72  beqz        $at, . + 4 + (-0x8E << 2)
    ctx->pc = 0x442128u;
    {
        const bool branch_taken_0x442128 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x44212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x442128u;
            // 0x44212c: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442128) {
            ctx->pc = 0x441EF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_441ef4;
        }
    }
    ctx->pc = 0x442130u;
    // 0x442130: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x442130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x442134: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x442134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x442138: 0x50600032  beql        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x442138u;
    {
        const bool branch_taken_0x442138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x442138) {
            ctx->pc = 0x44213Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x442138u;
            // 0x44213c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x442204u;
            goto label_442204;
        }
    }
    ctx->pc = 0x442140u;
    // 0x442140: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x442140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x442144: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x442144u;
    {
        const bool branch_taken_0x442144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x442144) {
            ctx->pc = 0x442148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x442144u;
            // 0x442148: 0x26050400  addiu       $a1, $s0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
        ctx->in_delay_slot = false;
            ctx->pc = 0x442150u;
            goto label_442150;
        }
    }
    ctx->pc = 0x44214Cu;
    // 0x44214c: 0x26050410  addiu       $a1, $s0, 0x410
    ctx->pc = 0x44214cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
label_442150:
    // 0x442150: 0xc6a50014  lwc1        $f5, 0x14($s5)
    ctx->pc = 0x442150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x442154: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x442154u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x442158: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x442158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x44215c: 0x86a80020  lh          $t0, 0x20($s5)
    ctx->pc = 0x44215cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x442160: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x442160u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x442164: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x442164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x442168: 0x86a60022  lh          $a2, 0x22($s5)
    ctx->pc = 0x442168u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 34)));
    // 0x44216c: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x44216cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x442170: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x442170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x442174: 0x86a20026  lh          $v0, 0x26($s5)
    ctx->pc = 0x442174u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 38)));
    // 0x442178: 0x885821  addu        $t3, $a0, $t0
    ctx->pc = 0x442178u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x44217c: 0x86c90000  lh          $t1, 0x0($s6)
    ctx->pc = 0x44217cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x442180: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x442180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x442184: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x442184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442188: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x442188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x44218c: 0x86c80002  lh          $t0, 0x2($s6)
    ctx->pc = 0x44218cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x442190: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x442190u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
    // 0x442194: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x442194u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x442198: 0x865021  addu        $t2, $a0, $a2
    ctx->pc = 0x442198u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x44219c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x44219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4421a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4421a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4421a4: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4421a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4421a8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4421a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4421ac: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x4421acu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4421b0: 0x0  nop
    ctx->pc = 0x4421b0u;
    // NOP
    // 0x4421b4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4421b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4421b8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x4421b8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4421bc: 0x0  nop
    ctx->pc = 0x4421bcu;
    // NOP
    // 0x4421c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4421c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4421c4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4421c4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4421c8: 0x0  nop
    ctx->pc = 0x4421c8u;
    // NOP
    // 0x4421cc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4421ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x4421d0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4421d0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4421d4: 0x0  nop
    ctx->pc = 0x4421d4u;
    // NOP
    // 0x4421d8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4421d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x4421dc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4421dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4421e0: 0x46031301  sub.s       $f12, $f2, $f3
    ctx->pc = 0x4421e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x4421e4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x4421e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x4421e8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x4421e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x4421ec: 0x46031380  add.s       $f14, $f2, $f3
    ctx->pc = 0x4421ecu;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x4421f0: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x4421f0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4421f4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4421f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x4421f8: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x4421F8u;
    SET_GPR_U32(ctx, 31, 0x442200u);
    ctx->pc = 0x4421FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4421F8u;
            // 0x4421fc: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442200u; }
        if (ctx->pc != 0x442200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442200u; }
        if (ctx->pc != 0x442200u) { return; }
    }
    ctx->pc = 0x442200u;
label_442200:
    // 0x442200: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x442200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_442204:
    // 0x442204: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x442204u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x442208: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x442208u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44220c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x44220cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x442210: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x442210u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x442214: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x442214u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x442218: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x442218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44221c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44221cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x442220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x442220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x442224: 0x3e00008  jr          $ra
    ctx->pc = 0x442224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x442228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x442224u;
            // 0x442228: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44222Cu;
    // 0x44222c: 0x0  nop
    ctx->pc = 0x44222cu;
    // NOP
}
