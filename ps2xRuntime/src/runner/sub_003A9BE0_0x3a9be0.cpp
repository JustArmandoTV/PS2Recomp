#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A9BE0
// Address: 0x3a9be0 - 0x3a9cf0
void sub_003A9BE0_0x3a9be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9BE0_0x3a9be0");
#endif

    ctx->pc = 0x3a9be0u;

    // 0x3a9be0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a9be0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9be4: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x3a9be4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a9be8: 0x468001a0  cvt.s.w     $f6, $f0
    ctx->pc = 0x3a9be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3a9bec: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3a9becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x3a9bf0: 0x908b002e  lbu         $t3, 0x2E($a0)
    ctx->pc = 0x3a9bf0u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x3a9bf4: 0x3c0a3f00  lui         $t2, 0x3F00
    ctx->pc = 0x3a9bf4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16128 << 16));
    // 0x3a9bf8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3a9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x3a9bfc: 0x90890028  lbu         $t1, 0x28($a0)
    ctx->pc = 0x3a9bfcu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3a9c00: 0x918d0116  lbu         $t5, 0x116($t4)
    ctx->pc = 0x3a9c00u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 278)));
    // 0x3a9c04: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x3a9c04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x3a9c08: 0x24639bc0  addiu       $v1, $v1, -0x6440
    ctx->pc = 0x3a9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941632));
    // 0x3a9c0c: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x3a9c0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x3a9c10: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x3a9c10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x3a9c14: 0x24422100  addiu       $v0, $v0, 0x2100
    ctx->pc = 0x3a9c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8448));
    // 0x3a9c18: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3a9c18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9c1c: 0x96100  sll         $t4, $t1, 4
    ctx->pc = 0x3a9c1cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x3a9c20: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x3a9c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3a9c24: 0x6c6021  addu        $t4, $v1, $t4
    ctx->pc = 0x3a9c24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x3a9c28: 0x8c890034  lw          $t1, 0x34($a0)
    ctx->pc = 0x3a9c28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3a9c2c: 0x1a5082a  slt         $at, $t5, $a1
    ctx->pc = 0x3a9c2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3a9c30: 0x85260022  lh          $a2, 0x22($t1)
    ctx->pc = 0x3a9c30u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 34)));
    // 0x3a9c34: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3a9c34u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9c38: 0x0  nop
    ctx->pc = 0x3a9c38u;
    // NOP
    // 0x3a9c3c: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x3a9c3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3a9c40: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x3a9c40u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x3a9c44: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x3a9c44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3a9c48: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3a9c48u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3a9c4c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3a9c4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a9c50: 0xc5820008  lwc1        $f2, 0x8($t4)
    ctx->pc = 0x3a9c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a9c54: 0x46061818  adda.s      $f3, $f6
    ctx->pc = 0x3a9c54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x3a9c58: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x3a9c58u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a9c5c: 0x4604101e  madda.s     $f2, $f4
    ctx->pc = 0x3a9c5cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x3a9c60: 0xc5620008  lwc1        $f2, 0x8($t3)
    ctx->pc = 0x3a9c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a9c64: 0x4604601e  madda.s     $f12, $f4
    ctx->pc = 0x3a9c64u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[4]));
    // 0x3a9c68: 0xc560000c  lwc1        $f0, 0xC($t3)
    ctx->pc = 0x3a9c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a9c6c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3a9c6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3a9c70: 0x4602091c  madd.s      $f4, $f1, $f2
    ctx->pc = 0x3a9c70u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x3a9c74: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x3a9c74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x3a9c78: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A9C78u;
    {
        const bool branch_taken_0x3a9c78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9C78u;
            // 0x3a9c7c: 0x4600089d  msub.s      $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9c78) {
            ctx->pc = 0x3A9C84u;
            goto label_3a9c84;
        }
    }
    ctx->pc = 0x3A9C80u;
    // 0x3a9c80: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x3a9c80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_3a9c84:
    // 0x3a9c84: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3a9c84u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9c88: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x3a9c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x3a9c8c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3a9c8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a9c90: 0x84490000  lh          $t1, 0x0($v0)
    ctx->pc = 0x3a9c90u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a9c94: 0x84480002  lh          $t0, 0x2($v0)
    ctx->pc = 0x3a9c94u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3a9c98: 0x9087002f  lbu         $a3, 0x2F($a0)
    ctx->pc = 0x3a9c98u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 47)));
    // 0x3a9c9c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a9c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a9ca0: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x3a9ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3a9ca4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3a9ca4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9ca8: 0xa43025  or          $a2, $a1, $a0
    ctx->pc = 0x3a9ca8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3a9cac: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a9cacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a9cb0: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x3a9cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3a9cb4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3a9cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a9cb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a9cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9cbc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a9cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a9cc0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a9cc0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9cc4: 0x0  nop
    ctx->pc = 0x3a9cc4u;
    // NOP
    // 0x3a9cc8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a9cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a9ccc: 0x46012301  sub.s       $f12, $f4, $f1
    ctx->pc = 0x3a9cccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x3a9cd0: 0x46012380  add.s       $f14, $f4, $f1
    ctx->pc = 0x3a9cd0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x3a9cd4: 0x46011341  sub.s       $f13, $f2, $f1
    ctx->pc = 0x3a9cd4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3a9cd8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a9cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a9cdc: 0x0  nop
    ctx->pc = 0x3a9cdcu;
    // NOP
    // 0x3a9ce0: 0x80bc284  j           func_2F0A10
    ctx->pc = 0x3A9CE0u;
    ctx->pc = 0x3A9CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9CE0u;
            // 0x3a9ce4: 0x460113c0  add.s       $f15, $f2, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3A9CE8u;
    // 0x3a9ce8: 0x0  nop
    ctx->pc = 0x3a9ce8u;
    // NOP
    // 0x3a9cec: 0x0  nop
    ctx->pc = 0x3a9cecu;
    // NOP
}
