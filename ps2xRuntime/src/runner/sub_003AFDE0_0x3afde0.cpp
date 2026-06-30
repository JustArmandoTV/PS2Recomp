#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AFDE0
// Address: 0x3afde0 - 0x3afeb0
void sub_003AFDE0_0x3afde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AFDE0_0x3afde0");
#endif

    ctx->pc = 0x3afde0u;

    // 0x3afde0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3afde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3afde4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3afde4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afde8: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x3afde8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3afdec: 0x3c0a0067  lui         $t2, 0x67
    ctx->pc = 0x3afdecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)103 << 16));
    // 0x3afdf0: 0x3c093f00  lui         $t1, 0x3F00
    ctx->pc = 0x3afdf0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16128 << 16));
    // 0x3afdf4: 0x254a9bc0  addiu       $t2, $t2, -0x6440
    ctx->pc = 0x3afdf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941632));
    // 0x3afdf8: 0x90460116  lbu         $a2, 0x116($v0)
    ctx->pc = 0x3afdf8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
    // 0x3afdfc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3afdfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3afe00: 0x248b0040  addiu       $t3, $a0, 0x40
    ctx->pc = 0x3afe00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x3afe04: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3afe04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x3afe08: 0x84482100  lh          $t0, 0x2100($v0)
    ctx->pc = 0x3afe08u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
    // 0x3afe0c: 0xc581000c  lwc1        $f1, 0xC($t4)
    ctx->pc = 0x3afe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3afe10: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3afe10u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afe14: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3afe14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x3afe18: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3afe18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3afe1c: 0x84432102  lh          $v1, 0x2102($v0)
    ctx->pc = 0x3afe1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
    // 0x3afe20: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3afe20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3afe24: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3afe24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3afe28: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3afe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3afe2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3afe2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afe30: 0x0  nop
    ctx->pc = 0x3afe30u;
    // NOP
    // 0x3afe34: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3afe34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3afe38: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3afe38u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afe3c: 0x0  nop
    ctx->pc = 0x3afe3cu;
    // NOP
    // 0x3afe40: 0x46011940  add.s       $f5, $f3, $f1
    ctx->pc = 0x3afe40u;
    ctx->f[5] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3afe44: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x3afe44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afe48: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3afe48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3afe4c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3afe4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afe50: 0x0  nop
    ctx->pc = 0x3afe50u;
    // NOP
    // 0x3afe54: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3afe54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3afe58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3afe58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afe5c: 0xc5840008  lwc1        $f4, 0x8($t4)
    ctx->pc = 0x3afe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3afe60: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3afe60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3afe64: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3afe64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3afe68: 0x4603201c  madd.s      $f0, $f4, $f3
    ctx->pc = 0x3afe68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x3afe6c: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x3afe6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x3afe70: 0xe4850074  swc1        $f5, 0x74($a0)
    ctx->pc = 0x3afe70u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x3afe74: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x3afe74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x3afe78: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x3afe78u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3afe7c: 0x90820083  lbu         $v0, 0x83($a0)
    ctx->pc = 0x3afe7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 131)));
    // 0x3afe80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3afe80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3afe84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3afe84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3afe88: 0x1422821  addu        $a1, $t2, $v0
    ctx->pc = 0x3afe88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3afe8c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3afe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3afe90: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3afe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afe94: 0x46011382  mul.s       $f14, $f2, $f1
    ctx->pc = 0x3afe94u;
    ctx->f[14] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3afe98: 0x460013c2  mul.s       $f15, $f2, $f0
    ctx->pc = 0x3afe98u;
    ctx->f[15] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3afe9c: 0x46007307  neg.s       $f12, $f14
    ctx->pc = 0x3afe9cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[14]);
    // 0x3afea0: 0x80bc284  j           func_2F0A10
    ctx->pc = 0x3AFEA0u;
    ctx->pc = 0x3AFEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AFEA0u;
            // 0x3afea4: 0x46007b47  neg.s       $f13, $f15 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3AFEA8u;
    // 0x3afea8: 0x0  nop
    ctx->pc = 0x3afea8u;
    // NOP
    // 0x3afeac: 0x0  nop
    ctx->pc = 0x3afeacu;
    // NOP
}
