#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EFC50
// Address: 0x1efc50 - 0x1efed0
void sub_001EFC50_0x1efc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFC50_0x1efc50");
#endif

    switch (ctx->pc) {
        case 0x1efc8cu: goto label_1efc8c;
        case 0x1efcacu: goto label_1efcac;
        case 0x1efe7cu: goto label_1efe7c;
        default: break;
    }

    ctx->pc = 0x1efc50u;

label_1efc50:
    // 0x1efc50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1efc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1efc54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1efc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1efc58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1efc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1efc5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1efc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1efc60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1efc60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc64: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1efc64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1efc68: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1efc68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc6c: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x1efc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x1efc70: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1efc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1efc74: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1efc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x1efc78: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x1efc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x1efc7c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1efc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1efc80: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x1efc80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1efc84: 0xc0a45a0  jal         func_291680
    ctx->pc = 0x1EFC84u;
    SET_GPR_U32(ctx, 31, 0x1EFC8Cu);
    ctx->pc = 0x1EFC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFC84u;
            // 0x1efc88: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFC8Cu; }
        if (ctx->pc != 0x1EFC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFC8Cu; }
        if (ctx->pc != 0x1EFC8Cu) { return; }
    }
    ctx->pc = 0x1EFC8Cu;
label_1efc8c:
    // 0x1efc8c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1efc8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc90: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1efc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1efc94: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x1efc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1efc98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1efc98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc9c: 0x2627000c  addiu       $a3, $s1, 0xC
    ctx->pc = 0x1efc9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1efca0: 0x26280030  addiu       $t0, $s1, 0x30
    ctx->pc = 0x1efca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1efca4: 0xc097378  jal         func_25CDE0
    ctx->pc = 0x1EFCA4u;
    SET_GPR_U32(ctx, 31, 0x1EFCACu);
    ctx->pc = 0x1EFCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFCA4u;
            // 0x1efca8: 0x26290020  addiu       $t1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CDE0u;
    if (runtime->hasFunction(0x25CDE0u)) {
        auto targetFn = runtime->lookupFunction(0x25CDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFCACu; }
        if (ctx->pc != 0x1EFCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CDE0_0x25cde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFCACu; }
        if (ctx->pc != 0x1EFCACu) { return; }
    }
    ctx->pc = 0x1EFCACu;
label_1efcac:
    // 0x1efcac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1efcacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efcb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1efcb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efcb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1efcb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFCB8u;
            // 0x1efcbc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EFCC0u;
    // 0x1efcc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1efcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1efcc4: 0x3c0b006f  lui         $t3, 0x6F
    ctx->pc = 0x1efcc4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)111 << 16));
    // 0x1efcc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1efcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1efccc: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x1efcccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x1efcd0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1efcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1efcd4: 0x8d29ea64  lw          $t1, -0x159C($t1)
    ctx->pc = 0x1efcd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294961764)));
    // 0x1efcd8: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1efcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
    // 0x1efcdc: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x1efcdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1efce0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1EFCE0u;
    {
        const bool branch_taken_0x1efce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFCE0u;
            // 0x1efce4: 0x256bea60  addiu       $t3, $t3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efce0) {
            ctx->pc = 0x1EFD1Cu;
            goto label_1efd1c;
        }
    }
    ctx->pc = 0x1EFCE8u;
    // 0x1efce8: 0x8d6a0004  lw          $t2, 0x4($t3)
    ctx->pc = 0x1efce8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1efcec: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x1efcecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
    // 0x1efcf0: 0x2529ae18  addiu       $t1, $t1, -0x51E8
    ctx->pc = 0x1efcf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294946328));
    // 0x1efcf4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1efcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1efcf8: 0x2463ae28  addiu       $v1, $v1, -0x51D8
    ctx->pc = 0x1efcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946344));
    // 0x1efcfc: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x1efcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x1efd00: 0xad43000c  sw          $v1, 0xC($t2)
    ctx->pc = 0x1efd00u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
    // 0x1efd04: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1efd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x1efd08: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x1efd08u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x1efd0c: 0x4009c803  .word       0x4009C803                   # mfc0        $t1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1efd0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ctx->cop0_perf);
    // 0x1efd10: 0x25430010  addiu       $v1, $t2, 0x10
    ctx->pc = 0x1efd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x1efd14: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x1efd14u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x1efd18: 0xad630004  sw          $v1, 0x4($t3)
    ctx->pc = 0x1efd18u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 3));
label_1efd1c:
    // 0x1efd1c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x1efd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efd20: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x1efd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efd24: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1efd24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efd28: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x1EFD28u;
    {
        const bool branch_taken_0x1efd28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efd28) {
            ctx->pc = 0x1EFE28u;
            goto label_1efe28;
        }
    }
    ctx->pc = 0x1EFD30u;
    // 0x1efd30: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x1efd30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1efd34: 0xc4e20028  lwc1        $f2, 0x28($a3)
    ctx->pc = 0x1efd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efd38: 0x8cca0008  lw          $t2, 0x8($a2)
    ctx->pc = 0x1efd38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1efd3c: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1efd3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1efd40: 0x2483002c  addiu       $v1, $a0, 0x2C
    ctx->pc = 0x1efd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x1efd44: 0xc521005c  lwc1        $f1, 0x5C($t1)
    ctx->pc = 0x1efd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efd48: 0xc540005c  lwc1        $f0, 0x5C($t2)
    ctx->pc = 0x1efd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efd4c: 0xc5230040  lwc1        $f3, 0x40($t1)
    ctx->pc = 0x1efd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1efd50: 0x460112c2  mul.s       $f11, $f2, $f1
    ctx->pc = 0x1efd50u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1efd54: 0x46001282  mul.s       $f10, $f2, $f0
    ctx->pc = 0x1efd54u;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1efd58: 0xc5220050  lwc1        $f2, 0x50($t1)
    ctx->pc = 0x1efd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efd5c: 0xc5210044  lwc1        $f1, 0x44($t1)
    ctx->pc = 0x1efd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efd60: 0xc5200054  lwc1        $f0, 0x54($t1)
    ctx->pc = 0x1efd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efd64: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1efd64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1efd68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1efd68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1efd6c: 0x4602581a  mula.s      $f11, $f2
    ctx->pc = 0x1efd6cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x1efd70: 0x46005942  mul.s       $f5, $f11, $f0
    ctx->pc = 0x1efd70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x1efd74: 0xc5230048  lwc1        $f3, 0x48($t1)
    ctx->pc = 0x1efd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1efd78: 0xc5220058  lwc1        $f2, 0x58($t1)
    ctx->pc = 0x1efd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efd7c: 0xc5410050  lwc1        $f1, 0x50($t2)
    ctx->pc = 0x1efd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efd80: 0xc5400040  lwc1        $f0, 0x40($t2)
    ctx->pc = 0x1efd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efd84: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1efd84u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1efd88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1efd88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1efd8c: 0x4600525c  madd.s      $f9, $f10, $f0
    ctx->pc = 0x1efd8cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[0]));
    // 0x1efd90: 0x46025902  mul.s       $f4, $f11, $f2
    ctx->pc = 0x1efd90u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x1efd94: 0xc5430054  lwc1        $f3, 0x54($t2)
    ctx->pc = 0x1efd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1efd98: 0xc5420044  lwc1        $f2, 0x44($t2)
    ctx->pc = 0x1efd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efd9c: 0xc5410058  lwc1        $f1, 0x58($t2)
    ctx->pc = 0x1efd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efda0: 0xc5400048  lwc1        $f0, 0x48($t2)
    ctx->pc = 0x1efda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efda4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1efda4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1efda8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1efda8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1efdac: 0x46054018  adda.s      $f8, $f5
    ctx->pc = 0x1efdacu;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[5]);
    // 0x1efdb0: 0x460251dc  madd.s      $f7, $f10, $f2
    ctx->pc = 0x1efdb0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[2]));
    // 0x1efdb4: 0x46044018  adda.s      $f8, $f4
    ctx->pc = 0x1efdb4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x1efdb8: 0x4600519c  madd.s      $f6, $f10, $f0
    ctx->pc = 0x1efdb8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[0]));
    // 0x1efdbc: 0xc540009c  lwc1        $f0, 0x9C($t2)
    ctx->pc = 0x1efdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efdc0: 0xc521009c  lwc1        $f1, 0x9C($t1)
    ctx->pc = 0x1efdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efdc4: 0xc483002c  lwc1        $f3, 0x2C($a0)
    ctx->pc = 0x1efdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1efdc8: 0x46005082  mul.s       $f2, $f10, $f0
    ctx->pc = 0x1efdc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x1efdcc: 0x46015942  mul.s       $f5, $f11, $f1
    ctx->pc = 0x1efdccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x1efdd0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1efdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efdd4: 0xc54100a0  lwc1        $f1, 0xA0($t2)
    ctx->pc = 0x1efdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efdd8: 0xc52400a0  lwc1        $f4, 0xA0($t1)
    ctx->pc = 0x1efdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1efddc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1efddcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efde0: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x1efde0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1efde4: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1EFDE4u;
    {
        const bool branch_taken_0x1efde4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EFDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFDE4u;
            // 0x1efde8: 0x4605211c  madd.s      $f4, $f4, $f5 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efde4) {
            ctx->pc = 0x1EFE28u;
            goto label_1efe28;
        }
    }
    ctx->pc = 0x1EFDECu;
    // 0x1efdec: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1efdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efdf0: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x1efdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efdf4: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x1efdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efdf8: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x1efdf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x1efdfc: 0x46004018  adda.s      $f8, $f0
    ctx->pc = 0x1efdfcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x1efe00: 0x4601481c  madd.s      $f0, $f9, $f1
    ctx->pc = 0x1efe00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x1efe04: 0x46004018  adda.s      $f8, $f0
    ctx->pc = 0x1efe04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x1efe08: 0x4602301c  madd.s      $f0, $f6, $f2
    ctx->pc = 0x1efe08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x1efe0c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x1efe0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1efe10: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x1efe10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1efe14: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1efe14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1efe18: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1efe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efe1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1efe1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efe20: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1EFE20u;
    {
        const bool branch_taken_0x1efe20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efe20) {
            ctx->pc = 0x1EFE7Cu;
            goto label_1efe7c;
        }
    }
    ctx->pc = 0x1EFE28u;
label_1efe28:
    // 0x1efe28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1efe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1efe2c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x1efe2cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x1efe30: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1efe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x1efe34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1efe34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1efe38: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1efe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
    // 0x1efe3c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1efe3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1efe40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EFE40u;
    {
        const bool branch_taken_0x1efe40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE40u;
            // 0x1efe44: 0x2529ea60  addiu       $t1, $t1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe40) {
            ctx->pc = 0x1EFE70u;
            goto label_1efe70;
        }
    }
    ctx->pc = 0x1EFE48u;
    // 0x1efe48: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1efe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1efe4c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1efe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1efe50: 0x2442ae30  addiu       $v0, $v0, -0x51D0
    ctx->pc = 0x1efe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946352));
    // 0x1efe54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1efe54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1efe58: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1efe58u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
    // 0x1efe5c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1efe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1efe60: 0x400ac803  .word       0x400AC803                   # mfc0        $t2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1efe60u;
    SET_GPR_S32(ctx, 10, (int32_t)ctx->cop0_perf);
    // 0x1efe64: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1efe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1efe68: 0xac6a0008  sw          $t2, 0x8($v1)
    ctx->pc = 0x1efe68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
    // 0x1efe6c: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x1efe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
label_1efe70:
    // 0x1efe70: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x1efe70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efe74: 0xc07bf14  jal         func_1EFC50
    ctx->pc = 0x1EFE74u;
    SET_GPR_U32(ctx, 31, 0x1EFE7Cu);
    ctx->pc = 0x1EFE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE74u;
            // 0x1efe78: 0xe4800018  swc1        $f0, 0x18($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC50u;
    goto label_1efc50;
    ctx->pc = 0x1EFE7Cu;
label_1efe7c:
    // 0x1efe7c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1efe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1efe80: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1efe80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x1efe84: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1efe84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x1efe88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1efe88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1efe8c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1efe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
    // 0x1efe90: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1efe90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1efe94: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1EFE94u;
    {
        const bool branch_taken_0x1efe94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE94u;
            // 0x1efe98: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe94) {
            ctx->pc = 0x1EFEC4u;
            goto label_1efec4;
        }
    }
    ctx->pc = 0x1EFE9Cu;
    // 0x1efe9c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1efe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1efea0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1efea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1efea4: 0x2463ae38  addiu       $v1, $v1, -0x51C8
    ctx->pc = 0x1efea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946360));
    // 0x1efea8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1efea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1efeac: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1efeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x1efeb0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1efeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1efeb4: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1efeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
    // 0x1efeb8: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1efeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x1efebc: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1efebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1efec0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1efec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1efec4:
    // 0x1efec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efec8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFEC8u;
            // 0x1efecc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EFED0u;
}
