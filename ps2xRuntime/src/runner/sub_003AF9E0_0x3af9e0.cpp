#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AF9E0
// Address: 0x3af9e0 - 0x3afcf0
void sub_003AF9E0_0x3af9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF9E0_0x3af9e0");
#endif

    switch (ctx->pc) {
        case 0x3afb64u: goto label_3afb64;
        case 0x3afbb0u: goto label_3afbb0;
        case 0x3afc30u: goto label_3afc30;
        case 0x3afca8u: goto label_3afca8;
        default: break;
    }

    ctx->pc = 0x3af9e0u;

    // 0x3af9e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3af9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3af9e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3af9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3af9e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3af9e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af9ec: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3af9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x3af9f0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3af9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3af9f4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3af9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3af9f8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3af9f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af9fc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3af9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3afa00: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3afa00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afa04: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3afa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3afa08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3afa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3afa0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3afa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3afa10: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x3afa10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
    // 0x3afa14: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x3afa14u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3afa18: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3afa18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
    // 0x3afa1c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x3afa1cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3afa20: 0x26319bc0  addiu       $s1, $s1, -0x6440
    ctx->pc = 0x3afa20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941632));
    // 0x3afa24: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3afa24u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3afa28: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x3afa28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
    // 0x3afa2c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3afa2cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3afa30: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x3afa30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x3afa34: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3afa34u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3afa38: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3afa38u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afa3c: 0x0  nop
    ctx->pc = 0x3afa3cu;
    // NOP
    // 0x3afa40: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x3afa40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x3afa44: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3afa44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3afa48: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3afa48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3afa4c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3afa4cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afa50: 0x90830080  lbu         $v1, 0x80($a0)
    ctx->pc = 0x3afa50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3afa54: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3afa54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3afa58: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3afa58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3afa5c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3afa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3afa60: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3afa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3afa64: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3afa64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3afa68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3afa68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afa6c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x3afa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3afa70: 0x46170018  adda.s      $f0, $f23
    ctx->pc = 0x3afa70u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x3afa74: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x3afa74u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x3afa78: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFA78u;
    {
        const bool branch_taken_0x3afa78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AFA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AFA78u;
            // 0x3afa7c: 0x4601155c  madd.s      $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afa78) {
            ctx->pc = 0x3AFA8Cu;
            goto label_3afa8c;
        }
    }
    ctx->pc = 0x3AFA80u;
    // 0x3afa80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3afa80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afa84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AFA84u;
    {
        const bool branch_taken_0x3afa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AFA84u;
            // 0x3afa88: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afa84) {
            ctx->pc = 0x3AFAA8u;
            goto label_3afaa8;
        }
    }
    ctx->pc = 0x3AFA8Cu;
label_3afa8c:
    // 0x3afa8c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3afa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3afa90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3afa90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3afa94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3afa94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3afa98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3afa98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afa9c: 0x0  nop
    ctx->pc = 0x3afa9cu;
    // NOP
    // 0x3afaa0: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x3afaa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x3afaa4: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x3afaa4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_3afaa8:
    // 0x3afaa8: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3afaa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3afaac: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFAACu;
    {
        const bool branch_taken_0x3afaac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3afaac) {
            ctx->pc = 0x3AFAB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AFAACu;
            // 0x3afab0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AFAC0u;
            goto label_3afac0;
        }
    }
    ctx->pc = 0x3AFAB4u;
    // 0x3afab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3afab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afab8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AFAB8u;
    {
        const bool branch_taken_0x3afab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AFAB8u;
            // 0x3afabc: 0x468006a0  cvt.s.w     $f26, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afab8) {
            ctx->pc = 0x3AFAD8u;
            goto label_3afad8;
        }
    }
    ctx->pc = 0x3AFAC0u;
label_3afac0:
    // 0x3afac0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3afac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3afac4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3afac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3afac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3afac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afacc: 0x0  nop
    ctx->pc = 0x3afaccu;
    // NOP
    // 0x3afad0: 0x468006a0  cvt.s.w     $f26, $f0
    ctx->pc = 0x3afad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
    // 0x3afad4: 0x461ad680  add.s       $f26, $f26, $f26
    ctx->pc = 0x3afad4u;
    ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[26]);
label_3afad8:
    // 0x3afad8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3afad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3afadc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3afadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afae0: 0x0  nop
    ctx->pc = 0x3afae0u;
    // NOP
    // 0x3afae4: 0x4600c036  c.le.s      $f24, $f0
    ctx->pc = 0x3afae4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3afae8: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x3AFAE8u;
    {
        const bool branch_taken_0x3afae8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AFAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AFAE8u;
            // 0x3afaec: 0x90560116  lbu         $s6, 0x116($v0) (Delay Slot)
        SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afae8) {
            ctx->pc = 0x3AFBB0u;
            goto label_3afbb0;
        }
    }
    ctx->pc = 0x3AFAF0u;
    // 0x3afaf0: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x3afaf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3afaf4: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3afaf4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x3afaf8: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x3afaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x3afafc: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3afafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3afb00: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x3afb00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3afb04: 0x92a50081  lbu         $a1, 0x81($s5)
    ctx->pc = 0x3afb04u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 129)));
    // 0x3afb08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3afb08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afb0c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3afb0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3afb10: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3afb10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3afb14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3afb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3afb18: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3afb18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3afb1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3afb1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afb20: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x3afb20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3afb24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3afb24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afb28: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3afb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3afb2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3afb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afb30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3afb30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afb34: 0x0  nop
    ctx->pc = 0x3afb34u;
    // NOP
    // 0x3afb38: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3afb38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3afb3c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3afb3cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afb40: 0x0  nop
    ctx->pc = 0x3afb40u;
    // NOP
    // 0x3afb44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3afb44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3afb48: 0x4600c65c  madd.s      $f25, $f24, $f0
    ctx->pc = 0x3afb48u;
    ctx->f[25] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[0]));
    // 0x3afb4c: 0x461ab3c0  add.s       $f15, $f22, $f26
    ctx->pc = 0x3afb4cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[26]);
    // 0x3afb50: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3afb50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3afb54: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3afb54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x3afb58: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3afb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3afb5c: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AFB5Cu;
    SET_GPR_U32(ctx, 31, 0x3AFB64u);
    ctx->pc = 0x3AFB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AFB5Cu;
            // 0x3afb60: 0x4600cb86  mov.s       $f14, $f25 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AFB64u; }
        if (ctx->pc != 0x3AFB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AFB64u; }
        if (ctx->pc != 0x3AFB64u) { return; }
    }
    ctx->pc = 0x3AFB64u;
label_3afb64:
    // 0x3afb64: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3afb64u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3afb68: 0x4614b3c0  add.s       $f15, $f22, $f20
    ctx->pc = 0x3afb68u;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x3afb6c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3afb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3afb70: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3afb70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3afb74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3afb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afb78: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3afb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afb7c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3afb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3afb80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3afb80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afb84: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3afb84u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afb88: 0x0  nop
    ctx->pc = 0x3afb88u;
    // NOP
    // 0x3afb8c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3afb8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3afb90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3afb90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afb94: 0x0  nop
    ctx->pc = 0x3afb94u;
    // NOP
    // 0x3afb98: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3afb98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3afb9c: 0x461a7b41  sub.s       $f13, $f15, $f26
    ctx->pc = 0x3afb9cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[26]);
    // 0x3afba0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3afba0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3afba4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3afba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3afba8: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AFBA8u;
    SET_GPR_U32(ctx, 31, 0x3AFBB0u);
    ctx->pc = 0x3AFBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AFBA8u;
            // 0x3afbac: 0x4600cb86  mov.s       $f14, $f25 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AFBB0u; }
        if (ctx->pc != 0x3AFBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AFBB0u; }
        if (ctx->pc != 0x3AFBB0u) { return; }
    }
    ctx->pc = 0x3AFBB0u;
label_3afbb0:
    // 0x3afbb0: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3afbb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3afbb4: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x3afbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x3afbb8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3afbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3afbbc: 0x92a40080  lbu         $a0, 0x80($s5)
    ctx->pc = 0x3afbbcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x3afbc0: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x3afbc0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3afbc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3afbc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afbc8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3afbc8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afbcc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3afbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3afbd0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3afbd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3afbd4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3afbd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3afbd8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3afbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3afbdc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3afbdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afbe0: 0x2249021  addu        $s2, $s1, $a0
    ctx->pc = 0x3afbe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3afbe4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3afbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3afbe8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3afbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afbec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3afbecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afbf0: 0x0  nop
    ctx->pc = 0x3afbf0u;
    // NOP
    // 0x3afbf4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3afbf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3afbf8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3afbf8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afbfc: 0x0  nop
    ctx->pc = 0x3afbfcu;
    // NOP
    // 0x3afc00: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3afc00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3afc04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3afc04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afc08: 0x0  nop
    ctx->pc = 0x3afc08u;
    // NOP
    // 0x3afc0c: 0x46170018  adda.s      $f0, $f23
    ctx->pc = 0x3afc0cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x3afc10: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x3afc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afc14: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x3afc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3afc18: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3afc18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3afc1c: 0x4600b3c0  add.s       $f15, $f22, $f0
    ctx->pc = 0x3afc1cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x3afc20: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3afc20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x3afc24: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3afc24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3afc28: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AFC28u;
    SET_GPR_U32(ctx, 31, 0x3AFC30u);
    ctx->pc = 0x3AFC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AFC28u;
            // 0x3afc2c: 0x4601139c  madd.s      $f14, $f2, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AFC30u; }
        if (ctx->pc != 0x3AFC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AFC30u; }
        if (ctx->pc != 0x3AFC30u) { return; }
    }
    ctx->pc = 0x3AFC30u;
label_3afc30:
    // 0x3afc30: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3afc30u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afc34: 0x92a20086  lbu         $v0, 0x86($s5)
    ctx->pc = 0x3afc34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 134)));
    // 0x3afc38: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3afc38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3afc3c: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3afc3cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3afc40: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3afc40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3afc44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3afc44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afc48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3afc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3afc4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3afc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3afc50: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x3afc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3afc54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3afc54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afc58: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3afc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3afc5c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3afc5cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afc60: 0x0  nop
    ctx->pc = 0x3afc60u;
    // NOP
    // 0x3afc64: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3afc64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3afc68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3afc68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afc6c: 0x0  nop
    ctx->pc = 0x3afc6cu;
    // NOP
    // 0x3afc70: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3afc70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3afc74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3afc74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afc78: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3afc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3afc7c: 0x46170018  adda.s      $f0, $f23
    ctx->pc = 0x3afc7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x3afc80: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3afc80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x3afc84: 0x4602081e  madda.s     $f1, $f2
    ctx->pc = 0x3afc84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x3afc88: 0x4602c31c  madd.s      $f12, $f24, $f2
    ctx->pc = 0x3afc88u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[2]));
    // 0x3afc8c: 0x460c0018  adda.s      $f0, $f12
    ctx->pc = 0x3afc8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x3afc90: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3afc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afc94: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3afc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3afc98: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3afc98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3afc9c: 0x4600b3c0  add.s       $f15, $f22, $f0
    ctx->pc = 0x3afc9cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x3afca0: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AFCA0u;
    SET_GPR_U32(ctx, 31, 0x3AFCA8u);
    ctx->pc = 0x3AFCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AFCA0u;
            // 0x3afca4: 0x46020b9c  madd.s      $f14, $f1, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AFCA8u; }
        if (ctx->pc != 0x3AFCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AFCA8u; }
        if (ctx->pc != 0x3AFCA8u) { return; }
    }
    ctx->pc = 0x3AFCA8u;
label_3afca8:
    // 0x3afca8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3afca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3afcac: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x3afcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x3afcb0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3afcb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3afcb4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x3afcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3afcb8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3afcb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3afcbc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3afcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3afcc0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3afcc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3afcc4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3afcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3afcc8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3afcc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3afccc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3afcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3afcd0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3afcd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3afcd4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3afcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3afcd8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3afcd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3afcdc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3afcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3afce0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3afce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3afce4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AFCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AFCE4u;
            // 0x3afce8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AFCECu;
    // 0x3afcec: 0x0  nop
    ctx->pc = 0x3afcecu;
    // NOP
}
