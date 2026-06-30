#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013B300
// Address: 0x13b300 - 0x13c060
void sub_0013B300_0x13b300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B300_0x13b300");
#endif

    switch (ctx->pc) {
        case 0x13b330u: goto label_13b330;
        default: break;
    }

    ctx->pc = 0x13b300u;

    // 0x13b300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13b300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13b304: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13b304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13b308: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13b308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13b30c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b310: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13b310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b318: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13b318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b31c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b320: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13b320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b324: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x13b324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b328: 0xc04e8c8  jal         func_13A320
    ctx->pc = 0x13B328u;
    SET_GPR_U32(ctx, 31, 0x13B330u);
    ctx->pc = 0x13B32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B328u;
            // 0x13b32c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A320u;
    if (runtime->hasFunction(0x13A320u)) {
        auto targetFn = runtime->lookupFunction(0x13A320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B330u; }
        if (ctx->pc != 0x13B330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A320_0x13a320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B330u; }
        if (ctx->pc != 0x13B330u) { return; }
    }
    ctx->pc = 0x13B330u;
label_13b330:
    // 0x13b330: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x13b330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x13b334: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13b334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13b338: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x13b338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x13b33c: 0x24a54fd8  addiu       $a1, $a1, 0x4FD8
    ctx->pc = 0x13b33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20440));
    // 0x13b340: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x13b340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13b344: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x13b344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13b348: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13b348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13b34c: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x13b34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x13b350: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x13B350u;
    {
        const bool branch_taken_0x13b350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B350u;
            // 0x13b354: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b350) {
            ctx->pc = 0x13B3A4u;
            goto label_13b3a4;
        }
    }
    ctx->pc = 0x13B358u;
    // 0x13b358: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b358u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b35c: 0x50200012  beql        $at, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x13B35Cu;
    {
        const bool branch_taken_0x13b35c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b35c) {
            ctx->pc = 0x13B360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B35Cu;
            // 0x13b360: 0x3226013f  andi        $a2, $s1, 0x13F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)319);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B3A8u;
            goto label_13b3a8;
        }
    }
    ctx->pc = 0x13B364u;
    // 0x13b364: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13b364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13b368: 0x24a54fd0  addiu       $a1, $a1, 0x4FD0
    ctx->pc = 0x13b368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20432));
    // 0x13b36c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13b36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13b370: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x13b370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x13b374: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13b374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b378: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x13b378u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x13b37c: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x13b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x13b380: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b384: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b388: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x13b388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x13b38c: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b390: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b394: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x13b394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x13b398: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b39c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b39cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b3a0: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x13b3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_13b3a4:
    // 0x13b3a4: 0x3226013f  andi        $a2, $s1, 0x13F
    ctx->pc = 0x13b3a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)319);
label_13b3a8:
    // 0x13b3a8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x13b3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13b3ac: 0x50c502a2  beql        $a2, $a1, . + 4 + (0x2A2 << 2)
    ctx->pc = 0x13B3ACu;
    {
        const bool branch_taken_0x13b3ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x13b3ac) {
            ctx->pc = 0x13B3B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B3ACu;
            // 0x13b3b0: 0xc6400014  lwc1        $f0, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BE38u;
            goto label_13be38;
        }
    }
    ctx->pc = 0x13B3B4u;
    // 0x13b3b4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x13b3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13b3b8: 0x50c50221  beql        $a2, $a1, . + 4 + (0x221 << 2)
    ctx->pc = 0x13B3B8u;
    {
        const bool branch_taken_0x13b3b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x13b3b8) {
            ctx->pc = 0x13B3BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B3B8u;
            // 0x13b3bc: 0xc6400014  lwc1        $f0, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BC40u;
            goto label_13bc40;
        }
    }
    ctx->pc = 0x13B3C0u;
    // 0x13b3c0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x13b3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13b3c4: 0x50c5019b  beql        $a2, $a1, . + 4 + (0x19B << 2)
    ctx->pc = 0x13B3C4u;
    {
        const bool branch_taken_0x13b3c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x13b3c4) {
            ctx->pc = 0x13B3C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B3C4u;
            // 0x13b3c8: 0xc6400014  lwc1        $f0, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BA34u;
            goto label_13ba34;
        }
    }
    ctx->pc = 0x13B3CCu;
    // 0x13b3cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x13b3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13b3d0: 0x50c5011a  beql        $a2, $a1, . + 4 + (0x11A << 2)
    ctx->pc = 0x13B3D0u;
    {
        const bool branch_taken_0x13b3d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x13b3d0) {
            ctx->pc = 0x13B3D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B3D0u;
            // 0x13b3d4: 0xc6400014  lwc1        $f0, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B83Cu;
            goto label_13b83c;
        }
    }
    ctx->pc = 0x13B3D8u;
    // 0x13b3d8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x13b3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13b3dc: 0x10c500bf  beq         $a2, $a1, . + 4 + (0xBF << 2)
    ctx->pc = 0x13B3DCu;
    {
        const bool branch_taken_0x13b3dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x13b3dc) {
            ctx->pc = 0x13B6DCu;
            goto label_13b6dc;
        }
    }
    ctx->pc = 0x13B3E4u;
    // 0x13b3e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13b3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b3e8: 0x50c5005b  beql        $a2, $a1, . + 4 + (0x5B << 2)
    ctx->pc = 0x13B3E8u;
    {
        const bool branch_taken_0x13b3e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x13b3e8) {
            ctx->pc = 0x13B3ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B3E8u;
            // 0x13b3ec: 0xc6400014  lwc1        $f0, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B558u;
            goto label_13b558;
        }
    }
    ctx->pc = 0x13B3F0u;
    // 0x13b3f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b3f4: 0x50c50003  beql        $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B3F4u;
    {
        const bool branch_taken_0x13b3f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x13b3f4) {
            ctx->pc = 0x13B3F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B3F4u;
            // 0x13b3f8: 0xc6400014  lwc1        $f0, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B404u;
            goto label_13b404;
        }
    }
    ctx->pc = 0x13B3FCu;
    // 0x13b3fc: 0x10000311  b           . + 4 + (0x311 << 2)
    ctx->pc = 0x13B3FCu;
    {
        const bool branch_taken_0x13b3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B3FCu;
            // 0x13b400: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b3fc) {
            ctx->pc = 0x13C044u;
            goto label_13c044;
        }
    }
    ctx->pc = 0x13B404u;
label_13b404:
    // 0x13b404: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b404u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b408: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x13B408u;
    {
        const bool branch_taken_0x13b408 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b408) {
            ctx->pc = 0x13B460u;
            goto label_13b460;
        }
    }
    ctx->pc = 0x13B410u;
    // 0x13b410: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13b410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13b414: 0x24a54fd0  addiu       $a1, $a1, 0x4FD0
    ctx->pc = 0x13b414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20432));
    // 0x13b418: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13b418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13b41c: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x13b420: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x13b420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b424: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b428: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b42c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x13b42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x13b430: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x13b430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b434: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b438: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b43c: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x13b43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x13b440: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x13b440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b444: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b448: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b44c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x13b44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x13b450: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x13b450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b454: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b458: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b45c: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x13b45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_13b460:
    // 0x13b460: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x13B460u;
    {
        const bool branch_taken_0x13b460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b460) {
            ctx->pc = 0x13B464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B460u;
            // 0x13b464: 0x32030002  andi        $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B4BCu;
            goto label_13b4bc;
        }
    }
    ctx->pc = 0x13B468u;
    // 0x13b468: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b46c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x13b46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b470: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x13b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b474: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x13B474u;
    {
        const bool branch_taken_0x13b474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B474u;
            // 0x13b478: 0xc643000c  lwc1        $f3, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b474) {
            ctx->pc = 0x13B4B8u;
            goto label_13b4b8;
        }
    }
    ctx->pc = 0x13B47Cu;
    // 0x13b47c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b480: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b484: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b488: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x13b488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x13b48c: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x13b48cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13b490: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x13b490u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13b494: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b498: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b49c: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13b49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13b4a0: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b4a4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13b4a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13b4a8: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13b4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13b4ac: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b4b0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x13b4b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13b4b4: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13b4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_13b4b8:
    // 0x13b4b8: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x13b4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_13b4bc:
    // 0x13b4bc: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x13B4BCu;
    {
        const bool branch_taken_0x13b4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b4bc) {
            ctx->pc = 0x13B4C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B4BCu;
            // 0x13b4c0: 0xc6410014  lwc1        $f1, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B4F8u;
            goto label_13b4f8;
        }
    }
    ctx->pc = 0x13B4C4u;
    // 0x13b4c4: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b4c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b4c8: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x13B4C8u;
    {
        const bool branch_taken_0x13b4c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B4C8u;
            // 0x13b4cc: 0xc6410010  lwc1        $f1, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b4c8) {
            ctx->pc = 0x13B528u;
            goto label_13b528;
        }
    }
    ctx->pc = 0x13B4D0u;
    // 0x13b4d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b4d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b4d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b4d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13b4d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b4dc: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b4e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13B4E0u;
    {
        const bool branch_taken_0x13b4e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B4E0u;
            // 0x13b4e4: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b4e0) {
            ctx->pc = 0x13B4ECu;
            goto label_13b4ec;
        }
    }
    ctx->pc = 0x13B4E8u;
    // 0x13b4e8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b4e8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13b4ec:
    // 0x13b4ec: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13b4ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13b4f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13B4F0u;
    {
        const bool branch_taken_0x13b4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B4F0u;
            // 0x13b4f4: 0xe4610028  swc1        $f1, 0x28($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b4f0) {
            ctx->pc = 0x13B528u;
            goto label_13b528;
        }
    }
    ctx->pc = 0x13B4F8u;
label_13b4f8:
    // 0x13b4f8: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b4f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b4fc: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13B4FCu;
    {
        const bool branch_taken_0x13b4fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b4fc) {
            ctx->pc = 0x13B500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B4FCu;
            // 0x13b500: 0xc6420020  lwc1        $f2, 0x20($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B52Cu;
            goto label_13b52c;
        }
    }
    ctx->pc = 0x13B504u;
    // 0x13b504: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b508: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b50c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13b50cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b510: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b514: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13B514u;
    {
        const bool branch_taken_0x13b514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B514u;
            // 0x13b518: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b514) {
            ctx->pc = 0x13B520u;
            goto label_13b520;
        }
    }
    ctx->pc = 0x13B51Cu;
    // 0x13b51c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b51cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13b520:
    // 0x13b520: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13b520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13b524: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x13b524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_13b528:
    // 0x13b528: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x13b528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13b52c:
    // 0x13b52c: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b52cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b530: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x13b530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b534: 0x102002c2  beqz        $at, . + 4 + (0x2C2 << 2)
    ctx->pc = 0x13B534u;
    {
        const bool branch_taken_0x13b534 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B534u;
            // 0x13b538: 0xc641001c  lwc1        $f1, 0x1C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b534) {
            ctx->pc = 0x13C040u;
            goto label_13c040;
        }
    }
    ctx->pc = 0x13B53Cu;
    // 0x13b53c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b540: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b544: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b548: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x13b548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x13b54c: 0xe4610034  swc1        $f1, 0x34($v1)
    ctx->pc = 0x13b54cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x13b550: 0x100002bb  b           . + 4 + (0x2BB << 2)
    ctx->pc = 0x13B550u;
    {
        const bool branch_taken_0x13b550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B550u;
            // 0x13b554: 0xe4620038  swc1        $f2, 0x38($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b550) {
            ctx->pc = 0x13C040u;
            goto label_13c040;
        }
    }
    ctx->pc = 0x13B558u;
label_13b558:
    // 0x13b558: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b55c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x13B55Cu;
    {
        const bool branch_taken_0x13b55c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b55c) {
            ctx->pc = 0x13B5B4u;
            goto label_13b5b4;
        }
    }
    ctx->pc = 0x13B564u;
    // 0x13b564: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13b564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13b568: 0x24a54fd0  addiu       $a1, $a1, 0x4FD0
    ctx->pc = 0x13b568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20432));
    // 0x13b56c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13b56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13b570: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x13b574: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x13b574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b578: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b57c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b57cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b580: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x13b580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x13b584: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x13b584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b588: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b58c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b58cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b590: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x13b590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x13b594: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x13b594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b598: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b59c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b59cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b5a0: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x13b5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x13b5a4: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x13b5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b5a8: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b5ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b5b0: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x13b5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_13b5b4:
    // 0x13b5b4: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x13B5B4u;
    {
        const bool branch_taken_0x13b5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b5b4) {
            ctx->pc = 0x13B5B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B5B4u;
            // 0x13b5b8: 0x32030002  andi        $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B610u;
            goto label_13b610;
        }
    }
    ctx->pc = 0x13B5BCu;
    // 0x13b5bc: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b5bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b5c0: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x13b5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b5c4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x13b5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b5c8: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x13B5C8u;
    {
        const bool branch_taken_0x13b5c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B5C8u;
            // 0x13b5cc: 0xc643000c  lwc1        $f3, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b5c8) {
            ctx->pc = 0x13B60Cu;
            goto label_13b60c;
        }
    }
    ctx->pc = 0x13B5D0u;
    // 0x13b5d0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b5d4: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b5d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b5dc: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x13b5dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x13b5e0: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x13b5e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13b5e4: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x13b5e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13b5e8: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b5ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b5ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b5f0: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13b5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13b5f4: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b5f8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13b5f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13b5fc: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13b5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13b600: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b604: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x13b604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13b608: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13b608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_13b60c:
    // 0x13b60c: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x13b60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_13b610:
    // 0x13b610: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x13B610u;
    {
        const bool branch_taken_0x13b610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b610) {
            ctx->pc = 0x13B614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B610u;
            // 0x13b614: 0xc6410014  lwc1        $f1, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B64Cu;
            goto label_13b64c;
        }
    }
    ctx->pc = 0x13B618u;
    // 0x13b618: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b61c: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x13B61Cu;
    {
        const bool branch_taken_0x13b61c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B61Cu;
            // 0x13b620: 0xc6410010  lwc1        $f1, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b61c) {
            ctx->pc = 0x13B67Cu;
            goto label_13b67c;
        }
    }
    ctx->pc = 0x13B624u;
    // 0x13b624: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b628: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b62c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13b62cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b630: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b634: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13B634u;
    {
        const bool branch_taken_0x13b634 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B634u;
            // 0x13b638: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b634) {
            ctx->pc = 0x13B640u;
            goto label_13b640;
        }
    }
    ctx->pc = 0x13B63Cu;
    // 0x13b63c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b63cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13b640:
    // 0x13b640: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13b640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13b644: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13B644u;
    {
        const bool branch_taken_0x13b644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B644u;
            // 0x13b648: 0xe4610028  swc1        $f1, 0x28($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b644) {
            ctx->pc = 0x13B67Cu;
            goto label_13b67c;
        }
    }
    ctx->pc = 0x13B64Cu;
label_13b64c:
    // 0x13b64c: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b64cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b650: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13B650u;
    {
        const bool branch_taken_0x13b650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b650) {
            ctx->pc = 0x13B654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B650u;
            // 0x13b654: 0xc6420020  lwc1        $f2, 0x20($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B680u;
            goto label_13b680;
        }
    }
    ctx->pc = 0x13B658u;
    // 0x13b658: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b65c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b660: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13b660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b664: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b668: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13B668u;
    {
        const bool branch_taken_0x13b668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B668u;
            // 0x13b66c: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b668) {
            ctx->pc = 0x13B674u;
            goto label_13b674;
        }
    }
    ctx->pc = 0x13B670u;
    // 0x13b670: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b670u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13b674:
    // 0x13b674: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13b674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13b678: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x13b678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_13b67c:
    // 0x13b67c: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x13b67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13b680:
    // 0x13b680: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b680u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b684: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x13b684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b688: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B688u;
    {
        const bool branch_taken_0x13b688 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B688u;
            // 0x13b68c: 0xc641001c  lwc1        $f1, 0x1C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b688) {
            ctx->pc = 0x13B6A8u;
            goto label_13b6a8;
        }
    }
    ctx->pc = 0x13B690u;
    // 0x13b690: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b694: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b698: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b69c: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x13b69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x13b6a0: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x13b6a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x13b6a4: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x13b6a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_13b6a8:
    // 0x13b6a8: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b6a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b6ac: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x13b6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b6b0: 0x10200263  beqz        $at, . + 4 + (0x263 << 2)
    ctx->pc = 0x13B6B0u;
    {
        const bool branch_taken_0x13b6b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B6B0u;
            // 0x13b6b4: 0xc6410028  lwc1        $f1, 0x28($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b6b0) {
            ctx->pc = 0x13C040u;
            goto label_13c040;
        }
    }
    ctx->pc = 0x13B6B8u;
    // 0x13b6b8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13b6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13b6bc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b6c0: 0x24a5504c  addiu       $a1, $a1, 0x504C
    ctx->pc = 0x13b6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20556));
    // 0x13b6c4: 0x24635050  addiu       $v1, $v1, 0x5050
    ctx->pc = 0x13b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20560));
    // 0x13b6c8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13b6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13b6cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b6d0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x13b6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x13b6d4: 0x1000025a  b           . + 4 + (0x25A << 2)
    ctx->pc = 0x13B6D4u;
    {
        const bool branch_taken_0x13b6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B6D4u;
            // 0x13b6d8: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b6d4) {
            ctx->pc = 0x13C040u;
            goto label_13c040;
        }
    }
    ctx->pc = 0x13B6DCu;
label_13b6dc:
    // 0x13b6dc: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x13B6DCu;
    {
        const bool branch_taken_0x13b6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b6dc) {
            ctx->pc = 0x13B6E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B6DCu;
            // 0x13b6e0: 0x32030002  andi        $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B738u;
            goto label_13b738;
        }
    }
    ctx->pc = 0x13B6E4u;
    // 0x13b6e4: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b6e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b6e8: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x13b6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b6ec: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x13b6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b6f0: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x13B6F0u;
    {
        const bool branch_taken_0x13b6f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B6F0u;
            // 0x13b6f4: 0xc643000c  lwc1        $f3, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b6f0) {
            ctx->pc = 0x13B734u;
            goto label_13b734;
        }
    }
    ctx->pc = 0x13B6F8u;
    // 0x13b6f8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b6fc: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b700: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b704: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x13b704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x13b708: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x13b708u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13b70c: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x13b70cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13b710: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b714: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b718: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13b718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13b71c: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b720: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13b720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13b724: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13b724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13b728: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b72c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x13b72cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13b730: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13b730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_13b734:
    // 0x13b734: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x13b734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_13b738:
    // 0x13b738: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x13B738u;
    {
        const bool branch_taken_0x13b738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b738) {
            ctx->pc = 0x13B73Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B738u;
            // 0x13b73c: 0x3c033e99  lui         $v1, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B774u;
            goto label_13b774;
        }
    }
    ctx->pc = 0x13B740u;
    // 0x13b740: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b740u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b744: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x13B744u;
    {
        const bool branch_taken_0x13b744 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B744u;
            // 0x13b748: 0xc6410010  lwc1        $f1, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b744) {
            ctx->pc = 0x13B80Cu;
            goto label_13b80c;
        }
    }
    ctx->pc = 0x13B74Cu;
    // 0x13b74c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b74cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b750: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b754: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13b754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b758: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b75c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13B75Cu;
    {
        const bool branch_taken_0x13b75c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B75Cu;
            // 0x13b760: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b75c) {
            ctx->pc = 0x13B768u;
            goto label_13b768;
        }
    }
    ctx->pc = 0x13B764u;
    // 0x13b764: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b764u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13b768:
    // 0x13b768: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13b768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13b76c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x13B76Cu;
    {
        const bool branch_taken_0x13b76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B76Cu;
            // 0x13b770: 0xe4610028  swc1        $f1, 0x28($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b76c) {
            ctx->pc = 0x13B80Cu;
            goto label_13b80c;
        }
    }
    ctx->pc = 0x13B774u;
label_13b774:
    // 0x13b774: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b774u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b778: 0x34651687  ori         $a1, $v1, 0x1687
    ctx->pc = 0x13b778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5767);
    // 0x13b77c: 0x3c033f16  lui         $v1, 0x3F16
    ctx->pc = 0x13b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16150 << 16));
    // 0x13b780: 0x346345a2  ori         $v1, $v1, 0x45A2
    ctx->pc = 0x13b780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17826);
    // 0x13b784: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x13b784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13b788: 0x3c033de9  lui         $v1, 0x3DE9
    ctx->pc = 0x13b788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15849 << 16));
    // 0x13b78c: 0x346378d5  ori         $v1, $v1, 0x78D5
    ctx->pc = 0x13b78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30933);
    // 0x13b790: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x13b790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b794: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x13b794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b798: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x13b798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13b79c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x13b79cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x13b7a0: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x13b7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x13b7a4: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x13b7a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x13b7a8: 0x0  nop
    ctx->pc = 0x13b7a8u;
    // NOP
    // 0x13b7ac: 0x4604181e  madda.s     $f3, $f4
    ctx->pc = 0x13b7acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x13b7b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b7b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b7b4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13B7B4u;
    {
        const bool branch_taken_0x13b7b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B7B4u;
            // 0x13b7b8: 0x4606285c  madd.s      $f1, $f5, $f6 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7b4) {
            ctx->pc = 0x13B7DCu;
            goto label_13b7dc;
        }
    }
    ctx->pc = 0x13B7BCu;
    // 0x13b7bc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b7c0: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b7c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13b7c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b7c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13B7C8u;
    {
        const bool branch_taken_0x13b7c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B7C8u;
            // 0x13b7cc: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7c8) {
            ctx->pc = 0x13B7D4u;
            goto label_13b7d4;
        }
    }
    ctx->pc = 0x13B7D0u;
    // 0x13b7d0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b7d0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13b7d4:
    // 0x13b7d4: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13b7d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13b7d8: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x13b7d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_13b7dc:
    // 0x13b7dc: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b7dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b7e0: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x13B7E0u;
    {
        const bool branch_taken_0x13b7e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B7E0u;
            // 0x13b7e4: 0xc6410010  lwc1        $f1, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7e0) {
            ctx->pc = 0x13B80Cu;
            goto label_13b80c;
        }
    }
    ctx->pc = 0x13B7E8u;
    // 0x13b7e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b7e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b7ec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b7f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13b7f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b7f4: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b7f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13B7F8u;
    {
        const bool branch_taken_0x13b7f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B7F8u;
            // 0x13b7fc: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7f8) {
            ctx->pc = 0x13B804u;
            goto label_13b804;
        }
    }
    ctx->pc = 0x13B800u;
    // 0x13b800: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b800u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13b804:
    // 0x13b804: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13b804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13b808: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x13b808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_13b80c:
    // 0x13b80c: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b80cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b810: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x13b810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b814: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x13b814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b818: 0x10200209  beqz        $at, . + 4 + (0x209 << 2)
    ctx->pc = 0x13B818u;
    {
        const bool branch_taken_0x13b818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B818u;
            // 0x13b81c: 0xc642001c  lwc1        $f2, 0x1C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b818) {
            ctx->pc = 0x13C040u;
            goto label_13c040;
        }
    }
    ctx->pc = 0x13B820u;
    // 0x13b820: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b824: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b828: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b82c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x13b82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x13b830: 0xe4610034  swc1        $f1, 0x34($v1)
    ctx->pc = 0x13b830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x13b834: 0x10000202  b           . + 4 + (0x202 << 2)
    ctx->pc = 0x13B834u;
    {
        const bool branch_taken_0x13b834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B834u;
            // 0x13b838: 0xe4620038  swc1        $f2, 0x38($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b834) {
            ctx->pc = 0x13C040u;
            goto label_13c040;
        }
    }
    ctx->pc = 0x13B83Cu;
label_13b83c:
    // 0x13b83c: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b83cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b840: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x13B840u;
    {
        const bool branch_taken_0x13b840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b840) {
            ctx->pc = 0x13B898u;
            goto label_13b898;
        }
    }
    ctx->pc = 0x13B848u;
    // 0x13b848: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13b848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13b84c: 0x24a54fd0  addiu       $a1, $a1, 0x4FD0
    ctx->pc = 0x13b84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20432));
    // 0x13b850: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13b850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13b854: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x13b858: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x13b858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b85c: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b860: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b864: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x13b864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x13b868: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x13b868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b86c: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b870: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b874: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x13b874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x13b878: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x13b878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b87c: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b880: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b884: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x13b884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x13b888: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x13b888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b88c: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13b88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b890: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b894: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x13b894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_13b898:
    // 0x13b898: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x13B898u;
    {
        const bool branch_taken_0x13b898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b898) {
            ctx->pc = 0x13B89Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B898u;
            // 0x13b89c: 0x32030002  andi        $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B8F4u;
            goto label_13b8f4;
        }
    }
    ctx->pc = 0x13B8A0u;
    // 0x13b8a0: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b8a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b8a4: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x13b8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b8a8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x13b8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b8ac: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x13B8ACu;
    {
        const bool branch_taken_0x13b8ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B8ACu;
            // 0x13b8b0: 0xc643000c  lwc1        $f3, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b8ac) {
            ctx->pc = 0x13B8F0u;
            goto label_13b8f0;
        }
    }
    ctx->pc = 0x13B8B4u;
    // 0x13b8b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b8b8: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b8bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b8c0: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x13b8c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x13b8c4: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x13b8c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13b8c8: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x13b8c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13b8cc: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b8d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b8d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b8d4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13b8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13b8d8: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b8dc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13b8dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13b8e0: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13b8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13b8e4: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b8e8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x13b8e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13b8ec: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13b8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_13b8f0:
    // 0x13b8f0: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x13b8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_13b8f4:
    // 0x13b8f4: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x13B8F4u;
    {
        const bool branch_taken_0x13b8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b8f4) {
            ctx->pc = 0x13B8F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B8F4u;
            // 0x13b8f8: 0xc6410014  lwc1        $f1, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B930u;
            goto label_13b930;
        }
    }
    ctx->pc = 0x13B8FCu;
    // 0x13b8fc: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b8fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b900: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x13B900u;
    {
        const bool branch_taken_0x13b900 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B900u;
            // 0x13b904: 0xc6410010  lwc1        $f1, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b900) {
            ctx->pc = 0x13B960u;
            goto label_13b960;
        }
    }
    ctx->pc = 0x13B908u;
    // 0x13b908: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b90c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b910: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13b910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b914: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b918: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13B918u;
    {
        const bool branch_taken_0x13b918 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B918u;
            // 0x13b91c: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b918) {
            ctx->pc = 0x13B924u;
            goto label_13b924;
        }
    }
    ctx->pc = 0x13B920u;
    // 0x13b920: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b920u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13b924:
    // 0x13b924: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13b924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13b928: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13B928u;
    {
        const bool branch_taken_0x13b928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B928u;
            // 0x13b92c: 0xe4610028  swc1        $f1, 0x28($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b928) {
            ctx->pc = 0x13B960u;
            goto label_13b960;
        }
    }
    ctx->pc = 0x13B930u;
label_13b930:
    // 0x13b930: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b934: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13B934u;
    {
        const bool branch_taken_0x13b934 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b934) {
            ctx->pc = 0x13B938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B934u;
            // 0x13b938: 0xc6420020  lwc1        $f2, 0x20($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B964u;
            goto label_13b964;
        }
    }
    ctx->pc = 0x13B93Cu;
    // 0x13b93c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b93cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b940: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b944: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13b944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b948: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b94c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13B94Cu;
    {
        const bool branch_taken_0x13b94c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B94Cu;
            // 0x13b950: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b94c) {
            ctx->pc = 0x13B958u;
            goto label_13b958;
        }
    }
    ctx->pc = 0x13B954u;
    // 0x13b954: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b954u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13b958:
    // 0x13b958: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13b958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13b95c: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x13b95cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_13b960:
    // 0x13b960: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x13b960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13b964:
    // 0x13b964: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b964u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b968: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x13b968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b96c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B96Cu;
    {
        const bool branch_taken_0x13b96c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B96Cu;
            // 0x13b970: 0xc641001c  lwc1        $f1, 0x1C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b96c) {
            ctx->pc = 0x13B98Cu;
            goto label_13b98c;
        }
    }
    ctx->pc = 0x13B974u;
    // 0x13b974: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b978: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b97c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b980: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x13b980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x13b984: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x13b984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x13b988: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x13b988u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_13b98c:
    // 0x13b98c: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b98cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b990: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x13b990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b994: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x13b994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b998: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13B998u;
    {
        const bool branch_taken_0x13b998 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B998u;
            // 0x13b99c: 0xc642002c  lwc1        $f2, 0x2C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b998) {
            ctx->pc = 0x13B9D0u;
            goto label_13b9d0;
        }
    }
    ctx->pc = 0x13B9A0u;
    // 0x13b9a0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13b9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13b9a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b9a8: 0x24a55018  addiu       $a1, $a1, 0x5018
    ctx->pc = 0x13b9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20504));
    // 0x13b9ac: 0x2463501c  addiu       $v1, $v1, 0x501C
    ctx->pc = 0x13b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20508));
    // 0x13b9b0: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x13b9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13b9b4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x13b9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b9b8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b9bc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x13b9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x13b9c0: 0x24635020  addiu       $v1, $v1, 0x5020
    ctx->pc = 0x13b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20512));
    // 0x13b9c4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x13b9c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x13b9c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b9cc: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x13b9ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_13b9d0:
    // 0x13b9d0: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13b9d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b9d4: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x13b9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x13b9d8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13B9D8u;
    {
        const bool branch_taken_0x13b9d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B9D8u;
            // 0x13b9dc: 0x8e470034  lw          $a3, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9d8) {
            ctx->pc = 0x13BA00u;
            goto label_13ba00;
        }
    }
    ctx->pc = 0x13B9E0u;
    // 0x13b9e0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13b9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13b9e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b9e8: 0x24a55040  addiu       $a1, $a1, 0x5040
    ctx->pc = 0x13b9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20544));
    // 0x13b9ec: 0x24635042  addiu       $v1, $v1, 0x5042
    ctx->pc = 0x13b9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20546));
    // 0x13b9f0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13b9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13b9f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b9f8: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x13b9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x13b9fc: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x13b9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_13ba00:
    // 0x13ba00: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13ba00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ba04: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x13ba04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ba08: 0x1020018d  beqz        $at, . + 4 + (0x18D << 2)
    ctx->pc = 0x13BA08u;
    {
        const bool branch_taken_0x13ba08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA08u;
            // 0x13ba0c: 0xc641003c  lwc1        $f1, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba08) {
            ctx->pc = 0x13C040u;
            goto label_13c040;
        }
    }
    ctx->pc = 0x13BA10u;
    // 0x13ba10: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13ba10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13ba14: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ba18: 0x24a5504c  addiu       $a1, $a1, 0x504C
    ctx->pc = 0x13ba18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20556));
    // 0x13ba1c: 0x24635050  addiu       $v1, $v1, 0x5050
    ctx->pc = 0x13ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20560));
    // 0x13ba20: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13ba20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13ba24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13ba28: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x13ba28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x13ba2c: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x13BA2Cu;
    {
        const bool branch_taken_0x13ba2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA2Cu;
            // 0x13ba30: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba2c) {
            ctx->pc = 0x13C040u;
            goto label_13c040;
        }
    }
    ctx->pc = 0x13BA34u;
label_13ba34:
    // 0x13ba34: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13ba34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ba38: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x13BA38u;
    {
        const bool branch_taken_0x13ba38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba38) {
            ctx->pc = 0x13BA90u;
            goto label_13ba90;
        }
    }
    ctx->pc = 0x13BA40u;
    // 0x13ba40: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13ba40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13ba44: 0x24a54fd0  addiu       $a1, $a1, 0x4FD0
    ctx->pc = 0x13ba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20432));
    // 0x13ba48: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13ba48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13ba4c: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x13ba4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x13ba50: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x13ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ba54: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13ba54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ba58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13ba58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ba5c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x13ba5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x13ba60: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x13ba60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ba64: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13ba64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ba68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13ba68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ba6c: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x13ba6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x13ba70: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x13ba70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ba74: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13ba74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ba78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13ba78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ba7c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x13ba7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x13ba80: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x13ba80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ba84: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13ba84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ba88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13ba88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ba8c: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x13ba8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_13ba90:
    // 0x13ba90: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x13BA90u;
    {
        const bool branch_taken_0x13ba90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba90) {
            ctx->pc = 0x13BA94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA90u;
            // 0x13ba94: 0x32030002  andi        $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BAECu;
            goto label_13baec;
        }
    }
    ctx->pc = 0x13BA98u;
    // 0x13ba98: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13ba98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ba9c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x13ba9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13baa0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x13baa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13baa4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x13BAA4u;
    {
        const bool branch_taken_0x13baa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BAA4u;
            // 0x13baa8: 0xc643000c  lwc1        $f3, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13baa4) {
            ctx->pc = 0x13BAE8u;
            goto label_13bae8;
        }
    }
    ctx->pc = 0x13BAACu;
    // 0x13baac: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13baacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bab0: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13bab4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bab8: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x13bab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x13babc: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x13babcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13bac0: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x13bac0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13bac4: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13bac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bac8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13bac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13bacc: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13baccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13bad0: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13bad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bad4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13bad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13bad8: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13bad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13badc: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13badcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bae0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x13bae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13bae4: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13bae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_13bae8:
    // 0x13bae8: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x13bae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_13baec:
    // 0x13baec: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x13BAECu;
    {
        const bool branch_taken_0x13baec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13baec) {
            ctx->pc = 0x13BAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BAECu;
            // 0x13baf0: 0xc6410014  lwc1        $f1, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BB28u;
            goto label_13bb28;
        }
    }
    ctx->pc = 0x13BAF4u;
    // 0x13baf4: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13baf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13baf8: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x13BAF8u;
    {
        const bool branch_taken_0x13baf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BAF8u;
            // 0x13bafc: 0xc6410010  lwc1        $f1, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13baf8) {
            ctx->pc = 0x13BB58u;
            goto label_13bb58;
        }
    }
    ctx->pc = 0x13BB00u;
    // 0x13bb00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13bb00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bb04: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bb08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13bb08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bb0c: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13bb10: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13BB10u;
    {
        const bool branch_taken_0x13bb10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB10u;
            // 0x13bb14: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb10) {
            ctx->pc = 0x13BB1Cu;
            goto label_13bb1c;
        }
    }
    ctx->pc = 0x13BB18u;
    // 0x13bb18: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13bb18u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13bb1c:
    // 0x13bb1c: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13bb1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13bb20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13BB20u;
    {
        const bool branch_taken_0x13bb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB20u;
            // 0x13bb24: 0xe4610028  swc1        $f1, 0x28($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb20) {
            ctx->pc = 0x13BB58u;
            goto label_13bb58;
        }
    }
    ctx->pc = 0x13BB28u;
label_13bb28:
    // 0x13bb28: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bb28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bb2c: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13BB2Cu;
    {
        const bool branch_taken_0x13bb2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb2c) {
            ctx->pc = 0x13BB30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB2Cu;
            // 0x13bb30: 0xc6420020  lwc1        $f2, 0x20($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BB5Cu;
            goto label_13bb5c;
        }
    }
    ctx->pc = 0x13BB34u;
    // 0x13bb34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13bb34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bb38: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bb3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13bb3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bb40: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13bb44: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13BB44u;
    {
        const bool branch_taken_0x13bb44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB44u;
            // 0x13bb48: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb44) {
            ctx->pc = 0x13BB50u;
            goto label_13bb50;
        }
    }
    ctx->pc = 0x13BB4Cu;
    // 0x13bb4c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13bb4cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13bb50:
    // 0x13bb50: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13bb50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13bb54: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x13bb54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_13bb58:
    // 0x13bb58: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x13bb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13bb5c:
    // 0x13bb5c: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bb5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bb60: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x13bb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bb64: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x13BB64u;
    {
        const bool branch_taken_0x13bb64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB64u;
            // 0x13bb68: 0xc641001c  lwc1        $f1, 0x1C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb64) {
            ctx->pc = 0x13BB84u;
            goto label_13bb84;
        }
    }
    ctx->pc = 0x13BB6Cu;
    // 0x13bb6c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bb70: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13bb74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bb78: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x13bb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x13bb7c: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x13bb7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x13bb80: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x13bb80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_13bb84:
    // 0x13bb84: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bb84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bb88: 0x8e49002c  lw          $t1, 0x2C($s2)
    ctx->pc = 0x13bb88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x13bb8c: 0x8e480028  lw          $t0, 0x28($s2)
    ctx->pc = 0x13bb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x13bb90: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x13bb90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x13bb94: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x13BB94u;
    {
        const bool branch_taken_0x13bb94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB94u;
            // 0x13bb98: 0x8e4a0030  lw          $t2, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb94) {
            ctx->pc = 0x13BBDCu;
            goto label_13bbdc;
        }
    }
    ctx->pc = 0x13BB9Cu;
    // 0x13bb9c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13bb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13bba0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bba4: 0x24a5503c  addiu       $a1, $a1, 0x503C
    ctx->pc = 0x13bba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20540));
    // 0x13bba8: 0x24635030  addiu       $v1, $v1, 0x5030
    ctx->pc = 0x13bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20528));
    // 0x13bbac: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x13bbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13bbb0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x13bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bbb4: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x13bbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x13bbb8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bbbc: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x13bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x13bbc0: 0x24635034  addiu       $v1, $v1, 0x5034
    ctx->pc = 0x13bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20532));
    // 0x13bbc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13bbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bbc8: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x13bbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x13bbcc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bbd0: 0x24635038  addiu       $v1, $v1, 0x5038
    ctx->pc = 0x13bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20536));
    // 0x13bbd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bbd8: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x13bbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
label_13bbdc:
    // 0x13bbdc: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bbdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bbe0: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x13bbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x13bbe4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13BBE4u;
    {
        const bool branch_taken_0x13bbe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BBE4u;
            // 0x13bbe8: 0x8e470038  lw          $a3, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bbe4) {
            ctx->pc = 0x13BC0Cu;
            goto label_13bc0c;
        }
    }
    ctx->pc = 0x13BBECu;
    // 0x13bbec: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13bbecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13bbf0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bbf4: 0x24a55040  addiu       $a1, $a1, 0x5040
    ctx->pc = 0x13bbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20544));
    // 0x13bbf8: 0x24635042  addiu       $v1, $v1, 0x5042
    ctx->pc = 0x13bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20546));
    // 0x13bbfc: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13bbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13bc00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bc04: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x13bc04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x13bc08: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x13bc08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_13bc0c:
    // 0x13bc0c: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bc0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bc10: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x13bc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bc14: 0x1020010a  beqz        $at, . + 4 + (0x10A << 2)
    ctx->pc = 0x13BC14u;
    {
        const bool branch_taken_0x13bc14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC14u;
            // 0x13bc18: 0xc6410040  lwc1        $f1, 0x40($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc14) {
            ctx->pc = 0x13C040u;
            goto label_13c040;
        }
    }
    ctx->pc = 0x13BC1Cu;
    // 0x13bc1c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13bc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13bc20: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bc24: 0x24a5504c  addiu       $a1, $a1, 0x504C
    ctx->pc = 0x13bc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20556));
    // 0x13bc28: 0x24635050  addiu       $v1, $v1, 0x5050
    ctx->pc = 0x13bc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20560));
    // 0x13bc2c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13bc30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bc34: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x13bc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x13bc38: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x13BC38u;
    {
        const bool branch_taken_0x13bc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC38u;
            // 0x13bc3c: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc38) {
            ctx->pc = 0x13C040u;
            goto label_13c040;
        }
    }
    ctx->pc = 0x13BC40u;
label_13bc40:
    // 0x13bc40: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bc40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bc44: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x13BC44u;
    {
        const bool branch_taken_0x13bc44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bc44) {
            ctx->pc = 0x13BC9Cu;
            goto label_13bc9c;
        }
    }
    ctx->pc = 0x13BC4Cu;
    // 0x13bc4c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13bc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13bc50: 0x24a54fd0  addiu       $a1, $a1, 0x4FD0
    ctx->pc = 0x13bc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20432));
    // 0x13bc54: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13bc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13bc58: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x13bc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x13bc5c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x13bc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bc60: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13bc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bc64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13bc64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13bc68: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x13bc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x13bc6c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x13bc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bc70: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13bc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bc74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13bc74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13bc78: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x13bc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x13bc7c: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x13bc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bc80: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13bc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bc84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13bc84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13bc88: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x13bc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x13bc8c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x13bc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bc90: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13bc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bc94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13bc94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13bc98: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x13bc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_13bc9c:
    // 0x13bc9c: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x13BC9Cu;
    {
        const bool branch_taken_0x13bc9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bc9c) {
            ctx->pc = 0x13BCA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC9Cu;
            // 0x13bca0: 0x32030002  andi        $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BCF8u;
            goto label_13bcf8;
        }
    }
    ctx->pc = 0x13BCA4u;
    // 0x13bca4: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bca4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bca8: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x13bca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13bcac: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x13bcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bcb0: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x13BCB0u;
    {
        const bool branch_taken_0x13bcb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BCB0u;
            // 0x13bcb4: 0xc643000c  lwc1        $f3, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bcb0) {
            ctx->pc = 0x13BCF4u;
            goto label_13bcf4;
        }
    }
    ctx->pc = 0x13BCB8u;
    // 0x13bcb8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bcbc: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13bcc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bcc4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x13bcc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x13bcc8: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x13bcc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13bccc: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x13bcccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13bcd0: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13bcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bcd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13bcd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13bcd8: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13bcd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13bcdc: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13bcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bce0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13bce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13bce4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13bce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13bce8: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13bce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bcec: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x13bcecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13bcf0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13bcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_13bcf4:
    // 0x13bcf4: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x13bcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_13bcf8:
    // 0x13bcf8: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x13BCF8u;
    {
        const bool branch_taken_0x13bcf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bcf8) {
            ctx->pc = 0x13BCFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BCF8u;
            // 0x13bcfc: 0xc6410014  lwc1        $f1, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BD34u;
            goto label_13bd34;
        }
    }
    ctx->pc = 0x13BD00u;
    // 0x13bd00: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bd00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bd04: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x13BD04u;
    {
        const bool branch_taken_0x13bd04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BD04u;
            // 0x13bd08: 0xc6410010  lwc1        $f1, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd04) {
            ctx->pc = 0x13BD64u;
            goto label_13bd64;
        }
    }
    ctx->pc = 0x13BD0Cu;
    // 0x13bd0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13bd0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bd10: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bd14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13bd14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bd18: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13bd1c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13BD1Cu;
    {
        const bool branch_taken_0x13bd1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BD1Cu;
            // 0x13bd20: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd1c) {
            ctx->pc = 0x13BD28u;
            goto label_13bd28;
        }
    }
    ctx->pc = 0x13BD24u;
    // 0x13bd24: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13bd24u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13bd28:
    // 0x13bd28: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13bd28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13bd2c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13BD2Cu;
    {
        const bool branch_taken_0x13bd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BD2Cu;
            // 0x13bd30: 0xe4610028  swc1        $f1, 0x28($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd2c) {
            ctx->pc = 0x13BD64u;
            goto label_13bd64;
        }
    }
    ctx->pc = 0x13BD34u;
label_13bd34:
    // 0x13bd34: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bd34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bd38: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13BD38u;
    {
        const bool branch_taken_0x13bd38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bd38) {
            ctx->pc = 0x13BD3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BD38u;
            // 0x13bd3c: 0xc6420020  lwc1        $f2, 0x20($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BD68u;
            goto label_13bd68;
        }
    }
    ctx->pc = 0x13BD40u;
    // 0x13bd40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13bd40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bd44: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bd48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13bd48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bd4c: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13bd50: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13BD50u;
    {
        const bool branch_taken_0x13bd50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BD50u;
            // 0x13bd54: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd50) {
            ctx->pc = 0x13BD5Cu;
            goto label_13bd5c;
        }
    }
    ctx->pc = 0x13BD58u;
    // 0x13bd58: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13bd58u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13bd5c:
    // 0x13bd5c: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13bd5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13bd60: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x13bd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_13bd64:
    // 0x13bd64: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x13bd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13bd68:
    // 0x13bd68: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bd68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bd6c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x13bd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bd70: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x13BD70u;
    {
        const bool branch_taken_0x13bd70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BD70u;
            // 0x13bd74: 0xc641001c  lwc1        $f1, 0x1C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd70) {
            ctx->pc = 0x13BD90u;
            goto label_13bd90;
        }
    }
    ctx->pc = 0x13BD78u;
    // 0x13bd78: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bd7c: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13bd80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bd84: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x13bd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x13bd88: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x13bd88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x13bd8c: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x13bd8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_13bd90:
    // 0x13bd90: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bd90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bd94: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x13bd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bd98: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x13bd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bd9c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13BD9Cu;
    {
        const bool branch_taken_0x13bd9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BD9Cu;
            // 0x13bda0: 0xc642002c  lwc1        $f2, 0x2C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd9c) {
            ctx->pc = 0x13BDD4u;
            goto label_13bdd4;
        }
    }
    ctx->pc = 0x13BDA4u;
    // 0x13bda4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13bda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13bda8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bdac: 0x24a55018  addiu       $a1, $a1, 0x5018
    ctx->pc = 0x13bdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20504));
    // 0x13bdb0: 0x2463501c  addiu       $v1, $v1, 0x501C
    ctx->pc = 0x13bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20508));
    // 0x13bdb4: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x13bdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13bdb8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x13bdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bdbc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bdc0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x13bdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x13bdc4: 0x24635020  addiu       $v1, $v1, 0x5020
    ctx->pc = 0x13bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20512));
    // 0x13bdc8: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x13bdc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x13bdcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bdd0: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x13bdd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_13bdd4:
    // 0x13bdd4: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bdd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bdd8: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x13bdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bddc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13BDDCu;
    {
        const bool branch_taken_0x13bddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BDDCu;
            // 0x13bde0: 0xc6410034  lwc1        $f1, 0x34($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bddc) {
            ctx->pc = 0x13BE04u;
            goto label_13be04;
        }
    }
    ctx->pc = 0x13BDE4u;
    // 0x13bde4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13bde8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bdec: 0x24a55044  addiu       $a1, $a1, 0x5044
    ctx->pc = 0x13bdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20548));
    // 0x13bdf0: 0x24635048  addiu       $v1, $v1, 0x5048
    ctx->pc = 0x13bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20552));
    // 0x13bdf4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13bdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13bdf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bdfc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x13bdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x13be00: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x13be00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_13be04:
    // 0x13be04: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13be04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13be08: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x13be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13be0c: 0x1020008c  beqz        $at, . + 4 + (0x8C << 2)
    ctx->pc = 0x13BE0Cu;
    {
        const bool branch_taken_0x13be0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BE0Cu;
            // 0x13be10: 0xc641003c  lwc1        $f1, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be0c) {
            ctx->pc = 0x13C040u;
            goto label_13c040;
        }
    }
    ctx->pc = 0x13BE14u;
    // 0x13be14: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13be14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13be18: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13be18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13be1c: 0x24a5504c  addiu       $a1, $a1, 0x504C
    ctx->pc = 0x13be1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20556));
    // 0x13be20: 0x24635050  addiu       $v1, $v1, 0x5050
    ctx->pc = 0x13be20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20560));
    // 0x13be24: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13be28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13be28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13be2c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x13be2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x13be30: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x13BE30u;
    {
        const bool branch_taken_0x13be30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BE30u;
            // 0x13be34: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be30) {
            ctx->pc = 0x13C040u;
            goto label_13c040;
        }
    }
    ctx->pc = 0x13BE38u;
label_13be38:
    // 0x13be38: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13be38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13be3c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x13BE3Cu;
    {
        const bool branch_taken_0x13be3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13be3c) {
            ctx->pc = 0x13BE94u;
            goto label_13be94;
        }
    }
    ctx->pc = 0x13BE44u;
    // 0x13be44: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13be44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13be48: 0x24a54fd0  addiu       $a1, $a1, 0x4FD0
    ctx->pc = 0x13be48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20432));
    // 0x13be4c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13be4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13be50: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x13be50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x13be54: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x13be54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13be58: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13be58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13be5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13be5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13be60: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x13be60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x13be64: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x13be64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13be68: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13be6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13be6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13be70: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x13be70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x13be74: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x13be74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13be78: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13be78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13be7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13be7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13be80: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x13be80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x13be84: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x13be84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13be88: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x13be88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13be8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13be8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13be90: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x13be90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_13be94:
    // 0x13be94: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x13BE94u;
    {
        const bool branch_taken_0x13be94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13be94) {
            ctx->pc = 0x13BE98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BE94u;
            // 0x13be98: 0x32030002  andi        $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BEF0u;
            goto label_13bef0;
        }
    }
    ctx->pc = 0x13BE9Cu;
    // 0x13be9c: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13be9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bea0: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x13bea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13bea4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x13bea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bea8: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x13BEA8u;
    {
        const bool branch_taken_0x13bea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BEA8u;
            // 0x13beac: 0xc643000c  lwc1        $f3, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bea8) {
            ctx->pc = 0x13BEECu;
            goto label_13beec;
        }
    }
    ctx->pc = 0x13BEB0u;
    // 0x13beb0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13beb4: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13beb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bebc: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x13bebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x13bec0: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x13bec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13bec4: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x13bec4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13bec8: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13bec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13becc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13beccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13bed0: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13bed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13bed4: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13bed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bed8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13bed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13bedc: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13bedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13bee0: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13bee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bee4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x13bee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13bee8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13bee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_13beec:
    // 0x13beec: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x13beecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_13bef0:
    // 0x13bef0: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x13BEF0u;
    {
        const bool branch_taken_0x13bef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bef0) {
            ctx->pc = 0x13BEF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BEF0u;
            // 0x13bef4: 0xc6410014  lwc1        $f1, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BF2Cu;
            goto label_13bf2c;
        }
    }
    ctx->pc = 0x13BEF8u;
    // 0x13bef8: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bef8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13befc: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x13BEFCu;
    {
        const bool branch_taken_0x13befc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BEFCu;
            // 0x13bf00: 0xc6410010  lwc1        $f1, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13befc) {
            ctx->pc = 0x13BF5Cu;
            goto label_13bf5c;
        }
    }
    ctx->pc = 0x13BF04u;
    // 0x13bf04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13bf04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bf08: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bf0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13bf0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bf10: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13bf14: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13BF14u;
    {
        const bool branch_taken_0x13bf14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF14u;
            // 0x13bf18: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf14) {
            ctx->pc = 0x13BF20u;
            goto label_13bf20;
        }
    }
    ctx->pc = 0x13BF1Cu;
    // 0x13bf1c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13bf1cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13bf20:
    // 0x13bf20: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13bf20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13bf24: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13BF24u;
    {
        const bool branch_taken_0x13bf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF24u;
            // 0x13bf28: 0xe4610028  swc1        $f1, 0x28($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf24) {
            ctx->pc = 0x13BF5Cu;
            goto label_13bf5c;
        }
    }
    ctx->pc = 0x13BF2Cu;
label_13bf2c:
    // 0x13bf2c: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bf2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bf30: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13BF30u;
    {
        const bool branch_taken_0x13bf30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bf30) {
            ctx->pc = 0x13BF34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF30u;
            // 0x13bf34: 0xc6420020  lwc1        $f2, 0x20($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BF60u;
            goto label_13bf60;
        }
    }
    ctx->pc = 0x13BF38u;
    // 0x13bf38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13bf38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bf3c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bf40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13bf40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bf44: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13bf48: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13BF48u;
    {
        const bool branch_taken_0x13bf48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF48u;
            // 0x13bf4c: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf48) {
            ctx->pc = 0x13BF54u;
            goto label_13bf54;
        }
    }
    ctx->pc = 0x13BF50u;
    // 0x13bf50: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13bf50u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13bf54:
    // 0x13bf54: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13bf54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13bf58: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x13bf58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_13bf5c:
    // 0x13bf5c: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x13bf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13bf60:
    // 0x13bf60: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bf60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bf64: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x13bf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bf68: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x13BF68u;
    {
        const bool branch_taken_0x13bf68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF68u;
            // 0x13bf6c: 0xc641001c  lwc1        $f1, 0x1C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf68) {
            ctx->pc = 0x13BF88u;
            goto label_13bf88;
        }
    }
    ctx->pc = 0x13BF70u;
    // 0x13bf70: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bf74: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13bf78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bf7c: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x13bf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x13bf80: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x13bf80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x13bf84: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x13bf84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_13bf88:
    // 0x13bf88: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bf88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bf8c: 0x8e49002c  lw          $t1, 0x2C($s2)
    ctx->pc = 0x13bf8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x13bf90: 0x8e480028  lw          $t0, 0x28($s2)
    ctx->pc = 0x13bf90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x13bf94: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x13bf94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x13bf98: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x13BF98u;
    {
        const bool branch_taken_0x13bf98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF98u;
            // 0x13bf9c: 0x8e4a0030  lw          $t2, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf98) {
            ctx->pc = 0x13BFE0u;
            goto label_13bfe0;
        }
    }
    ctx->pc = 0x13BFA0u;
    // 0x13bfa0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13bfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13bfa4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bfa8: 0x24a5503c  addiu       $a1, $a1, 0x503C
    ctx->pc = 0x13bfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20540));
    // 0x13bfac: 0x24635030  addiu       $v1, $v1, 0x5030
    ctx->pc = 0x13bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20528));
    // 0x13bfb0: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x13bfb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13bfb4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x13bfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bfb8: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x13bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x13bfbc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bfc0: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x13bfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x13bfc4: 0x24635034  addiu       $v1, $v1, 0x5034
    ctx->pc = 0x13bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20532));
    // 0x13bfc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bfcc: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x13bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x13bfd0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bfd4: 0x24635038  addiu       $v1, $v1, 0x5038
    ctx->pc = 0x13bfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20536));
    // 0x13bfd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13bfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bfdc: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x13bfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
label_13bfe0:
    // 0x13bfe0: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13bfe0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13bfe4: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x13bfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bfe8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13BFE8u;
    {
        const bool branch_taken_0x13bfe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BFE8u;
            // 0x13bfec: 0xc6410038  lwc1        $f1, 0x38($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfe8) {
            ctx->pc = 0x13C010u;
            goto label_13c010;
        }
    }
    ctx->pc = 0x13BFF0u;
    // 0x13bff0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13bff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13bff4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13bff8: 0x24a55044  addiu       $a1, $a1, 0x5044
    ctx->pc = 0x13bff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20548));
    // 0x13bffc: 0x24635048  addiu       $v1, $v1, 0x5048
    ctx->pc = 0x13bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20552));
    // 0x13c000: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13c000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13c004: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13c004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13c008: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x13c008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x13c00c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x13c00cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_13c010:
    // 0x13c010: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x13c010u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13c014: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x13c014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c018: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13C018u;
    {
        const bool branch_taken_0x13c018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C018u;
            // 0x13c01c: 0xc6410040  lwc1        $f1, 0x40($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c018) {
            ctx->pc = 0x13C040u;
            goto label_13c040;
        }
    }
    ctx->pc = 0x13C020u;
    // 0x13c020: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13c020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13c024: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13c024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13c028: 0x24a5504c  addiu       $a1, $a1, 0x504C
    ctx->pc = 0x13c028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20556));
    // 0x13c02c: 0x24635050  addiu       $v1, $v1, 0x5050
    ctx->pc = 0x13c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20560));
    // 0x13c030: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13c030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13c034: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13c034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13c038: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x13c038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x13c03c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x13c03cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_13c040:
    // 0x13c040: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13c040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_13c044:
    // 0x13c044: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13c044u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c048: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13c048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c04c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c04cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c050: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c054: 0x3e00008  jr          $ra
    ctx->pc = 0x13C054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C054u;
            // 0x13c058: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13C05Cu;
    // 0x13c05c: 0x0  nop
    ctx->pc = 0x13c05cu;
    // NOP
}
