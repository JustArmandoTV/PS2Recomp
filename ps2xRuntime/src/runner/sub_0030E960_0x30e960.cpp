#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030E960
// Address: 0x30e960 - 0x30ebb0
void sub_0030E960_0x30e960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E960_0x30e960");
#endif

    switch (ctx->pc) {
        case 0x30eaa0u: goto label_30eaa0;
        default: break;
    }

    ctx->pc = 0x30e960u;

    // 0x30e960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30e960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30e964: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x30e964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x30e968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30e968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30e96c: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x30e96cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x30e970: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x30e970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e974: 0x8c8f00cc  lw          $t7, 0xCC($a0)
    ctx->pc = 0x30e974u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x30e978: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x30e978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e97c: 0x848b0066  lh          $t3, 0x66($a0)
    ctx->pc = 0x30e97cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 102)));
    // 0x30e980: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x30e980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e984: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x30e984u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x30e988: 0x91ec0002  lbu         $t4, 0x2($t7)
    ctx->pc = 0x30e988u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x30e98c: 0xc5e1000c  lwc1        $f1, 0xC($t7)
    ctx->pc = 0x30e98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e990: 0x46001100  add.s       $f4, $f2, $f0
    ctx->pc = 0x30e990u;
    ctx->f[4] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x30e994: 0x91ee0003  lbu         $t6, 0x3($t7)
    ctx->pc = 0x30e994u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 3)));
    // 0x30e998: 0x29610002  slti        $at, $t3, 0x2
    ctx->pc = 0x30e998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30e99c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x30e99cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e9a0: 0x14c1825  or          $v1, $t2, $t4
    ctx->pc = 0x30e9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x30e9a4: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x30e9a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x30e9a8: 0xc48200d8  lwc1        $f2, 0xD8($a0)
    ctx->pc = 0x30e9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e9ac: 0xc5e00010  lwc1        $f0, 0x10($t7)
    ctx->pc = 0x30e9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e9b0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x30e9b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x30e9b4: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x30e9b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x30e9b8: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x30e9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e9bc: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x30e9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e9c0: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x30e9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e9c4: 0xc48200dc  lwc1        $f2, 0xDC($a0)
    ctx->pc = 0x30e9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e9c8: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x30e9c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x30e9cc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x30e9ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x30e9d0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x30e9d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x30e9d4: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x30e9d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x30e9d8: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x30e9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e9dc: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x30e9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e9e0: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x30e9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e9e4: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x30e9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e9e8: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x30e9e8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x30e9ec: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x30e9ecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x30e9f0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x30e9f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x30e9f4: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x30e9f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x30e9f8: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x30e9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x30e9fc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x30e9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x30ea00: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x30ea00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x30ea04: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x30ea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30ea08: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x30ea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ea0c: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x30ea0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ea10: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x30ea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ea14: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30ea14u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30ea18: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x30ea18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x30ea1c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x30ea1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x30ea20: 0xe4a20018  swc1        $f2, 0x18($a1)
    ctx->pc = 0x30ea20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x30ea24: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x30ea24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30ea28: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x30ea28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ea2c: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x30ea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ea30: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x30ea30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ea34: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30ea34u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30ea38: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x30ea38u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x30ea3c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x30ea3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x30ea40: 0xe4a2001c  swc1        $f2, 0x1C($a1)
    ctx->pc = 0x30ea40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x30ea44: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x30ea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30ea48: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x30ea48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ea4c: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x30ea4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ea50: 0xc48200ec  lwc1        $f2, 0xEC($a0)
    ctx->pc = 0x30ea50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ea54: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30ea54u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30ea58: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x30ea58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x30ea5c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x30ea5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x30ea60: 0xe4a20020  swc1        $f2, 0x20($a1)
    ctx->pc = 0x30ea60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x30ea64: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x30ea64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x30ea68: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x30ea68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x30ea6c: 0x1420004c  bnez        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x30EA6Cu;
    {
        const bool branch_taken_0x30ea6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EA6Cu;
            // 0x30ea70: 0xaca9002c  sw          $t1, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea6c) {
            ctx->pc = 0x30EBA0u;
            goto label_30eba0;
        }
    }
    ctx->pc = 0x30EA74u;
    // 0x30ea74: 0x460101c1  sub.s       $f7, $f0, $f1
    ctx->pc = 0x30ea74u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30ea78: 0x31c300ff  andi        $v1, $t6, 0xFF
    ctx->pc = 0x30ea78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x30ea7c: 0x6c3023  subu        $a2, $v1, $t4
    ctx->pc = 0x30ea7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x30ea80: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x30ea80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30ea84: 0x2563ffff  addiu       $v1, $t3, -0x1
    ctx->pc = 0x30ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x30ea88: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x30ea88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ea8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30ea8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ea90: 0x0  nop
    ctx->pc = 0x30ea90u;
    // NOP
    // 0x30ea94: 0x468001a0  cvt.s.w     $f6, $f0
    ctx->pc = 0x30ea94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x30ea98: 0x44892000  mtc1        $t1, $f4
    ctx->pc = 0x30ea98u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30ea9c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x30ea9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30eaa0:
    // 0x30eaa0: 0x6d7023  subu        $t6, $v1, $t5
    ctx->pc = 0x30eaa0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x30eaa4: 0x25b0ffff  addiu       $s0, $t5, -0x1
    ctx->pc = 0x30eaa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x30eaa8: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x30eaa8u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30eaac: 0x107840  sll         $t7, $s0, 1
    ctx->pc = 0x30eaacu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x30eab0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30eab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30eab4: 0x107080  sll         $t6, $s0, 2
    ctx->pc = 0x30eab4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30eab8: 0x1cfc021  addu        $t8, $t6, $t7
    ctx->pc = 0x30eab8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x30eabc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x30eabcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x30eac0: 0xe3001a  div         $zero, $a3, $v1
    ctx->pc = 0x30eac0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30eac4: 0x187880  sll         $t7, $t8, 2
    ctx->pc = 0x30eac4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x30eac8: 0x8f8021  addu        $s0, $a0, $t7
    ctx->pc = 0x30eac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x30eacc: 0x87040  sll         $t6, $t0, 1
    ctx->pc = 0x30eaccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x30ead0: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x30ead0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x30ead4: 0x1878c0  sll         $t7, $t8, 3
    ctx->pc = 0x30ead4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x30ead8: 0xafc821  addu        $t9, $a1, $t7
    ctx->pc = 0x30ead8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x30eadc: 0xe70c0  sll         $t6, $t6, 3
    ctx->pc = 0x30eadcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x30eae0: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x30eae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x30eae4: 0xaec021  addu        $t8, $a1, $t6
    ctx->pc = 0x30eae4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x30eae8: 0x1ab702a  slt         $t6, $t5, $t3
    ctx->pc = 0x30eae8u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x30eaec: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x30eaecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x30eaf0: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x30eaf0u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[6];
    // 0x30eaf4: 0x7812  mflo        $t7
    ctx->pc = 0x30eaf4u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x30eaf8: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x30eaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x30eafc: 0x18f7821  addu        $t7, $t4, $t7
    ctx->pc = 0x30eafcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x30eb00: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x30eb00u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x30eb04: 0x46000940  add.s       $f5, $f1, $f0
    ctx->pc = 0x30eb04u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30eb08: 0x14f7825  or          $t7, $t2, $t7
    ctx->pc = 0x30eb08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) | GPR_U64(ctx, 15));
    // 0x30eb0c: 0xc7200000  lwc1        $f0, 0x0($t9)
    ctx->pc = 0x30eb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30eb10: 0xc60200d8  lwc1        $f2, 0xD8($s0)
    ctx->pc = 0x30eb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30eb14: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x30eb14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x30eb18: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x30eb18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x30eb1c: 0xe7000000  swc1        $f0, 0x0($t8)
    ctx->pc = 0x30eb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
    // 0x30eb20: 0xc7200004  lwc1        $f0, 0x4($t9)
    ctx->pc = 0x30eb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30eb24: 0xc60200dc  lwc1        $f2, 0xDC($s0)
    ctx->pc = 0x30eb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30eb28: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x30eb28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x30eb2c: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x30eb2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x30eb30: 0xe7000004  swc1        $f0, 0x4($t8)
    ctx->pc = 0x30eb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4), bits); }
    // 0x30eb34: 0xc7200008  lwc1        $f0, 0x8($t9)
    ctx->pc = 0x30eb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30eb38: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x30eb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30eb3c: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x30eb3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x30eb40: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x30eb40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x30eb44: 0xe7000008  swc1        $f0, 0x8($t8)
    ctx->pc = 0x30eb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 8), bits); }
    // 0x30eb48: 0xc7200018  lwc1        $f0, 0x18($t9)
    ctx->pc = 0x30eb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30eb4c: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x30eb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30eb50: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x30eb50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x30eb54: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x30eb54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x30eb58: 0xe7000018  swc1        $f0, 0x18($t8)
    ctx->pc = 0x30eb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 24), bits); }
    // 0x30eb5c: 0xc720001c  lwc1        $f0, 0x1C($t9)
    ctx->pc = 0x30eb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30eb60: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x30eb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30eb64: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x30eb64u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x30eb68: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x30eb68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x30eb6c: 0xe700001c  swc1        $f0, 0x1C($t8)
    ctx->pc = 0x30eb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 28), bits); }
    // 0x30eb70: 0xc7200020  lwc1        $f0, 0x20($t9)
    ctx->pc = 0x30eb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30eb74: 0xc60200ec  lwc1        $f2, 0xEC($s0)
    ctx->pc = 0x30eb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30eb78: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x30eb78u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x30eb7c: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x30eb7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x30eb80: 0xe7000020  swc1        $f0, 0x20($t8)
    ctx->pc = 0x30eb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 32), bits); }
    // 0x30eb84: 0xaf0f000c  sw          $t7, 0xC($t8)
    ctx->pc = 0x30eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 15));
    // 0x30eb88: 0xe7050010  swc1        $f5, 0x10($t8)
    ctx->pc = 0x30eb88u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 16), bits); }
    // 0x30eb8c: 0xaf000014  sw          $zero, 0x14($t8)
    ctx->pc = 0x30eb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 0));
    // 0x30eb90: 0xaf0f0024  sw          $t7, 0x24($t8)
    ctx->pc = 0x30eb90u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 36), GPR_U32(ctx, 15));
    // 0x30eb94: 0xe7050028  swc1        $f5, 0x28($t8)
    ctx->pc = 0x30eb94u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 40), bits); }
    // 0x30eb98: 0x15c0ffc1  bnez        $t6, . + 4 + (-0x3F << 2)
    ctx->pc = 0x30EB98u;
    {
        const bool branch_taken_0x30eb98 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EB98u;
            // 0x30eb9c: 0xaf09002c  sw          $t1, 0x2C($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 44), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb98) {
            ctx->pc = 0x30EAA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30eaa0;
        }
    }
    ctx->pc = 0x30EBA0u;
label_30eba0:
    // 0x30eba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30eba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30eba4: 0x3e00008  jr          $ra
    ctx->pc = 0x30EBA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30EBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EBA4u;
            // 0x30eba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30EBACu;
    // 0x30ebac: 0x0  nop
    ctx->pc = 0x30ebacu;
    // NOP
}
