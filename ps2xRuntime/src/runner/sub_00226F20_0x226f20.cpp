#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226F20
// Address: 0x226f20 - 0x227010
void sub_00226F20_0x226f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226F20_0x226f20");
#endif

    switch (ctx->pc) {
        case 0x226f48u: goto label_226f48;
        default: break;
    }

    ctx->pc = 0x226f20u;

    // 0x226f20: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x226f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x226f24: 0x4c00034  bltz        $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x226F24u;
    {
        const bool branch_taken_0x226f24 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x226f24) {
            ctx->pc = 0x226FF8u;
            goto label_226ff8;
        }
    }
    ctx->pc = 0x226F2Cu;
    // 0x226f2c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x226f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x226f30: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x226f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x226f34: 0x3442d70b  ori         $v0, $v0, 0xD70B
    ctx->pc = 0x226f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55051);
    // 0x226f38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x226f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x226f3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x226f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x226f40: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x226f40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x226f44: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x226f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_226f48:
    // 0x226f48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x226f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x226f4c: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x226f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x226f50: 0xc48000b0  lwc1        $f0, 0xB0($a0)
    ctx->pc = 0x226f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226f54: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x226f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226f58: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x226F58u;
    {
        const bool branch_taken_0x226f58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x226f58) {
            ctx->pc = 0x226F64u;
            goto label_226f64;
        }
    }
    ctx->pc = 0x226F60u;
    // 0x226f60: 0x46004806  mov.s       $f0, $f9
    ctx->pc = 0x226f60u;
    ctx->f[0] = FPU_MOV_S(ctx->f[9]);
label_226f64:
    // 0x226f64: 0xc48500f4  lwc1        $f5, 0xF4($a0)
    ctx->pc = 0x226f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x226f68: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x226f68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x226f6c: 0xc48400f0  lwc1        $f4, 0xF0($a0)
    ctx->pc = 0x226f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x226f70: 0x9482000c  lhu         $v0, 0xC($a0)
    ctx->pc = 0x226f70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x226f74: 0xc48100f8  lwc1        $f1, 0xF8($a0)
    ctx->pc = 0x226f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226f78: 0x4605281a  mula.s      $f5, $f5
    ctx->pc = 0x226f78u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x226f7c: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x226f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x226f80: 0x4604201e  madda.s     $f4, $f4
    ctx->pc = 0x226f80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x226f84: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x226f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x226f88: 0xc48800e4  lwc1        $f8, 0xE4($a0)
    ctx->pc = 0x226f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x226f8c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x226f8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x226f90: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x226f90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x226f94: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x226f94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x226f98: 0xc48700e0  lwc1        $f7, 0xE0($a0)
    ctx->pc = 0x226f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x226f9c: 0x4608401a  mula.s      $f8, $f8
    ctx->pc = 0x226f9cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x226fa0: 0xc48600e8  lwc1        $f6, 0xE8($a0)
    ctx->pc = 0x226fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x226fa4: 0x4607381e  madda.s     $f7, $f7
    ctx->pc = 0x226fa4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[7]));
    // 0x226fa8: 0x4606301e  madda.s     $f6, $f6
    ctx->pc = 0x226fa8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x226fac: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x226facu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x226fb0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x226fb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x226fb4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x226FB4u;
    {
        const bool branch_taken_0x226fb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x226FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226FB4u;
            // 0x226fb8: 0x46020041  sub.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226fb4) {
            ctx->pc = 0x226FD4u;
            goto label_226fd4;
        }
    }
    ctx->pc = 0x226FBCu;
    // 0x226fbc: 0xc480010c  lwc1        $f0, 0x10C($a0)
    ctx->pc = 0x226fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226fc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226fc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226fc4: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x226FC4u;
    {
        const bool branch_taken_0x226fc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226fc4) {
            ctx->pc = 0x226FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x226FC4u;
            // 0x226fc8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x226FF0u;
            goto label_226ff0;
        }
    }
    ctx->pc = 0x226FCCu;
    // 0x226fcc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x226FCCu;
    {
        const bool branch_taken_0x226fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226FCCu;
            // 0x226fd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226fcc) {
            ctx->pc = 0x226FFCu;
            goto label_226ffc;
        }
    }
    ctx->pc = 0x226FD4u;
label_226fd4:
    // 0x226fd4: 0xc480011c  lwc1        $f0, 0x11C($a0)
    ctx->pc = 0x226fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226fd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226fd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226fdc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x226FDCu;
    {
        const bool branch_taken_0x226fdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226fdc) {
            ctx->pc = 0x226FECu;
            goto label_226fec;
        }
    }
    ctx->pc = 0x226FE4u;
    // 0x226fe4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x226FE4u;
    {
        const bool branch_taken_0x226fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226FE4u;
            // 0x226fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226fe4) {
            ctx->pc = 0x226FFCu;
            goto label_226ffc;
        }
    }
    ctx->pc = 0x226FECu;
label_226fec:
    // 0x226fec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x226fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_226ff0:
    // 0x226ff0: 0x4c1ffd5  bgez        $a2, . + 4 + (-0x2B << 2)
    ctx->pc = 0x226FF0u;
    {
        const bool branch_taken_0x226ff0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x226FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226FF0u;
            // 0x226ff4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ff0) {
            ctx->pc = 0x226F48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226f48;
        }
    }
    ctx->pc = 0x226FF8u;
label_226ff8:
    // 0x226ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226ffc:
    // 0x226ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x226FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x227004u;
    // 0x227004: 0x0  nop
    ctx->pc = 0x227004u;
    // NOP
    // 0x227008: 0x0  nop
    ctx->pc = 0x227008u;
    // NOP
    // 0x22700c: 0x0  nop
    ctx->pc = 0x22700cu;
    // NOP
}
