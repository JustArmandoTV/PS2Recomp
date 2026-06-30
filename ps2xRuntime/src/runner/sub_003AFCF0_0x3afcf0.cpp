#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AFCF0
// Address: 0x3afcf0 - 0x3afde0
void sub_003AFCF0_0x3afcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AFCF0_0x3afcf0");
#endif

    ctx->pc = 0x3afcf0u;

    // 0x3afcf0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3afcf0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afcf4: 0x90890080  lbu         $t1, 0x80($a0)
    ctx->pc = 0x3afcf4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3afcf8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3afcf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3afcfc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3afcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x3afd00: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3afd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3afd04: 0x24639bc0  addiu       $v1, $v1, -0x6440
    ctx->pc = 0x3afd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941632));
    // 0x3afd08: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x3afd08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x3afd0c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3afd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3afd10: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3afd10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3afd14: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3afd14u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afd18: 0x0  nop
    ctx->pc = 0x3afd18u;
    // NOP
    // 0x3afd1c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3afd1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3afd20: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3afd20u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afd24: 0x0  nop
    ctx->pc = 0x3afd24u;
    // NOP
    // 0x3afd28: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x3afd28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x3afd2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3afd2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afd30: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x3afd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3afd34: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3afd34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3afd38: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x3afd38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3afd3c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3afd3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3afd40: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFD40u;
    {
        const bool branch_taken_0x3afd40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AFD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AFD40u;
            // 0x3afd44: 0x4602639c  madd.s      $f14, $f12, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afd40) {
            ctx->pc = 0x3AFD54u;
            goto label_3afd54;
        }
    }
    ctx->pc = 0x3AFD48u;
    // 0x3afd48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3afd48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afd4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AFD4Cu;
    {
        const bool branch_taken_0x3afd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AFD4Cu;
            // 0x3afd50: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afd4c) {
            ctx->pc = 0x3AFD70u;
            goto label_3afd70;
        }
    }
    ctx->pc = 0x3AFD54u;
label_3afd54:
    // 0x3afd54: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3afd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3afd58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3afd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3afd5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3afd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3afd60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3afd60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afd64: 0x0  nop
    ctx->pc = 0x3afd64u;
    // NOP
    // 0x3afd68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3afd68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3afd6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3afd6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3afd70:
    // 0x3afd70: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x3afd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x3afd74: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3afd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x3afd78: 0x84672100  lh          $a3, 0x2100($v1)
    ctx->pc = 0x3afd78u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8448)));
    // 0x3afd7c: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x3afd7cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x3afd80: 0x84462102  lh          $a2, 0x2102($v0)
    ctx->pc = 0x3afd80u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
    // 0x3afd84: 0x90850082  lbu         $a1, 0x82($a0)
    ctx->pc = 0x3afd84u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 130)));
    // 0x3afd88: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3afd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x3afd8c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3afd8cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afd90: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3afd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3afd94: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3afd94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3afd98: 0x24639bc0  addiu       $v1, $v1, -0x6440
    ctx->pc = 0x3afd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941632));
    // 0x3afd9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3afd9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afda0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3afda0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3afda4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3afda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3afda8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3afda8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afdac: 0x0  nop
    ctx->pc = 0x3afdacu;
    // NOP
    // 0x3afdb0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3afdb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3afdb4: 0x90420116  lbu         $v0, 0x116($v0)
    ctx->pc = 0x3afdb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
    // 0x3afdb8: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x3afdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3afdbc: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3afdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3afdc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3afdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3afdc4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3afdc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3afdc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3afdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3afdcc: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x3afdccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x3afdd0: 0x80bc284  j           func_2F0A10
    ctx->pc = 0x3AFDD0u;
    ctx->pc = 0x3AFDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AFDD0u;
            // 0x3afdd4: 0x1023025  or          $a2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3AFDD8u;
    // 0x3afdd8: 0x0  nop
    ctx->pc = 0x3afdd8u;
    // NOP
    // 0x3afddc: 0x0  nop
    ctx->pc = 0x3afddcu;
    // NOP
}
