#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00299B40
// Address: 0x299b40 - 0x299e60
void sub_00299B40_0x299b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299B40_0x299b40");
#endif

    switch (ctx->pc) {
        case 0x299ba0u: goto label_299ba0;
        default: break;
    }

    ctx->pc = 0x299b40u;

    // 0x299b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299b44: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x299b44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b48: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x299b48u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x299b4c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x299b4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b50: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x299b50u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x299b54: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x299b54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x299b58: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x299b58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x299b5c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x299b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x299b60: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x299b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x299b64: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x299b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x299b68: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x299b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x299b6c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x299b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x299b70: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x299b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x299b74: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x299b74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x299b78: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x299b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x299b7c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x299b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x299b80: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x299b80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x299b84: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x299b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x299b88: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x299b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x299b8c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x299b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299b90: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x299b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x299b94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x299b94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299b98: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x299b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x299b9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x299b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_299ba0:
    // 0x299ba0: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x299ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x299ba4: 0x68001a  div         $zero, $v1, $t0
    ctx->pc = 0x299ba4u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x299ba8: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x299ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299bac: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x299bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x299bb0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x299bb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x299bb4: 0xc485000c  lwc1        $f5, 0xC($a0)
    ctx->pc = 0x299bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x299bb8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x299bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x299bbc: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x299bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x299bc0: 0x1473021  addu        $a2, $t2, $a3
    ctx->pc = 0x299bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x299bc4: 0xc4d10000  lwc1        $f17, 0x0($a2)
    ctx->pc = 0x299bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x299bc8: 0x1493021  addu        $a2, $t2, $t1
    ctx->pc = 0x299bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x299bcc: 0xc4ce0000  lwc1        $f14, 0x0($a2)
    ctx->pc = 0x299bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x299bd0: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x299bd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x299bd4: 0x461188c2  mul.s       $f3, $f17, $f17
    ctx->pc = 0x299bd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[17], ctx->f[17]);
    // 0x299bd8: 0x46111d82  mul.s       $f22, $f3, $f17
    ctx->pc = 0x299bd8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[3], ctx->f[17]);
    // 0x299bdc: 0x460e72c2  mul.s       $f11, $f14, $f14
    ctx->pc = 0x299bdcu;
    ctx->f[11] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x299be0: 0x460e5a82  mul.s       $f10, $f11, $f14
    ctx->pc = 0x299be0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[14]);
    // 0x299be4: 0x3010  mfhi        $a2
    ctx->pc = 0x299be4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x299be8: 0x29630003  slti        $v1, $t3, 0x3
    ctx->pc = 0x299be8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x299bec: 0x46030d02  mul.s       $f20, $f1, $f3
    ctx->pc = 0x299becu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x299bf0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x299bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x299bf4: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x299bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x299bf8: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x299bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x299bfc: 0xc4f00000  lwc1        $f16, 0x0($a3)
    ctx->pc = 0x299bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x299c00: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x299c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x299c04: 0xc4cd0000  lwc1        $f13, 0x0($a2)
    ctx->pc = 0x299c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x299c08: 0x461604c2  mul.s       $f19, $f0, $f22
    ctx->pc = 0x299c08u;
    ctx->f[19] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x299c0c: 0x46118180  add.s       $f6, $f16, $f17
    ctx->pc = 0x299c0cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[16], ctx->f[17]);
    // 0x299c10: 0x46068102  mul.s       $f4, $f16, $f6
    ctx->pc = 0x299c10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[6]);
    // 0x299c14: 0x460e6b01  sub.s       $f12, $f13, $f14
    ctx->pc = 0x299c14u;
    ctx->f[12] = FPU_SUB_S(ctx->f[13], ctx->f[14]);
    // 0x299c18: 0x46041d40  add.s       $f21, $f3, $f4
    ctx->pc = 0x299c18u;
    ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x299c1c: 0x46066102  mul.s       $f4, $f12, $f6
    ctx->pc = 0x299c1cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x299c20: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x299c20u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x299c24: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x299c24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x299c28: 0x46158102  mul.s       $f4, $f16, $f21
    ctx->pc = 0x299c28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[21]);
    // 0x299c2c: 0x4604b180  add.s       $f6, $f22, $f4
    ctx->pc = 0x299c2cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[22], ctx->f[4]);
    // 0x299c30: 0xc4850010  lwc1        $f5, 0x10($a0)
    ctx->pc = 0x299c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x299c34: 0x46156102  mul.s       $f4, $f12, $f21
    ctx->pc = 0x299c34u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x299c38: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x299c38u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x299c3c: 0xe4840010  swc1        $f4, 0x10($a0)
    ctx->pc = 0x299c3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x299c40: 0x460e6900  add.s       $f4, $f13, $f14
    ctx->pc = 0x299c40u;
    ctx->f[4] = FPU_ADD_S(ctx->f[13], ctx->f[14]);
    // 0x299c44: 0x46046902  mul.s       $f4, $f13, $f4
    ctx->pc = 0x299c44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[4]);
    // 0x299c48: 0x46045d40  add.s       $f21, $f11, $f4
    ctx->pc = 0x299c48u;
    ctx->f[21] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x299c4c: 0x46156902  mul.s       $f4, $f13, $f21
    ctx->pc = 0x299c4cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[21]);
    // 0x299c50: 0x46045140  add.s       $f5, $f10, $f4
    ctx->pc = 0x299c50u;
    ctx->f[5] = FPU_ADD_S(ctx->f[10], ctx->f[4]);
    // 0x299c54: 0x46101102  mul.s       $f4, $f2, $f16
    ctx->pc = 0x299c54u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[16]);
    // 0x299c58: 0x46108242  mul.s       $f9, $f16, $f16
    ctx->pc = 0x299c58u;
    ctx->f[9] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x299c5c: 0x461125c2  mul.s       $f23, $f4, $f17
    ctx->pc = 0x299c5cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[4], ctx->f[17]);
    // 0x299c60: 0x46090902  mul.s       $f4, $f1, $f9
    ctx->pc = 0x299c60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x299c64: 0x46172100  add.s       $f4, $f4, $f23
    ctx->pc = 0x299c64u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[23]);
    // 0x299c68: 0x46041900  add.s       $f4, $f3, $f4
    ctx->pc = 0x299c68u;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x299c6c: 0x461748c0  add.s       $f3, $f9, $f23
    ctx->pc = 0x299c6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[9], ctx->f[23]);
    // 0x299c70: 0x4603a0c0  add.s       $f3, $f20, $f3
    ctx->pc = 0x299c70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x299c74: 0x4611b01a  mula.s      $f22, $f17
    ctx->pc = 0x299c74u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[17]);
    // 0x299c78: 0x46066502  mul.s       $f20, $f12, $f6
    ctx->pc = 0x299c78u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x299c7c: 0xc4960018  lwc1        $f22, 0x18($a0)
    ctx->pc = 0x299c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x299c80: 0x4606819c  madd.s      $f6, $f16, $f6
    ctx->pc = 0x299c80u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[6]));
    // 0x299c84: 0x461183c1  sub.s       $f15, $f16, $f17
    ctx->pc = 0x299c84u;
    ctx->f[15] = FPU_SUB_S(ctx->f[16], ctx->f[17]);
    // 0x299c88: 0x4614b500  add.s       $f20, $f22, $f20
    ctx->pc = 0x299c88u;
    ctx->f[20] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x299c8c: 0xe4940018  swc1        $f20, 0x18($a0)
    ctx->pc = 0x299c8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x299c90: 0x46066502  mul.s       $f20, $f12, $f6
    ctx->pc = 0x299c90u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x299c94: 0xc4860024  lwc1        $f6, 0x24($a0)
    ctx->pc = 0x299c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x299c98: 0x460e501a  mula.s      $f10, $f14
    ctx->pc = 0x299c98u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[14]);
    // 0x299c9c: 0x46157d42  mul.s       $f21, $f15, $f21
    ctx->pc = 0x299c9cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[15], ctx->f[21]);
    // 0x299ca0: 0x46143180  add.s       $f6, $f6, $f20
    ctx->pc = 0x299ca0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[20]);
    // 0x299ca4: 0x46057d02  mul.s       $f20, $f15, $f5
    ctx->pc = 0x299ca4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[15], ctx->f[5]);
    // 0x299ca8: 0xe4860024  swc1        $f6, 0x24($a0)
    ctx->pc = 0x299ca8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x299cac: 0x4605695c  madd.s      $f5, $f13, $f5
    ctx->pc = 0x299cacu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[5]));
    // 0x299cb0: 0xc4960014  lwc1        $f22, 0x14($a0)
    ctx->pc = 0x299cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x299cb4: 0x46057982  mul.s       $f6, $f15, $f5
    ctx->pc = 0x299cb4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[15], ctx->f[5]);
    // 0x299cb8: 0x4615b140  add.s       $f5, $f22, $f21
    ctx->pc = 0x299cb8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x299cbc: 0xe4850014  swc1        $f5, 0x14($a0)
    ctx->pc = 0x299cbcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x299cc0: 0x4604681a  mula.s      $f13, $f4
    ctx->pc = 0x299cc0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[4]);
    // 0x299cc4: 0x4603715c  madd.s      $f5, $f14, $f3
    ctx->pc = 0x299cc4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[3]));
    // 0x299cc8: 0x46104a42  mul.s       $f9, $f9, $f16
    ctx->pc = 0x299cc8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[16]);
    // 0x299ccc: 0x4609001a  mula.s      $f0, $f9
    ctx->pc = 0x299cccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x299cd0: 0xc4950020  lwc1        $f21, 0x20($a0)
    ctx->pc = 0x299cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x299cd4: 0x4604891c  madd.s      $f4, $f17, $f4
    ctx->pc = 0x299cd4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[4]));
    // 0x299cd8: 0x460380c2  mul.s       $f3, $f16, $f3
    ctx->pc = 0x299cd8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[16], ctx->f[3]);
    // 0x299cdc: 0x4614aa40  add.s       $f9, $f21, $f20
    ctx->pc = 0x299cdcu;
    ctx->f[9] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x299ce0: 0x460d6a02  mul.s       $f8, $f13, $f13
    ctx->pc = 0x299ce0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x299ce4: 0xe4890020  swc1        $f9, 0x20($a0)
    ctx->pc = 0x299ce4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x299ce8: 0x4604681a  mula.s      $f13, $f4
    ctx->pc = 0x299ce8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[4]);
    // 0x299cec: 0xc4840030  lwc1        $f4, 0x30($a0)
    ctx->pc = 0x299cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299cf0: 0x460398c0  add.s       $f3, $f19, $f3
    ctx->pc = 0x299cf0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[19], ctx->f[3]);
    // 0x299cf4: 0x460370dc  madd.s      $f3, $f14, $f3
    ctx->pc = 0x299cf4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[3]));
    // 0x299cf8: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x299cf8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x299cfc: 0xe4840030  swc1        $f4, 0x30($a0)
    ctx->pc = 0x299cfcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x299d00: 0xc484001c  lwc1        $f4, 0x1C($a0)
    ctx->pc = 0x299d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299d04: 0x46056142  mul.s       $f5, $f12, $f5
    ctx->pc = 0x299d04u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x299d08: 0x46036182  mul.s       $f6, $f12, $f3
    ctx->pc = 0x299d08u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x299d0c: 0x460520c0  add.s       $f3, $f4, $f5
    ctx->pc = 0x299d0cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x299d10: 0xe483001c  swc1        $f3, 0x1C($a0)
    ctx->pc = 0x299d10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x299d14: 0xc4840028  lwc1        $f4, 0x28($a0)
    ctx->pc = 0x299d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x299d18: 0x460d41c2  mul.s       $f7, $f8, $f13
    ctx->pc = 0x299d18u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x299d1c: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x299d1cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x299d20: 0x460808c2  mul.s       $f3, $f1, $f8
    ctx->pc = 0x299d20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x299d24: 0xe4840028  swc1        $f4, 0x28($a0)
    ctx->pc = 0x299d24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x299d28: 0x460e1902  mul.s       $f4, $f3, $f14
    ctx->pc = 0x299d28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
    // 0x299d2c: 0x46070142  mul.s       $f5, $f0, $f7
    ctx->pc = 0x299d2cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x299d30: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x299d30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x299d34: 0x46081102  mul.s       $f4, $f2, $f8
    ctx->pc = 0x299d34u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x299d38: 0x460e2102  mul.s       $f4, $f4, $f14
    ctx->pc = 0x299d38u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[14]);
    // 0x299d3c: 0x46043940  add.s       $f5, $f7, $f4
    ctx->pc = 0x299d3cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x299d40: 0x460d1102  mul.s       $f4, $f2, $f13
    ctx->pc = 0x299d40u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x299d44: 0x460b211c  madd.s      $f4, $f4, $f11
    ctx->pc = 0x299d44u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[11]));
    // 0x299d48: 0x46045100  add.s       $f4, $f10, $f4
    ctx->pc = 0x299d48u;
    ctx->f[4] = FPU_ADD_S(ctx->f[10], ctx->f[4]);
    // 0x299d4c: 0x4604801a  mula.s      $f16, $f4
    ctx->pc = 0x299d4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[4]);
    // 0x299d50: 0x460d0902  mul.s       $f4, $f1, $f13
    ctx->pc = 0x299d50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x299d54: 0x460b2102  mul.s       $f4, $f4, $f11
    ctx->pc = 0x299d54u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x299d58: 0x460a0482  mul.s       $f18, $f0, $f10
    ctx->pc = 0x299d58u;
    ctx->f[18] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x299d5c: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x299d5cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x299d60: 0x46049100  add.s       $f4, $f18, $f4
    ctx->pc = 0x299d60u;
    ctx->f[4] = FPU_ADD_S(ctx->f[18], ctx->f[4]);
    // 0x299d64: 0x4604891c  madd.s      $f4, $f17, $f4
    ctx->pc = 0x299d64u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[4]));
    // 0x299d68: 0xc483002c  lwc1        $f3, 0x2C($a0)
    ctx->pc = 0x299d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x299d6c: 0x46047902  mul.s       $f4, $f15, $f4
    ctx->pc = 0x299d6cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[15], ctx->f[4]);
    // 0x299d70: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x299d70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x299d74: 0x1460ff8a  bnez        $v1, . + 4 + (-0x76 << 2)
    ctx->pc = 0x299D74u;
    {
        const bool branch_taken_0x299d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x299D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299D74u;
            // 0x299d78: 0xe483002c  swc1        $f3, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d74) {
            ctx->pc = 0x299BA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299ba0;
        }
    }
    ctx->pc = 0x299D7Cu;
    // 0x299d7c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x299d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299d80: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x299d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x299d84: 0x44834800  mtc1        $v1, $f9
    ctx->pc = 0x299d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x299d88: 0x3c07c1a0  lui         $a3, 0xC1A0
    ctx->pc = 0x299d88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49568 << 16));
    // 0x299d8c: 0x3c0641c0  lui         $a2, 0x41C0
    ctx->pc = 0x299d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16832 << 16));
    // 0x299d90: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x299d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
    // 0x299d94: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x299d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x299d98: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x299d98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x299d9c: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x299d9cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x299da0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x299da0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x299da4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x299da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x299da8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x299da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x299dac: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x299dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299db0: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x299db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x299db4: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x299db4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x299db8: 0x3c03c0c0  lui         $v1, 0xC0C0
    ctx->pc = 0x299db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49344 << 16));
    // 0x299dbc: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x299dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x299dc0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x299dc0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299dc4: 0x46090003  div.s       $f0, $f0, $f9
    ctx->pc = 0x299dc4u;
    if (ctx->f[9] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[9];
    // 0x299dc8: 0x3c03c140  lui         $v1, 0xC140
    ctx->pc = 0x299dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49472 << 16));
    // 0x299dcc: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x299dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x299dd0: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x299dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299dd4: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x299dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x299dd8: 0x3c03c270  lui         $v1, 0xC270
    ctx->pc = 0x299dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49776 << 16));
    // 0x299ddc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x299ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299de0: 0x0  nop
    ctx->pc = 0x299de0u;
    // NOP
    // 0x299de4: 0x46080003  div.s       $f0, $f0, $f8
    ctx->pc = 0x299de4u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[8];
    // 0x299de8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x299de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x299dec: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x299decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299df0: 0x46070003  div.s       $f0, $f0, $f7
    ctx->pc = 0x299df0u;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[7];
    // 0x299df4: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x299df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x299df8: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x299df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299dfc: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x299dfcu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[6];
    // 0x299e00: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x299e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x299e04: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x299e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299e08: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x299e08u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x299e0c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x299e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x299e10: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x299e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299e14: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x299e14u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x299e18: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x299e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x299e1c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x299e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299e20: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x299e20u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x299e24: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x299e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x299e28: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x299e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299e2c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x299e2cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x299e30: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x299e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x299e34: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x299e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299e38: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x299e38u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x299e3c: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x299e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x299e40: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x299e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x299e44: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x299e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x299e48: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x299e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x299e4c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x299e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x299e50: 0x3e00008  jr          $ra
    ctx->pc = 0x299E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299E50u;
            // 0x299e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299E58u;
    // 0x299e58: 0x0  nop
    ctx->pc = 0x299e58u;
    // NOP
    // 0x299e5c: 0x0  nop
    ctx->pc = 0x299e5cu;
    // NOP
}
