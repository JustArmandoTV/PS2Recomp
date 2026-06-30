#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002915B0
// Address: 0x2915b0 - 0x291680
void sub_002915B0_0x2915b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002915B0_0x2915b0");
#endif

    switch (ctx->pc) {
        case 0x2915e0u: goto label_2915e0;
        default: break;
    }

    ctx->pc = 0x2915b0u;

    // 0x2915b0: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x2915b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2915b4: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x2915b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x2915b8: 0xc4a90004  lwc1        $f9, 0x4($a1)
    ctx->pc = 0x2915b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2915bc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2915bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2915c0: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x2915c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2915c4: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x2915c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2915c8: 0xc4ac0010  lwc1        $f12, 0x10($a1)
    ctx->pc = 0x2915c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2915cc: 0xc4aa0014  lwc1        $f10, 0x14($a1)
    ctx->pc = 0x2915ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2915d0: 0xc4a70018  lwc1        $f7, 0x18($a1)
    ctx->pc = 0x2915d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2915d4: 0xc4ab0020  lwc1        $f11, 0x20($a1)
    ctx->pc = 0x2915d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2915d8: 0xc4a80024  lwc1        $f8, 0x24($a1)
    ctx->pc = 0x2915d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2915dc: 0xc4a50028  lwc1        $f5, 0x28($a1)
    ctx->pc = 0x2915dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2915e0:
    // 0x2915e0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2915e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2915e4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2915e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2915e8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2915e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2915ec: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2915ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2915f0: 0x460c101a  mula.s      $f2, $f12
    ctx->pc = 0x2915f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x2915f4: 0x4604181e  madda.s     $f3, $f4
    ctx->pc = 0x2915f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x2915f8: 0x460b081c  madd.s      $f0, $f1, $f11
    ctx->pc = 0x2915f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[11]));
    // 0x2915fc: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x2915fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x291600: 0x460a101a  mula.s      $f2, $f10
    ctx->pc = 0x291600u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x291604: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x291604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x291608: 0x4609181e  madda.s     $f3, $f9
    ctx->pc = 0x291608u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[9]));
    // 0x29160c: 0x4608081c  madd.s      $f0, $f1, $f8
    ctx->pc = 0x29160cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[8]));
    // 0x291610: 0x4607101a  mula.s      $f2, $f7
    ctx->pc = 0x291610u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x291614: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x291614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x291618: 0x4606181e  madda.s     $f3, $f6
    ctx->pc = 0x291618u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x29161c: 0x4605081c  madd.s      $f0, $f1, $f5
    ctx->pc = 0x29161cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
    // 0x291620: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x291620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x291624: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x291624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x291628: 0x4e1ffed  bgez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x291628u;
    {
        const bool branch_taken_0x291628 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x29162Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291628u;
            // 0x29162c: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291628) {
            ctx->pc = 0x2915E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2915e0;
        }
    }
    ctx->pc = 0x291630u;
    // 0x291630: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x291630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291634: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x291634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291638: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29163c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x29163cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x291640: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x291640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291644: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x291644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291648: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29164c: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x29164cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x291650: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x291650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291654: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x291654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291658: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29165c: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x29165cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x291660: 0xc4a1003c  lwc1        $f1, 0x3C($a1)
    ctx->pc = 0x291660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291664: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x291664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291668: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29166c: 0x3e00008  jr          $ra
    ctx->pc = 0x29166Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29166Cu;
            // 0x291670: 0xe480003c  swc1        $f0, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291674u;
    // 0x291674: 0x0  nop
    ctx->pc = 0x291674u;
    // NOP
    // 0x291678: 0x0  nop
    ctx->pc = 0x291678u;
    // NOP
    // 0x29167c: 0x0  nop
    ctx->pc = 0x29167cu;
    // NOP
}
