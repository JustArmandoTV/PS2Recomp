#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024C120
// Address: 0x24c120 - 0x24d000
void sub_0024C120_0x24c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C120_0x24c120");
#endif

    switch (ctx->pc) {
        case 0x24c1b0u: goto label_24c1b0;
        case 0x24c1d0u: goto label_24c1d0;
        case 0x24c590u: goto label_24c590;
        case 0x24ca30u: goto label_24ca30;
        case 0x24cf00u: goto label_24cf00;
        case 0x24cf68u: goto label_24cf68;
        default: break;
    }

    ctx->pc = 0x24c120u;

    // 0x24c120: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x24c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x24c124: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24c124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24c128: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x24c128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x24c12c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24c12cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c130: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x24c130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x24c134: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x24c134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x24c138: 0x27be01a4  addiu       $fp, $sp, 0x1A4
    ctx->pc = 0x24c138u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    // 0x24c13c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x24c13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x24c140: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x24c140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x24c144: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x24c144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x24c148: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x24c148u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c14c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x24c14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x24c150: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x24c150u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c154: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24c154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24c158: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24c158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c15c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24c15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24c160: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x24c160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c164: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24c164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24c168: 0x26b60040  addiu       $s6, $s5, 0x40
    ctx->pc = 0x24c168u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x24c16c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x24c16cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24c170: 0x26b00030  addiu       $s0, $s5, 0x30
    ctx->pc = 0x24c170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x24c174: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x24c174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x24c178: 0x26b70050  addiu       $s7, $s5, 0x50
    ctx->pc = 0x24c178u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x24c17c: 0x26a200d4  addiu       $v0, $s5, 0xD4
    ctx->pc = 0x24c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 212));
    // 0x24c180: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x24c180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x24c184: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x24c184u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
    // 0x24c188: 0x26a200d8  addiu       $v0, $s5, 0xD8
    ctx->pc = 0x24c188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 216));
    // 0x24c18c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x24c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x24c190: 0x26420014  addiu       $v0, $s2, 0x14
    ctx->pc = 0x24c190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x24c194: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x24c194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x24c198: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x24c198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x24c19c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x24c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x24c1a0: 0x26a200c4  addiu       $v0, $s5, 0xC4
    ctx->pc = 0x24c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 196));
    // 0x24c1a4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x24c1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x24c1a8: 0x26a200c8  addiu       $v0, $s5, 0xC8
    ctx->pc = 0x24c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x24c1ac: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x24c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_24c1b0:
    // 0x24c1b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24c1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1b4: 0xc6a100e0  lwc1        $f1, 0xE0($s5)
    ctx->pc = 0x24c1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c1b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24c1b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1bc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x24c1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c1c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c1cc: 0x0  nop
    ctx->pc = 0x24c1ccu;
    // NOP
label_24c1d0:
    // 0x24c1d0: 0xc4c000e0  lwc1        $f0, 0xE0($a2)
    ctx->pc = 0x24c1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c1d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24c1d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c1d8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x24C1D8u;
    {
        const bool branch_taken_0x24c1d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24c1d8) {
            ctx->pc = 0x24C1E8u;
            goto label_24c1e8;
        }
    }
    ctx->pc = 0x24C1E0u;
    // 0x24c1e0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x24c1e0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x24c1e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24c1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24c1e8:
    // 0x24c1e8: 0xc4c000e4  lwc1        $f0, 0xE4($a2)
    ctx->pc = 0x24c1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c1ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24c1ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c1f0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x24C1F0u;
    {
        const bool branch_taken_0x24c1f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24c1f0) {
            ctx->pc = 0x24C200u;
            goto label_24c200;
        }
    }
    ctx->pc = 0x24C1F8u;
    // 0x24c1f8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x24c1f8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x24c1fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c200:
    // 0x24c200: 0xc4c000e8  lwc1        $f0, 0xE8($a2)
    ctx->pc = 0x24c200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c204: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24c204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c208: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x24C208u;
    {
        const bool branch_taken_0x24c208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24c208) {
            ctx->pc = 0x24C218u;
            goto label_24c218;
        }
    }
    ctx->pc = 0x24C210u;
    // 0x24c210: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x24c210u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x24c214: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x24c214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24c218:
    // 0x24c218: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24c218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24c21c: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x24c21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x24c220: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24c220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24c224: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x24c224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x24c228: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x24c228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x24c22c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x24C22Cu;
    {
        const bool branch_taken_0x24c22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C22Cu;
            // 0x24c230: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c22c) {
            ctx->pc = 0x24C1D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c1d0;
        }
    }
    ctx->pc = 0x24C234u;
    // 0x24c234: 0x2e210003  sltiu       $at, $s1, 0x3
    ctx->pc = 0x24c234u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x24c238: 0x1020012d  beqz        $at, . + 4 + (0x12D << 2)
    ctx->pc = 0x24C238u;
    {
        const bool branch_taken_0x24c238 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c238) {
            ctx->pc = 0x24C6F0u;
            goto label_24c6f0;
        }
    }
    ctx->pc = 0x24C240u;
    // 0x24c240: 0xa2710000  sb          $s1, 0x0($s3)
    ctx->pc = 0x24c240u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x24c244: 0x26a20020  addiu       $v0, $s5, 0x20
    ctx->pc = 0x24c244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x24c248: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x24c248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x24c24c: 0xae510038  sw          $s1, 0x38($s2)
    ctx->pc = 0x24c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 17));
    // 0x24c250: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24c250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24c254: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x24c254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24c258: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x24c258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x24c25c: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x24c25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24c260: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24c260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c264: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24c264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24c268: 0x0  nop
    ctx->pc = 0x24c268u;
    // NOP
    // 0x24c26c: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x24c26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x24c270: 0x27a201a8  addiu       $v0, $sp, 0x1A8
    ctx->pc = 0x24c270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x24c274: 0xe7c30000  swc1        $f3, 0x0($fp)
    ctx->pc = 0x24c274u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x24c278: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x24c278u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24c27c: 0x27a201ac  addiu       $v0, $sp, 0x1AC
    ctx->pc = 0x24c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    // 0x24c280: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24c280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24c284: 0xc46000c0  lwc1        $f0, 0xC0($v1)
    ctx->pc = 0x24c284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c288: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24c288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c28c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x24C28Cu;
    {
        const bool branch_taken_0x24c28c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C28Cu;
            // 0x24c290: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c28c) {
            ctx->pc = 0x24C2C0u;
            goto label_24c2c0;
        }
    }
    ctx->pc = 0x24C294u;
    // 0x24c294: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x24c294u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    // 0x24c298: 0xc6a00070  lwc1        $f0, 0x70($s5)
    ctx->pc = 0x24c298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c29c: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x24c29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x24c2a0: 0xc6a00074  lwc1        $f0, 0x74($s5)
    ctx->pc = 0x24c2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c2a4: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x24c2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x24c2a8: 0xc6a00078  lwc1        $f0, 0x78($s5)
    ctx->pc = 0x24c2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c2ac: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x24c2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x24c2b0: 0xc6a0007c  lwc1        $f0, 0x7C($s5)
    ctx->pc = 0x24c2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c2b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x24C2B4u;
    {
        const bool branch_taken_0x24c2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C2B4u;
            // 0x24c2b8: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c2b4) {
            ctx->pc = 0x24C2F8u;
            goto label_24c2f8;
        }
    }
    ctx->pc = 0x24C2BCu;
    // 0x24c2bc: 0x0  nop
    ctx->pc = 0x24c2bcu;
    // NOP
label_24c2c0:
    // 0x24c2c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24c2c4: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x24c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    // 0x24c2c8: 0xc6a00070  lwc1        $f0, 0x70($s5)
    ctx->pc = 0x24c2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c2cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24c2ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24c2d0: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x24c2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x24c2d4: 0xc6a00074  lwc1        $f0, 0x74($s5)
    ctx->pc = 0x24c2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c2d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24c2d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24c2dc: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x24c2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x24c2e0: 0xc6a00078  lwc1        $f0, 0x78($s5)
    ctx->pc = 0x24c2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c2e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24c2e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24c2e8: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x24c2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x24c2ec: 0xc6a0007c  lwc1        $f0, 0x7C($s5)
    ctx->pc = 0x24c2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c2f0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24c2f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24c2f4: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x24c2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_24c2f8:
    // 0x24c2f8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x24c2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x24c2fc: 0xc422cf78  lwc1        $f2, -0x3088($at)
    ctx->pc = 0x24c2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24c300: 0x3c02b727  lui         $v0, 0xB727
    ctx->pc = 0x24c300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46887 << 16));
    // 0x24c304: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x24c304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x24c308: 0xc6a100d0  lwc1        $f1, 0xD0($s5)
    ctx->pc = 0x24c308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c30c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x24c30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24c310: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x24c310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x24c314: 0xc420cf78  lwc1        $f0, -0x3088($at)
    ctx->pc = 0x24c314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c318: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24c318u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c31c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x24C31Cu;
    {
        const bool branch_taken_0x24c31c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C31Cu;
            // 0x24c320: 0x46001946  mov.s       $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c31c) {
            ctx->pc = 0x24C32Cu;
            goto label_24c32c;
        }
    }
    ctx->pc = 0x24C324u;
    // 0x24c324: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x24c324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x24c328: 0xc425cf70  lwc1        $f5, -0x3090($at)
    ctx->pc = 0x24c328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_24c32c:
    // 0x24c32c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x24c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x24c330: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24c330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c334: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24c334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c338: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x24C338u;
    {
        const bool branch_taken_0x24c338 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C338u;
            // 0x24c33c: 0x3c02b727  lui         $v0, 0xB727 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46887 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c338) {
            ctx->pc = 0x24C34Cu;
            goto label_24c34c;
        }
    }
    ctx->pc = 0x24C340u;
    // 0x24c340: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x24c340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x24c344: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24C344u;
    {
        const bool branch_taken_0x24c344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C344u;
            // 0x24c348: 0xc424cf70  lwc1        $f4, -0x3090($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c344) {
            ctx->pc = 0x24C354u;
            goto label_24c354;
        }
    }
    ctx->pc = 0x24C34Cu;
label_24c34c:
    // 0x24c34c: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x24c34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x24c350: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x24c350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_24c354:
    // 0x24c354: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x24c354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24c358: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24c358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c35c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24c35cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c360: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x24C360u;
    {
        const bool branch_taken_0x24c360 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C360u;
            // 0x24c364: 0x3c02b727  lui         $v0, 0xB727 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46887 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c360) {
            ctx->pc = 0x24C374u;
            goto label_24c374;
        }
    }
    ctx->pc = 0x24C368u;
    // 0x24c368: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x24c368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x24c36c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24C36Cu;
    {
        const bool branch_taken_0x24c36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C36Cu;
            // 0x24c370: 0xc422cf70  lwc1        $f2, -0x3090($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c36c) {
            ctx->pc = 0x24C37Cu;
            goto label_24c37c;
        }
    }
    ctx->pc = 0x24C374u;
label_24c374:
    // 0x24c374: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x24c374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x24c378: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x24c378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_24c37c:
    // 0x24c37c: 0xc6460030  lwc1        $f6, 0x30($s2)
    ctx->pc = 0x24c37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24c380: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x24c380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x24c384: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x24c384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c388: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x24c388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x24c38c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24c390: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24c390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24c394: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x24c394u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x24c398: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x24c398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x24c39c: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x24c39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x24c3a0: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x24c3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c3a4: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x24c3a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x24c3a8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x24c3a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x24c3ac: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x24c3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x24c3b0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24c3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c3b4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x24c3b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x24c3b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24c3b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24c3bc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x24c3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24c3c0: 0x27a401ac  addiu       $a0, $sp, 0x1AC
    ctx->pc = 0x24c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    // 0x24c3c4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24c3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c3c8: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x24c3c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x24c3cc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x24c3ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x24c3d0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x24c3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24c3d4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x24c3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c3d8: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x24c3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x24c3dc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x24c3dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x24c3e0: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x24c3e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x24c3e4: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x24c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x24c3e8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x24c3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24c3ec: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x24c3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x24c3f0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x24c3f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x24c3f4: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x24c3f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x24c3f8: 0xae440014  sw          $a0, 0x14($s2)
    ctx->pc = 0x24c3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
    // 0x24c3fc: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x24c3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24c400: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x24c400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x24c404: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x24c404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x24c408: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x24c408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x24c40c: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x24c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x24c410: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x24c410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x24c414: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x24c414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x24c418: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24c418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24c41c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x24c41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x24c420: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x24c420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x24c424: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x24c424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24c428: 0xc6470010  lwc1        $f7, 0x10($s2)
    ctx->pc = 0x24c428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24c42c: 0xc6a40020  lwc1        $f4, 0x20($s5)
    ctx->pc = 0x24c42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24c430: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x24c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24c434: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x24c434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24c438: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x24c438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c43c: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x24c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24c440: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x24c440u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x24c444: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x24c444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24c448: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x24c448u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x24c44c: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x24c44cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x24c450: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x24c450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24c454: 0x4602289c  madd.s      $f2, $f5, $f2
    ctx->pc = 0x24c454u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
    // 0x24c458: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24c458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24c45c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x24c45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x24c460: 0xc6a40024  lwc1        $f4, 0x24($s5)
    ctx->pc = 0x24c460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24c464: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x24c464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24c468: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x24c468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24c46c: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x24c46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c470: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x24c470u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x24c474: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x24c474u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x24c478: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x24c478u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x24c47c: 0x4602289c  madd.s      $f2, $f5, $f2
    ctx->pc = 0x24c47cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
    // 0x24c480: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24c480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24c484: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x24c484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x24c488: 0xc6a40028  lwc1        $f4, 0x28($s5)
    ctx->pc = 0x24c488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24c48c: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x24c48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24c490: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x24c490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24c494: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x24c494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c498: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x24c498u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x24c49c: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x24c49cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x24c4a0: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x24c4a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x24c4a4: 0x4602289c  madd.s      $f2, $f5, $f2
    ctx->pc = 0x24c4a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
    // 0x24c4a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24c4a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24c4ac: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x24c4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x24c4b0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x24c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x24c4b4: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x24c4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c4b8: 0xe7a001d4  swc1        $f0, 0x1D4($sp)
    ctx->pc = 0x24c4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x24c4bc: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x24c4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c4c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24c4c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c4c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C4C4u;
    {
        const bool branch_taken_0x24c4c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C4C4u;
            // 0x24c4c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4c4) {
            ctx->pc = 0x24C4D0u;
            goto label_24c4d0;
        }
    }
    ctx->pc = 0x24C4CCu;
    // 0x24c4cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x24c4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24c4d0:
    // 0x24c4d0: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x24c4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c4d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24c4d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c4d8: 0x0  nop
    ctx->pc = 0x24c4d8u;
    // NOP
    // 0x24c4dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24c4dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c4e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C4E0u;
    {
        const bool branch_taken_0x24c4e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C4E0u;
            // 0x24c4e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4e0) {
            ctx->pc = 0x24C4ECu;
            goto label_24c4ec;
        }
    }
    ctx->pc = 0x24C4E8u;
    // 0x24c4e8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24c4ec:
    // 0x24c4ec: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x24c4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c4f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24c4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c4f4: 0x0  nop
    ctx->pc = 0x24c4f4u;
    // NOP
    // 0x24c4f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24c4f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c4fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C4FCu;
    {
        const bool branch_taken_0x24c4fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C4FCu;
            // 0x24c500: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4fc) {
            ctx->pc = 0x24C508u;
            goto label_24c508;
        }
    }
    ctx->pc = 0x24C504u;
    // 0x24c504: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24c504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24c508:
    // 0x24c508: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x24c508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c50c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24c50cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c510: 0x0  nop
    ctx->pc = 0x24c510u;
    // NOP
    // 0x24c514: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24c514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c518: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C518u;
    {
        const bool branch_taken_0x24c518 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C518u;
            // 0x24c51c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c518) {
            ctx->pc = 0x24C524u;
            goto label_24c524;
        }
    }
    ctx->pc = 0x24C520u;
    // 0x24c520: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24c520u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c524:
    // 0x24c524: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x24c524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x24c528: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x24c528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24c52c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x24c52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24c530: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x24c530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24c534: 0x27a401bc  addiu       $a0, $sp, 0x1BC
    ctx->pc = 0x24c534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x24c538: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x24c538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
    // 0x24c53c: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x24c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x24c540: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24c540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c544: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24c544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24c548: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x24c548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x24c54c: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x24c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x24c550: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x24c550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x24c554: 0x3084000e  andi        $a0, $a0, 0xE
    ctx->pc = 0x24c554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)14);
    // 0x24c558: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24c558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24c55c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x24c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x24c560: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x24c560u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x24c564: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24c564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24c568: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x24c568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x24c56c: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x24c56cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x24c570: 0x92820021  lbu         $v0, 0x21($s4)
    ctx->pc = 0x24c570u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 33)));
    // 0x24c574: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x24c574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24c578: 0x4c00013  bltz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x24C578u;
    {
        const bool branch_taken_0x24c578 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x24c578) {
            ctx->pc = 0x24C5C8u;
            goto label_24c5c8;
        }
    }
    ctx->pc = 0x24C580u;
    // 0x24c580: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x24c580u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24c584: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x24c584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24c588: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x24c588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x24c58c: 0x0  nop
    ctx->pc = 0x24c58cu;
    // NOP
label_24c590:
    // 0x24c590: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x24c590u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24c594: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C594u;
    {
        const bool branch_taken_0x24c594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c594) {
            ctx->pc = 0x24C5B8u;
            goto label_24c5b8;
        }
    }
    ctx->pc = 0x24C59Cu;
    // 0x24c59c: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x24c59cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x24c5a0: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x24c5a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x24c5a4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C5A4u;
    {
        const bool branch_taken_0x24c5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C5A4u;
            // 0x24c5a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5a4) {
            ctx->pc = 0x24C5B8u;
            goto label_24c5b8;
        }
    }
    ctx->pc = 0x24C5ACu;
    // 0x24c5ac: 0x27a301e8  addiu       $v1, $sp, 0x1E8
    ctx->pc = 0x24c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
    // 0x24c5b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24C5B0u;
    {
        const bool branch_taken_0x24c5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C5B0u;
            // 0x24c5b4: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5b0) {
            ctx->pc = 0x24C5D0u;
            goto label_24c5d0;
        }
    }
    ctx->pc = 0x24C5B8u;
label_24c5b8:
    // 0x24c5b8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x24c5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x24c5bc: 0x4c1fff4  bgez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x24C5BCu;
    {
        const bool branch_taken_0x24c5bc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x24C5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C5BCu;
            // 0x24c5c0: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5bc) {
            ctx->pc = 0x24C590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c590;
        }
    }
    ctx->pc = 0x24C5C4u;
    // 0x24c5c4: 0x0  nop
    ctx->pc = 0x24c5c4u;
    // NOP
label_24c5c8:
    // 0x24c5c8: 0xa3a001e8  sb          $zero, 0x1E8($sp)
    ctx->pc = 0x24c5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
    // 0x24c5cc: 0x27a301e8  addiu       $v1, $sp, 0x1E8
    ctx->pc = 0x24c5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_24c5d0:
    // 0x24c5d0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x24c5d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c5d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C5D4u;
    {
        const bool branch_taken_0x24c5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C5D4u;
            // 0x24c5d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5d4) {
            ctx->pc = 0x24C5E8u;
            goto label_24c5e8;
        }
    }
    ctx->pc = 0x24C5DCu;
    // 0x24c5dc: 0x10000278  b           . + 4 + (0x278 << 2)
    ctx->pc = 0x24C5DCu;
    {
        const bool branch_taken_0x24c5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c5dc) {
            ctx->pc = 0x24CFC0u;
            goto label_24cfc0;
        }
    }
    ctx->pc = 0x24C5E4u;
    // 0x24c5e4: 0x0  nop
    ctx->pc = 0x24c5e4u;
    // NOP
label_24c5e8:
    // 0x24c5e8: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x24c5e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24c5ec: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x24c5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x24c5f0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x24c5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x24c5f4: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x24c5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c5f8: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x24c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x24c5fc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24c5fcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24c600: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x24c600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x24c604: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24c604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c608: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24c608u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24c60c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x24c60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24c610: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x24c610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x24c614: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24c614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c618: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24c618u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24c61c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x24c61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24c620: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x24c620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x24c624: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24c624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c628: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24c628u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24c62c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x24c62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24c630: 0xc6a10090  lwc1        $f1, 0x90($s5)
    ctx->pc = 0x24c630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c634: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x24c634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c638: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24c638u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c63c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C63Cu;
    {
        const bool branch_taken_0x24c63c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C63Cu;
            // 0x24c640: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c63c) {
            ctx->pc = 0x24C648u;
            goto label_24c648;
        }
    }
    ctx->pc = 0x24C644u;
    // 0x24c644: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24c644u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c648:
    // 0x24c648: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24C648u;
    {
        const bool branch_taken_0x24c648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C648u;
            // 0x24c64c: 0x27a20134  addiu       $v0, $sp, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c648) {
            ctx->pc = 0x24C668u;
            goto label_24c668;
        }
    }
    ctx->pc = 0x24C650u;
    // 0x24c650: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24c650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c654: 0xc6a00094  lwc1        $f0, 0x94($s5)
    ctx->pc = 0x24c654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c658: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24c658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c65c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C65Cu;
    {
        const bool branch_taken_0x24c65c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C65Cu;
            // 0x24c660: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c65c) {
            ctx->pc = 0x24C668u;
            goto label_24c668;
        }
    }
    ctx->pc = 0x24C664u;
    // 0x24c664: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24c664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c668:
    // 0x24c668: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C668u;
    {
        const bool branch_taken_0x24c668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C668u;
            // 0x24c66c: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c668) {
            ctx->pc = 0x24C690u;
            goto label_24c690;
        }
    }
    ctx->pc = 0x24C670u;
    // 0x24c670: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x24c670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x24c674: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c678: 0xc6a00098  lwc1        $f0, 0x98($s5)
    ctx->pc = 0x24c678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c67c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24c67cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c680: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C680u;
    {
        const bool branch_taken_0x24c680 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C680u;
            // 0x24c684: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c680) {
            ctx->pc = 0x24C68Cu;
            goto label_24c68c;
        }
    }
    ctx->pc = 0x24C688u;
    // 0x24c688: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24c688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c68c:
    // 0x24c68c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x24c68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_24c690:
    // 0x24c690: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24C690u;
    {
        const bool branch_taken_0x24c690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c690) {
            ctx->pc = 0x24C6D0u;
            goto label_24c6d0;
        }
    }
    ctx->pc = 0x24C698u;
    // 0x24c698: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x24c698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x24c69c: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x24c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24c6a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c6a4: 0x27a501e4  addiu       $a1, $sp, 0x1E4
    ctx->pc = 0x24c6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
    // 0x24c6a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24c6ac: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x24c6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x24c6b0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x24c6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c6b4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x24c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x24c6b8: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x24c6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c6bc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x24c6bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24c6c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24c6c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24c6c4: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x24c6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x24c6c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24C6C8u;
    {
        const bool branch_taken_0x24c6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C6C8u;
            // 0x24c6cc: 0xa3a201e4  sb          $v0, 0x1E4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 484), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6c8) {
            ctx->pc = 0x24C6D8u;
            goto label_24c6d8;
        }
    }
    ctx->pc = 0x24C6D0u;
label_24c6d0:
    // 0x24c6d0: 0xa3a001e4  sb          $zero, 0x1E4($sp)
    ctx->pc = 0x24c6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 484), (uint8_t)GPR_U32(ctx, 0));
    // 0x24c6d4: 0x27a501e4  addiu       $a1, $sp, 0x1E4
    ctx->pc = 0x24c6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
label_24c6d8:
    // 0x24c6d8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x24c6d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24c6dc: 0x10400228  beqz        $v0, . + 4 + (0x228 << 2)
    ctx->pc = 0x24C6DCu;
    {
        const bool branch_taken_0x24c6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C6DCu;
            // 0x24c6e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6dc) {
            ctx->pc = 0x24CF80u;
            goto label_24cf80;
        }
    }
    ctx->pc = 0x24C6E4u;
    // 0x24c6e4: 0x10000236  b           . + 4 + (0x236 << 2)
    ctx->pc = 0x24C6E4u;
    {
        const bool branch_taken_0x24c6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c6e4) {
            ctx->pc = 0x24CFC0u;
            goto label_24cfc0;
        }
    }
    ctx->pc = 0x24C6ECu;
    // 0x24c6ec: 0x0  nop
    ctx->pc = 0x24c6ecu;
    // NOP
label_24c6f0:
    // 0x24c6f0: 0x2e210007  sltiu       $at, $s1, 0x7
    ctx->pc = 0x24c6f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x24c6f4: 0x10200128  beqz        $at, . + 4 + (0x128 << 2)
    ctx->pc = 0x24C6F4u;
    {
        const bool branch_taken_0x24c6f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C6F4u;
            // 0x24c6f8: 0x2625fffc  addiu       $a1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6f4) {
            ctx->pc = 0x24CB98u;
            goto label_24cb98;
        }
    }
    ctx->pc = 0x24C6FCu;
    // 0x24c6fc: 0xa2710000  sb          $s1, 0x0($s3)
    ctx->pc = 0x24c6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x24c700: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x24c700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x24c704: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x24c704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x24c708: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x24c708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x24c70c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x24c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x24c710: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x24c710u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x24c714: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x24c714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x24c718: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24c718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c71c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x24c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24c720: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x24c720u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x24c724: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x24c724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x24c728: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x24c728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c72c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24c72cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c730: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x24C730u;
    {
        const bool branch_taken_0x24c730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C730u;
            // 0x24c734: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c730) {
            ctx->pc = 0x24C770u;
            goto label_24c770;
        }
    }
    ctx->pc = 0x24C738u;
    // 0x24c738: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x24c738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    // 0x24c73c: 0xc6a00060  lwc1        $f0, 0x60($s5)
    ctx->pc = 0x24c73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c740: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24c740u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24c744: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x24c744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x24c748: 0xc6a00064  lwc1        $f0, 0x64($s5)
    ctx->pc = 0x24c748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c74c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24c74cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24c750: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x24c750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x24c754: 0xc6a00068  lwc1        $f0, 0x68($s5)
    ctx->pc = 0x24c754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c758: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24c758u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24c75c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x24c75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x24c760: 0xc6a0006c  lwc1        $f0, 0x6C($s5)
    ctx->pc = 0x24c760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c764: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24c764u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24c768: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24C768u;
    {
        const bool branch_taken_0x24c768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C768u;
            // 0x24c76c: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c768) {
            ctx->pc = 0x24C798u;
            goto label_24c798;
        }
    }
    ctx->pc = 0x24C770u;
label_24c770:
    // 0x24c770: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24c770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24c774: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x24c774u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    // 0x24c778: 0xc6a00060  lwc1        $f0, 0x60($s5)
    ctx->pc = 0x24c778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c77c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x24c77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x24c780: 0xc6a00064  lwc1        $f0, 0x64($s5)
    ctx->pc = 0x24c780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c784: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x24c784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x24c788: 0xc6a00068  lwc1        $f0, 0x68($s5)
    ctx->pc = 0x24c788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c78c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x24c78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x24c790: 0xc6a0006c  lwc1        $f0, 0x6C($s5)
    ctx->pc = 0x24c790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c794: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x24c794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_24c798:
    // 0x24c798: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x24c798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x24c79c: 0xc422cf88  lwc1        $f2, -0x3078($at)
    ctx->pc = 0x24c79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24c7a0: 0x3c023727  lui         $v0, 0x3727
    ctx->pc = 0x24c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14119 << 16));
    // 0x24c7a4: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x24c7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x24c7a8: 0xc6a100c0  lwc1        $f1, 0xC0($s5)
    ctx->pc = 0x24c7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c7ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x24c7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24c7b0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x24c7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x24c7b4: 0xc420cf88  lwc1        $f0, -0x3078($at)
    ctx->pc = 0x24c7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c7b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24c7b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c7bc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x24C7BCu;
    {
        const bool branch_taken_0x24c7bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C7BCu;
            // 0x24c7c0: 0x46001986  mov.s       $f6, $f3 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c7bc) {
            ctx->pc = 0x24C7CCu;
            goto label_24c7cc;
        }
    }
    ctx->pc = 0x24C7C4u;
    // 0x24c7c4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x24c7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x24c7c8: 0xc426cf80  lwc1        $f6, -0x3080($at)
    ctx->pc = 0x24c7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_24c7cc:
    // 0x24c7cc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x24c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24c7d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24c7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c7d4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24c7d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c7d8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x24C7D8u;
    {
        const bool branch_taken_0x24c7d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C7D8u;
            // 0x24c7dc: 0x3c023727  lui         $v0, 0x3727 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14119 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c7d8) {
            ctx->pc = 0x24C7ECu;
            goto label_24c7ec;
        }
    }
    ctx->pc = 0x24C7E0u;
    // 0x24c7e0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x24c7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x24c7e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24C7E4u;
    {
        const bool branch_taken_0x24c7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C7E4u;
            // 0x24c7e8: 0xc425cf80  lwc1        $f5, -0x3080($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c7e4) {
            ctx->pc = 0x24C7F4u;
            goto label_24c7f4;
        }
    }
    ctx->pc = 0x24C7ECu;
label_24c7ec:
    // 0x24c7ec: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x24c7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x24c7f0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x24c7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_24c7f4:
    // 0x24c7f4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24c7f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24c7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c7fc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24c7fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c800: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x24C800u;
    {
        const bool branch_taken_0x24c800 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C800u;
            // 0x24c804: 0x3c023727  lui         $v0, 0x3727 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14119 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c800) {
            ctx->pc = 0x24C814u;
            goto label_24c814;
        }
    }
    ctx->pc = 0x24C808u;
    // 0x24c808: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x24c808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x24c80c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24C80Cu;
    {
        const bool branch_taken_0x24c80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C80Cu;
            // 0x24c810: 0xc424cf80  lwc1        $f4, -0x3080($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c80c) {
            ctx->pc = 0x24C81Cu;
            goto label_24c81c;
        }
    }
    ctx->pc = 0x24C814u;
label_24c814:
    // 0x24c814: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x24c814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x24c818: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x24c818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_24c81c:
    // 0x24c81c: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x24c81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24c820: 0x27a40194  addiu       $a0, $sp, 0x194
    ctx->pc = 0x24c820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x24c824: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x24c824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c828: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x24c828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x24c82c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24c830: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24c830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24c834: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x24c834u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x24c838: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x24c838u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x24c83c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x24c83cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x24c840: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x24c840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x24c844: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24c844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c848: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x24c848u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x24c84c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x24c84cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x24c850: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x24c850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24c854: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x24c854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x24c858: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24c858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c85c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x24c85cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x24c860: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x24c860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x24c864: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x24c864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24c868: 0x27a4019c  addiu       $a0, $sp, 0x19C
    ctx->pc = 0x24c868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x24c86c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24c86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c870: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x24c870u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x24c874: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x24c874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x24c878: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x24c878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24c87c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x24c87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c880: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x24c880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24c884: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x24c884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x24c888: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x24c888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x24c88c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x24c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x24c890: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x24c890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24c894: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x24c894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24c898: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x24c898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x24c89c: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x24c89cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x24c8a0: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x24c8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x24c8a4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x24c8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24c8a8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x24c8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x24c8ac: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x24c8acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x24c8b0: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x24c8b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x24c8b4: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x24c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x24c8b8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x24c8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x24c8bc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x24c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x24c8c0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24c8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24c8c4: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x24c8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x24c8c8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x24c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x24c8cc: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x24c8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24c8d0: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x24c8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c8d4: 0xc6470004  lwc1        $f7, 0x4($s2)
    ctx->pc = 0x24c8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24c8d8: 0xc6e60004  lwc1        $f6, 0x4($s7)
    ctx->pc = 0x24c8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24c8dc: 0xc6a30020  lwc1        $f3, 0x20($s5)
    ctx->pc = 0x24c8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24c8e0: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x24c8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24c8e4: 0xc6e40008  lwc1        $f4, 0x8($s7)
    ctx->pc = 0x24c8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24c8e8: 0x46001201  sub.s       $f8, $f2, $f0
    ctx->pc = 0x24c8e8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x24c8ec: 0xc6a20024  lwc1        $f2, 0x24($s5)
    ctx->pc = 0x24c8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24c8f0: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x24c8f0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x24c8f4: 0xc6a00028  lwc1        $f0, 0x28($s5)
    ctx->pc = 0x24c8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c8f8: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x24c8f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x24c8fc: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x24c8fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x24c900: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x24c900u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x24c904: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24c904u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x24c908: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x24c908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x24c90c: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x24c90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x24c910: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x24c910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24c914: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x24c914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24c918: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x24c918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c91c: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x24c91cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x24c920: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x24c920u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x24c924: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24c924u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x24c928: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x24c928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x24c92c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x24c92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x24c930: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x24c930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24c934: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x24c934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24c938: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x24c938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c93c: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x24c93cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x24c940: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x24c940u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x24c944: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24c944u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x24c948: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x24c948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x24c94c: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x24c94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x24c950: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x24c950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x24c954: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x24c954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c958: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x24c958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x24c95c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x24c95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c960: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24c960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c964: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C964u;
    {
        const bool branch_taken_0x24c964 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C964u;
            // 0x24c968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c964) {
            ctx->pc = 0x24C970u;
            goto label_24c970;
        }
    }
    ctx->pc = 0x24C96Cu;
    // 0x24c96c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x24c96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24c970:
    // 0x24c970: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x24c970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c974: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24c974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c978: 0x0  nop
    ctx->pc = 0x24c978u;
    // NOP
    // 0x24c97c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24c97cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c980: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C980u;
    {
        const bool branch_taken_0x24c980 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C980u;
            // 0x24c984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c980) {
            ctx->pc = 0x24C98Cu;
            goto label_24c98c;
        }
    }
    ctx->pc = 0x24C988u;
    // 0x24c988: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24c98c:
    // 0x24c98c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x24c98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24c990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c994: 0x0  nop
    ctx->pc = 0x24c994u;
    // NOP
    // 0x24c998: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24c998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c99c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C99Cu;
    {
        const bool branch_taken_0x24c99c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C99Cu;
            // 0x24c9a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c99c) {
            ctx->pc = 0x24C9A8u;
            goto label_24c9a8;
        }
    }
    ctx->pc = 0x24C9A4u;
    // 0x24c9a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24c9a8:
    // 0x24c9a8: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x24c9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c9ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24c9acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c9b0: 0x0  nop
    ctx->pc = 0x24c9b0u;
    // NOP
    // 0x24c9b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24c9b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c9b8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C9B8u;
    {
        const bool branch_taken_0x24c9b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C9B8u;
            // 0x24c9bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c9b8) {
            ctx->pc = 0x24C9C4u;
            goto label_24c9c4;
        }
    }
    ctx->pc = 0x24C9C0u;
    // 0x24c9c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24c9c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c9c4:
    // 0x24c9c4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x24c9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x24c9c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x24c9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24c9cc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x24c9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24c9d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x24c9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24c9d4: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x24c9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x24c9d8: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x24c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
    // 0x24c9dc: 0x27a301c8  addiu       $v1, $sp, 0x1C8
    ctx->pc = 0x24c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x24c9e0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24c9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c9e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24c9e8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x24c9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x24c9ec: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x24c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24c9f0: 0x8fa301cc  lw          $v1, 0x1CC($sp)
    ctx->pc = 0x24c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x24c9f4: 0x3084000e  andi        $a0, $a0, 0xE
    ctx->pc = 0x24c9f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)14);
    // 0x24c9f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24c9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24c9fc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x24c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x24ca00: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x24ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x24ca04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24ca04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24ca08: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x24ca08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x24ca0c: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x24ca0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x24ca10: 0x92820021  lbu         $v0, 0x21($s4)
    ctx->pc = 0x24ca10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 33)));
    // 0x24ca14: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x24ca14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24ca18: 0x4c00013  bltz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x24CA18u;
    {
        const bool branch_taken_0x24ca18 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x24ca18) {
            ctx->pc = 0x24CA68u;
            goto label_24ca68;
        }
    }
    ctx->pc = 0x24CA20u;
    // 0x24ca20: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x24ca20u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24ca24: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x24ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24ca28: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x24ca28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x24ca2c: 0x0  nop
    ctx->pc = 0x24ca2cu;
    // NOP
label_24ca30:
    // 0x24ca30: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x24ca30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24ca34: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24CA34u;
    {
        const bool branch_taken_0x24ca34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x24ca34) {
            ctx->pc = 0x24CA58u;
            goto label_24ca58;
        }
    }
    ctx->pc = 0x24CA3Cu;
    // 0x24ca3c: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x24ca3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x24ca40: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x24ca40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x24ca44: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CA44u;
    {
        const bool branch_taken_0x24ca44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24CA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CA44u;
            // 0x24ca48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca44) {
            ctx->pc = 0x24CA58u;
            goto label_24ca58;
        }
    }
    ctx->pc = 0x24CA4Cu;
    // 0x24ca4c: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x24ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x24ca50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24CA50u;
    {
        const bool branch_taken_0x24ca50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CA50u;
            // 0x24ca54: 0xa3a201e0  sb          $v0, 0x1E0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca50) {
            ctx->pc = 0x24CA70u;
            goto label_24ca70;
        }
    }
    ctx->pc = 0x24CA58u;
label_24ca58:
    // 0x24ca58: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x24ca58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x24ca5c: 0x4c1fff4  bgez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x24CA5Cu;
    {
        const bool branch_taken_0x24ca5c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x24CA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CA5Cu;
            // 0x24ca60: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca5c) {
            ctx->pc = 0x24CA30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24ca30;
        }
    }
    ctx->pc = 0x24CA64u;
    // 0x24ca64: 0x0  nop
    ctx->pc = 0x24ca64u;
    // NOP
label_24ca68:
    // 0x24ca68: 0xa3a001e0  sb          $zero, 0x1E0($sp)
    ctx->pc = 0x24ca68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ca6c: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x24ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_24ca70:
    // 0x24ca70: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x24ca70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ca74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CA74u;
    {
        const bool branch_taken_0x24ca74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CA74u;
            // 0x24ca78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca74) {
            ctx->pc = 0x24CA88u;
            goto label_24ca88;
        }
    }
    ctx->pc = 0x24CA7Cu;
    // 0x24ca7c: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x24CA7Cu;
    {
        const bool branch_taken_0x24ca7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ca7c) {
            ctx->pc = 0x24CFC0u;
            goto label_24cfc0;
        }
    }
    ctx->pc = 0x24CA84u;
    // 0x24ca84: 0x0  nop
    ctx->pc = 0x24ca84u;
    // NOP
label_24ca88:
    // 0x24ca88: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x24ca88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x24ca8c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x24ca8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x24ca90: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x24ca90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x24ca94: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x24ca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ca98: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x24ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x24ca9c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24ca9cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24caa0: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x24caa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x24caa4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24caa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24caa8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24caa8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24caac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x24caacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24cab0: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x24cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x24cab4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24cab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cab8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24cab8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24cabc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x24cabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24cac0: 0x27a2012c  addiu       $v0, $sp, 0x12C
    ctx->pc = 0x24cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x24cac4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cac8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24cac8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24cacc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x24caccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24cad0: 0xc6a100a0  lwc1        $f1, 0xA0($s5)
    ctx->pc = 0x24cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cad4: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x24cad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cad8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24cad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cadc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24CADCu;
    {
        const bool branch_taken_0x24cadc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CADCu;
            // 0x24cae0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cadc) {
            ctx->pc = 0x24CAE8u;
            goto label_24cae8;
        }
    }
    ctx->pc = 0x24CAE4u;
    // 0x24cae4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24cae4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24cae8:
    // 0x24cae8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24CAE8u;
    {
        const bool branch_taken_0x24cae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CAE8u;
            // 0x24caec: 0x27a20124  addiu       $v0, $sp, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cae8) {
            ctx->pc = 0x24CB08u;
            goto label_24cb08;
        }
    }
    ctx->pc = 0x24CAF0u;
    // 0x24caf0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24caf4: 0xc6a000a4  lwc1        $f0, 0xA4($s5)
    ctx->pc = 0x24caf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24caf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24caf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cafc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24CAFCu;
    {
        const bool branch_taken_0x24cafc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CAFCu;
            // 0x24cb00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cafc) {
            ctx->pc = 0x24CB08u;
            goto label_24cb08;
        }
    }
    ctx->pc = 0x24CB04u;
    // 0x24cb04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24cb04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24cb08:
    // 0x24cb08: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24CB08u;
    {
        const bool branch_taken_0x24cb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CB08u;
            // 0x24cb0c: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb08) {
            ctx->pc = 0x24CB30u;
            goto label_24cb30;
        }
    }
    ctx->pc = 0x24CB10u;
    // 0x24cb10: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x24cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x24cb14: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24cb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cb18: 0xc6a000a8  lwc1        $f0, 0xA8($s5)
    ctx->pc = 0x24cb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cb1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24cb1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cb20: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24CB20u;
    {
        const bool branch_taken_0x24cb20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CB20u;
            // 0x24cb24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb20) {
            ctx->pc = 0x24CB2Cu;
            goto label_24cb2c;
        }
    }
    ctx->pc = 0x24CB28u;
    // 0x24cb28: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24cb28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24cb2c:
    // 0x24cb2c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x24cb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_24cb30:
    // 0x24cb30: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24CB30u;
    {
        const bool branch_taken_0x24cb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cb30) {
            ctx->pc = 0x24CB78u;
            goto label_24cb78;
        }
    }
    ctx->pc = 0x24CB38u;
    // 0x24cb38: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x24cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x24cb3c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x24cb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cb40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cb44: 0x27a501dc  addiu       $a1, $sp, 0x1DC
    ctx->pc = 0x24cb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x24cb48: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x24cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x24cb4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24cb50: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x24cb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x24cb54: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x24cb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cb58: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x24cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x24cb5c: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x24cb5cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x24cb60: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x24cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cb64: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x24cb64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24cb68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24cb68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24cb6c: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x24cb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x24cb70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24CB70u;
    {
        const bool branch_taken_0x24cb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CB70u;
            // 0x24cb74: 0xa3a201dc  sb          $v0, 0x1DC($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 476), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb70) {
            ctx->pc = 0x24CB80u;
            goto label_24cb80;
        }
    }
    ctx->pc = 0x24CB78u;
label_24cb78:
    // 0x24cb78: 0xa3a001dc  sb          $zero, 0x1DC($sp)
    ctx->pc = 0x24cb78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 476), (uint8_t)GPR_U32(ctx, 0));
    // 0x24cb7c: 0x27a501dc  addiu       $a1, $sp, 0x1DC
    ctx->pc = 0x24cb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_24cb80:
    // 0x24cb80: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x24cb80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24cb84: 0x104000fe  beqz        $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x24CB84u;
    {
        const bool branch_taken_0x24cb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CB84u;
            // 0x24cb88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb84) {
            ctx->pc = 0x24CF80u;
            goto label_24cf80;
        }
    }
    ctx->pc = 0x24CB8Cu;
    // 0x24cb8c: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x24CB8Cu;
    {
        const bool branch_taken_0x24cb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cb8c) {
            ctx->pc = 0x24CFC0u;
            goto label_24cfc0;
        }
    }
    ctx->pc = 0x24CB94u;
    // 0x24cb94: 0x0  nop
    ctx->pc = 0x24cb94u;
    // NOP
label_24cb98:
    // 0x24cb98: 0x2623fff8  addiu       $v1, $s1, -0x8
    ctx->pc = 0x24cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x24cb9c: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x24cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x24cba0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x24cba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x24cba4: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x24cba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x24cba8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24cba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24cbac: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x24cbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x24cbb0: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x24cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x24cbb4: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x24cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x24cbb8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x24cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x24cbbc: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x24cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x24cbc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24cbc4: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x24cbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x24cbc8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x24cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x24cbcc: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x24cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x24cbd0: 0x27a2018c  addiu       $v0, $sp, 0x18C
    ctx->pc = 0x24cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x24cbd4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24cbd8: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x24cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x24cbdc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24cbe0: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x24cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x24cbe4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24cbe8: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x24cbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x24cbec: 0xaca60180  sw          $a2, 0x180($a1)
    ctx->pc = 0x24cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 384), GPR_U32(ctx, 6));
    // 0x24cbf0: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x24cbf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x24cbf4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x24cbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x24cbf8: 0x27a20174  addiu       $v0, $sp, 0x174
    ctx->pc = 0x24cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x24cbfc: 0xc4480000  lwc1        $f8, 0x0($v0)
    ctx->pc = 0x24cbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24cc00: 0xc7a70170  lwc1        $f7, 0x170($sp)
    ctx->pc = 0x24cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24cc04: 0xc7a60180  lwc1        $f6, 0x180($sp)
    ctx->pc = 0x24cc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24cc08: 0xc6a500c0  lwc1        $f5, 0xC0($s5)
    ctx->pc = 0x24cc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24cc0c: 0xc6a400c4  lwc1        $f4, 0xC4($s5)
    ctx->pc = 0x24cc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24cc10: 0xc6a300c8  lwc1        $f3, 0xC8($s5)
    ctx->pc = 0x24cc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24cc14: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x24cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x24cc18: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24cc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cc1c: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x24cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x24cc20: 0xc44a0000  lwc1        $f10, 0x0($v0)
    ctx->pc = 0x24cc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x24cc24: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x24cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x24cc28: 0xc4490000  lwc1        $f9, 0x0($v0)
    ctx->pc = 0x24cc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x24cc2c: 0x460a481a  mula.s      $f9, $f10
    ctx->pc = 0x24cc2cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x24cc30: 0x4608089d  msub.s      $f2, $f1, $f8
    ctx->pc = 0x24cc30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[8]));
    // 0x24cc34: 0x4607081a  mula.s      $f1, $f7
    ctx->pc = 0x24cc34u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x24cc38: 0x460a305d  msub.s      $f1, $f6, $f10
    ctx->pc = 0x24cc38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[10]));
    // 0x24cc3c: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x24cc3cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x24cc40: 0x4608301a  mula.s      $f6, $f8
    ctx->pc = 0x24cc40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x24cc44: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x24cc44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x24cc48: 0x460749dd  msub.s      $f7, $f9, $f7
    ctx->pc = 0x24cc48u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[7]));
    // 0x24cc4c: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x24cc4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x24cc50: 0x460338dc  madd.s      $f3, $f7, $f3
    ctx->pc = 0x24cc50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x24cc54: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x24cc54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cc58: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24CC58u;
    {
        const bool branch_taken_0x24cc58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24cc58) {
            ctx->pc = 0x24CC70u;
            goto label_24cc70;
        }
    }
    ctx->pc = 0x24CC60u;
    // 0x24cc60: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x24cc60u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x24cc64: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x24cc64u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x24cc68: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x24cc68u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x24cc6c: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x24cc6cu;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_24cc70:
    // 0x24cc70: 0x27a50164  addiu       $a1, $sp, 0x164
    ctx->pc = 0x24cc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x24cc74: 0xc6a60020  lwc1        $f6, 0x20($s5)
    ctx->pc = 0x24cc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24cc78: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x24cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x24cc7c: 0xc6a50024  lwc1        $f5, 0x24($s5)
    ctx->pc = 0x24cc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24cc80: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x24cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x24cc84: 0xc6a40028  lwc1        $f4, 0x28($s5)
    ctx->pc = 0x24cc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24cc88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24cc8c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x24cc8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24cc90: 0x0  nop
    ctx->pc = 0x24cc90u;
    // NOP
    // 0x24cc94: 0x46061182  mul.s       $f6, $f2, $f6
    ctx->pc = 0x24cc94u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x24cc98: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x24cc98u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x24cc9c: 0x46053018  adda.s      $f6, $f5
    ctx->pc = 0x24cc9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x24cca0: 0x4604391c  madd.s      $f4, $f7, $f4
    ctx->pc = 0x24cca0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x24cca4: 0xe7a40160  swc1        $f4, 0x160($sp)
    ctx->pc = 0x24cca4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x24cca8: 0xc6a60030  lwc1        $f6, 0x30($s5)
    ctx->pc = 0x24cca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24ccac: 0xc6a50034  lwc1        $f5, 0x34($s5)
    ctx->pc = 0x24ccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24ccb0: 0xc6a40038  lwc1        $f4, 0x38($s5)
    ctx->pc = 0x24ccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ccb4: 0x46061182  mul.s       $f6, $f2, $f6
    ctx->pc = 0x24ccb4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x24ccb8: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x24ccb8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x24ccbc: 0x46053018  adda.s      $f6, $f5
    ctx->pc = 0x24ccbcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x24ccc0: 0x4604391c  madd.s      $f4, $f7, $f4
    ctx->pc = 0x24ccc0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x24ccc4: 0xe4a40000  swc1        $f4, 0x0($a1)
    ctx->pc = 0x24ccc4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x24ccc8: 0xc6a60040  lwc1        $f6, 0x40($s5)
    ctx->pc = 0x24ccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24cccc: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x24ccccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x24ccd0: 0xc6a50044  lwc1        $f5, 0x44($s5)
    ctx->pc = 0x24ccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24ccd4: 0xc6a40048  lwc1        $f4, 0x48($s5)
    ctx->pc = 0x24ccd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ccd8: 0x46061182  mul.s       $f6, $f2, $f6
    ctx->pc = 0x24ccd8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x24ccdc: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x24ccdcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x24cce0: 0x46053018  adda.s      $f6, $f5
    ctx->pc = 0x24cce0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x24cce4: 0x4604391c  madd.s      $f4, $f7, $f4
    ctx->pc = 0x24cce4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x24cce8: 0xe4a40000  swc1        $f4, 0x0($a1)
    ctx->pc = 0x24cce8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x24ccec: 0x27a5016c  addiu       $a1, $sp, 0x16C
    ctx->pc = 0x24ccecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x24ccf0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x24ccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x24ccf4: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x24ccf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x24ccf8: 0x27a50164  addiu       $a1, $sp, 0x164
    ctx->pc = 0x24ccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x24ccfc: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x24ccfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x24cd00: 0xe6470008  swc1        $f7, 0x8($s2)
    ctx->pc = 0x24cd00u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x24cd04: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x24cd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x24cd08: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x24cd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cd0c: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x24cd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x24cd10: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24cd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cd14: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x24cd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x24cd18: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x24cd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x24cd1c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24cd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cd20: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x24cd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x24cd24: 0x27a5016c  addiu       $a1, $sp, 0x16C
    ctx->pc = 0x24cd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x24cd28: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24cd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cd2c: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x24cd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x24cd30: 0x8e45003c  lw          $a1, 0x3C($s2)
    ctx->pc = 0x24cd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x24cd34: 0x8e460038  lw          $a2, 0x38($s2)
    ctx->pc = 0x24cd34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x24cd38: 0x7a490000  lq          $t1, 0x0($s2)
    ctx->pc = 0x24cd38u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24cd3c: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x24cd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24cd40: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x24cd40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24cd44: 0xfd3821  addu        $a3, $a3, $sp
    ctx->pc = 0x24cd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x24cd48: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x24cd48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x24cd4c: 0x11d2021  addu        $a0, $t0, $sp
    ctx->pc = 0x24cd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x24cd50: 0x7a480010  lq          $t0, 0x10($s2)
    ctx->pc = 0x24cd50u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x24cd54: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x24cd54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x24cd58: 0xac820150  sw          $v0, 0x150($a0)
    ctx->pc = 0x24cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
    // 0x24cd5c: 0xace20140  sw          $v0, 0x140($a3)
    ctx->pc = 0x24cd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 2));
    // 0x24cd60: 0x27a20154  addiu       $v0, $sp, 0x154
    ctx->pc = 0x24cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x24cd64: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24cd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cd68: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x24cd68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cd6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24CD6Cu;
    {
        const bool branch_taken_0x24cd6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD6Cu;
            // 0x24cd70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd6c) {
            ctx->pc = 0x24CD78u;
            goto label_24cd78;
        }
    }
    ctx->pc = 0x24CD74u;
    // 0x24cd74: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x24cd74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24cd78:
    // 0x24cd78: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x24cd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cd7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24cd7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24cd80: 0x0  nop
    ctx->pc = 0x24cd80u;
    // NOP
    // 0x24cd84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24cd84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cd88: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24CD88u;
    {
        const bool branch_taken_0x24cd88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD88u;
            // 0x24cd8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd88) {
            ctx->pc = 0x24CD94u;
            goto label_24cd94;
        }
    }
    ctx->pc = 0x24CD90u;
    // 0x24cd90: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x24cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24cd94:
    // 0x24cd94: 0x27a20158  addiu       $v0, $sp, 0x158
    ctx->pc = 0x24cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x24cd98: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24cd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cd9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24cd9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24cda0: 0x0  nop
    ctx->pc = 0x24cda0u;
    // NOP
    // 0x24cda4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24cda4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cda8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24CDA8u;
    {
        const bool branch_taken_0x24cda8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CDA8u;
            // 0x24cdac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cda8) {
            ctx->pc = 0x24CDB4u;
            goto label_24cdb4;
        }
    }
    ctx->pc = 0x24CDB0u;
    // 0x24cdb0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x24cdb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24cdb4:
    // 0x24cdb4: 0x27a2015c  addiu       $v0, $sp, 0x15C
    ctx->pc = 0x24cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x24cdb8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24cdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cdbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24cdbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24cdc0: 0x0  nop
    ctx->pc = 0x24cdc0u;
    // NOP
    // 0x24cdc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24cdc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cdc8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24CDC8u;
    {
        const bool branch_taken_0x24cdc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CDC8u;
            // 0x24cdcc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cdc8) {
            ctx->pc = 0x24CDD4u;
            goto label_24cdd4;
        }
    }
    ctx->pc = 0x24CDD0u;
    // 0x24cdd0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24cdd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24cdd4:
    // 0x24cdd4: 0x881025  or          $v0, $a0, $t0
    ctx->pc = 0x24cdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x24cdd8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x24cdd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24cddc: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x24cddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x24cde0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x24cde0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24cde4: 0x27a301b4  addiu       $v1, $sp, 0x1B4
    ctx->pc = 0x24cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x24cde8: 0xafa401b4  sw          $a0, 0x1B4($sp)
    ctx->pc = 0x24cde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 4));
    // 0x24cdec: 0x27a201c4  addiu       $v0, $sp, 0x1C4
    ctx->pc = 0x24cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x24cdf0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x24cdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cdf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24cdf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24cdf8: 0x0  nop
    ctx->pc = 0x24cdf8u;
    // NOP
    // 0x24cdfc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x24cdfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24ce00: 0x27a20144  addiu       $v0, $sp, 0x144
    ctx->pc = 0x24ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x24ce04: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24ce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ce08: 0x8fa201c4  lw          $v0, 0x1C4($sp)
    ctx->pc = 0x24ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x24ce0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24ce0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ce10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24CE10u;
    {
        const bool branch_taken_0x24ce10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CE10u;
            // 0x24ce14: 0x3049000e  andi        $t1, $v0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce10) {
            ctx->pc = 0x24CE20u;
            goto label_24ce20;
        }
    }
    ctx->pc = 0x24CE18u;
    // 0x24ce18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24CE18u;
    {
        const bool branch_taken_0x24ce18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CE18u;
            // 0x24ce1c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce18) {
            ctx->pc = 0x24CE24u;
            goto label_24ce24;
        }
    }
    ctx->pc = 0x24CE20u;
label_24ce20:
    // 0x24ce20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24ce20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ce24:
    // 0x24ce24: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x24ce24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ce28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24ce28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ce2c: 0x0  nop
    ctx->pc = 0x24ce2cu;
    // NOP
    // 0x24ce30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24ce30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ce34: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24CE34u;
    {
        const bool branch_taken_0x24ce34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CE34u;
            // 0x24ce38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce34) {
            ctx->pc = 0x24CE40u;
            goto label_24ce40;
        }
    }
    ctx->pc = 0x24CE3Cu;
    // 0x24ce3c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x24ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24ce40:
    // 0x24ce40: 0x27a20148  addiu       $v0, $sp, 0x148
    ctx->pc = 0x24ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x24ce44: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24ce44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ce48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24ce48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ce4c: 0x0  nop
    ctx->pc = 0x24ce4cu;
    // NOP
    // 0x24ce50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24ce50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ce54: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24CE54u;
    {
        const bool branch_taken_0x24ce54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CE54u;
            // 0x24ce58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce54) {
            ctx->pc = 0x24CE60u;
            goto label_24ce60;
        }
    }
    ctx->pc = 0x24CE5Cu;
    // 0x24ce5c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x24ce5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24ce60:
    // 0x24ce60: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x24ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x24ce64: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24ce64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ce68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24ce68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ce6c: 0x0  nop
    ctx->pc = 0x24ce6cu;
    // NOP
    // 0x24ce70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24ce70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ce74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24CE74u;
    {
        const bool branch_taken_0x24ce74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CE74u;
            // 0x24ce78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce74) {
            ctx->pc = 0x24CE80u;
            goto label_24ce80;
        }
    }
    ctx->pc = 0x24CE7Cu;
    // 0x24ce7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24ce7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ce80:
    // 0x24ce80: 0x881025  or          $v0, $a0, $t0
    ctx->pc = 0x24ce80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x24ce84: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x24ce84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24ce88: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x24ce88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x24ce8c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x24ce8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24ce90: 0x34c30010  ori         $v1, $a2, 0x10
    ctx->pc = 0x24ce90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x24ce94: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x24ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x24ce98: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x24ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x24ce9c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x24ce9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24cea0: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x24cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x24cea4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24cea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24cea8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x24cea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ceac: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x24ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x24ceb0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x24ceb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x24ceb4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x24ceb4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x24ceb8: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x24ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x24cebc: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x24cebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x24cec0: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x24cec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x24cec4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x24cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x24cec8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x24cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24cecc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24ceccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24ced0: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x24ced0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x24ced4: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x24ced4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24ced8: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x24ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x24cedc: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x24cedcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x24cee0: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x24cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x24cee4: 0x92820021  lbu         $v0, 0x21($s4)
    ctx->pc = 0x24cee4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 33)));
    // 0x24cee8: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x24cee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24ceec: 0x4c00012  bltz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x24CEECu;
    {
        const bool branch_taken_0x24ceec = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x24ceec) {
            ctx->pc = 0x24CF38u;
            goto label_24cf38;
        }
    }
    ctx->pc = 0x24CEF4u;
    // 0x24cef4: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x24cef4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24cef8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x24cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24cefc: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x24cefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_24cf00:
    // 0x24cf00: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x24cf00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24cf04: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24CF04u;
    {
        const bool branch_taken_0x24cf04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x24cf04) {
            ctx->pc = 0x24CF28u;
            goto label_24cf28;
        }
    }
    ctx->pc = 0x24CF0Cu;
    // 0x24cf0c: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x24cf0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x24cf10: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x24cf10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x24cf14: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CF14u;
    {
        const bool branch_taken_0x24cf14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24CF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CF14u;
            // 0x24cf18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf14) {
            ctx->pc = 0x24CF28u;
            goto label_24cf28;
        }
    }
    ctx->pc = 0x24CF1Cu;
    // 0x24cf1c: 0x27a301d8  addiu       $v1, $sp, 0x1D8
    ctx->pc = 0x24cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x24cf20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24CF20u;
    {
        const bool branch_taken_0x24cf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CF20u;
            // 0x24cf24: 0xa3a201d8  sb          $v0, 0x1D8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 472), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf20) {
            ctx->pc = 0x24CF40u;
            goto label_24cf40;
        }
    }
    ctx->pc = 0x24CF28u;
label_24cf28:
    // 0x24cf28: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x24cf28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x24cf2c: 0x4c1fff4  bgez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x24CF2Cu;
    {
        const bool branch_taken_0x24cf2c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x24CF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CF2Cu;
            // 0x24cf30: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf2c) {
            ctx->pc = 0x24CF00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24cf00;
        }
    }
    ctx->pc = 0x24CF34u;
    // 0x24cf34: 0x0  nop
    ctx->pc = 0x24cf34u;
    // NOP
label_24cf38:
    // 0x24cf38: 0xa3a001d8  sb          $zero, 0x1D8($sp)
    ctx->pc = 0x24cf38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 472), (uint8_t)GPR_U32(ctx, 0));
    // 0x24cf3c: 0x27a301d8  addiu       $v1, $sp, 0x1D8
    ctx->pc = 0x24cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_24cf40:
    // 0x24cf40: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x24cf40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24cf44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CF44u;
    {
        const bool branch_taken_0x24cf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CF44u;
            // 0x24cf48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf44) {
            ctx->pc = 0x24CF58u;
            goto label_24cf58;
        }
    }
    ctx->pc = 0x24CF4Cu;
    // 0x24cf4c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x24CF4Cu;
    {
        const bool branch_taken_0x24cf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cf4c) {
            ctx->pc = 0x24CFC0u;
            goto label_24cfc0;
        }
    }
    ctx->pc = 0x24CF54u;
    // 0x24cf54: 0x0  nop
    ctx->pc = 0x24cf54u;
    // NOP
label_24cf58:
    // 0x24cf58: 0x27a401ec  addiu       $a0, $sp, 0x1EC
    ctx->pc = 0x24cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
    // 0x24cf5c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x24cf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cf60: 0xc093400  jal         func_24D000
    ctx->pc = 0x24CF60u;
    SET_GPR_U32(ctx, 31, 0x24CF68u);
    ctx->pc = 0x24CF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CF60u;
            // 0x24cf64: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24D000u;
    if (runtime->hasFunction(0x24D000u)) {
        auto targetFn = runtime->lookupFunction(0x24D000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CF68u; }
        if (ctx->pc != 0x24CF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024D000_0x24d000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CF68u; }
        if (ctx->pc != 0x24CF68u) { return; }
    }
    ctx->pc = 0x24CF68u;
label_24cf68:
    // 0x24cf68: 0x83a201ec  lb          $v0, 0x1EC($sp)
    ctx->pc = 0x24cf68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x24cf6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CF6Cu;
    {
        const bool branch_taken_0x24cf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CF6Cu;
            // 0x24cf70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf6c) {
            ctx->pc = 0x24CF80u;
            goto label_24cf80;
        }
    }
    ctx->pc = 0x24CF74u;
    // 0x24cf74: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24CF74u;
    {
        const bool branch_taken_0x24cf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cf74) {
            ctx->pc = 0x24CFC0u;
            goto label_24cfc0;
        }
    }
    ctx->pc = 0x24CF7Cu;
    // 0x24cf7c: 0x0  nop
    ctx->pc = 0x24cf7cu;
    // NOP
label_24cf80:
    // 0x24cf80: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x24cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x24cf84: 0x3444ffee  ori         $a0, $v0, 0xFFEE
    ctx->pc = 0x24cf84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x24cf88: 0x111082  srl         $v0, $s1, 2
    ctx->pc = 0x24cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 2));
    // 0x24cf8c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x24cf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x24cf90: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x24cf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x24cf94: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x24cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x24cf98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24cf9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24cfa0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x24cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24cfa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24cfa8: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x24cfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x24cfac: 0xac6400e0  sw          $a0, 0xE0($v1)
    ctx->pc = 0x24cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 4));
    // 0x24cfb0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x24cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24cfb4: 0x1c40fc7e  bgtz        $v0, . + 4 + (-0x382 << 2)
    ctx->pc = 0x24CFB4u;
    {
        const bool branch_taken_0x24cfb4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x24CFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CFB4u;
            // 0x24cfb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfb4) {
            ctx->pc = 0x24C1B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c1b0;
        }
    }
    ctx->pc = 0x24CFBCu;
    // 0x24cfbc: 0x0  nop
    ctx->pc = 0x24cfbcu;
    // NOP
label_24cfc0:
    // 0x24cfc0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24cfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24cfc4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x24cfc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24cfc8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x24cfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24cfcc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x24cfccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24cfd0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x24cfd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24cfd4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x24cfd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24cfd8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x24cfd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24cfdc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x24cfdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24cfe0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24cfe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24cfe4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24cfe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24cfe8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24cfe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24cfec: 0x3e00008  jr          $ra
    ctx->pc = 0x24CFECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CFECu;
            // 0x24cff0: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24CFF4u;
    // 0x24cff4: 0x0  nop
    ctx->pc = 0x24cff4u;
    // NOP
    // 0x24cff8: 0x0  nop
    ctx->pc = 0x24cff8u;
    // NOP
    // 0x24cffc: 0x0  nop
    ctx->pc = 0x24cffcu;
    // NOP
}
