#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030ED70
// Address: 0x30ed70 - 0x30f000
void sub_0030ED70_0x30ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030ED70_0x30ed70");
#endif

    switch (ctx->pc) {
        case 0x30eedcu: goto label_30eedc;
        default: break;
    }

    ctx->pc = 0x30ed70u;

    // 0x30ed70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30ed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30ed74: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x30ed74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x30ed78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30ed78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30ed7c: 0x1636024  and         $t4, $t3, $v1
    ctx->pc = 0x30ed7cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x30ed80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30ed80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30ed84: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x30ed84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x30ed88: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x30ed88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ed8c: 0x8c9100cc  lw          $s1, 0xCC($a0)
    ctx->pc = 0x30ed8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x30ed90: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x30ed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ed94: 0x848d0066  lh          $t5, 0x66($a0)
    ctx->pc = 0x30ed94u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 102)));
    // 0x30ed98: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x30ed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ed9c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x30ed9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30eda0: 0x922e0002  lbu         $t6, 0x2($s1)
    ctx->pc = 0x30eda0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x30eda4: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x30eda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30eda8: 0x46000940  add.s       $f5, $f1, $f0
    ctx->pc = 0x30eda8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30edac: 0x92300003  lbu         $s0, 0x3($s1)
    ctx->pc = 0x30edacu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x30edb0: 0x29a10002  slti        $at, $t5, 0x2
    ctx->pc = 0x30edb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30edb4: 0x18e1825  or          $v1, $t4, $t6
    ctx->pc = 0x30edb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) | GPR_U64(ctx, 14));
    // 0x30edb8: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x30edb8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x30edbc: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30edbcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30edc0: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x30edc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30edc4: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x30edc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30edc8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x30edc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30edcc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30edccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30edd0: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x30edd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x30edd4: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x30edd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30edd8: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x30edd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30eddc: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x30eddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ede0: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x30ede0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ede4: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x30ede4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x30ede8: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30ede8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30edec: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x30edecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30edf0: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x30edf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30edf4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30edf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30edf8: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x30edf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x30edfc: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x30edfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30ee00: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x30ee00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ee04: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x30ee04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ee08: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x30ee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ee0c: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x30ee0cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x30ee10: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30ee10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30ee14: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x30ee14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30ee18: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x30ee18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ee1c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30ee1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30ee20: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x30ee20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x30ee24: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x30ee24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x30ee28: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x30ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x30ee2c: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x30ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x30ee30: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x30ee30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30ee34: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x30ee34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ee38: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x30ee38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ee3c: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x30ee3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ee40: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30ee40u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30ee44: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30ee44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30ee48: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x30ee48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30ee4c: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x30ee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ee50: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30ee50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30ee54: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x30ee54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x30ee58: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x30ee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30ee5c: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x30ee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ee60: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x30ee60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ee64: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x30ee64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ee68: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30ee68u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30ee6c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30ee6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30ee70: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x30ee70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30ee74: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x30ee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ee78: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30ee78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30ee7c: 0xe4a1001c  swc1        $f1, 0x1C($a1)
    ctx->pc = 0x30ee7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x30ee80: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x30ee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30ee84: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x30ee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ee88: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x30ee88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ee8c: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x30ee8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ee90: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30ee90u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30ee94: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30ee94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30ee98: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x30ee98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30ee9c: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x30ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30eea0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30eea0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30eea4: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x30eea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x30eea8: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x30eea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x30eeac: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x30eeacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x30eeb0: 0x1420004f  bnez        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x30EEB0u;
    {
        const bool branch_taken_0x30eeb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EEB0u;
            // 0x30eeb4: 0xacab002c  sw          $t3, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eeb0) {
            ctx->pc = 0x30EFF0u;
            goto label_30eff0;
        }
    }
    ctx->pc = 0x30EEB8u;
    // 0x30eeb8: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x30eeb8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x30eebc: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x30eebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x30eec0: 0x6e3023  subu        $a2, $v1, $t6
    ctx->pc = 0x30eec0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x30eec4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x30eec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30eec8: 0x25a3ffff  addiu       $v1, $t5, -0x1
    ctx->pc = 0x30eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x30eecc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x30eeccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eed0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30eed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30eed4: 0x0  nop
    ctx->pc = 0x30eed4u;
    // NOP
    // 0x30eed8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x30eed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_30eedc:
    // 0x30eedc: 0x6f8823  subu        $s1, $v1, $t7
    ctx->pc = 0x30eedcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x30eee0: 0x25f0ffff  addiu       $s0, $t7, -0x1
    ctx->pc = 0x30eee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x30eee4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x30eee4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30eee8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x30eee8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x30eeec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30eeecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30eef0: 0x108840  sll         $s1, $s0, 1
    ctx->pc = 0x30eef0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x30eef4: 0xe3001a  div         $zero, $a3, $v1
    ctx->pc = 0x30eef4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30eef8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x30eef8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30eefc: 0x2118821  addu        $s1, $s0, $s1
    ctx->pc = 0x30eefcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x30ef00: 0x1edc02a  slt         $t8, $t7, $t5
    ctx->pc = 0x30ef00u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x30ef04: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x30ef04u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30ef08: 0x88040  sll         $s0, $t0, 1
    ctx->pc = 0x30ef08u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x30ef0c: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x30ef0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x30ef10: 0x918821  addu        $s1, $a0, $s1
    ctx->pc = 0x30ef10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x30ef14: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x30ef14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x30ef18: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x30ef18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x30ef1c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30ef1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30ef20: 0xb08021  addu        $s0, $a1, $s0
    ctx->pc = 0x30ef20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x30ef24: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x30ef24u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x30ef28: 0xc812  mflo        $t9
    ctx->pc = 0x30ef28u;
    SET_GPR_U64(ctx, 25, ctx->lo);
    // 0x30ef2c: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x30ef2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x30ef30: 0x1d9c821  addu        $t9, $t6, $t9
    ctx->pc = 0x30ef30u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 25)));
    // 0x30ef34: 0x333900ff  andi        $t9, $t9, 0xFF
    ctx->pc = 0x30ef34u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)255);
    // 0x30ef38: 0x199c825  or          $t9, $t4, $t9
    ctx->pc = 0x30ef38u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 12) | GPR_U64(ctx, 25));
    // 0x30ef3c: 0xc62600d8  lwc1        $f6, 0xD8($s1)
    ctx->pc = 0x30ef3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30ef40: 0xc5450000  lwc1        $f5, 0x0($t2)
    ctx->pc = 0x30ef40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30ef44: 0xc5240000  lwc1        $f4, 0x0($t1)
    ctx->pc = 0x30ef44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ef48: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x30ef48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x30ef4c: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x30ef4cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x30ef50: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x30ef50u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x30ef54: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x30ef54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x30ef58: 0xc62600dc  lwc1        $f6, 0xDC($s1)
    ctx->pc = 0x30ef58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30ef5c: 0xc5450004  lwc1        $f5, 0x4($t2)
    ctx->pc = 0x30ef5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30ef60: 0xc5240004  lwc1        $f4, 0x4($t1)
    ctx->pc = 0x30ef60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ef64: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x30ef64u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x30ef68: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x30ef68u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x30ef6c: 0xe6040004  swc1        $f4, 0x4($s0)
    ctx->pc = 0x30ef6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x30ef70: 0xc62600e0  lwc1        $f6, 0xE0($s1)
    ctx->pc = 0x30ef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30ef74: 0xc5450008  lwc1        $f5, 0x8($t2)
    ctx->pc = 0x30ef74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30ef78: 0xc5240008  lwc1        $f4, 0x8($t1)
    ctx->pc = 0x30ef78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ef7c: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x30ef7cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x30ef80: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x30ef80u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x30ef84: 0xe6040008  swc1        $f4, 0x8($s0)
    ctx->pc = 0x30ef84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x30ef88: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x30ef88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
    // 0x30ef8c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x30ef8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x30ef90: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x30ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x30ef94: 0xc62600e4  lwc1        $f6, 0xE4($s1)
    ctx->pc = 0x30ef94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30ef98: 0xc5450000  lwc1        $f5, 0x0($t2)
    ctx->pc = 0x30ef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30ef9c: 0xc5240000  lwc1        $f4, 0x0($t1)
    ctx->pc = 0x30ef9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30efa0: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x30efa0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x30efa4: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30efa4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30efa8: 0xe6040018  swc1        $f4, 0x18($s0)
    ctx->pc = 0x30efa8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x30efac: 0xc62600e8  lwc1        $f6, 0xE8($s1)
    ctx->pc = 0x30efacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30efb0: 0xc5450004  lwc1        $f5, 0x4($t2)
    ctx->pc = 0x30efb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30efb4: 0xc5240004  lwc1        $f4, 0x4($t1)
    ctx->pc = 0x30efb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30efb8: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x30efb8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x30efbc: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30efbcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30efc0: 0xe604001c  swc1        $f4, 0x1C($s0)
    ctx->pc = 0x30efc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x30efc4: 0xc62600ec  lwc1        $f6, 0xEC($s1)
    ctx->pc = 0x30efc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30efc8: 0xc5450008  lwc1        $f5, 0x8($t2)
    ctx->pc = 0x30efc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30efcc: 0xc5240008  lwc1        $f4, 0x8($t1)
    ctx->pc = 0x30efccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30efd0: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x30efd0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x30efd4: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30efd4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30efd8: 0xe6040020  swc1        $f4, 0x20($s0)
    ctx->pc = 0x30efd8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x30efdc: 0xae190024  sw          $t9, 0x24($s0)
    ctx->pc = 0x30efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 25));
    // 0x30efe0: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x30efe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x30efe4: 0x1700ffbd  bnez        $t8, . + 4 + (-0x43 << 2)
    ctx->pc = 0x30EFE4u;
    {
        const bool branch_taken_0x30efe4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EFE4u;
            // 0x30efe8: 0xae0b002c  sw          $t3, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30efe4) {
            ctx->pc = 0x30EEDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30eedc;
        }
    }
    ctx->pc = 0x30EFECu;
    // 0x30efec: 0x0  nop
    ctx->pc = 0x30efecu;
    // NOP
label_30eff0:
    // 0x30eff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30eff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30eff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30eff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30eff8: 0x3e00008  jr          $ra
    ctx->pc = 0x30EFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30EFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EFF8u;
            // 0x30effc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30F000u;
}
