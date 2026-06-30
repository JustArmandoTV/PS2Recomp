#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025DAA0
// Address: 0x25daa0 - 0x25df40
void sub_0025DAA0_0x25daa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DAA0_0x25daa0");
#endif

    switch (ctx->pc) {
        case 0x25db28u: goto label_25db28;
        case 0x25db38u: goto label_25db38;
        case 0x25db78u: goto label_25db78;
        case 0x25dd50u: goto label_25dd50;
        default: break;
    }

    ctx->pc = 0x25daa0u;

    // 0x25daa0: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x25daa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x25daa4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25daa8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x25daa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x25daac: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x25daacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x25dab0: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x25dab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x25dab4: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x25dab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x25dab8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x25dab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x25dabc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x25dabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x25dac0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25dac0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dac4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x25dac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x25dac8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25dac8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dacc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x25daccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x25dad0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25dad0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dad4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25dad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x25dad8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25dad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x25dadc: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x25dadcu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x25dae0: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x25dae0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x25dae4: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x25dae4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x25dae8: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x25dae8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x25daec: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x25daecu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x25daf0: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x25daf0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x25daf4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x25daf4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25daf8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x25daf8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x25dafc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x25dafcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25db00: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25db00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25db04: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25db04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25db08: 0xc49a0080  lwc1        $f26, 0x80($a0)
    ctx->pc = 0x25db08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x25db0c: 0x8c96000c  lw          $s6, 0xC($a0)
    ctx->pc = 0x25db0cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25db10: 0x4483d800  mtc1        $v1, $f27
    ctx->pc = 0x25db10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x25db14: 0x12c000f2  beqz        $s6, . + 4 + (0xF2 << 2)
    ctx->pc = 0x25DB14u;
    {
        const bool branch_taken_0x25db14 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DB14u;
            // 0x25db18: 0x4600d646  mov.s       $f25, $f26 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db14) {
            ctx->pc = 0x25DEE0u;
            goto label_25dee0;
        }
    }
    ctx->pc = 0x25DB1Cu;
    // 0x25db1c: 0x27b701f0  addiu       $s7, $sp, 0x1F0
    ctx->pc = 0x25db1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x25db20: 0x27be01f4  addiu       $fp, $sp, 0x1F4
    ctx->pc = 0x25db20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
    // 0x25db24: 0x0  nop
    ctx->pc = 0x25db24u;
    // NOP
label_25db28:
    // 0x25db28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25db28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db2c: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x25db2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x25db30: 0xc097584  jal         func_25D610
    ctx->pc = 0x25DB30u;
    SET_GPR_U32(ctx, 31, 0x25DB38u);
    ctx->pc = 0x25DB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DB30u;
            // 0x25db34: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D610u;
    if (runtime->hasFunction(0x25D610u)) {
        auto targetFn = runtime->lookupFunction(0x25D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DB38u; }
        if (ctx->pc != 0x25DB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025D610_0x25d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DB38u; }
        if (ctx->pc != 0x25DB38u) { return; }
    }
    ctx->pc = 0x25DB38u;
label_25db38:
    // 0x25db38: 0xc6a00044  lwc1        $f0, 0x44($s5)
    ctx->pc = 0x25db38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25db3c: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x25db3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db40: 0x461ade01  sub.s       $f24, $f27, $f26
    ctx->pc = 0x25db40u;
    ctx->f[24] = FPU_SUB_S(ctx->f[27], ctx->f[26]);
    // 0x25db44: 0x8eb20008  lw          $s2, 0x8($s5)
    ctx->pc = 0x25db44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x25db48: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x25db48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x25db4c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x25db4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db50: 0x4600dd86  mov.s       $f22, $f27
    ctx->pc = 0x25db50u;
    ctx->f[22] = FPU_MOV_S(ctx->f[27]);
    // 0x25db54: 0x4600c5c2  mul.s       $f23, $f24, $f0
    ctx->pc = 0x25db54u;
    ctx->f[23] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x25db58: 0x60000d3  bltz        $s0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x25DB58u;
    {
        const bool branch_taken_0x25db58 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x25DB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DB58u;
            // 0x25db5c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db58) {
            ctx->pc = 0x25DEA8u;
            goto label_25dea8;
        }
    }
    ctx->pc = 0x25DB60u;
    // 0x25db60: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x25db60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x25db64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25db64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25db68: 0x4618c502  mul.s       $f20, $f24, $f24
    ctx->pc = 0x25db68u;
    ctx->f[20] = FPU_MUL_S(ctx->f[24], ctx->f[24]);
    // 0x25db6c: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x25db6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x25db70: 0x46180542  mul.s       $f21, $f0, $f24
    ctx->pc = 0x25db70u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x25db74: 0x0  nop
    ctx->pc = 0x25db74u;
    // NOP
label_25db78:
    // 0x25db78: 0x27a301a4  addiu       $v1, $sp, 0x1A4
    ctx->pc = 0x25db78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    // 0x25db7c: 0xc46e0000  lwc1        $f14, 0x0($v1)
    ctx->pc = 0x25db7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x25db80: 0xc64a0004  lwc1        $f10, 0x4($s2)
    ctx->pc = 0x25db80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25db84: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x25db84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25db88: 0xc6490008  lwc1        $f9, 0x8($s2)
    ctx->pc = 0x25db88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25db8c: 0xc68b0000  lwc1        $f11, 0x0($s4)
    ctx->pc = 0x25db8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x25db90: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x25db90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x25db94: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x25db94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25db98: 0x27a301a8  addiu       $v1, $sp, 0x1A8
    ctx->pc = 0x25db98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x25db9c: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x25db9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25dba0: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x25dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x25dba4: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x25dba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25dba8: 0x27a301b4  addiu       $v1, $sp, 0x1B4
    ctx->pc = 0x25dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x25dbac: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x25dbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25dbb0: 0x46040101  sub.s       $f4, $f0, $f4
    ctx->pc = 0x25dbb0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x25dbb4: 0x46046902  mul.s       $f4, $f13, $f4
    ctx->pc = 0x25dbb4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[4]);
    // 0x25dbb8: 0x27a301b8  addiu       $v1, $sp, 0x1B8
    ctx->pc = 0x25dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x25dbbc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25dbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25dbc0: 0x460350c1  sub.s       $f3, $f10, $f3
    ctx->pc = 0x25dbc0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
    // 0x25dbc4: 0x460370c2  mul.s       $f3, $f14, $f3
    ctx->pc = 0x25dbc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
    // 0x25dbc8: 0x27a301ac  addiu       $v1, $sp, 0x1AC
    ctx->pc = 0x25dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    // 0x25dbcc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25dbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25dbd0: 0x46024881  sub.s       $f2, $f9, $f2
    ctx->pc = 0x25dbd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
    // 0x25dbd4: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x25dbd4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x25dbd8: 0x4602609c  madd.s      $f2, $f12, $f2
    ctx->pc = 0x25dbd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[2]));
    // 0x25dbdc: 0x46020bc0  add.s       $f15, $f1, $f2
    ctx->pc = 0x25dbdcu;
    ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x25dbe0: 0x460bb840  add.s       $f1, $f23, $f11
    ctx->pc = 0x25dbe0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[11]);
    // 0x25dbe4: 0x46017836  c.le.s      $f15, $f1
    ctx->pc = 0x25dbe4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25dbe8: 0x450000ab  bc1f        . + 4 + (0xAB << 2)
    ctx->pc = 0x25DBE8u;
    {
        const bool branch_taken_0x25dbe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DBE8u;
            // 0x25dbec: 0x27a301f8  addiu       $v1, $sp, 0x1F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbe8) {
            ctx->pc = 0x25DE98u;
            goto label_25de98;
        }
    }
    ctx->pc = 0x25DBF0u;
    // 0x25dbf0: 0xc4680000  lwc1        $f8, 0x0($v1)
    ctx->pc = 0x25dbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25dbf4: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x25dbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25dbf8: 0xc7c30000  lwc1        $f3, 0x0($fp)
    ctx->pc = 0x25dbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25dbfc: 0x27a30200  addiu       $v1, $sp, 0x200
    ctx->pc = 0x25dbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x25dc00: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25dc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25dc04: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x25dc04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x25dc08: 0x46084a01  sub.s       $f8, $f9, $f8
    ctx->pc = 0x25dc08u;
    ctx->f[8] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
    // 0x25dc0c: 0x27a30204  addiu       $v1, $sp, 0x204
    ctx->pc = 0x25dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
    // 0x25dc10: 0xc47e0000  lwc1        $f30, 0x0($v1)
    ctx->pc = 0x25dc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x25dc14: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25dc14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25dc18: 0x46035041  sub.s       $f1, $f10, $f3
    ctx->pc = 0x25dc18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
    // 0x25dc1c: 0x27a30208  addiu       $v1, $sp, 0x208
    ctx->pc = 0x25dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x25dc20: 0xc4670000  lwc1        $f7, 0x0($v1)
    ctx->pc = 0x25dc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25dc24: 0xc6a30018  lwc1        $f3, 0x18($s5)
    ctx->pc = 0x25dc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25dc28: 0x461e5281  sub.s       $f10, $f10, $f30
    ctx->pc = 0x25dc28u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[30]);
    // 0x25dc2c: 0x27a301d8  addiu       $v1, $sp, 0x1D8
    ctx->pc = 0x25dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x25dc30: 0xc47d0000  lwc1        $f29, 0x0($v1)
    ctx->pc = 0x25dc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x25dc34: 0x460749c1  sub.s       $f7, $f9, $f7
    ctx->pc = 0x25dc34u;
    ctx->f[7] = FPU_SUB_S(ctx->f[9], ctx->f[7]);
    // 0x25dc38: 0x4603aa42  mul.s       $f9, $f21, $f3
    ctx->pc = 0x25dc38u;
    ctx->f[9] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x25dc3c: 0x27a301d4  addiu       $v1, $sp, 0x1D4
    ctx->pc = 0x25dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x25dc40: 0xc47c0000  lwc1        $f28, 0x0($v1)
    ctx->pc = 0x25dc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x25dc44: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x25dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x25dc48: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x25dc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25dc4c: 0x4608e01a  mula.s      $f28, $f8
    ctx->pc = 0x25dc4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[28], ctx->f[8]);
    // 0x25dc50: 0x4601e8dd  msub.s      $f3, $f29, $f1
    ctx->pc = 0x25dc50u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[29], ctx->f[1]));
    // 0x25dc54: 0x4602e81a  mula.s      $f29, $f2
    ctx->pc = 0x25dc54u;
    ctx->f[31] = FPU_MUL_S(ctx->f[29], ctx->f[2]);
    // 0x25dc58: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x25dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x25dc5c: 0xc4730000  lwc1        $f19, 0x0($v1)
    ctx->pc = 0x25dc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x25dc60: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x25dc60u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x25dc64: 0x27a301c4  addiu       $v1, $sp, 0x1C4
    ctx->pc = 0x25dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x25dc68: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x25dc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25dc6c: 0x4608999d  msub.s      $f6, $f19, $f8
    ctx->pc = 0x25dc6cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[19], ctx->f[8]));
    // 0x25dc70: 0x4601981a  mula.s      $f19, $f1
    ctx->pc = 0x25dc70u;
    ctx->f[31] = FPU_MUL_S(ctx->f[19], ctx->f[1]);
    // 0x25dc74: 0x4602e05d  msub.s      $f1, $f28, $f2
    ctx->pc = 0x25dc74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[28], ctx->f[2]));
    // 0x25dc78: 0x27a301c8  addiu       $v1, $sp, 0x1C8
    ctx->pc = 0x25dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x25dc7c: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x25dc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25dc80: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x25dc80u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x25dc84: 0x27a301e8  addiu       $v1, $sp, 0x1E8
    ctx->pc = 0x25dc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
    // 0x25dc88: 0xc4720000  lwc1        $f18, 0x0($v1)
    ctx->pc = 0x25dc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x25dc8c: 0x46040901  sub.s       $f4, $f1, $f4
    ctx->pc = 0x25dc8cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x25dc90: 0x27a301e4  addiu       $v1, $sp, 0x1E4
    ctx->pc = 0x25dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
    // 0x25dc94: 0xc4710000  lwc1        $f17, 0x0($v1)
    ctx->pc = 0x25dc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x25dc98: 0x4607881a  mula.s      $f17, $f7
    ctx->pc = 0x25dc98u;
    ctx->f[31] = FPU_MUL_S(ctx->f[17], ctx->f[7]);
    // 0x25dc9c: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x25dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x25dca0: 0x460a905d  msub.s      $f1, $f18, $f10
    ctx->pc = 0x25dca0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[18], ctx->f[10]));
    // 0x25dca4: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x25dca4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x25dca8: 0xc4700000  lwc1        $f16, 0x0($v1)
    ctx->pc = 0x25dca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x25dcac: 0x460d1842  mul.s       $f1, $f3, $f13
    ctx->pc = 0x25dcacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x25dcb0: 0x4600901a  mula.s      $f18, $f0
    ctx->pc = 0x25dcb0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[18], ctx->f[0]);
    // 0x25dcb4: 0x460780dd  msub.s      $f3, $f16, $f7
    ctx->pc = 0x25dcb4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[7]));
    // 0x25dcb8: 0x460a801a  mula.s      $f16, $f10
    ctx->pc = 0x25dcb8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[10]);
    // 0x25dcbc: 0x4600889d  msub.s      $f2, $f17, $f0
    ctx->pc = 0x25dcbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[0]));
    // 0x25dcc0: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x25dcc0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x25dcc4: 0x460e2802  mul.s       $f0, $f5, $f14
    ctx->pc = 0x25dcc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[14]);
    // 0x25dcc8: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x25dcc8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x25dccc: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x25dcccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25dcd0: 0x460c241c  madd.s      $f16, $f4, $f12
    ctx->pc = 0x25dcd0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[12]));
    // 0x25dcd4: 0x460b7819  suba.s      $f15, $f11
    ctx->pc = 0x25dcd4u;
    ctx->f[31] = FPU_SUB_S(ctx->f[15], ctx->f[11]);
    // 0x25dcd8: 0x4618801c  madd.s      $f0, $f16, $f24
    ctx->pc = 0x25dcd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[24]));
    // 0x25dcdc: 0x46090036  c.le.s      $f0, $f9
    ctx->pc = 0x25dcdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25dce0: 0x4500006d  bc1f        . + 4 + (0x6D << 2)
    ctx->pc = 0x25DCE0u;
    {
        const bool branch_taken_0x25dce0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25dce0) {
            ctx->pc = 0x25DE98u;
            goto label_25de98;
        }
    }
    ctx->pc = 0x25DCE8u;
    // 0x25dce8: 0x460b7834  c.lt.s      $f15, $f11
    ctx->pc = 0x25dce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25dcec: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x25DCECu;
    {
        const bool branch_taken_0x25dcec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25dcec) {
            ctx->pc = 0x25DD58u;
            goto label_25dd58;
        }
    }
    ctx->pc = 0x25DCF4u;
    // 0x25dcf4: 0xc6a00080  lwc1        $f0, 0x80($s5)
    ctx->pc = 0x25dcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dcf8: 0x4600d032  c.eq.s      $f26, $f0
    ctx->pc = 0x25dcf8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25dcfc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x25DCFCu;
    {
        const bool branch_taken_0x25dcfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25dcfc) {
            ctx->pc = 0x25DD30u;
            goto label_25dd30;
        }
    }
    ctx->pc = 0x25DD04u;
    // 0x25dd04: 0xe67a0000  swc1        $f26, 0x0($s3)
    ctx->pc = 0x25dd04u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x25dd08: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x25dd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd0c: 0x4600d6c6  mov.s       $f27, $f26
    ctx->pc = 0x25dd0cu;
    ctx->f[27] = FPU_MOV_S(ctx->f[26]);
    // 0x25dd10: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x25dd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x25dd14: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x25dd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd18: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x25dd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x25dd1c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x25dd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd20: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x25dd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x25dd24: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x25dd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd28: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x25DD28u;
    {
        const bool branch_taken_0x25dd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DD28u;
            // 0x25dd2c: 0xe660001c  swc1        $f0, 0x1C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd28) {
            ctx->pc = 0x25DE98u;
            goto label_25de98;
        }
    }
    ctx->pc = 0x25DD30u;
label_25dd30:
    // 0x25dd30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25dd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd34: 0xc64e000c  lwc1        $f14, 0xC($s2)
    ctx->pc = 0x25dd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x25dd38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25dd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd3c: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x25dd3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x25dd40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25dd40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd44: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x25dd44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x25dd48: 0xc097608  jal         func_25D820
    ctx->pc = 0x25DD48u;
    SET_GPR_U32(ctx, 31, 0x25DD50u);
    ctx->pc = 0x25DD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DD48u;
            // 0x25dd4c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D820u;
    if (runtime->hasFunction(0x25D820u)) {
        auto targetFn = runtime->lookupFunction(0x25D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DD50u; }
        if (ctx->pc != 0x25DD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025D820_0x25d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DD50u; }
        if (ctx->pc != 0x25DD50u) { return; }
    }
    ctx->pc = 0x25DD50u;
label_25dd50:
    // 0x25dd50: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x25DD50u;
    {
        const bool branch_taken_0x25dd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DD50u;
            // 0x25dd54: 0x460006c6  mov.s       $f27, $f0 (Delay Slot)
        ctx->f[27] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd50) {
            ctx->pc = 0x25DE98u;
            goto label_25de98;
        }
    }
    ctx->pc = 0x25DD58u;
label_25dd58:
    // 0x25dd58: 0x7a440000  lq          $a0, 0x0($s2)
    ctx->pc = 0x25dd58u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25dd5c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x25dd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25dd60: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x25dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x25dd64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25dd64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25dd68: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x25dd68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x25dd6c: 0x27a300d4  addiu       $v1, $sp, 0xD4
    ctx->pc = 0x25dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x25dd70: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x25dd70u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x25dd74: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x25dd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd78: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x25dd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x25dd7c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x25dd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd80: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x25dd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x25dd84: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x25dd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd88: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x25dd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x25dd8c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x25dd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd90: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x25dd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x25dd94: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x25dd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd98: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x25dd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x25dd9c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25dd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dda0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x25dda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x25dda4: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x25dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x25dda8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25dda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ddac: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x25ddacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x25ddb0: 0x27a300dc  addiu       $v1, $sp, 0xDC
    ctx->pc = 0x25ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x25ddb4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25ddb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ddb8: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x25ddb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x25ddbc: 0xe62f000c  swc1        $f15, 0xC($s1)
    ctx->pc = 0x25ddbcu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x25ddc0: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x25ddc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25ddc4: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x25ddc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25ddc8: 0xc6a3001c  lwc1        $f3, 0x1C($s5)
    ctx->pc = 0x25ddc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25ddcc: 0x46047801  sub.s       $f0, $f15, $f4
    ctx->pc = 0x25ddccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[4]);
    // 0x25ddd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25ddd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ddd4: 0x46041101  sub.s       $f4, $f2, $f4
    ctx->pc = 0x25ddd4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x25ddd8: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x25ddd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x25dddc: 0x46141036  c.le.s      $f2, $f20
    ctx->pc = 0x25dddcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25dde0: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x25DDE0u;
    {
        const bool branch_taken_0x25dde0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DDE0u;
            // 0x25dde4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dde0) {
            ctx->pc = 0x25DE98u;
            goto label_25de98;
        }
    }
    ctx->pc = 0x25DDE8u;
    // 0x25dde8: 0x46020084  c1          0x20084
    ctx->pc = 0x25dde8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x25ddec: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x25ddecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x25ddf0: 0x46030102  mul.s       $f4, $f0, $f3
    ctx->pc = 0x25ddf0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x25ddf4: 0x0  nop
    ctx->pc = 0x25ddf4u;
    // NOP
    // 0x25ddf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25ddf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ddfc: 0x0  nop
    ctx->pc = 0x25ddfcu;
    // NOP
    // 0x25de00: 0x46008034  c.lt.s      $f16, $f0
    ctx->pc = 0x25de00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25de04: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x25DE04u;
    {
        const bool branch_taken_0x25de04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DE04u;
            // 0x25de08: 0x46038002  mul.s       $f0, $f16, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de04) {
            ctx->pc = 0x25DE18u;
            goto label_25de18;
        }
    }
    ctx->pc = 0x25DE0Cu;
    // 0x25de0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25de0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25de10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25DE10u;
    {
        const bool branch_taken_0x25de10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DE10u;
            // 0x25de14: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de10) {
            ctx->pc = 0x25DE40u;
            goto label_25de40;
        }
    }
    ctx->pc = 0x25DE18u;
label_25de18:
    // 0x25de18: 0x46008007  neg.s       $f0, $f16
    ctx->pc = 0x25de18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[16]);
    // 0x25de1c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x25de1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x25de20: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x25de20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25de24: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x25DE24u;
    {
        const bool branch_taken_0x25de24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25de24) {
            ctx->pc = 0x25DE34u;
            goto label_25de34;
        }
    }
    ctx->pc = 0x25DE2Cu;
    // 0x25de2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25DE2Cu;
    {
        const bool branch_taken_0x25de2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DE2Cu;
            // 0x25de30: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de2c) {
            ctx->pc = 0x25DE3Cu;
            goto label_25de3c;
        }
    }
    ctx->pc = 0x25DE34u;
label_25de34:
    // 0x25de34: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x25de34u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x25de38: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x25de38u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_25de3c:
    // 0x25de3c: 0x0  nop
    ctx->pc = 0x25de3cu;
    // NOP
label_25de40:
    // 0x25de40: 0x46181036  c.le.s      $f2, $f24
    ctx->pc = 0x25de40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25de44: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x25DE44u;
    {
        const bool branch_taken_0x25de44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25de44) {
            ctx->pc = 0x25DE98u;
            goto label_25de98;
        }
    }
    ctx->pc = 0x25DE4Cu;
    // 0x25de4c: 0x0  nop
    ctx->pc = 0x25de4cu;
    // NOP
    // 0x25de50: 0x0  nop
    ctx->pc = 0x25de50u;
    // NOP
    // 0x25de54: 0x46040044  c1          0x40044
    ctx->pc = 0x25de54u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x25de58: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x25de58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de5c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x25de5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x25de60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25de60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25de64: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x25DE64u;
    {
        const bool branch_taken_0x25de64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25de64) {
            ctx->pc = 0x25DE74u;
            goto label_25de74;
        }
    }
    ctx->pc = 0x25DE6Cu;
    // 0x25de6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25DE6Cu;
    {
        const bool branch_taken_0x25de6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DE6Cu;
            // 0x25de70: 0x4601d000  add.s       $f0, $f26, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de6c) {
            ctx->pc = 0x25DE7Cu;
            goto label_25de7c;
        }
    }
    ctx->pc = 0x25DE74u;
label_25de74:
    // 0x25de74: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25de74u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25de78: 0x4601d000  add.s       $f0, $f26, $f1
    ctx->pc = 0x25de78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[1]);
label_25de7c:
    // 0x25de7c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x25de7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25de80: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25DE80u;
    {
        const bool branch_taken_0x25de80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25de80) {
            ctx->pc = 0x25DE90u;
            goto label_25de90;
        }
    }
    ctx->pc = 0x25DE88u;
    // 0x25de88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25DE88u;
    {
        const bool branch_taken_0x25de88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25de88) {
            ctx->pc = 0x25DE94u;
            goto label_25de94;
        }
    }
    ctx->pc = 0x25DE90u;
label_25de90:
    // 0x25de90: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x25de90u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_25de94:
    // 0x25de94: 0x0  nop
    ctx->pc = 0x25de94u;
    // NOP
label_25de98:
    // 0x25de98: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x25de98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x25de9c: 0x601ff36  bgez        $s0, . + 4 + (-0xCA << 2)
    ctx->pc = 0x25DE9Cu;
    {
        const bool branch_taken_0x25de9c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x25DEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DE9Cu;
            // 0x25dea0: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de9c) {
            ctx->pc = 0x25DB78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25db78;
        }
    }
    ctx->pc = 0x25DEA4u;
    // 0x25dea4: 0x0  nop
    ctx->pc = 0x25dea4u;
    // NOP
label_25dea8:
    // 0x25dea8: 0x461bd036  c.le.s      $f26, $f27
    ctx->pc = 0x25dea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[26], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25deac: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x25DEACu;
    {
        const bool branch_taken_0x25deac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25deac) {
            ctx->pc = 0x25DEE0u;
            goto label_25dee0;
        }
    }
    ctx->pc = 0x25DEB4u;
    // 0x25deb4: 0x4616d032  c.eq.s      $f26, $f22
    ctx->pc = 0x25deb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[26], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25deb8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25DEB8u;
    {
        const bool branch_taken_0x25deb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25deb8) {
            ctx->pc = 0x25DED0u;
            goto label_25ded0;
        }
    }
    ctx->pc = 0x25DEC0u;
    // 0x25dec0: 0x461bd034  c.lt.s      $f26, $f27
    ctx->pc = 0x25dec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25dec4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25DEC4u;
    {
        const bool branch_taken_0x25dec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25dec4) {
            ctx->pc = 0x25DEE0u;
            goto label_25dee0;
        }
    }
    ctx->pc = 0x25DECCu;
    // 0x25decc: 0x0  nop
    ctx->pc = 0x25deccu;
    // NOP
label_25ded0:
    // 0x25ded0: 0x4600d646  mov.s       $f25, $f26
    ctx->pc = 0x25ded0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[26]);
    // 0x25ded4: 0x16c0ff14  bnez        $s6, . + 4 + (-0xEC << 2)
    ctx->pc = 0x25DED4u;
    {
        const bool branch_taken_0x25ded4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DED4u;
            // 0x25ded8: 0x4600b686  mov.s       $f26, $f22 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ded4) {
            ctx->pc = 0x25DB28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25db28;
        }
    }
    ctx->pc = 0x25DEDCu;
    // 0x25dedc: 0x0  nop
    ctx->pc = 0x25dedcu;
    // NOP
label_25dee0:
    // 0x25dee0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x25dee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25dee4: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x25dee4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25dee8: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x25dee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x25deec: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x25deecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25def0: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x25def0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x25def4: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x25def4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25def8: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x25def8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x25defc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x25defcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25df00: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x25df00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x25df04: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x25df04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25df08: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x25df08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x25df0c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x25df0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25df10: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x25df10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x25df14: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x25df14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25df18: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x25df18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x25df1c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25df1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25df20: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x25df20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25df24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x25df24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25df28: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x25df28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25df2c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25df2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25df30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25df34: 0x3e00008  jr          $ra
    ctx->pc = 0x25DF34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF34u;
            // 0x25df38: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25DF3Cu;
    // 0x25df3c: 0x0  nop
    ctx->pc = 0x25df3cu;
    // NOP
}
