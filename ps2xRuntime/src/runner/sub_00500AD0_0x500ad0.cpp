#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00500AD0
// Address: 0x500ad0 - 0x500ce0
void sub_00500AD0_0x500ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500AD0_0x500ad0");
#endif

    switch (ctx->pc) {
        case 0x500b08u: goto label_500b08;
        case 0x500b3cu: goto label_500b3c;
        case 0x500b50u: goto label_500b50;
        case 0x500c80u: goto label_500c80;
        default: break;
    }

    ctx->pc = 0x500ad0u;

    // 0x500ad0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x500ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x500ad4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x500ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x500ad8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x500ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x500adc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x500adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x500ae0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x500ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x500ae4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x500ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x500ae8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x500ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x500aec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x500aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x500af0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x500af0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x500af4: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x500af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x500af8: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x500AF8u;
    {
        const bool branch_taken_0x500af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x500AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500AF8u;
            // 0x500afc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x500af8) {
            ctx->pc = 0x500CACu;
            goto label_500cac;
        }
    }
    ctx->pc = 0x500B00u;
    // 0x500b00: 0xc140338  jal         func_500CE0
    ctx->pc = 0x500B00u;
    SET_GPR_U32(ctx, 31, 0x500B08u);
    ctx->pc = 0x500CE0u;
    if (runtime->hasFunction(0x500CE0u)) {
        auto targetFn = runtime->lookupFunction(0x500CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500B08u; }
        if (ctx->pc != 0x500B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500CE0_0x500ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500B08u; }
        if (ctx->pc != 0x500B08u) { return; }
    }
    ctx->pc = 0x500B08u;
label_500b08:
    // 0x500b08: 0x50400069  beql        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x500B08u;
    {
        const bool branch_taken_0x500b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x500b08) {
            ctx->pc = 0x500B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x500B08u;
            // 0x500b0c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x500CB0u;
            goto label_500cb0;
        }
    }
    ctx->pc = 0x500B10u;
    // 0x500b10: 0x8e840094  lw          $a0, 0x94($s4)
    ctx->pc = 0x500b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x500b14: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x500b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x500b18: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x500b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x500b1c: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x500b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
    // 0x500b20: 0x8e910098  lw          $s1, 0x98($s4)
    ctx->pc = 0x500b20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x500b24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x500b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500b28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x500b28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x500b2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x500b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x500b30: 0x224a821  addu        $s5, $s1, $a0
    ctx->pc = 0x500b30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x500b34: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x500b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x500b38: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x500b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_500b3c:
    // 0x500b3c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x500b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x500b40: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x500b40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x500b44: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x500b44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x500b48: 0xc140150  jal         func_500540
    ctx->pc = 0x500B48u;
    SET_GPR_U32(ctx, 31, 0x500B50u);
    ctx->pc = 0x500B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500B48u;
            // 0x500b4c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500B50u; }
        if (ctx->pc != 0x500B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500B50u; }
        if (ctx->pc != 0x500B50u) { return; }
    }
    ctx->pc = 0x500B50u;
label_500b50:
    // 0x500b50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x500b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x500b54: 0x24632df0  addiu       $v1, $v1, 0x2DF0
    ctx->pc = 0x500b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11760));
    // 0x500b58: 0x16600025  bnez        $s3, . + 4 + (0x25 << 2)
    ctx->pc = 0x500B58u;
    {
        const bool branch_taken_0x500b58 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x500B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500B58u;
            // 0x500b5c: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x500b58) {
            ctx->pc = 0x500BF0u;
            goto label_500bf0;
        }
    }
    ctx->pc = 0x500B60u;
    // 0x500b60: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x500b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x500b64: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x500b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x500b68: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x500b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x500b6c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x500b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x500b70: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x500b70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x500b74: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x500b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x500b78: 0xc646001c  lwc1        $f6, 0x1C($s2)
    ctx->pc = 0x500b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x500b7c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x500b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x500b80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x500b80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x500b84: 0x46060141  sub.s       $f5, $f0, $f6
    ctx->pc = 0x500b84u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x500b88: 0x46042836  c.le.s      $f5, $f4
    ctx->pc = 0x500b88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x500b8c: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
    ctx->pc = 0x500B8Cu;
    {
        const bool branch_taken_0x500b8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x500b8c) {
            ctx->pc = 0x500C80u;
            goto label_500c80;
        }
    }
    ctx->pc = 0x500B94u;
    // 0x500b94: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x500b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x500b98: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x500b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x500b9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x500b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x500ba0: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x500ba0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x500ba4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x500ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x500ba8: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x500ba8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x500bac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x500bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x500bb0: 0x0  nop
    ctx->pc = 0x500bb0u;
    // NOP
    // 0x500bb4: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x500bb4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
    // 0x500bb8: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x500bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x500bbc: 0x46013800  add.s       $f0, $f7, $f1
    ctx->pc = 0x500bbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x500bc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x500bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x500bc4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x500bc4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x500bc8: 0x46002343  div.s       $f13, $f4, $f0
    ctx->pc = 0x500bc8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[13] = ctx->f[4] / ctx->f[0];
    // 0x500bcc: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x500bccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x500bd0: 0x46030303  div.s       $f12, $f0, $f3
    ctx->pc = 0x500bd0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[3];
    // 0x500bd4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x500bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x500bd8: 0x0  nop
    ctx->pc = 0x500bd8u;
    // NOP
    // 0x500bdc: 0x46050818  adda.s      $f1, $f5
    ctx->pc = 0x500bdcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x500be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x500be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x500be4: 0x4606105c  madd.s      $f1, $f2, $f6
    ctx->pc = 0x500be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[6]));
    // 0x500be8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x500BE8u;
    {
        const bool branch_taken_0x500be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x500BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500BE8u;
            // 0x500bec: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x500be8) {
            ctx->pc = 0x500C78u;
            goto label_500c78;
        }
    }
    ctx->pc = 0x500BF0u;
label_500bf0:
    // 0x500bf0: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x500bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x500bf4: 0xc6060000  lwc1        $f6, 0x0($s0)
    ctx->pc = 0x500bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x500bf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x500bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x500bfc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x500bfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x500c00: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x500c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x500c04: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x500c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x500c08: 0x46023083  div.s       $f2, $f6, $f2
    ctx->pc = 0x500c08u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[2] = ctx->f[6] / ctx->f[2];
    // 0x500c0c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x500c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x500c10: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x500c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x500c14: 0xc648001c  lwc1        $f8, 0x1C($s2)
    ctx->pc = 0x500c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x500c18: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x500c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x500c1c: 0x46004801  sub.s       $f0, $f9, $f0
    ctx->pc = 0x500c1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x500c20: 0x460009c2  mul.s       $f7, $f1, $f0
    ctx->pc = 0x500c20u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x500c24: 0x4608a0c0  add.s       $f3, $f20, $f8
    ctx->pc = 0x500c24u;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[8]);
    // 0x500c28: 0x460339c1  sub.s       $f7, $f7, $f3
    ctx->pc = 0x500c28u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
    // 0x500c2c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x500c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x500c30: 0x0  nop
    ctx->pc = 0x500c30u;
    // NOP
    // 0x500c34: 0x460410c3  div.s       $f3, $f2, $f4
    ctx->pc = 0x500c34u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[4];
    // 0x500c38: 0x46034880  add.s       $f2, $f9, $f3
    ctx->pc = 0x500c38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[3]);
    // 0x500c3c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x500c3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x500c40: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x500c40u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x500c44: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x500c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x500c48: 0x0  nop
    ctx->pc = 0x500c48u;
    // NOP
    // 0x500c4c: 0x46022b43  div.s       $f13, $f5, $f2
    ctx->pc = 0x500c4cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[13] = ctx->f[5] / ctx->f[2];
    // 0x500c50: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x500c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x500c54: 0x46053881  sub.s       $f2, $f7, $f5
    ctx->pc = 0x500c54u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x500c58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x500c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x500c5c: 0x46061303  div.s       $f12, $f2, $f6
    ctx->pc = 0x500c5cu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[12] = ctx->f[2] / ctx->f[6];
    // 0x500c60: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x500c60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x500c64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x500c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x500c68: 0x0  nop
    ctx->pc = 0x500c68u;
    // NOP
    // 0x500c6c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x500c6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x500c70: 0x4608201c  madd.s      $f0, $f4, $f8
    ctx->pc = 0x500c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[8]));
    // 0x500c74: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x500c74u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_500c78:
    // 0x500c78: 0xc145e30  jal         func_5178C0
    ctx->pc = 0x500C78u;
    SET_GPR_U32(ctx, 31, 0x500C80u);
    ctx->pc = 0x500C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500C78u;
            // 0x500c7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5178C0u;
    if (runtime->hasFunction(0x5178C0u)) {
        auto targetFn = runtime->lookupFunction(0x5178C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500C80u; }
        if (ctx->pc != 0x500C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005178C0_0x5178c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500C80u; }
        if (ctx->pc != 0x500C80u) { return; }
    }
    ctx->pc = 0x500C80u;
label_500c80:
    // 0x500c80: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x500c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x500c84: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x500c84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x500c88: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x500c88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x500c8c: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x500c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x500c90: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x500c90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x500c94: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x500c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x500c98: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x500c98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x500c9c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x500c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x500ca0: 0x5460ffa6  bnel        $v1, $zero, . + 4 + (-0x5A << 2)
    ctx->pc = 0x500CA0u;
    {
        const bool branch_taken_0x500ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x500ca0) {
            ctx->pc = 0x500CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x500CA0u;
            // 0x500ca4: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x500B3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_500b3c;
        }
    }
    ctx->pc = 0x500CA8u;
    // 0x500ca8: 0xe6940074  swc1        $f20, 0x74($s4)
    ctx->pc = 0x500ca8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 116), bits); }
label_500cac:
    // 0x500cac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x500cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_500cb0:
    // 0x500cb0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x500cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x500cb4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x500cb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x500cb8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x500cb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x500cbc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x500cbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x500cc0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x500cc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x500cc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x500cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x500cc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x500cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x500ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x500CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500CCCu;
            // 0x500cd0: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x500CD4u;
    // 0x500cd4: 0x0  nop
    ctx->pc = 0x500cd4u;
    // NOP
    // 0x500cd8: 0x0  nop
    ctx->pc = 0x500cd8u;
    // NOP
    // 0x500cdc: 0x0  nop
    ctx->pc = 0x500cdcu;
    // NOP
}
