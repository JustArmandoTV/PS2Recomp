#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025D820
// Address: 0x25d820 - 0x25daa0
void sub_0025D820_0x25d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D820_0x25d820");
#endif

    switch (ctx->pc) {
        case 0x25d8b8u: goto label_25d8b8;
        case 0x25d964u: goto label_25d964;
        default: break;
    }

    ctx->pc = 0x25d820u;

    // 0x25d820: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x25d820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x25d824: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x25d824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x25d828: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x25d828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x25d82c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d830: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x25d830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x25d834: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x25d834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x25d838: 0x27be0180  addiu       $fp, $sp, 0x180
    ctx->pc = 0x25d838u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25d83c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x25d83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x25d840: 0x27b70190  addiu       $s7, $sp, 0x190
    ctx->pc = 0x25d840u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x25d844: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x25d844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x25d848: 0x27b60184  addiu       $s6, $sp, 0x184
    ctx->pc = 0x25d848u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x25d84c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x25d84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x25d850: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25d850u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d854: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x25d854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x25d858: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25d858u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d85c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x25d85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x25d860: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25d860u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d864: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x25d864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x25d868: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x25d868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d86c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25d86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25d870: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25d870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d874: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x25d874u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x25d878: 0x27b00194  addiu       $s0, $sp, 0x194
    ctx->pc = 0x25d878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x25d87c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x25d87cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x25d880: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x25d880u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25d884: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x25d884u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x25d888: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x25d888u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25d88c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25d88cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25d890: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25d890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25d894: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x25d894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d898: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x25d898u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x25d89c: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x25d89cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x25d8a0: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x25d8a0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x25d8a4: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x25d8a4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x25d8a8: 0x4600d586  mov.s       $f22, $f26
    ctx->pc = 0x25d8a8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[26]);
    // 0x25d8ac: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x25d8acu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25d8b0: 0x4600ad07  neg.s       $f20, $f21
    ctx->pc = 0x25d8b0u;
    ctx->f[20] = FPU_NEG_S(ctx->f[21]);
    // 0x25d8b4: 0x0  nop
    ctx->pc = 0x25d8b4u;
    // NOP
label_25d8b8:
    // 0x25d8b8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x25d8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8bc: 0x4600c036  c.le.s      $f24, $f0
    ctx->pc = 0x25d8bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d8c0: 0x45010055  bc1t        . + 4 + (0x55 << 2)
    ctx->pc = 0x25D8C0u;
    {
        const bool branch_taken_0x25d8c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D8C0u;
            // 0x25d8c4: 0x4618b841  sub.s       $f1, $f23, $f24 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8c0) {
            ctx->pc = 0x25DA18u;
            goto label_25da18;
        }
    }
    ctx->pc = 0x25D8C8u;
    // 0x25d8c8: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x25d8c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d8cc: 0x45000052  bc1f        . + 4 + (0x52 << 2)
    ctx->pc = 0x25D8CCu;
    {
        const bool branch_taken_0x25d8cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d8cc) {
            ctx->pc = 0x25DA18u;
            goto label_25da18;
        }
    }
    ctx->pc = 0x25D8D4u;
    // 0x25d8d4: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x25d8d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x25d8d8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x25d8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x25d8dc: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x25d8dcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x25d8e0: 0x0  nop
    ctx->pc = 0x25d8e0u;
    // NOP
    // 0x25d8e4: 0x0  nop
    ctx->pc = 0x25d8e4u;
    // NOP
    // 0x25d8e8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x25D8E8u;
    {
        const bool branch_taken_0x25d8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d8e8) {
            ctx->pc = 0x25D940u;
            goto label_25d940;
        }
    }
    ctx->pc = 0x25D8F0u;
    // 0x25d8f0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x25d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x25d8f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x25d8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x25d8f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d8f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d8fc: 0x0  nop
    ctx->pc = 0x25d8fcu;
    // NOP
    // 0x25d900: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25d900u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d904: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x25D904u;
    {
        const bool branch_taken_0x25d904 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d904) {
            ctx->pc = 0x25D914u;
            goto label_25d914;
        }
    }
    ctx->pc = 0x25D90Cu;
    // 0x25d90c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25D90Cu;
    {
        const bool branch_taken_0x25d90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D90Cu;
            // 0x25d910: 0x3c023f66  lui         $v0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d90c) {
            ctx->pc = 0x25D91Cu;
            goto label_25d91c;
        }
    }
    ctx->pc = 0x25D914u;
label_25d914:
    // 0x25d914: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25d914u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25d918: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x25d918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_25d91c:
    // 0x25d91c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x25d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x25d920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d924: 0x0  nop
    ctx->pc = 0x25d924u;
    // NOP
    // 0x25d928: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25d928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d92c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25D92Cu;
    {
        const bool branch_taken_0x25d92c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d92c) {
            ctx->pc = 0x25D93Cu;
            goto label_25d93c;
        }
    }
    ctx->pc = 0x25D934u;
    // 0x25d934: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25D934u;
    {
        const bool branch_taken_0x25d934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d934) {
            ctx->pc = 0x25D940u;
            goto label_25d940;
        }
    }
    ctx->pc = 0x25D93Cu;
label_25d93c:
    // 0x25d93c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25d93cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25d940:
    // 0x25d940: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25d940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25d944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d948: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25d948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d94c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x25d94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25d950: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25d950u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25d954: 0x4600d01a  mula.s      $f26, $f0
    ctx->pc = 0x25d954u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x25d958: 0x4601cd9c  madd.s      $f22, $f25, $f1
    ctx->pc = 0x25d958u;
    ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[1]));
    // 0x25d95c: 0xc097584  jal         func_25D610
    ctx->pc = 0x25D95Cu;
    SET_GPR_U32(ctx, 31, 0x25D964u);
    ctx->pc = 0x25D960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D95Cu;
            // 0x25d960: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D610u;
    if (runtime->hasFunction(0x25D610u)) {
        auto targetFn = runtime->lookupFunction(0x25D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D964u; }
        if (ctx->pc != 0x25D964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025D610_0x25d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D964u; }
        if (ctx->pc != 0x25D964u) { return; }
    }
    ctx->pc = 0x25D964u;
label_25d964:
    // 0x25d964: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x25d964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d968: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x25d968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x25d96c: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x25d96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d970: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x25d970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d974: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x25d974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d978: 0xc6660004  lwc1        $f6, 0x4($s3)
    ctx->pc = 0x25d978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25d97c: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x25d97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25d980: 0xc7c70000  lwc1        $f7, 0x0($fp)
    ctx->pc = 0x25d980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25d984: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x25d984u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25d988: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x25d988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x25d98c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25d98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d990: 0xc6c40000  lwc1        $f4, 0x0($s6)
    ctx->pc = 0x25d990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25d994: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x25d994u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x25d998: 0x27a2018c  addiu       $v0, $sp, 0x18C
    ctx->pc = 0x25d998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x25d99c: 0x460839c2  mul.s       $f7, $f7, $f8
    ctx->pc = 0x25d99cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x25d9a0: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x25d9a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x25d9a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25d9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d9a8: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x25d9a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x25d9ac: 0x46043818  adda.s      $f7, $f4
    ctx->pc = 0x25d9acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x25d9b0: 0x4602085c  madd.s      $f1, $f1, $f2
    ctx->pc = 0x25d9b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x25d9b4: 0xc6890000  lwc1        $f9, 0x0($s4)
    ctx->pc = 0x25d9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25d9b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d9b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25d9bc: 0x46090041  sub.s       $f1, $f0, $f9
    ctx->pc = 0x25d9bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x25d9c0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x25d9c0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x25d9c4: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x25d9c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d9c8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x25D9C8u;
    {
        const bool branch_taken_0x25d9c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D9C8u;
            // 0x25d9cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d9c8) {
            ctx->pc = 0x25D9D4u;
            goto label_25d9d4;
        }
    }
    ctx->pc = 0x25D9D0u;
    // 0x25d9d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25d9d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d9d4:
    // 0x25d9d4: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x25d9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x25d9d8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x25d9d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x25d9dc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25D9DCu;
    {
        const bool branch_taken_0x25d9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d9dc) {
            ctx->pc = 0x25DA18u;
            goto label_25da18;
        }
    }
    ctx->pc = 0x25D9E4u;
    // 0x25d9e4: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x25d9e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d9e8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25D9E8u;
    {
        const bool branch_taken_0x25d9e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d9e8) {
            ctx->pc = 0x25DA00u;
            goto label_25da00;
        }
    }
    ctx->pc = 0x25D9F0u;
    // 0x25d9f0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x25d9f0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x25d9f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25D9F4u;
    {
        const bool branch_taken_0x25d9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D9F4u;
            // 0x25d9f8: 0x4600b646  mov.s       $f25, $f22 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d9f4) {
            ctx->pc = 0x25DA08u;
            goto label_25da08;
        }
    }
    ctx->pc = 0x25D9FCu;
    // 0x25d9fc: 0x0  nop
    ctx->pc = 0x25d9fcu;
    // NOP
label_25da00:
    // 0x25da00: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x25da00u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x25da04: 0x4600b686  mov.s       $f26, $f22
    ctx->pc = 0x25da04u;
    ctx->f[26] = FPU_MOV_S(ctx->f[22]);
label_25da08:
    // 0x25da08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25da08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25da0c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x25da0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x25da10: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x25DA10u;
    {
        const bool branch_taken_0x25da10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25da10) {
            ctx->pc = 0x25D8B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25d8b8;
        }
    }
    ctx->pc = 0x25DA18u;
label_25da18:
    // 0x25da18: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x25da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25da1c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x25da1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25da20: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x25DA20u;
    {
        const bool branch_taken_0x25da20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25da20) {
            ctx->pc = 0x25DA50u;
            goto label_25da50;
        }
    }
    ctx->pc = 0x25DA28u;
    // 0x25da28: 0xe6560000  swc1        $f22, 0x0($s2)
    ctx->pc = 0x25da28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x25da2c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x25da2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25da30: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x25da30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x25da34: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x25da34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25da38: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x25da38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x25da3c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x25da3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25da40: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x25da40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x25da44: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x25da44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25da48: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x25da48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x25da4c: 0x0  nop
    ctx->pc = 0x25da4cu;
    // NOP
label_25da50:
    // 0x25da50: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x25da50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25da54: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x25da54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25da58: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x25da58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25da5c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x25da5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25da60: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x25da60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x25da64: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x25da64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25da68: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x25da68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x25da6c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x25da6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25da70: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x25da70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x25da74: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x25da74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25da78: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x25da78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25da7c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x25da7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25da80: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x25da80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25da84: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x25da84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25da88: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25da88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25da8c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x25da8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25da90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25da90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25da94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25da94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25da98: 0x3e00008  jr          $ra
    ctx->pc = 0x25DA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DA98u;
            // 0x25da9c: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25DAA0u;
}
