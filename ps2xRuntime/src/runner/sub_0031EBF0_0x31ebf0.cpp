#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031EBF0
// Address: 0x31ebf0 - 0x31edd0
void sub_0031EBF0_0x31ebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EBF0_0x31ebf0");
#endif

    switch (ctx->pc) {
        case 0x31ec64u: goto label_31ec64;
        case 0x31ec94u: goto label_31ec94;
        case 0x31eca8u: goto label_31eca8;
        case 0x31ecb0u: goto label_31ecb0;
        case 0x31ed10u: goto label_31ed10;
        case 0x31ed34u: goto label_31ed34;
        case 0x31ed78u: goto label_31ed78;
        case 0x31ed90u: goto label_31ed90;
        case 0x31edacu: goto label_31edac;
        default: break;
    }

    ctx->pc = 0x31ebf0u;

    // 0x31ebf0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x31ebf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x31ebf4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x31ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x31ebf8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x31ebf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x31ebfc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x31ebfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x31ec00: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31ec00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x31ec04: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31ec04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x31ec08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31ec08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31ec0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31ec0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31ec10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31ec10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31ec14: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31ec14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31ec18: 0x8c718a08  lw          $s1, -0x75F8($v1)
    ctx->pc = 0x31ec18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x31ec1c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EC1Cu;
    {
        const bool branch_taken_0x31ec1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EC1Cu;
            // 0x31ec20: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec1c) {
            ctx->pc = 0x31EC2Cu;
            goto label_31ec2c;
        }
    }
    ctx->pc = 0x31EC24u;
    // 0x31ec24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31EC24u;
    {
        const bool branch_taken_0x31ec24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EC24u;
            // 0x31ec28: 0x8c90066c  lw          $s0, 0x66C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec24) {
            ctx->pc = 0x31EC30u;
            goto label_31ec30;
        }
    }
    ctx->pc = 0x31EC2Cu;
label_31ec2c:
    // 0x31ec2c: 0x8c900670  lw          $s0, 0x670($a0)
    ctx->pc = 0x31ec2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
label_31ec30:
    // 0x31ec30: 0x5200005f  beql        $s0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x31EC30u;
    {
        const bool branch_taken_0x31ec30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ec30) {
            ctx->pc = 0x31EC34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31EC30u;
            // 0x31ec34: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31EDB0u;
            goto label_31edb0;
        }
    }
    ctx->pc = 0x31EC38u;
    // 0x31ec38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x31ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x31ec3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x31ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x31ec40: 0x8c53e378  lw          $s3, -0x1C88($v0)
    ctx->pc = 0x31ec40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
    // 0x31ec44: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x31ec44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31ec48: 0x8c72e370  lw          $s2, -0x1C90($v1)
    ctx->pc = 0x31ec48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
    // 0x31ec4c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x31ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x31ec50: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x31ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x31ec54: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x31ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x31ec58: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x31ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x31ec5c: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x31EC5Cu;
    SET_GPR_U32(ctx, 31, 0x31EC64u);
    ctx->pc = 0x31EC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31EC5Cu;
            // 0x31ec60: 0x24540010  addiu       $s4, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EC64u; }
        if (ctx->pc != 0x31EC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EC64u; }
        if (ctx->pc != 0x31EC64u) { return; }
    }
    ctx->pc = 0x31EC64u;
label_31ec64:
    // 0x31ec64: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x31ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x31ec68: 0x3c03bdf5  lui         $v1, 0xBDF5
    ctx->pc = 0x31ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48629 << 16));
    // 0x31ec6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ec6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ec70: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x31ec70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x31ec74: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x31ec74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x31ec78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31ec78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ec7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31ec7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ec80: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x31ec80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x31ec84: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x31ec84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31ec88: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x31ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x31ec8c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x31EC8Cu;
    SET_GPR_U32(ctx, 31, 0x31EC94u);
    ctx->pc = 0x31EC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31EC8Cu;
            // 0x31ec90: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EC94u; }
        if (ctx->pc != 0x31EC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EC94u; }
        if (ctx->pc != 0x31EC94u) { return; }
    }
    ctx->pc = 0x31EC94u;
label_31ec94:
    // 0x31ec94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31ec98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31ec98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ec9c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x31ec9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x31eca0: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x31ECA0u;
    SET_GPR_U32(ctx, 31, 0x31ECA8u);
    ctx->pc = 0x31ECA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31ECA0u;
            // 0x31eca4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ECA8u; }
        if (ctx->pc != 0x31ECA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ECA8u; }
        if (ctx->pc != 0x31ECA8u) { return; }
    }
    ctx->pc = 0x31ECA8u;
label_31eca8:
    // 0x31eca8: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x31ECA8u;
    SET_GPR_U32(ctx, 31, 0x31ECB0u);
    ctx->pc = 0x31ECACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31ECA8u;
            // 0x31ecac: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ECB0u; }
        if (ctx->pc != 0x31ECB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ECB0u; }
        if (ctx->pc != 0x31ECB0u) { return; }
    }
    ctx->pc = 0x31ECB0u;
label_31ecb0:
    // 0x31ecb0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x31ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31ecb4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x31ECB4u;
    {
        const bool branch_taken_0x31ecb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ecb4) {
            ctx->pc = 0x31ECB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31ECB4u;
            // 0x31ecb8: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31ED18u;
            goto label_31ed18;
        }
    }
    ctx->pc = 0x31ECBCu;
    // 0x31ecbc: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x31ecbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ecc0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x31ecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ecc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31ecc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31ecc8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x31ecc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x31eccc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x31ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31ecd0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x31ecd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ecd4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x31ecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ecd8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31ecd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31ecdc: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x31ECDCu;
    {
        const bool branch_taken_0x31ecdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31ecdc) {
            ctx->pc = 0x31ECE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31ECDCu;
            // 0x31ece0: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31ECECu;
            goto label_31ecec;
        }
    }
    ctx->pc = 0x31ECE4u;
    // 0x31ece4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31ece8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x31ece8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31ecec:
    // 0x31ecec: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x31ececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31ecf0: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x31ecf0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x31ecf4: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x31ecf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31ecf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31ecf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ecfc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31ecfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ed00: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x31ed00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ed04: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x31ed04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
    // 0x31ed08: 0xc04cff4  jal         func_133FD0
    ctx->pc = 0x31ED08u;
    SET_GPR_U32(ctx, 31, 0x31ED10u);
    ctx->pc = 0x31ED0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31ED08u;
            // 0x31ed0c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ED10u; }
        if (ctx->pc != 0x31ED10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ED10u; }
        if (ctx->pc != 0x31ED10u) { return; }
    }
    ctx->pc = 0x31ED10u;
label_31ed10:
    // 0x31ed10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31ED10u;
    {
        const bool branch_taken_0x31ed10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31ED10u;
            // 0x31ed14: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed10) {
            ctx->pc = 0x31ED38u;
            goto label_31ed38;
        }
    }
    ctx->pc = 0x31ED18u;
label_31ed18:
    // 0x31ed18: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x31ed18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x31ed1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31ed1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ed20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31ed20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ed24: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x31ed24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ed28: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x31ed28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x31ed2c: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x31ED2Cu;
    SET_GPR_U32(ctx, 31, 0x31ED34u);
    ctx->pc = 0x31ED30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31ED2Cu;
            // 0x31ed30: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ED34u; }
        if (ctx->pc != 0x31ED34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ED34u; }
        if (ctx->pc != 0x31ED34u) { return; }
    }
    ctx->pc = 0x31ED34u;
label_31ed34:
    // 0x31ed34: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x31ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_31ed38:
    // 0x31ed38: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x31ED38u;
    {
        const bool branch_taken_0x31ed38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ed38) {
            ctx->pc = 0x31ED3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31ED38u;
            // 0x31ed3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31ED98u;
            goto label_31ed98;
        }
    }
    ctx->pc = 0x31ED40u;
    // 0x31ed40: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x31ed40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ed44: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x31ed44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x31ed48: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x31ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x31ed4c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x31ed4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ed50: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x31ed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ed54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31ed54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31ed58: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x31ED58u;
    {
        const bool branch_taken_0x31ed58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31ed58) {
            ctx->pc = 0x31ED5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31ED58u;
            // 0x31ed5c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31ED68u;
            goto label_31ed68;
        }
    }
    ctx->pc = 0x31ED60u;
    // 0x31ed60: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x31ed60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x31ed64: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x31ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_31ed68:
    // 0x31ed68: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x31ed68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31ed6c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x31ed6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x31ed70: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x31ED70u;
    SET_GPR_U32(ctx, 31, 0x31ED78u);
    ctx->pc = 0x31ED74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31ED70u;
            // 0x31ed74: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ED78u; }
        if (ctx->pc != 0x31ED78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ED78u; }
        if (ctx->pc != 0x31ED78u) { return; }
    }
    ctx->pc = 0x31ED78u;
label_31ed78:
    // 0x31ed78: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x31ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x31ed7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31ed7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ed80: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31ed80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ed84: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x31ed84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x31ed88: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x31ED88u;
    SET_GPR_U32(ctx, 31, 0x31ED90u);
    ctx->pc = 0x31ED8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31ED88u;
            // 0x31ed8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ED90u; }
        if (ctx->pc != 0x31ED90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ED90u; }
        if (ctx->pc != 0x31ED90u) { return; }
    }
    ctx->pc = 0x31ED90u;
label_31ed90:
    // 0x31ed90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31ED90u;
    {
        const bool branch_taken_0x31ed90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ed90) {
            ctx->pc = 0x31EDACu;
            goto label_31edac;
        }
    }
    ctx->pc = 0x31ED98u;
label_31ed98:
    // 0x31ed98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31ed98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ed9c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31ed9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eda0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x31eda0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x31eda4: 0xc050044  jal         func_140110
    ctx->pc = 0x31EDA4u;
    SET_GPR_U32(ctx, 31, 0x31EDACu);
    ctx->pc = 0x31EDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31EDA4u;
            // 0x31eda8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EDACu; }
        if (ctx->pc != 0x31EDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EDACu; }
        if (ctx->pc != 0x31EDACu) { return; }
    }
    ctx->pc = 0x31EDACu;
label_31edac:
    // 0x31edac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x31edacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_31edb0:
    // 0x31edb0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31edb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31edb4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31edb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31edb8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31edb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31edbc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31edbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31edc0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31edc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31edc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31edc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31edc8: 0x3e00008  jr          $ra
    ctx->pc = 0x31EDC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EDC8u;
            // 0x31edcc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31EDD0u;
}
