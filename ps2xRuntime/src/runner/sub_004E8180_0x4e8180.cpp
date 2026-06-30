#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E8180
// Address: 0x4e8180 - 0x4e84e0
void sub_004E8180_0x4e8180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8180_0x4e8180");
#endif

    switch (ctx->pc) {
        case 0x4e826cu: goto label_4e826c;
        case 0x4e8400u: goto label_4e8400;
        case 0x4e8448u: goto label_4e8448;
        case 0x4e8490u: goto label_4e8490;
        default: break;
    }

    ctx->pc = 0x4e8180u;

    // 0x4e8180: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4e8180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x4e8184: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e8184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x4e8188: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x4e8188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x4e818c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x4e818cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x4e8190: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x4e8190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x4e8194: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x4e8194u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8198: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x4e8198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x4e819c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4e819cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e81a0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4e81a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x4e81a4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4e81a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x4e81a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4e81a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e81ac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e81acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x4e81b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4e81b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4e81b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e81b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4e81b8: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4e81b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    // 0x4e81bc: 0x84518388  lh          $s1, -0x7C78($v0)
    ctx->pc = 0x4e81bcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935432)));
    // 0x4e81c0: 0x26528da0  addiu       $s2, $s2, -0x7260
    ctx->pc = 0x4e81c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938016));
    // 0x4e81c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4e81c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4e81c8: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x4e81c8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4e81cc: 0x9863c  dsll32      $s0, $t1, 24
    ctx->pc = 0x4e81ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) << (32 + 24));
    // 0x4e81d0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4e81d0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x4e81d4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e81d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x4e81d8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4e81d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4e81dc: 0x8456838a  lh          $s6, -0x7C76($v0)
    ctx->pc = 0x4e81dcu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935434)));
    // 0x4e81e0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4e81e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4e81e4: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x4e81e4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x4e81e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4e81e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4e81ec: 0xafa700cc  sw          $a3, 0xCC($sp)
    ctx->pc = 0x4e81ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 7));
    // 0x4e81f0: 0x3c020096  lui         $v0, 0x96
    ctx->pc = 0x4e81f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)150 << 16));
    // 0x4e81f4: 0x90840194  lbu         $a0, 0x194($a0)
    ctx->pc = 0x4e81f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x4e81f8: 0x3443e100  ori         $v1, $v0, 0xE100
    ctx->pc = 0x4e81f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57600);
    // 0x4e81fc: 0xafa800c8  sw          $t0, 0xC8($sp)
    ctx->pc = 0x4e81fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
    // 0x4e8200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e8200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e8204: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E8204u;
    {
        const bool branch_taken_0x4e8204 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E8208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8204u;
            // 0x4e8208: 0x83a025  or          $s4, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8204) {
            ctx->pc = 0x4E8218u;
            goto label_4e8218;
        }
    }
    ctx->pc = 0x4E820Cu;
    // 0x4e820c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4e820cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4e8210: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4E8210u;
    {
        const bool branch_taken_0x4e8210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8210u;
            // 0x4e8214: 0x82a025  or          $s4, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8210) {
            ctx->pc = 0x4E8248u;
            goto label_4e8248;
        }
    }
    ctx->pc = 0x4E8218u;
label_4e8218:
    // 0x4e8218: 0x92a2019f  lbu         $v0, 0x19F($s5)
    ctx->pc = 0x4e8218u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 415)));
    // 0x4e821c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E821Cu;
    {
        const bool branch_taken_0x4e821c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e821c) {
            ctx->pc = 0x4E8220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E821Cu;
            // 0x4e8220: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E8234u;
            goto label_4e8234;
        }
    }
    ctx->pc = 0x4E8224u;
    // 0x4e8224: 0x3c02b4b4  lui         $v0, 0xB4B4
    ctx->pc = 0x4e8224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46260 << 16));
    // 0x4e8228: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x4e8228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x4e822c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E822Cu;
    {
        const bool branch_taken_0x4e822c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E822Cu;
            // 0x4e8230: 0x82a025  or          $s4, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e822c) {
            ctx->pc = 0x4E8248u;
            goto label_4e8248;
        }
    }
    ctx->pc = 0x4E8234u;
label_4e8234:
    // 0x4e8234: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E8234u;
    {
        const bool branch_taken_0x4e8234 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e8234) {
            ctx->pc = 0x4E8238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8234u;
            // 0x4e8238: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E824Cu;
            goto label_4e824c;
        }
    }
    ctx->pc = 0x4E823Cu;
    // 0x4e823c: 0x3c025a5a  lui         $v0, 0x5A5A
    ctx->pc = 0x4e823cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23130 << 16));
    // 0x4e8240: 0x34427800  ori         $v0, $v0, 0x7800
    ctx->pc = 0x4e8240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30720);
    // 0x4e8244: 0x82a025  or          $s4, $a0, $v0
    ctx->pc = 0x4e8244u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4e8248:
    // 0x4e8248: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4e8248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e824c:
    // 0x4e824c: 0x5613002e  bnel        $s0, $s3, . + 4 + (0x2E << 2)
    ctx->pc = 0x4E824Cu;
    {
        const bool branch_taken_0x4e824c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x4e824c) {
            ctx->pc = 0x4E8250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E824Cu;
            // 0x4e8250: 0x92a2019f  lbu         $v0, 0x19F($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 415)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E8308u;
            goto label_4e8308;
        }
    }
    ctx->pc = 0x4E8254u;
    // 0x4e8254: 0x82a2019e  lb          $v0, 0x19E($s5)
    ctx->pc = 0x4e8254u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 414)));
    // 0x4e8258: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x4e8258u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x4e825c: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x4E825Cu;
    {
        const bool branch_taken_0x4e825c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e825c) {
            ctx->pc = 0x4E8304u;
            goto label_4e8304;
        }
    }
    ctx->pc = 0x4E8264u;
    // 0x4e8264: 0xc0477a8  jal         func_11DEA0
    ctx->pc = 0x4E8264u;
    SET_GPR_U32(ctx, 31, 0x4E826Cu);
    ctx->pc = 0x4E8268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8264u;
            // 0x4e8268: 0xc6ac0130  lwc1        $f12, 0x130($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E826Cu; }
        if (ctx->pc != 0x4E826Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E826Cu; }
        if (ctx->pc != 0x4E826Cu) { return; }
    }
    ctx->pc = 0x4E826Cu;
label_4e826c:
    // 0x4e826c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4e826cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4e8270: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x4e8270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x4e8274: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4e8274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4e8278: 0x3c0442fe  lui         $a0, 0x42FE
    ctx->pc = 0x4e8278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17150 << 16));
    // 0x4e827c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4e827cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4e8280: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x4e8280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x4e8284: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4e8284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4e8288: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4e8288u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e828c: 0x0  nop
    ctx->pc = 0x4e828cu;
    // NOP
    // 0x4e8290: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x4e8290u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[0];
    // 0x4e8294: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4e8294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4e8298: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4e8298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4e829c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x4e829cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4e82a0: 0x0  nop
    ctx->pc = 0x4e82a0u;
    // NOP
    // 0x4e82a4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4e82a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4e82a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e82a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e82ac: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x4e82acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x4e82b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4e82b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4e82b4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x4E82B4u;
    {
        const bool branch_taken_0x4e82b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4e82b4) {
            ctx->pc = 0x4E82B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E82B4u;
            // 0x4e82b8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E82CCu;
            goto label_4e82cc;
        }
    }
    ctx->pc = 0x4E82BCu;
    // 0x4e82bc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4e82bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4e82c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4e82c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4e82c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4E82C4u;
    {
        const bool branch_taken_0x4e82c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E82C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E82C4u;
            // 0x4e82c8: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e82c4) {
            ctx->pc = 0x4E82E4u;
            goto label_4e82e4;
        }
    }
    ctx->pc = 0x4E82CCu;
label_4e82cc:
    // 0x4e82cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4e82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4e82d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4e82d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4e82d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4e82d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4e82d8: 0x0  nop
    ctx->pc = 0x4e82d8u;
    // NOP
    // 0x4e82dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e82dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4e82e0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x4e82e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4e82e4:
    // 0x4e82e4: 0x92a20194  lbu         $v0, 0x194($s5)
    ctx->pc = 0x4e82e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 404)));
    // 0x4e82e8: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x4e82e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4e82ec: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x4e82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4e82f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4e82f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4e82f4: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x4e82f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4e82f8: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x4e82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x4e82fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e82fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e8300: 0x43a025  or          $s4, $v0, $v1
    ctx->pc = 0x4e8300u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4e8304:
    // 0x4e8304: 0x92a2019f  lbu         $v0, 0x19F($s5)
    ctx->pc = 0x4e8304u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 415)));
label_4e8308:
    // 0x4e8308: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E8308u;
    {
        const bool branch_taken_0x4e8308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8308) {
            ctx->pc = 0x4E830Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8308u;
            // 0x4e830c: 0x8fa200cc  lw          $v0, 0xCC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E8318u;
            goto label_4e8318;
        }
    }
    ctx->pc = 0x4E8310u;
    // 0x4e8310: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x4e8310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4e8314: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x4e8314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_4e8318:
    // 0x4e8318: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e8318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e831c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e831cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8320: 0x0  nop
    ctx->pc = 0x4e8320u;
    // NOP
    // 0x4e8324: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4e8324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4e8328: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x4e8328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x4e832c: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x4e832cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4e8330: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4e8330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x4e8334: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4e8334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4e8338: 0x0  nop
    ctx->pc = 0x4e8338u;
    // NOP
    // 0x4e833c: 0x46000902  mul.s       $f4, $f1, $f0
    ctx->pc = 0x4e833cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4e8340: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x4e8340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x4e8344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e8344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8348: 0x0  nop
    ctx->pc = 0x4e8348u;
    // NOP
    // 0x4e834c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4e834cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4e8350: 0xc4b40008  lwc1        $f20, 0x8($a1)
    ctx->pc = 0x4e8350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4e8354: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E8354u;
    {
        const bool branch_taken_0x4e8354 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x4E8358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8354u;
            // 0x4e8358: 0x460008c2  mul.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8354) {
            ctx->pc = 0x4E836Cu;
            goto label_4e836c;
        }
    }
    ctx->pc = 0x4E835Cu;
    // 0x4e835c: 0xc6a00134  lwc1        $f0, 0x134($s5)
    ctx->pc = 0x4e835cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4e8360: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x4e8360u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x4e8364: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E8364u;
    {
        const bool branch_taken_0x4e8364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8364u;
            // 0x4e8368: 0x460018c0  add.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8364) {
            ctx->pc = 0x4E8394u;
            goto label_4e8394;
        }
    }
    ctx->pc = 0x4E836Cu;
label_4e836c:
    // 0x4e836c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4e836cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e8370: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E8370u;
    {
        const bool branch_taken_0x4e8370 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e8370) {
            ctx->pc = 0x4E8394u;
            goto label_4e8394;
        }
    }
    ctx->pc = 0x4E8378u;
    // 0x4e8378: 0xc6a10134  lwc1        $f1, 0x134($s5)
    ctx->pc = 0x4e8378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4e837c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x4e837cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x4e8380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e8380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8384: 0x0  nop
    ctx->pc = 0x4e8384u;
    // NOP
    // 0x4e8388: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4e8388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4e838c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x4e838cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x4e8390: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x4e8390u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_4e8394:
    // 0x4e8394: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x4e8394u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8398: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e8398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4e839c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4e839cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4e83a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e83a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4e83a4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e83a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e83a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e83a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e83ac: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x4e83acu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e83b0: 0x0  nop
    ctx->pc = 0x4e83b0u;
    // NOP
    // 0x4e83b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4e83b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4e83b8: 0x46030581  sub.s       $f22, $f0, $f3
    ctx->pc = 0x4e83b8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x4e83bc: 0x46030540  add.s       $f21, $f0, $f3
    ctx->pc = 0x4e83bcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x4e83c0: 0x46040881  sub.s       $f2, $f1, $f4
    ctx->pc = 0x4e83c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x4e83c4: 0x4602a600  add.s       $f24, $f20, $f2
    ctx->pc = 0x4e83c4u;
    ctx->f[24] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x4e83c8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4e83c8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e83cc: 0x0  nop
    ctx->pc = 0x4e83ccu;
    // NOP
    // 0x4e83d0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e83d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x4e83d4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x4e83d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x4e83d8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4e83d8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e83dc: 0x0  nop
    ctx->pc = 0x4e83dcu;
    // NOP
    // 0x4e83e0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e83e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x4e83e4: 0x46140dc1  sub.s       $f23, $f1, $f20
    ctx->pc = 0x4e83e4u;
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x4e83e8: 0x4614c301  sub.s       $f12, $f24, $f20
    ctx->pc = 0x4e83e8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[24], ctx->f[20]);
    // 0x4e83ec: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e83ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x4e83f0: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x4e83f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x4e83f4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x4e83f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x4e83f8: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x4E83F8u;
    SET_GPR_U32(ctx, 31, 0x4E8400u);
    ctx->pc = 0x4E83FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E83F8u;
            // 0x4e83fc: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8400u; }
        if (ctx->pc != 0x4E8400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8400u; }
        if (ctx->pc != 0x4E8400u) { return; }
    }
    ctx->pc = 0x4E8400u;
label_4e8400:
    // 0x4e8400: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4e8400u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8404: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x4e8404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4e8408: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e8408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x4e840c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x4e840cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4e8410: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e8410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4e8414: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x4e8414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x4e8418: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e8418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4e841c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e841cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8420: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e8420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8424: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4e8424u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8428: 0x0  nop
    ctx->pc = 0x4e8428u;
    // NOP
    // 0x4e842c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e842cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x4e8430: 0x4614bb80  add.s       $f14, $f23, $f20
    ctx->pc = 0x4e8430u;
    ctx->f[14] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
    // 0x4e8434: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4e8434u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x4e8438: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x4e8438u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x4e843c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e843cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x4e8440: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x4E8440u;
    SET_GPR_U32(ctx, 31, 0x4E8448u);
    ctx->pc = 0x4E8444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8440u;
            // 0x4e8444: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8448u; }
        if (ctx->pc != 0x4E8448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8448u; }
        if (ctx->pc != 0x4E8448u) { return; }
    }
    ctx->pc = 0x4E8448u;
label_4e8448:
    // 0x4e8448: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4e8448u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e844c: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x4e844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x4e8450: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e8450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x4e8454: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4e8454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4e8458: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x4e8458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4e845c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e845cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8460: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e8460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4e8464: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e8464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4e8468: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e8468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e846c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4e846cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8470: 0x0  nop
    ctx->pc = 0x4e8470u;
    // NOP
    // 0x4e8474: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e8474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x4e8478: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x4e8478u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x4e847c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x4e847cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x4e8480: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x4e8480u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x4e8484: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e8484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x4e8488: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x4E8488u;
    SET_GPR_U32(ctx, 31, 0x4E8490u);
    ctx->pc = 0x4E848Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8488u;
            // 0x4e848c: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8490u; }
        if (ctx->pc != 0x4E8490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8490u; }
        if (ctx->pc != 0x4E8490u) { return; }
    }
    ctx->pc = 0x4E8490u;
label_4e8490:
    // 0x4e8490: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x4e8490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4e8494: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x4e8494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4e8498: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x4e8498u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4e849c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4e849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4e84a0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x4e84a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4e84a4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4e84a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4e84a8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x4e84a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4e84ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4e84acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4e84b0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x4e84b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4e84b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4e84b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4e84b8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4e84b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e84bc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e84bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e84c0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4e84c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e84c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e84c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e84c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4e84c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e84cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4E84CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E84D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E84CCu;
            // 0x4e84d0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E84D4u;
    // 0x4e84d4: 0x0  nop
    ctx->pc = 0x4e84d4u;
    // NOP
    // 0x4e84d8: 0x0  nop
    ctx->pc = 0x4e84d8u;
    // NOP
    // 0x4e84dc: 0x0  nop
    ctx->pc = 0x4e84dcu;
    // NOP
}
