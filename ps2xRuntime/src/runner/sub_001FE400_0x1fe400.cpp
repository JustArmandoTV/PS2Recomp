#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FE400
// Address: 0x1fe400 - 0x1fe720
void sub_001FE400_0x1fe400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE400_0x1fe400");
#endif

    switch (ctx->pc) {
        case 0x1fe460u: goto label_1fe460;
        case 0x1fe620u: goto label_1fe620;
        case 0x1fe660u: goto label_1fe660;
        default: break;
    }

    ctx->pc = 0x1fe400u;

    // 0x1fe400: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1fe400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fe404: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1fe404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fe408: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1fe408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe40c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe410: 0xc462ffd0  lwc1        $f2, -0x30($v1)
    ctx->pc = 0x1fe410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fe414: 0x8c6bfff0  lw          $t3, -0x10($v1)
    ctx->pc = 0x1fe414u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x1fe418: 0xc463ffd4  lwc1        $f3, -0x2C($v1)
    ctx->pc = 0x1fe418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fe41c: 0x8c6afff4  lw          $t2, -0xC($v1)
    ctx->pc = 0x1fe41cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
    // 0x1fe420: 0xc464ffd8  lwc1        $f4, -0x28($v1)
    ctx->pc = 0x1fe420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1fe424: 0x8c69fff8  lw          $t1, -0x8($v1)
    ctx->pc = 0x1fe424u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x1fe428: 0xc465ffdc  lwc1        $f5, -0x24($v1)
    ctx->pc = 0x1fe428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1fe42c: 0x8c68fffc  lw          $t0, -0x4($v1)
    ctx->pc = 0x1fe42cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x1fe430: 0xc466ffe0  lwc1        $f6, -0x20($v1)
    ctx->pc = 0x1fe430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1fe434: 0xc467ffe4  lwc1        $f7, -0x1C($v1)
    ctx->pc = 0x1fe434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1fe438: 0xc468ffe8  lwc1        $f8, -0x18($v1)
    ctx->pc = 0x1fe438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1fe43c: 0xc469ffec  lwc1        $f9, -0x14($v1)
    ctx->pc = 0x1fe43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1fe440: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE440u;
    {
        const bool branch_taken_0x1fe440 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1FE444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE440u;
            // 0x1fe444: 0x63843  sra         $a3, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe440) {
            ctx->pc = 0x1FE450u;
            goto label_1fe450;
        }
    }
    ctx->pc = 0x1FE448u;
    // 0x1fe448: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1fe448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fe44c: 0x33843  sra         $a3, $v1, 1
    ctx->pc = 0x1fe44cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
label_1fe450:
    // 0x1fe450: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x1fe450u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fe454: 0x14200044  bnez        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x1FE454u;
    {
        const bool branch_taken_0x1fe454 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe454) {
            ctx->pc = 0x1FE568u;
            goto label_1fe568;
        }
    }
    ctx->pc = 0x1FE45Cu;
    // 0x1fe45c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fe45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe460:
    // 0x1fe460: 0x56040  sll         $t4, $a1, 1
    ctx->pc = 0x1fe460u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fe464: 0x186082a  slt         $at, $t4, $a2
    ctx->pc = 0x1fe464u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fe468: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FE468u;
    {
        const bool branch_taken_0x1fe468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe468) {
            ctx->pc = 0x1FE4B0u;
            goto label_1fe4b0;
        }
    }
    ctx->pc = 0x1FE470u;
    // 0x1fe470: 0xc7040  sll         $t6, $t4, 1
    ctx->pc = 0x1fe470u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1fe474: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1fe474u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1fe478: 0xe7100  sll         $t6, $t6, 4
    ctx->pc = 0x1fe478u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x1fe47c: 0x8e7021  addu        $t6, $a0, $t6
    ctx->pc = 0x1fe47cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x1fe480: 0xc5c1ffec  lwc1        $f1, -0x14($t6)
    ctx->pc = 0x1fe480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe484: 0xc5c0001c  lwc1        $f0, 0x1C($t6)
    ctx->pc = 0x1fe484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe488: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fe488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fe48c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE48Cu;
    {
        const bool branch_taken_0x1fe48c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FE490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE48Cu;
            // 0x1fe490: 0x60682d  daddu       $t5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe48c) {
            ctx->pc = 0x1FE498u;
            goto label_1fe498;
        }
    }
    ctx->pc = 0x1FE494u;
    // 0x1fe494: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1fe494u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe498:
    // 0x1fe498: 0xd6e3c  dsll32      $t5, $t5, 24
    ctx->pc = 0x1fe498u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 24));
    // 0x1fe49c: 0xd6e3f  dsra32      $t5, $t5, 24
    ctx->pc = 0x1fe49cu;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 24));
    // 0x1fe4a0: 0x11a00003  beqz        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE4A0u;
    {
        const bool branch_taken_0x1fe4a0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe4a0) {
            ctx->pc = 0x1FE4B0u;
            goto label_1fe4b0;
        }
    }
    ctx->pc = 0x1FE4A8u;
    // 0x1fe4a8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1fe4a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1fe4ac: 0x0  nop
    ctx->pc = 0x1fe4acu;
    // NOP
label_1fe4b0:
    // 0x1fe4b0: 0xc6840  sll         $t5, $t4, 1
    ctx->pc = 0x1fe4b0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1fe4b4: 0x1ac7021  addu        $t6, $t5, $t4
    ctx->pc = 0x1fe4b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1fe4b8: 0xe7100  sll         $t6, $t6, 4
    ctx->pc = 0x1fe4b8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x1fe4bc: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x1fe4bcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe4c0: 0x8e7821  addu        $t7, $a0, $t6
    ctx->pc = 0x1fe4c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x1fe4c4: 0xc5e0ffec  lwc1        $f0, -0x14($t7)
    ctx->pc = 0x1fe4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe4c8: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x1fe4c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fe4cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE4CCu;
    {
        const bool branch_taken_0x1fe4cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FE4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE4CCu;
            // 0x1fe4d0: 0x25eeffd0  addiu       $t6, $t7, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4cc) {
            ctx->pc = 0x1FE4D8u;
            goto label_1fe4d8;
        }
    }
    ctx->pc = 0x1FE4D4u;
    // 0x1fe4d4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1fe4d4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe4d8:
    // 0x1fe4d8: 0xd6e3c  dsll32      $t5, $t5, 24
    ctx->pc = 0x1fe4d8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 24));
    // 0x1fe4dc: 0xd6e3f  dsra32      $t5, $t5, 24
    ctx->pc = 0x1fe4dcu;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 24));
    // 0x1fe4e0: 0x11a00021  beqz        $t5, . + 4 + (0x21 << 2)
    ctx->pc = 0x1FE4E0u;
    {
        const bool branch_taken_0x1fe4e0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe4e0) {
            ctx->pc = 0x1FE568u;
            goto label_1fe568;
        }
    }
    ctx->pc = 0x1FE4E8u;
    // 0x1fe4e8: 0x56840  sll         $t5, $a1, 1
    ctx->pc = 0x1fe4e8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fe4ec: 0xec082a  slt         $at, $a3, $t4
    ctx->pc = 0x1fe4ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1fe4f0: 0x1a52821  addu        $a1, $t5, $a1
    ctx->pc = 0x1fe4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x1fe4f4: 0x56900  sll         $t5, $a1, 4
    ctx->pc = 0x1fe4f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fe4f8: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1fe4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe4fc: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x1fe4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe500: 0x8d7021  addu        $t6, $a0, $t5
    ctx->pc = 0x1fe500u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x1fe504: 0xe5c0ffd0  swc1        $f0, -0x30($t6)
    ctx->pc = 0x1fe504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294967248), bits); }
    // 0x1fe508: 0xc5e0ffd4  lwc1        $f0, -0x2C($t7)
    ctx->pc = 0x1fe508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4294967252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe50c: 0xe5c0ffd4  swc1        $f0, -0x2C($t6)
    ctx->pc = 0x1fe50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294967252), bits); }
    // 0x1fe510: 0xc5e0ffd8  lwc1        $f0, -0x28($t7)
    ctx->pc = 0x1fe510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe514: 0xe5c0ffd8  swc1        $f0, -0x28($t6)
    ctx->pc = 0x1fe514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294967256), bits); }
    // 0x1fe518: 0xc5e0ffdc  lwc1        $f0, -0x24($t7)
    ctx->pc = 0x1fe518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4294967260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe51c: 0xe5c0ffdc  swc1        $f0, -0x24($t6)
    ctx->pc = 0x1fe51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294967260), bits); }
    // 0x1fe520: 0xc5e0ffe0  lwc1        $f0, -0x20($t7)
    ctx->pc = 0x1fe520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe524: 0xe5c0ffe0  swc1        $f0, -0x20($t6)
    ctx->pc = 0x1fe524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294967264), bits); }
    // 0x1fe528: 0xc5e0ffe4  lwc1        $f0, -0x1C($t7)
    ctx->pc = 0x1fe528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe52c: 0xe5c0ffe4  swc1        $f0, -0x1C($t6)
    ctx->pc = 0x1fe52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294967268), bits); }
    // 0x1fe530: 0xc5e0ffe8  lwc1        $f0, -0x18($t7)
    ctx->pc = 0x1fe530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe534: 0xe5c0ffe8  swc1        $f0, -0x18($t6)
    ctx->pc = 0x1fe534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294967272), bits); }
    // 0x1fe538: 0xc5e0ffec  lwc1        $f0, -0x14($t7)
    ctx->pc = 0x1fe538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe53c: 0xe5c0ffec  swc1        $f0, -0x14($t6)
    ctx->pc = 0x1fe53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294967276), bits); }
    // 0x1fe540: 0x8dedfff0  lw          $t5, -0x10($t7)
    ctx->pc = 0x1fe540u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967280)));
    // 0x1fe544: 0xadcdfff0  sw          $t5, -0x10($t6)
    ctx->pc = 0x1fe544u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294967280), GPR_U32(ctx, 13));
    // 0x1fe548: 0x8dedfff4  lw          $t5, -0xC($t7)
    ctx->pc = 0x1fe548u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967284)));
    // 0x1fe54c: 0xadcdfff4  sw          $t5, -0xC($t6)
    ctx->pc = 0x1fe54cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294967284), GPR_U32(ctx, 13));
    // 0x1fe550: 0x8dedfff8  lw          $t5, -0x8($t7)
    ctx->pc = 0x1fe550u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967288)));
    // 0x1fe554: 0xadcdfff8  sw          $t5, -0x8($t6)
    ctx->pc = 0x1fe554u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294967288), GPR_U32(ctx, 13));
    // 0x1fe558: 0x8dedfffc  lw          $t5, -0x4($t7)
    ctx->pc = 0x1fe558u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967292)));
    // 0x1fe55c: 0x1020ffc0  beqz        $at, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1FE55Cu;
    {
        const bool branch_taken_0x1fe55c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE55Cu;
            // 0x1fe560: 0xadcdfffc  sw          $t5, -0x4($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 4294967292), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe55c) {
            ctx->pc = 0x1FE460u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe460;
        }
    }
    ctx->pc = 0x1FE564u;
    // 0x1fe564: 0x0  nop
    ctx->pc = 0x1fe564u;
    // NOP
label_1fe568:
    // 0x1fe568: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1fe568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fe56c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1fe56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fe570: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1fe570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe574: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe578: 0xe462ffd0  swc1        $f2, -0x30($v1)
    ctx->pc = 0x1fe578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967248), bits); }
    // 0x1fe57c: 0xe463ffd4  swc1        $f3, -0x2C($v1)
    ctx->pc = 0x1fe57cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967252), bits); }
    // 0x1fe580: 0xe464ffd8  swc1        $f4, -0x28($v1)
    ctx->pc = 0x1fe580u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967256), bits); }
    // 0x1fe584: 0xe465ffdc  swc1        $f5, -0x24($v1)
    ctx->pc = 0x1fe584u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967260), bits); }
    // 0x1fe588: 0xe466ffe0  swc1        $f6, -0x20($v1)
    ctx->pc = 0x1fe588u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967264), bits); }
    // 0x1fe58c: 0xe467ffe4  swc1        $f7, -0x1C($v1)
    ctx->pc = 0x1fe58cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967268), bits); }
    // 0x1fe590: 0xe468ffe8  swc1        $f8, -0x18($v1)
    ctx->pc = 0x1fe590u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967272), bits); }
    // 0x1fe594: 0xe469ffec  swc1        $f9, -0x14($v1)
    ctx->pc = 0x1fe594u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967276), bits); }
    // 0x1fe598: 0xac6bfff0  sw          $t3, -0x10($v1)
    ctx->pc = 0x1fe598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 11));
    // 0x1fe59c: 0xac6afff4  sw          $t2, -0xC($v1)
    ctx->pc = 0x1fe59cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 10));
    // 0x1fe5a0: 0xac69fff8  sw          $t1, -0x8($v1)
    ctx->pc = 0x1fe5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), GPR_U32(ctx, 9));
    // 0x1fe5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE5A4u;
            // 0x1fe5a8: 0xac68fffc  sw          $t0, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE5ACu;
    // 0x1fe5ac: 0x0  nop
    ctx->pc = 0x1fe5acu;
    // NOP
    // 0x1fe5b0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1fe5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1fe5b4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE5B4u;
    {
        const bool branch_taken_0x1fe5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe5b4) {
            ctx->pc = 0x1FE5B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE5B4u;
            // 0x1fe5b8: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE5D4u;
            goto label_1fe5d4;
        }
    }
    ctx->pc = 0x1FE5BCu;
    // 0x1fe5bc: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x1fe5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe5c0: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x1fe5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe5c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fe5c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fe5c8: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x1FE5C8u;
    {
        const bool branch_taken_0x1fe5c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fe5c8) {
            ctx->pc = 0x1FE698u;
            goto label_1fe698;
        }
    }
    ctx->pc = 0x1FE5D0u;
    // 0x1fe5d0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1fe5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fe5d4:
    // 0x1fe5d4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1fe5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1fe5d8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1fe5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe5dc: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1fe5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1fe5e0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1fe5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe5e4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1fe5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1fe5e8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1fe5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe5ec: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1fe5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1fe5f0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1fe5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe5f4: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1fe5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1fe5f8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1fe5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe5fc: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1fe5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1fe600: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1fe600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe604: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1fe604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1fe608: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1fe608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe60c: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x1fe60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1fe610: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x1fe610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1fe614: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1fe614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1fe618: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE618u;
    {
        const bool branch_taken_0x1fe618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe618) {
            ctx->pc = 0x1FE640u;
            goto label_1fe640;
        }
    }
    ctx->pc = 0x1FE620u;
label_1fe620:
    // 0x1fe620: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x1fe620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1fe624: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1fe624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1fe628: 0x0  nop
    ctx->pc = 0x1fe628u;
    // NOP
    // 0x1fe62c: 0x0  nop
    ctx->pc = 0x1fe62cu;
    // NOP
    // 0x1fe630: 0x0  nop
    ctx->pc = 0x1fe630u;
    // NOP
    // 0x1fe634: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FE634u;
    {
        const bool branch_taken_0x1fe634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe634) {
            ctx->pc = 0x1FE620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe620;
        }
    }
    ctx->pc = 0x1FE63Cu;
    // 0x1fe63c: 0x0  nop
    ctx->pc = 0x1fe63cu;
    // NOP
label_1fe640:
    // 0x1fe640: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x1fe640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x1fe644: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x1fe644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1fe648: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1fe648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fe64c: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x1fe64cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x1fe650: 0x8ca60024  lw          $a2, 0x24($a1)
    ctx->pc = 0x1fe650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1fe654: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1fe654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1fe658: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE658u;
    {
        const bool branch_taken_0x1fe658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe658) {
            ctx->pc = 0x1FE680u;
            goto label_1fe680;
        }
    }
    ctx->pc = 0x1FE660u;
label_1fe660:
    // 0x1fe660: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x1fe660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1fe664: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1fe664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1fe668: 0x0  nop
    ctx->pc = 0x1fe668u;
    // NOP
    // 0x1fe66c: 0x0  nop
    ctx->pc = 0x1fe66cu;
    // NOP
    // 0x1fe670: 0x0  nop
    ctx->pc = 0x1fe670u;
    // NOP
    // 0x1fe674: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FE674u;
    {
        const bool branch_taken_0x1fe674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe674) {
            ctx->pc = 0x1FE660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe660;
        }
    }
    ctx->pc = 0x1FE67Cu;
    // 0x1fe67c: 0x0  nop
    ctx->pc = 0x1fe67cu;
    // NOP
label_1fe680:
    // 0x1fe680: 0xac860038  sw          $a2, 0x38($a0)
    ctx->pc = 0x1fe680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 6));
    // 0x1fe684: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x1fe684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1fe688: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1fe688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fe68c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x1fe68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x1fe690: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1fe690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe694: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1fe694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1fe698:
    // 0x1fe698: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE6A0u;
    // 0x1fe6a0: 0x80830008  lb          $v1, 0x8($a0)
    ctx->pc = 0x1fe6a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fe6a4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE6A4u;
    {
        const bool branch_taken_0x1fe6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe6a4) {
            ctx->pc = 0x1FE6A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE6A4u;
            // 0x1fe6a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE6C4u;
            goto label_1fe6c4;
        }
    }
    ctx->pc = 0x1FE6ACu;
    // 0x1fe6ac: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x1fe6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe6b0: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x1fe6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe6b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fe6b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fe6b8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1FE6B8u;
    {
        const bool branch_taken_0x1fe6b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fe6b8) {
            ctx->pc = 0x1FE710u;
            goto label_1fe710;
        }
    }
    ctx->pc = 0x1FE6C0u;
    // 0x1fe6c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fe6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe6c4:
    // 0x1fe6c4: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x1fe6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe6c8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1fe6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe6cc: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1fe6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1fe6d0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1fe6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe6d4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1fe6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1fe6d8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1fe6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe6dc: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1fe6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1fe6e0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1fe6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe6e4: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1fe6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1fe6e8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1fe6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe6ec: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1fe6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1fe6f0: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1fe6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe6f4: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1fe6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1fe6f8: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1fe6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe6fc: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1fe6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1fe700: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1fe700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe704: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x1fe704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1fe708: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1fe708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe70c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1fe70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1fe710:
    // 0x1fe710: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE718u;
    // 0x1fe718: 0x0  nop
    ctx->pc = 0x1fe718u;
    // NOP
    // 0x1fe71c: 0x0  nop
    ctx->pc = 0x1fe71cu;
    // NOP
}
