#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00266970
// Address: 0x266970 - 0x266c10
void sub_00266970_0x266970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266970_0x266970");
#endif

    switch (ctx->pc) {
        case 0x266bb0u: goto label_266bb0;
        case 0x266bc8u: goto label_266bc8;
        case 0x266be4u: goto label_266be4;
        case 0x266bfcu: goto label_266bfc;
        default: break;
    }

    ctx->pc = 0x266970u;

    // 0x266970: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x266970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x266974: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x266974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x266978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26697c: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x26697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x266980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x266984: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x266984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x266988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x266988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26698c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26698cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266990: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x266990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x266994: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x266994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x266998: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x266998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26699c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x26699cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2669a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2669a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2669a4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2669a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2669a8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2669a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2669ac: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2669acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2669b0: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x2669b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2669b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2669b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2669b8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2669b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2669bc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2669bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2669c0: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2669c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2669c4: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2669c4u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2669c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2669c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2669cc: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2669ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2669d0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2669d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2669d4: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2669d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2669d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2669d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2669dc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2669dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2669e0: 0xc4480000  lwc1        $f8, 0x0($v0)
    ctx->pc = 0x2669e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2669e4: 0xc4670000  lwc1        $f7, 0x0($v1)
    ctx->pc = 0x2669e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2669e8: 0x46004045  abs.s       $f1, $f8
    ctx->pc = 0x2669e8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[8]);
    // 0x2669ec: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2669ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2669f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2669F0u;
    {
        const bool branch_taken_0x2669f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2669F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2669F0u;
            // 0x2669f4: 0x46003805  abs.s       $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_ABS_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669f0) {
            ctx->pc = 0x266A08u;
            goto label_266a08;
        }
    }
    ctx->pc = 0x2669F8u;
    // 0x2669f8: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x2669f8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2669fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2669fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266a00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x266a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266a04: 0x0  nop
    ctx->pc = 0x266a04u;
    // NOP
label_266a08:
    // 0x266a08: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x266a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266a0c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x266A0Cu;
    {
        const bool branch_taken_0x266a0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x266a0c) {
            ctx->pc = 0x266A18u;
            goto label_266a18;
        }
    }
    ctx->pc = 0x266A14u;
    // 0x266a14: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x266a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_266a18:
    // 0x266a18: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x266a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x266a1c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x266a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x266a20: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x266a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x266a24: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x266a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x266a28: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x266a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x266a2c: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x266a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x266a30: 0x27a700b4  addiu       $a3, $sp, 0xB4
    ctx->pc = 0x266a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x266a34: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x266a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x266a38: 0x27aa00a4  addiu       $t2, $sp, 0xA4
    ctx->pc = 0x266a38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x266a3c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x266a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x266a40: 0x27a900a8  addiu       $t1, $sp, 0xA8
    ctx->pc = 0x266a40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x266a44: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x266a44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x266a48: 0x27a600ac  addiu       $a2, $sp, 0xAC
    ctx->pc = 0x266a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x266a4c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x266a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x266a50: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x266a50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x266a54: 0xc46000c0  lwc1        $f0, 0xC0($v1)
    ctx->pc = 0x266a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266a58: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x266a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x266a5c: 0xc44000c0  lwc1        $f0, 0xC0($v0)
    ctx->pc = 0x266a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266a60: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x266a60u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x266a64: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x266a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
    // 0x266a68: 0xc7a500b8  lwc1        $f5, 0xB8($sp)
    ctx->pc = 0x266a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x266a6c: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x266a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x266a70: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x266a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266a74: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x266a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266a78: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x266a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x266a7c: 0x4605401a  mula.s      $f8, $f5
    ctx->pc = 0x266a7cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x266a80: 0x4603389d  msub.s      $f2, $f7, $f3
    ctx->pc = 0x266a80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x266a84: 0x4601381a  mula.s      $f7, $f1
    ctx->pc = 0x266a84u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x266a88: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x266a88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x266a8c: 0x4605001d  msub.s      $f0, $f0, $f5
    ctx->pc = 0x266a8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
    // 0x266a90: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x266a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x266a94: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x266a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266a98: 0x4603001a  mula.s      $f0, $f3
    ctx->pc = 0x266a98u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x266a9c: 0x4604401d  msub.s      $f0, $f8, $f4
    ctx->pc = 0x266a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[4]));
    // 0x266aa0: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x266aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x266aa4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x266aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x266aa8: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x266aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266aac: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x266aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266ab0: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x266ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x266ab4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x266ab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x266ab8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x266ab8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x266abc: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x266abcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x266ac0: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x266ac0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x266ac4: 0x46060832  c.eq.s      $f1, $f6
    ctx->pc = 0x266ac4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266ac8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x266AC8u;
    {
        const bool branch_taken_0x266ac8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x266ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266AC8u;
            // 0x266acc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ac8) {
            ctx->pc = 0x266AF0u;
            goto label_266af0;
        }
    }
    ctx->pc = 0x266AD0u;
    // 0x266ad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x266ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x266ad4: 0x0  nop
    ctx->pc = 0x266ad4u;
    // NOP
    // 0x266ad8: 0x46010196  rsqrt.s     $f6, $f0, $f1
    ctx->pc = 0x266ad8u;
    ctx->f[6] = 1.0f / sqrtf(ctx->f[0]);
    // 0x266adc: 0x0  nop
    ctx->pc = 0x266adcu;
    // NOP
    // 0x266ae0: 0x0  nop
    ctx->pc = 0x266ae0u;
    // NOP
    // 0x266ae4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x266AE4u;
    {
        const bool branch_taken_0x266ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266ae4) {
            ctx->pc = 0x266AF0u;
            goto label_266af0;
        }
    }
    ctx->pc = 0x266AECu;
    // 0x266aec: 0x0  nop
    ctx->pc = 0x266aecu;
    // NOP
label_266af0:
    // 0x266af0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x266af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266af4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x266af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x266af8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x266af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x266afc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x266afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x266b00: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x266b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266b04: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x266b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x266b08: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x266b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x266b0c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x266b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266b10: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x266b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x266b14: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x266b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x266b18: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x266b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266b1c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x266b1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x266b20: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x266b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x266b24: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x266b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266b28: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x266b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266b2c: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x266b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x266b30: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x266b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x266b34: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x266b34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x266b38: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x266b38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x266b3c: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x266b3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x266b40: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x266b40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266b44: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x266B44u;
    {
        const bool branch_taken_0x266b44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x266B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266B44u;
            // 0x266b48: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b44) {
            ctx->pc = 0x266B68u;
            goto label_266b68;
        }
    }
    ctx->pc = 0x266B4Cu;
    // 0x266b4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x266b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x266b50: 0x0  nop
    ctx->pc = 0x266b50u;
    // NOP
    // 0x266b54: 0x460100d6  rsqrt.s     $f3, $f0, $f1
    ctx->pc = 0x266b54u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[0]);
    // 0x266b58: 0x0  nop
    ctx->pc = 0x266b58u;
    // NOP
    // 0x266b5c: 0x0  nop
    ctx->pc = 0x266b5cu;
    // NOP
    // 0x266b60: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x266B60u;
    {
        const bool branch_taken_0x266b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b60) {
            ctx->pc = 0x266B68u;
            goto label_266b68;
        }
    }
    ctx->pc = 0x266B68u;
label_266b68:
    // 0x266b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b6c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x266b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266b70: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x266b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x266b74: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x266b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x266b78: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x266b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x266b7c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x266b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x266b80: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x266b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266b84: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x266b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x266b88: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x266b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x266b8c: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x266b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266b90: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x266b90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x266b94: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x266b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x266b98: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x266b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266b9c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x266b9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x266ba0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x266ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x266ba4: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x266ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x266ba8: 0xc099948  jal         func_266520
    ctx->pc = 0x266BA8u;
    SET_GPR_U32(ctx, 31, 0x266BB0u);
    ctx->pc = 0x266BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266BA8u;
            // 0x266bac: 0x27a800dc  addiu       $t0, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266520u;
    if (runtime->hasFunction(0x266520u)) {
        auto targetFn = runtime->lookupFunction(0x266520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266BB0u; }
        if (ctx->pc != 0x266BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266520_0x266520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266BB0u; }
        if (ctx->pc != 0x266BB0u) { return; }
    }
    ctx->pc = 0x266BB0u;
label_266bb0:
    // 0x266bb0: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x266bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x266bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266bb8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x266bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x266bbc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x266bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x266bc0: 0xc099948  jal         func_266520
    ctx->pc = 0x266BC0u;
    SET_GPR_U32(ctx, 31, 0x266BC8u);
    ctx->pc = 0x266BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266BC0u;
            // 0x266bc4: 0x27a800d8  addiu       $t0, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266520u;
    if (runtime->hasFunction(0x266520u)) {
        auto targetFn = runtime->lookupFunction(0x266520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266BC8u; }
        if (ctx->pc != 0x266BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266520_0x266520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266BC8u; }
        if (ctx->pc != 0x266BC8u) { return; }
    }
    ctx->pc = 0x266BC8u;
label_266bc8:
    // 0x266bc8: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x266bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266bcc: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x266bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266bd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x266bd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266bd4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x266BD4u;
    {
        const bool branch_taken_0x266bd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x266BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266BD4u;
            // 0x266bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266bd4) {
            ctx->pc = 0x266BF0u;
            goto label_266bf0;
        }
    }
    ctx->pc = 0x266BDCu;
    // 0x266bdc: 0xc099b88  jal         func_266E20
    ctx->pc = 0x266BDCu;
    SET_GPR_U32(ctx, 31, 0x266BE4u);
    ctx->pc = 0x266BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266BDCu;
            // 0x266be0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266E20u;
    if (runtime->hasFunction(0x266E20u)) {
        auto targetFn = runtime->lookupFunction(0x266E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266BE4u; }
        if (ctx->pc != 0x266BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266E20_0x266e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266BE4u; }
        if (ctx->pc != 0x266BE4u) { return; }
    }
    ctx->pc = 0x266BE4u;
label_266be4:
    // 0x266be4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x266BE4u;
    {
        const bool branch_taken_0x266be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266be4) {
            ctx->pc = 0x266C00u;
            goto label_266c00;
        }
    }
    ctx->pc = 0x266BECu;
    // 0x266bec: 0x0  nop
    ctx->pc = 0x266becu;
    // NOP
label_266bf0:
    // 0x266bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266bf4: 0xc099b88  jal         func_266E20
    ctx->pc = 0x266BF4u;
    SET_GPR_U32(ctx, 31, 0x266BFCu);
    ctx->pc = 0x266BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266BF4u;
            // 0x266bf8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266E20u;
    if (runtime->hasFunction(0x266E20u)) {
        auto targetFn = runtime->lookupFunction(0x266E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266BFCu; }
        if (ctx->pc != 0x266BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266E20_0x266e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266BFCu; }
        if (ctx->pc != 0x266BFCu) { return; }
    }
    ctx->pc = 0x266BFCu;
label_266bfc:
    // 0x266bfc: 0x0  nop
    ctx->pc = 0x266bfcu;
    // NOP
label_266c00:
    // 0x266c00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x266c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266c08: 0x3e00008  jr          $ra
    ctx->pc = 0x266C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266C08u;
            // 0x266c0c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266C10u;
}
