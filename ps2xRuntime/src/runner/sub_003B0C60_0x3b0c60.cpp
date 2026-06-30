#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B0C60
// Address: 0x3b0c60 - 0x3b0e70
void sub_003B0C60_0x3b0c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0C60_0x3b0c60");
#endif

    switch (ctx->pc) {
        case 0x3b0e14u: goto label_3b0e14;
        case 0x3b0e1cu: goto label_3b0e1c;
        default: break;
    }

    ctx->pc = 0x3b0c60u;

    // 0x3b0c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b0c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b0c64: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3b0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3b0c68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b0c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b0c6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b0c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b0c70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b0c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b0c74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b0c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0c78: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b0c78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b0c7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3b0c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b0c80: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x3b0c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x3b0c84: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x3b0c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3b0c88: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3b0c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b0c8c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3b0c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3b0c90: 0xc494005c  lwc1        $f20, 0x5C($a0)
    ctx->pc = 0x3b0c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b0c94: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x3B0C94u;
    {
        const bool branch_taken_0x3b0c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0C94u;
            // 0x3b0c98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0c94) {
            ctx->pc = 0x3B0E08u;
            goto label_3b0e08;
        }
    }
    ctx->pc = 0x3B0C9Cu;
    // 0x3b0c9c: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x3b0c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0ca0: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x3b0ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0ca4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b0ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b0ca8: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x3b0ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x3b0cac: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x3b0cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0cb0: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x3b0cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0cb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b0cb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0cb8: 0x45030026  bc1tl       . + 4 + (0x26 << 2)
    ctx->pc = 0x3B0CB8u;
    {
        const bool branch_taken_0x3b0cb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0cb8) {
            ctx->pc = 0x3B0CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0CB8u;
            // 0x3b0cbc: 0xc4c10018  lwc1        $f1, 0x18($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B0D54u;
            goto label_3b0d54;
        }
    }
    ctx->pc = 0x3B0CC0u;
    // 0x3b0cc0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3b0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x3b0cc4: 0xe6210074  swc1        $f1, 0x74($s1)
    ctx->pc = 0x3b0cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x3b0cc8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3b0cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b0ccc: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x3b0cccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x3b0cd0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0CD0u;
    {
        const bool branch_taken_0x3b0cd0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B0CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0CD0u;
            // 0x3b0cd4: 0xc4c30018  lwc1        $f3, 0x18($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0cd0) {
            ctx->pc = 0x3B0CE4u;
            goto label_3b0ce4;
        }
    }
    ctx->pc = 0x3B0CD8u;
    // 0x3b0cd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b0cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0cdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B0CDCu;
    {
        const bool branch_taken_0x3b0cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0CDCu;
            // 0x3b0ce0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0cdc) {
            ctx->pc = 0x3B0D00u;
            goto label_3b0d00;
        }
    }
    ctx->pc = 0x3B0CE4u;
label_3b0ce4:
    // 0x3b0ce4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b0ce8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b0ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b0cec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b0cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b0cf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b0cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0cf4: 0x0  nop
    ctx->pc = 0x3b0cf4u;
    // NOP
    // 0x3b0cf8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b0cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3b0cfc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3b0cfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3b0d00:
    // 0x3b0d00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b0d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0d04: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3b0d08: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3b0d08u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b0d0c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x3b0d0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3b0d10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b0d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0d14: 0x0  nop
    ctx->pc = 0x3b0d14u;
    // NOP
    // 0x3b0d18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b0d18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0d1c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0D1Cu;
    {
        const bool branch_taken_0x3b0d1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0d1c) {
            ctx->pc = 0x3B0D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0D1Cu;
            // 0x3b0d20: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B0D34u;
            goto label_3b0d34;
        }
    }
    ctx->pc = 0x3B0D24u;
    // 0x3b0d24: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b0d24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b0d28: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b0d28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b0d2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0D2Cu;
    {
        const bool branch_taken_0x3b0d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0D2Cu;
            // 0x3b0d30: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0d2c) {
            ctx->pc = 0x3B0D4Cu;
            goto label_3b0d4c;
        }
    }
    ctx->pc = 0x3B0D34u;
label_3b0d34:
    // 0x3b0d34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b0d38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b0d38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b0d3c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b0d3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b0d40: 0x0  nop
    ctx->pc = 0x3b0d40u;
    // NOP
    // 0x3b0d44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b0d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b0d48: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3b0d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b0d4c:
    // 0x3b0d4c: 0xa223000d  sb          $v1, 0xD($s1)
    ctx->pc = 0x3b0d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b0d50: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x3b0d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b0d54:
    // 0x3b0d54: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x3b0d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0d58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b0d58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b0d5c: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x3b0d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x3b0d60: 0xc4a30020  lwc1        $f3, 0x20($a1)
    ctx->pc = 0x3b0d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b0d64: 0xc4820058  lwc1        $f2, 0x58($a0)
    ctx->pc = 0x3b0d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b0d68: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x3b0d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0d6c: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x3b0d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0d70: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x3b0d70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3b0d74: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b0d74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3b0d78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b0d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0d7c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0D7Cu;
    {
        const bool branch_taken_0x3b0d7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0d7c) {
            ctx->pc = 0x3B0D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0D7Cu;
            // 0x3b0d80: 0xc4a20020  lwc1        $f2, 0x20($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B0D8Cu;
            goto label_3b0d8c;
        }
    }
    ctx->pc = 0x3B0D84u;
    // 0x3b0d84: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x3b0d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x3b0d88: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x3b0d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b0d8c:
    // 0x3b0d8c: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x3b0d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0d90: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x3b0d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0d94: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3b0d94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3b0d98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b0d98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0d9c: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
    ctx->pc = 0x3B0D9Cu;
    {
        const bool branch_taken_0x3b0d9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0d9c) {
            ctx->pc = 0x3B0DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0D9Cu;
            // 0x3b0da0: 0x8e240080  lw          $a0, 0x80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B0E0Cu;
            goto label_3b0e0c;
        }
    }
    ctx->pc = 0x3B0DA4u;
    // 0x3b0da4: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x3b0da4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3b0da8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3b0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3b0dac: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x3b0dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0db0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b0db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b0db4: 0x0  nop
    ctx->pc = 0x3b0db4u;
    // NOP
    // 0x3b0db8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3b0db8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3b0dbc: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x3b0dbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0dc0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x3B0DC0u;
    {
        const bool branch_taken_0x3b0dc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B0DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0DC0u;
            // 0x3b0dc4: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0dc0) {
            ctx->pc = 0x3B0DECu;
            goto label_3b0dec;
        }
    }
    ctx->pc = 0x3B0DC8u;
    // 0x3b0dc8: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x3b0dc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3b0dcc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b0dccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b0dd0: 0xc483005c  lwc1        $f3, 0x5C($a0)
    ctx->pc = 0x3b0dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b0dd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b0dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0dd8: 0xc4820064  lwc1        $f2, 0x64($a0)
    ctx->pc = 0x3b0dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b0ddc: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x3b0ddcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3b0de0: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x3b0de0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x3b0de4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B0DE4u;
    {
        const bool branch_taken_0x3b0de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0DE4u;
            // 0x3b0de8: 0x46001d02  mul.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0de4) {
            ctx->pc = 0x3B0E08u;
            goto label_3b0e08;
        }
    }
    ctx->pc = 0x3B0DECu;
label_3b0dec:
    // 0x3b0dec: 0xc482005c  lwc1        $f2, 0x5C($a0)
    ctx->pc = 0x3b0decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b0df0: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x3b0df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0df4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b0df4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0df8: 0x0  nop
    ctx->pc = 0x3b0df8u;
    // NOP
    // 0x3b0dfc: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x3b0dfcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3b0e00: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x3b0e00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x3b0e04: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x3b0e04u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3b0e08:
    // 0x3b0e08: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3b0e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3b0e0c:
    // 0x3b0e0c: 0xc11088c  jal         func_442230
    ctx->pc = 0x3B0E0Cu;
    SET_GPR_U32(ctx, 31, 0x3B0E14u);
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0E14u; }
        if (ctx->pc != 0x3B0E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0E14u; }
        if (ctx->pc != 0x3B0E14u) { return; }
    }
    ctx->pc = 0x3B0E14u;
label_3b0e14:
    // 0x3b0e14: 0xc11088c  jal         func_442230
    ctx->pc = 0x3B0E14u;
    SET_GPR_U32(ctx, 31, 0x3B0E1Cu);
    ctx->pc = 0x3B0E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0E14u;
            // 0x3b0e18: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0E1Cu; }
        if (ctx->pc != 0x3B0E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0E1Cu; }
        if (ctx->pc != 0x3B0E1Cu) { return; }
    }
    ctx->pc = 0x3B0E1Cu;
label_3b0e1c:
    // 0x3b0e1c: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0E1Cu;
    {
        const bool branch_taken_0x3b0e1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0e1c) {
            ctx->pc = 0x3B0E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0E1Cu;
            // 0x3b0e20: 0x8e250084  lw          $a1, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B0E3Cu;
            goto label_3b0e3c;
        }
    }
    ctx->pc = 0x3B0E24u;
    // 0x3b0e24: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x3b0e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x3b0e28: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3b0e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3b0e2c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3b0e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3b0e30: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3b0e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x3b0e34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0E34u;
    {
        const bool branch_taken_0x3b0e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0E34u;
            // 0x3b0e38: 0xe4940014  swc1        $f20, 0x14($a0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0e34) {
            ctx->pc = 0x3B0E4Cu;
            goto label_3b0e4c;
        }
    }
    ctx->pc = 0x3B0E3Cu;
label_3b0e3c:
    // 0x3b0e3c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3b0e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3b0e40: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3b0e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3b0e44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b0e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b0e48: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x3b0e48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_3b0e4c:
    // 0x3b0e4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b0e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b0e50: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b0e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b0e54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b0e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0e58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b0e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b0e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0E5Cu;
            // 0x3b0e60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B0E64u;
    // 0x3b0e64: 0x0  nop
    ctx->pc = 0x3b0e64u;
    // NOP
    // 0x3b0e68: 0x0  nop
    ctx->pc = 0x3b0e68u;
    // NOP
    // 0x3b0e6c: 0x0  nop
    ctx->pc = 0x3b0e6cu;
    // NOP
}
