#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A2C90
// Address: 0x4a2c90 - 0x4a2f40
void sub_004A2C90_0x4a2c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2C90_0x4a2c90");
#endif

    switch (ctx->pc) {
        case 0x4a2da8u: goto label_4a2da8;
        case 0x4a2e64u: goto label_4a2e64;
        case 0x4a2f18u: goto label_4a2f18;
        default: break;
    }

    ctx->pc = 0x4a2c90u;

    // 0x4a2c90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a2c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4a2c94: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4a2c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x4a2c98: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4a2c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4a2c9c: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4a2c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a2ca0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a2ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4a2ca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a2ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2ca8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a2ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4a2cac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a2cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4a2cb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a2cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4a2cb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a2cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a2cb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a2cb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a2cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4a2cc0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4a2cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4a2cc4: 0x84543f90  lh          $s4, 0x3F90($v0)
    ctx->pc = 0x4a2cc4u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16272)));
    // 0x4a2cc8: 0x24a50c40  addiu       $a1, $a1, 0xC40
    ctx->pc = 0x4a2cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3136));
    // 0x4a2ccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a2cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2cd0: 0xc4830078  lwc1        $f3, 0x78($a0)
    ctx->pc = 0x4a2cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4a2cd4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4a2cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a2cd8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4a2cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x4a2cdc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4a2cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a2ce0: 0x84533f92  lh          $s3, 0x3F92($v0)
    ctx->pc = 0x4a2ce0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16274)));
    // 0x4a2ce4: 0x90840070  lbu         $a0, 0x70($a0)
    ctx->pc = 0x4a2ce4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x4a2ce8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x4a2ce8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x4a2cec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4a2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x4a2cf0: 0x83a825  or          $s5, $a0, $v1
    ctx->pc = 0x4a2cf0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4a2cf4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a2cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a2cf8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4a2cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a2cfc: 0x0  nop
    ctx->pc = 0x4a2cfcu;
    // NOP
    // 0x4a2d00: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4a2d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4a2d04: 0x26220046  addiu       $v0, $s1, 0x46
    ctx->pc = 0x4a2d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 70));
    // 0x4a2d08: 0x24c3c  dsll32      $t1, $v0, 16
    ctx->pc = 0x4a2d08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 16));
    // 0x4a2d0c: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x4a2d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x4a2d10: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x4a2d10u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x4a2d14: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x4a2d14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x4a2d18: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4a2d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2d1c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4a2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x4a2d20: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x4a2d20u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x4a2d24: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4a2d24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4a2d28: 0x84433f90  lh          $v1, 0x3F90($v0)
    ctx->pc = 0x4a2d28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16272)));
    // 0x4a2d2c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a2d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4a2d30: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4a2d30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4a2d34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2d34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a2d38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2d38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a2d3c: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x4a2d3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x4a2d40: 0x0  nop
    ctx->pc = 0x4a2d40u;
    // NOP
    // 0x4a2d44: 0x12a4023  subu        $t0, $t1, $t2
    ctx->pc = 0x4a2d44u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x4a2d48: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x4a2d48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x4a2d4c: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x4a2d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x4a2d50: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a2d50u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2d54: 0x24b4023  subu        $t0, $s2, $t3
    ctx->pc = 0x4a2d54u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x4a2d58: 0x250affe7  addiu       $t2, $t0, -0x19
    ctx->pc = 0x4a2d58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967271));
    // 0x4a2d5c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4a2d5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x4a2d60: 0x24b4021  addu        $t0, $s2, $t3
    ctx->pc = 0x4a2d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x4a2d64: 0x2508ffe7  addiu       $t0, $t0, -0x19
    ctx->pc = 0x4a2d64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967271));
    // 0x4a2d68: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x4a2d68u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2d6c: 0x0  nop
    ctx->pc = 0x4a2d6cu;
    // NOP
    // 0x4a2d70: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x4a2d70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x4a2d74: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4a2d74u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2d78: 0x0  nop
    ctx->pc = 0x4a2d78u;
    // NOP
    // 0x4a2d7c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x4a2d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x4a2d80: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a2d80u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2d84: 0x0  nop
    ctx->pc = 0x4a2d84u;
    // NOP
    // 0x4a2d88: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4a2d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x4a2d8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a2d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2d90: 0x0  nop
    ctx->pc = 0x4a2d90u;
    // NOP
    // 0x4a2d94: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a2d94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x4a2d98: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x4a2d98u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2d9c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a2d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x4a2da0: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x4A2DA0u;
    SET_GPR_U32(ctx, 31, 0x4A2DA8u);
    ctx->pc = 0x4A2DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2DA0u;
            // 0x4a2da4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2DA8u; }
        if (ctx->pc != 0x4A2DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2DA8u; }
        if (ctx->pc != 0x4A2DA8u) { return; }
    }
    ctx->pc = 0x4A2DA8u;
label_4a2da8:
    // 0x4a2da8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4a2da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4a2dac: 0x2622ffa1  addiu       $v0, $s1, -0x5F
    ctx->pc = 0x4a2dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967201));
    // 0x4a2db0: 0x24a50c50  addiu       $a1, $a1, 0xC50
    ctx->pc = 0x4a2db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3152));
    // 0x4a2db4: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x4a2db4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x4a2db8: 0xc6040078  lwc1        $f4, 0x78($s0)
    ctx->pc = 0x4a2db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4a2dbc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4a2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x4a2dc0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x4a2dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4a2dc4: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x4a2dc4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x4a2dc8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x4a2dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a2dcc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a2dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a2dd0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4a2dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4a2dd4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4a2dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2dd8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x4a2dd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x4a2ddc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4a2de0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a2de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2de4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4a2de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x4a2de8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x4a2de8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x4a2dec: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x4a2decu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x4a2df0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2df0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4a2df4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2df4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a2df8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x4a2df8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2dfc: 0x0  nop
    ctx->pc = 0x4a2dfcu;
    // NOP
    // 0x4a2e00: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a2e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x4a2e04: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x4a2e04u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2e08: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a2e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x4a2e0c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x4a2e0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4a2e10: 0x0  nop
    ctx->pc = 0x4a2e10u;
    // NOP
    // 0x4a2e14: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x4a2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x4a2e18: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x4a2e18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x4a2e1c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x4a2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x4a2e20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a2e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a2e24: 0x2491023  subu        $v0, $s2, $t1
    ctx->pc = 0x4a2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x4a2e28: 0x2448ffec  addiu       $t0, $v0, -0x14
    ctx->pc = 0x4a2e28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x4a2e2c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x4a2e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x4a2e30: 0x2491021  addu        $v0, $s2, $t1
    ctx->pc = 0x4a2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x4a2e34: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x4a2e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x4a2e38: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x4a2e38u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a2e3c: 0x0  nop
    ctx->pc = 0x4a2e3cu;
    // NOP
    // 0x4a2e40: 0x46800b60  cvt.s.w     $f13, $f1
    ctx->pc = 0x4a2e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x4a2e44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4a2e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a2e48: 0x0  nop
    ctx->pc = 0x4a2e48u;
    // NOP
    // 0x4a2e4c: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x4a2e4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x4a2e50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a2e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a2e54: 0x0  nop
    ctx->pc = 0x4a2e54u;
    // NOP
    // 0x4a2e58: 0x46800be0  cvt.s.w     $f15, $f1
    ctx->pc = 0x4a2e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x4a2e5c: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x4A2E5Cu;
    SET_GPR_U32(ctx, 31, 0x4A2E64u);
    ctx->pc = 0x4A2E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2E5Cu;
            // 0x4a2e60: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2E64u; }
        if (ctx->pc != 0x4A2E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2E64u; }
        if (ctx->pc != 0x4A2E64u) { return; }
    }
    ctx->pc = 0x4A2E64u;
label_4a2e64:
    // 0x4a2e64: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x4a2e64u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2e68: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4a2e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4a2e6c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a2e6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x4a2e70: 0x24a50c60  addiu       $a1, $a1, 0xC60
    ctx->pc = 0x4a2e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3168));
    // 0x4a2e74: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x4a2e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x4a2e78: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a2e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4a2e7c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4a2e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2e80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a2e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a2e84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a2e84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2e88: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x4a2e88u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2e8c: 0x0  nop
    ctx->pc = 0x4a2e8cu;
    // NOP
    // 0x4a2e90: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a2e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x4a2e94: 0xc6030078  lwc1        $f3, 0x78($s0)
    ctx->pc = 0x4a2e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4a2e98: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4a2e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a2e9c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4a2e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a2ea0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4a2ea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a2ea4: 0x0  nop
    ctx->pc = 0x4a2ea4u;
    // NOP
    // 0x4a2ea8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x4a2ea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x4a2eac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4a2eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4a2eb0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4a2eb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4a2eb4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4a2eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4a2eb8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2eb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a2ebc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2ebcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a2ec0: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x4a2ec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x4a2ec4: 0x0  nop
    ctx->pc = 0x4a2ec4u;
    // NOP
    // 0x4a2ec8: 0x2494023  subu        $t0, $s2, $t1
    ctx->pc = 0x4a2ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x4a2ecc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a2eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x4a2ed0: 0x25080014  addiu       $t0, $t0, 0x14
    ctx->pc = 0x4a2ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x4a2ed4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x4a2ed4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4a2ed8: 0x0  nop
    ctx->pc = 0x4a2ed8u;
    // NOP
    // 0x4a2edc: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x4a2edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x4a2ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a2ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2ee4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x4a2ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x4a2ee8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4a2ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x4a2eec: 0x2491021  addu        $v0, $s2, $t1
    ctx->pc = 0x4a2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x4a2ef0: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x4a2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4a2ef4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a2ef4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2ef8: 0x0  nop
    ctx->pc = 0x4a2ef8u;
    // NOP
    // 0x4a2efc: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x4a2efcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x4a2f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a2f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2f04: 0x0  nop
    ctx->pc = 0x4a2f04u;
    // NOP
    // 0x4a2f08: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x4a2f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x4a2f0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a2f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2f10: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x4A2F10u;
    SET_GPR_U32(ctx, 31, 0x4A2F18u);
    ctx->pc = 0x4A2F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2F10u;
            // 0x4a2f14: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2F18u; }
        if (ctx->pc != 0x4A2F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2F18u; }
        if (ctx->pc != 0x4A2F18u) { return; }
    }
    ctx->pc = 0x4A2F18u;
label_4a2f18:
    // 0x4a2f18: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4a2f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a2f1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a2f1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a2f20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a2f20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a2f24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a2f24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a2f28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a2f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a2f2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a2f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a2f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a2f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2f34: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2F34u;
            // 0x4a2f38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A2F3Cu;
    // 0x4a2f3c: 0x0  nop
    ctx->pc = 0x4a2f3cu;
    // NOP
}
