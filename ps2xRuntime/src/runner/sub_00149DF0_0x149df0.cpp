#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00149DF0
// Address: 0x149df0 - 0x149f00
void sub_00149DF0_0x149df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149DF0_0x149df0");
#endif

    ctx->pc = 0x149df0u;

    // 0x149df0: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x149df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x149df4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x149df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149df8: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x149df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x149dfc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x149dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149e00: 0x46040201  sub.s       $f8, $f0, $f4
    ctx->pc = 0x149e00u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x149e04: 0x46050a41  sub.s       $f9, $f1, $f5
    ctx->pc = 0x149e04u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x149e08: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x149e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149e0c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x149e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149e10: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x149e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149e14: 0x46040181  sub.s       $f6, $f0, $f4
    ctx->pc = 0x149e14u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x149e18: 0x460311c1  sub.s       $f7, $f2, $f3
    ctx->pc = 0x149e18u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x149e1c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x149e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149e20: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x149e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149e24: 0x4606401a  mula.s      $f8, $f6
    ctx->pc = 0x149e24u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x149e28: 0x46050881  sub.s       $f2, $f1, $f5
    ctx->pc = 0x149e28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x149e2c: 0x46030141  sub.s       $f5, $f0, $f3
    ctx->pc = 0x149e2cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x149e30: 0x4602481e  madda.s     $f9, $f2
    ctx->pc = 0x149e30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
    // 0x149e34: 0x4605385c  madd.s      $f1, $f7, $f5
    ctx->pc = 0x149e34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[5]));
    // 0x149e38: 0x4606301a  mula.s      $f6, $f6
    ctx->pc = 0x149e38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x149e3c: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x149e3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x149e40: 0x4605281c  madd.s      $f0, $f5, $f5
    ctx->pc = 0x149e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x149e44: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x149e44u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x149e48: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x149e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x149e4c: 0x0  nop
    ctx->pc = 0x149e4cu;
    // NOP
    // 0x149e50: 0x0  nop
    ctx->pc = 0x149e50u;
    // NOP
    // 0x149e54: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x149e54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149e58: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x149E58u;
    {
        const bool branch_taken_0x149e58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x149e58) {
            ctx->pc = 0x149E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x149E58u;
            // 0x149e5c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x149E78u;
            goto label_149e78;
        }
    }
    ctx->pc = 0x149E60u;
    // 0x149e60: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x149e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x149e64: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x149e64u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x149e68: 0x4609481c  madd.s      $f0, $f9, $f9
    ctx->pc = 0x149e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[9]));
    // 0x149e6c: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x149e6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x149e70: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x149E70u;
    {
        const bool branch_taken_0x149e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149E70u;
            // 0x149e74: 0x4607389c  madd.s      $f2, $f7, $f7 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e70) {
            ctx->pc = 0x149ED8u;
            goto label_149ed8;
        }
    }
    ctx->pc = 0x149E78u;
label_149e78:
    // 0x149e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149e7c: 0x0  nop
    ctx->pc = 0x149e7cu;
    // NOP
    // 0x149e80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x149e80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149e84: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x149E84u;
    {
        const bool branch_taken_0x149e84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149e84) {
            ctx->pc = 0x149E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x149E84u;
            // 0x149e88: 0x46020802  mul.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x149EB0u;
            goto label_149eb0;
        }
    }
    ctx->pc = 0x149E8Cu;
    // 0x149e8c: 0x46083001  sub.s       $f0, $f6, $f8
    ctx->pc = 0x149e8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x149e90: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x149e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x149e94: 0x46091081  sub.s       $f2, $f2, $f9
    ctx->pc = 0x149e94u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
    // 0x149e98: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x149e98u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x149e9c: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x149e9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x149ea0: 0x46072841  sub.s       $f1, $f5, $f7
    ctx->pc = 0x149ea0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x149ea4: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x149ea4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x149ea8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x149EA8u;
    {
        const bool branch_taken_0x149ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149EA8u;
            // 0x149eac: 0x4601089c  madd.s      $f2, $f1, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ea8) {
            ctx->pc = 0x149ED8u;
            goto label_149ed8;
        }
    }
    ctx->pc = 0x149EB0u;
label_149eb0:
    // 0x149eb0: 0x460900c1  sub.s       $f3, $f0, $f9
    ctx->pc = 0x149eb0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x149eb4: 0x46060802  mul.s       $f0, $f1, $f6
    ctx->pc = 0x149eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x149eb8: 0x46080081  sub.s       $f2, $f0, $f8
    ctx->pc = 0x149eb8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x149ebc: 0x46050802  mul.s       $f0, $f1, $f5
    ctx->pc = 0x149ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x149ec0: 0x46070041  sub.s       $f1, $f0, $f7
    ctx->pc = 0x149ec0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x149ec4: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x149ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x149ec8: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x149ec8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x149ecc: 0x4603181c  madd.s      $f0, $f3, $f3
    ctx->pc = 0x149eccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x149ed0: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x149ed0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x149ed4: 0x4601089c  madd.s      $f2, $f1, $f1
    ctx->pc = 0x149ed4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_149ed8:
    // 0x149ed8: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x149ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149edc: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x149edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149ee0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x149ee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x149ee4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x149ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x149ee8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x149ee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149eec: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x149EECu;
    {
        const bool branch_taken_0x149eec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x149eec) {
            ctx->pc = 0x149EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x149EECu;
            // 0x149ef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x149EF8u;
            goto label_149ef8;
        }
    }
    ctx->pc = 0x149EF4u;
    // 0x149ef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149ef8:
    // 0x149ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x149EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149F00u;
}
