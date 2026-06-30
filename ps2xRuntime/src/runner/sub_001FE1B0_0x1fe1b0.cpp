#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FE1B0
// Address: 0x1fe1b0 - 0x1fe330
void sub_001FE1B0_0x1fe1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE1B0_0x1fe1b0");
#endif

    switch (ctx->pc) {
        case 0x1fe1f0u: goto label_1fe1f0;
        case 0x1fe204u: goto label_1fe204;
        case 0x1fe22cu: goto label_1fe22c;
        case 0x1fe308u: goto label_1fe308;
        default: break;
    }

    ctx->pc = 0x1fe1b0u;

    // 0x1fe1b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fe1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fe1b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fe1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fe1b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fe1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fe1bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fe1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fe1c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1fe1c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe1c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fe1c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fe1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fe1d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fe1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1d4: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE1D4u;
    {
        const bool branch_taken_0x1fe1d4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1FE1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE1D4u;
            // 0x1fe1d8: 0x118043  sra         $s0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe1d4) {
            ctx->pc = 0x1FE1E4u;
            goto label_1fe1e4;
        }
    }
    ctx->pc = 0x1FE1DCu;
    // 0x1fe1dc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1fe1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fe1e0: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x1fe1e0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
label_1fe1e4:
    // 0x1fe1e4: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FE1E4u;
    {
        const bool branch_taken_0x1fe1e4 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1fe1e4) {
            ctx->pc = 0x1FE210u;
            goto label_1fe210;
        }
    }
    ctx->pc = 0x1FE1ECu;
    // 0x1fe1ec: 0x133e3c  dsll32      $a3, $s3, 24
    ctx->pc = 0x1fe1ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 24));
label_1fe1f0:
    // 0x1fe1f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fe1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fe1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fe1f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1fc: 0xc07f900  jal         func_1FE400
    ctx->pc = 0x1FE1FCu;
    SET_GPR_U32(ctx, 31, 0x1FE204u);
    ctx->pc = 0x1FE200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE1FCu;
            // 0x1fe200: 0x73e3f  dsra32      $a3, $a3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE400u;
    if (runtime->hasFunction(0x1FE400u)) {
        auto targetFn = runtime->lookupFunction(0x1FE400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE204u; }
        if (ctx->pc != 0x1FE204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE400_0x1fe400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE204u; }
        if (ctx->pc != 0x1FE204u) { return; }
    }
    ctx->pc = 0x1FE204u;
label_1fe204:
    // 0x1fe204: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fe204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fe208: 0x5e00fff9  bgtzl       $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FE208u;
    {
        const bool branch_taken_0x1fe208 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1fe208) {
            ctx->pc = 0x1FE20Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE208u;
            // 0x1fe20c: 0x133e3c  dsll32      $a3, $s3, 24 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE1F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe1f0;
        }
    }
    ctx->pc = 0x1FE210u;
label_1fe210:
    // 0x1fe210: 0x1a20003f  blez        $s1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1FE210u;
    {
        const bool branch_taken_0x1fe210 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1fe210) {
            ctx->pc = 0x1FE310u;
            goto label_1fe310;
        }
    }
    ctx->pc = 0x1FE218u;
    // 0x1fe218: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1fe218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1fe21c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fe21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fe220: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fe220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fe224: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1fe224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fe228: 0xc6480000  lwc1        $f8, 0x0($s2)
    ctx->pc = 0x1fe228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1fe22c:
    // 0x1fe22c: 0x8e4a0020  lw          $t2, 0x20($s2)
    ctx->pc = 0x1fe22cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1fe230: 0xc6470004  lwc1        $f7, 0x4($s2)
    ctx->pc = 0x1fe230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1fe234: 0x8e490024  lw          $t1, 0x24($s2)
    ctx->pc = 0x1fe234u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1fe238: 0xc6460008  lwc1        $f6, 0x8($s2)
    ctx->pc = 0x1fe238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1fe23c: 0x8e480028  lw          $t0, 0x28($s2)
    ctx->pc = 0x1fe23cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1fe240: 0xc645000c  lwc1        $f5, 0xC($s2)
    ctx->pc = 0x1fe240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1fe244: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x1fe244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1fe248: 0xc6440010  lwc1        $f4, 0x10($s2)
    ctx->pc = 0x1fe248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1fe24c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1fe24cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1fe250: 0xc6430014  lwc1        $f3, 0x14($s2)
    ctx->pc = 0x1fe250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fe254: 0x133e3c  dsll32      $a3, $s3, 24
    ctx->pc = 0x1fe254u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 24));
    // 0x1fe258: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x1fe258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fe25c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fe25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe260: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x1fe260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe264: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe268: 0xc600ffd0  lwc1        $f0, -0x30($s0)
    ctx->pc = 0x1fe268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe26c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fe26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe270: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x1fe270u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x1fe274: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1fe274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1fe278: 0xc600ffd4  lwc1        $f0, -0x2C($s0)
    ctx->pc = 0x1fe278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe27c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1fe27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1fe280: 0xc600ffd8  lwc1        $f0, -0x28($s0)
    ctx->pc = 0x1fe280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe284: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1fe284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1fe288: 0xc600ffdc  lwc1        $f0, -0x24($s0)
    ctx->pc = 0x1fe288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe28c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x1fe28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1fe290: 0xc600ffe0  lwc1        $f0, -0x20($s0)
    ctx->pc = 0x1fe290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe294: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1fe294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1fe298: 0xc600ffe4  lwc1        $f0, -0x1C($s0)
    ctx->pc = 0x1fe298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe29c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1fe29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1fe2a0: 0xc600ffe8  lwc1        $f0, -0x18($s0)
    ctx->pc = 0x1fe2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe2a4: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x1fe2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x1fe2a8: 0xc600ffec  lwc1        $f0, -0x14($s0)
    ctx->pc = 0x1fe2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe2ac: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1fe2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1fe2b0: 0x8e02fff0  lw          $v0, -0x10($s0)
    ctx->pc = 0x1fe2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
    // 0x1fe2b4: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1fe2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x1fe2b8: 0x8e02fff4  lw          $v0, -0xC($s0)
    ctx->pc = 0x1fe2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
    // 0x1fe2bc: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1fe2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x1fe2c0: 0x8e02fff8  lw          $v0, -0x8($s0)
    ctx->pc = 0x1fe2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x1fe2c4: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1fe2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1fe2c8: 0x8e02fffc  lw          $v0, -0x4($s0)
    ctx->pc = 0x1fe2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x1fe2cc: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x1fe2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x1fe2d0: 0xe608ffd0  swc1        $f8, -0x30($s0)
    ctx->pc = 0x1fe2d0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967248), bits); }
    // 0x1fe2d4: 0xe607ffd4  swc1        $f7, -0x2C($s0)
    ctx->pc = 0x1fe2d4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967252), bits); }
    // 0x1fe2d8: 0xe606ffd8  swc1        $f6, -0x28($s0)
    ctx->pc = 0x1fe2d8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967256), bits); }
    // 0x1fe2dc: 0xe605ffdc  swc1        $f5, -0x24($s0)
    ctx->pc = 0x1fe2dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967260), bits); }
    // 0x1fe2e0: 0xe604ffe0  swc1        $f4, -0x20($s0)
    ctx->pc = 0x1fe2e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967264), bits); }
    // 0x1fe2e4: 0xe603ffe4  swc1        $f3, -0x1C($s0)
    ctx->pc = 0x1fe2e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967268), bits); }
    // 0x1fe2e8: 0xe602ffe8  swc1        $f2, -0x18($s0)
    ctx->pc = 0x1fe2e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967272), bits); }
    // 0x1fe2ec: 0xe601ffec  swc1        $f1, -0x14($s0)
    ctx->pc = 0x1fe2ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), bits); }
    // 0x1fe2f0: 0xae0afff0  sw          $t2, -0x10($s0)
    ctx->pc = 0x1fe2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967280), GPR_U32(ctx, 10));
    // 0x1fe2f4: 0xae09fff4  sw          $t1, -0xC($s0)
    ctx->pc = 0x1fe2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), GPR_U32(ctx, 9));
    // 0x1fe2f8: 0xae08fff8  sw          $t0, -0x8($s0)
    ctx->pc = 0x1fe2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U32(ctx, 8));
    // 0x1fe2fc: 0xae03fffc  sw          $v1, -0x4($s0)
    ctx->pc = 0x1fe2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 3));
    // 0x1fe300: 0xc07f900  jal         func_1FE400
    ctx->pc = 0x1FE300u;
    SET_GPR_U32(ctx, 31, 0x1FE308u);
    ctx->pc = 0x1FE304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE300u;
            // 0x1fe304: 0x2610ffd0  addiu       $s0, $s0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE400u;
    if (runtime->hasFunction(0x1FE400u)) {
        auto targetFn = runtime->lookupFunction(0x1FE400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE308u; }
        if (ctx->pc != 0x1FE308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE400_0x1fe400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE308u; }
        if (ctx->pc != 0x1FE308u) { return; }
    }
    ctx->pc = 0x1FE308u;
label_1fe308:
    // 0x1fe308: 0x5e20ffc8  bgtzl       $s1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1FE308u;
    {
        const bool branch_taken_0x1fe308 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x1fe308) {
            ctx->pc = 0x1FE30Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE308u;
            // 0x1fe30c: 0xc6480000  lwc1        $f8, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE22Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe22c;
        }
    }
    ctx->pc = 0x1FE310u;
label_1fe310:
    // 0x1fe310: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fe310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe314: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fe314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fe318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe31c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe31cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe324: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE324u;
            // 0x1fe328: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE32Cu;
    // 0x1fe32c: 0x0  nop
    ctx->pc = 0x1fe32cu;
    // NOP
}
