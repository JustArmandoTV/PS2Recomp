#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00366710
// Address: 0x366710 - 0x366ea0
void sub_00366710_0x366710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366710_0x366710");
#endif

    switch (ctx->pc) {
        case 0x3668a0u: goto label_3668a0;
        case 0x3668b0u: goto label_3668b0;
        case 0x3668c4u: goto label_3668c4;
        case 0x3668e0u: goto label_3668e0;
        case 0x3668f0u: goto label_3668f0;
        case 0x366908u: goto label_366908;
        case 0x366918u: goto label_366918;
        case 0x366950u: goto label_366950;
        case 0x366978u: goto label_366978;
        case 0x366a74u: goto label_366a74;
        case 0x366a84u: goto label_366a84;
        case 0x366a98u: goto label_366a98;
        case 0x366aa4u: goto label_366aa4;
        case 0x366ab0u: goto label_366ab0;
        case 0x366aecu: goto label_366aec;
        case 0x366b08u: goto label_366b08;
        case 0x366b10u: goto label_366b10;
        case 0x366b50u: goto label_366b50;
        case 0x366b6cu: goto label_366b6c;
        case 0x366b88u: goto label_366b88;
        case 0x366ba8u: goto label_366ba8;
        case 0x366bccu: goto label_366bcc;
        case 0x366becu: goto label_366bec;
        case 0x366c24u: goto label_366c24;
        case 0x366c4cu: goto label_366c4c;
        case 0x366c78u: goto label_366c78;
        case 0x366c94u: goto label_366c94;
        case 0x366ca0u: goto label_366ca0;
        case 0x366d44u: goto label_366d44;
        case 0x366e08u: goto label_366e08;
        case 0x366e10u: goto label_366e10;
        case 0x366e3cu: goto label_366e3c;
        case 0x366e7cu: goto label_366e7c;
        default: break;
    }

    ctx->pc = 0x366710u;

    // 0x366710: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x366710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x366714: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x366714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x366718: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x366718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x36671c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x36671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x366720: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x366720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x366724: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x366724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x366728: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x366728u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36672c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x36672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x366730: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x366730u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366734: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x366734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x366738: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x366738u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36673c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x36673cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x366740: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x366740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366744: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x366744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x366748: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x366748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36674c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36674cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x366750: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x366750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x366754: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x366754u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x366758: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x366758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x36675c: 0x8c52e370  lw          $s2, -0x1C90($v0)
    ctx->pc = 0x36675cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
    // 0x366760: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x366760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x366764: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x366764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x366768: 0x8c51e378  lw          $s1, -0x1C88($v0)
    ctx->pc = 0x366768u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
    // 0x36676c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x36676cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x366770: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x366770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x366774: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x366774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x366778: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x366778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x36677c: 0xc4421874  lwc1        $f2, 0x1874($v0)
    ctx->pc = 0x36677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x366780: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x366780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366784: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x366784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x366788: 0xc4411878  lwc1        $f1, 0x1878($v0)
    ctx->pc = 0x366788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36678c: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x36678cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x366790: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x366790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x366794: 0xc440187c  lwc1        $f0, 0x187C($v0)
    ctx->pc = 0x366794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366798: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x366798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x36679c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36679cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3667a0: 0x8c431870  lw          $v1, 0x1870($v0)
    ctx->pc = 0x3667a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6256)));
    // 0x3667a4: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x3667a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x3667a8: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x3667a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x3667ac: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x3667acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3667b0: 0xc4a001b0  lwc1        $f0, 0x1B0($a1)
    ctx->pc = 0x3667b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3667b4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3667b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x3667b8: 0x24a20200  addiu       $v0, $a1, 0x200
    ctx->pc = 0x3667b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x3667bc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3667bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x3667c0: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x3667c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x3667c4: 0xc4a001b4  lwc1        $f0, 0x1B4($a1)
    ctx->pc = 0x3667c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3667c8: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x3667c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x3667cc: 0xc4a001b8  lwc1        $f0, 0x1B8($a1)
    ctx->pc = 0x3667ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3667d0: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x3667d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x3667d4: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x3667d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3667d8: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x3667d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x3667dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3667DCu;
    {
        const bool branch_taken_0x3667dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3667E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3667DCu;
            // 0x3667e0: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3667dc) {
            ctx->pc = 0x3667F0u;
            goto label_3667f0;
        }
    }
    ctx->pc = 0x3667E4u;
    // 0x3667e4: 0x8ea20194  lw          $v0, 0x194($s5)
    ctx->pc = 0x3667e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 404)));
    // 0x3667e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3667E8u;
    {
        const bool branch_taken_0x3667e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3667ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3667E8u;
            // 0x3667ec: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3667e8) {
            ctx->pc = 0x366808u;
            goto label_366808;
        }
    }
    ctx->pc = 0x3667F0u;
label_3667f0:
    // 0x3667f0: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x3667f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x3667f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3667F4u;
    {
        const bool branch_taken_0x3667f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3667f4) {
            ctx->pc = 0x3667F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3667F4u;
            // 0x3667f8: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
            ctx->pc = 0x36680Cu;
            goto label_36680c;
        }
    }
    ctx->pc = 0x3667FCu;
    // 0x3667fc: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x3667fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
    // 0x366800: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x366800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x366804: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x366804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_366808:
    // 0x366808: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x366808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_36680c:
    // 0x36680c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x36680Cu;
    {
        const bool branch_taken_0x36680c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36680c) {
            ctx->pc = 0x366810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36680Cu;
            // 0x366810: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
            ctx->pc = 0x366828u;
            goto label_366828;
        }
    }
    ctx->pc = 0x366814u;
    // 0x366814: 0x8ea201a4  lw          $v0, 0x1A4($s5)
    ctx->pc = 0x366814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 420)));
    // 0x366818: 0x8eb40198  lw          $s4, 0x198($s5)
    ctx->pc = 0x366818u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 408)));
    // 0x36681c: 0x8eb601a0  lw          $s6, 0x1A0($s5)
    ctx->pc = 0x36681cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 416)));
    // 0x366820: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x366820u;
    {
        const bool branch_taken_0x366820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366820u;
            // 0x366824: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366820) {
            ctx->pc = 0x366844u;
            goto label_366844;
        }
    }
    ctx->pc = 0x366828u;
label_366828:
    // 0x366828: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x366828u;
    {
        const bool branch_taken_0x366828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366828) {
            ctx->pc = 0x36682Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366828u;
            // 0x36682c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366848u;
            goto label_366848;
        }
    }
    ctx->pc = 0x366830u;
    // 0x366830: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x366830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
    // 0x366834: 0x8c540014  lw          $s4, 0x14($v0)
    ctx->pc = 0x366834u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x366838: 0x8c560010  lw          $s6, 0x10($v0)
    ctx->pc = 0x366838u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x36683c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x36683cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x366840: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x366840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_366844:
    // 0x366844: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x366844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_366848:
    // 0x366848: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x366848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36684c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x36684Cu;
    {
        const bool branch_taken_0x36684c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36684c) {
            ctx->pc = 0x366850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36684Cu;
            // 0x366850: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x366864u;
            goto label_366864;
        }
    }
    ctx->pc = 0x366854u;
    // 0x366854: 0x8eb701b0  lw          $s7, 0x1B0($s5)
    ctx->pc = 0x366854u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 432)));
    // 0x366858: 0x8ebe01b4  lw          $fp, 0x1B4($s5)
    ctx->pc = 0x366858u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 436)));
    // 0x36685c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36685Cu;
    {
        const bool branch_taken_0x36685c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36685Cu;
            // 0x366860: 0x8eb3019c  lw          $s3, 0x19C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36685c) {
            ctx->pc = 0x36687Cu;
            goto label_36687c;
        }
    }
    ctx->pc = 0x366864u;
label_366864:
    // 0x366864: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x366864u;
    {
        const bool branch_taken_0x366864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366864) {
            ctx->pc = 0x366868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366864u;
            // 0x366868: 0x92a301d9  lbu         $v1, 0x1D9($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 473)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366880u;
            goto label_366880;
        }
    }
    ctx->pc = 0x36686Cu;
    // 0x36686c: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x36686cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
    // 0x366870: 0x8c530028  lw          $s3, 0x28($v0)
    ctx->pc = 0x366870u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x366874: 0x8c570020  lw          $s7, 0x20($v0)
    ctx->pc = 0x366874u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x366878: 0x8c5e002c  lw          $fp, 0x2C($v0)
    ctx->pc = 0x366878u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_36687c:
    // 0x36687c: 0x92a301d9  lbu         $v1, 0x1D9($s5)
    ctx->pc = 0x36687cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 473)));
label_366880:
    // 0x366880: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x366880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366884: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x366884u;
    {
        const bool branch_taken_0x366884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x366888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366884u;
            // 0x366888: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366884) {
            ctx->pc = 0x3668CCu;
            goto label_3668cc;
        }
    }
    ctx->pc = 0x36688Cu;
    // 0x36688c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36688cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x366890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366898: 0xc051868  jal         func_1461A0
    ctx->pc = 0x366898u;
    SET_GPR_U32(ctx, 31, 0x3668A0u);
    ctx->pc = 0x36689Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366898u;
            // 0x36689c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1461A0u;
    if (runtime->hasFunction(0x1461A0u)) {
        auto targetFn = runtime->lookupFunction(0x1461A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3668A0u; }
        if (ctx->pc != 0x3668A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001461A0_0x1461a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3668A0u; }
        if (ctx->pc != 0x3668A0u) { return; }
    }
    ctx->pc = 0x3668A0u;
label_3668a0:
    // 0x3668a0: 0x8ea20100  lw          $v0, 0x100($s5)
    ctx->pc = 0x3668a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 256)));
    // 0x3668a4: 0x8c42077c  lw          $v0, 0x77C($v0)
    ctx->pc = 0x3668a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
    // 0x3668a8: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x3668A8u;
    SET_GPR_U32(ctx, 31, 0x3668B0u);
    ctx->pc = 0x3668ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3668A8u;
            // 0x3668ac: 0x8c440058  lw          $a0, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3668B0u; }
        if (ctx->pc != 0x3668B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3668B0u; }
        if (ctx->pc != 0x3668B0u) { return; }
    }
    ctx->pc = 0x3668B0u;
label_3668b0:
    // 0x3668b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3668b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3668b4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3668b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3668b8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3668b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668bc: 0xc051868  jal         func_1461A0
    ctx->pc = 0x3668BCu;
    SET_GPR_U32(ctx, 31, 0x3668C4u);
    ctx->pc = 0x3668C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3668BCu;
            // 0x3668c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1461A0u;
    if (runtime->hasFunction(0x1461A0u)) {
        auto targetFn = runtime->lookupFunction(0x1461A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3668C4u; }
        if (ctx->pc != 0x3668C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001461A0_0x1461a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3668C4u; }
        if (ctx->pc != 0x3668C4u) { return; }
    }
    ctx->pc = 0x3668C4u;
label_3668c4:
    // 0x3668c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3668C4u;
    {
        const bool branch_taken_0x3668c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3668C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3668C4u;
            // 0x3668c8: 0x8ea20104  lw          $v0, 0x104($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3668c4) {
            ctx->pc = 0x3668F4u;
            goto label_3668f4;
        }
    }
    ctx->pc = 0x3668CCu;
label_3668cc:
    // 0x3668cc: 0x8ea40190  lw          $a0, 0x190($s5)
    ctx->pc = 0x3668ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 400)));
    // 0x3668d0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3668D0u;
    {
        const bool branch_taken_0x3668d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3668d0) {
            ctx->pc = 0x3668D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3668D0u;
            // 0x3668d4: 0x8ea20104  lw          $v0, 0x104($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3668E8u;
            goto label_3668e8;
        }
    }
    ctx->pc = 0x3668D8u;
    // 0x3668d8: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x3668D8u;
    SET_GPR_U32(ctx, 31, 0x3668E0u);
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3668E0u; }
        if (ctx->pc != 0x3668E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3668E0u; }
        if (ctx->pc != 0x3668E0u) { return; }
    }
    ctx->pc = 0x3668E0u;
label_3668e0:
    // 0x3668e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3668E0u;
    {
        const bool branch_taken_0x3668e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3668e0) {
            ctx->pc = 0x3668F0u;
            goto label_3668f0;
        }
    }
    ctx->pc = 0x3668E8u;
label_3668e8:
    // 0x3668e8: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x3668E8u;
    SET_GPR_U32(ctx, 31, 0x3668F0u);
    ctx->pc = 0x3668ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3668E8u;
            // 0x3668ec: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3668F0u; }
        if (ctx->pc != 0x3668F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3668F0u; }
        if (ctx->pc != 0x3668F0u) { return; }
    }
    ctx->pc = 0x3668F0u;
label_3668f0:
    // 0x3668f0: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x3668f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
label_3668f4:
    // 0x3668f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3668f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3668f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3668fc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3668fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x366900: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x366900u;
    SET_GPR_U32(ctx, 31, 0x366908u);
    ctx->pc = 0x366904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366900u;
            // 0x366904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366908u; }
        if (ctx->pc != 0x366908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366908u; }
        if (ctx->pc != 0x366908u) { return; }
    }
    ctx->pc = 0x366908u;
label_366908:
    // 0x366908: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x366908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x36690c: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x36690cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x366910: 0xc04cd60  jal         func_133580
    ctx->pc = 0x366910u;
    SET_GPR_U32(ctx, 31, 0x366918u);
    ctx->pc = 0x366914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366910u;
            // 0x366914: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366918u; }
        if (ctx->pc != 0x366918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366918u; }
        if (ctx->pc != 0x366918u) { return; }
    }
    ctx->pc = 0x366918u;
label_366918:
    // 0x366918: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x366918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x36691c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x36691Cu;
    {
        const bool branch_taken_0x36691c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36691c) {
            ctx->pc = 0x366920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36691Cu;
            // 0x366920: 0x8ea20104  lw          $v0, 0x104($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366958u;
            goto label_366958;
        }
    }
    ctx->pc = 0x366924u;
    // 0x366924: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x366924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366928: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x366928u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x36692c: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x36692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
    // 0x366930: 0xc6ac01cc  lwc1        $f12, 0x1CC($s5)
    ctx->pc = 0x366930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x366934: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x366934u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x366938: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36693c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36693cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366940: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x366940u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
    // 0x366944: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x366944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x366948: 0xc04cff4  jal         func_133FD0
    ctx->pc = 0x366948u;
    SET_GPR_U32(ctx, 31, 0x366950u);
    ctx->pc = 0x36694Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366948u;
            // 0x36694c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366950u; }
        if (ctx->pc != 0x366950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366950u; }
        if (ctx->pc != 0x366950u) { return; }
    }
    ctx->pc = 0x366950u;
label_366950:
    // 0x366950: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x366950u;
    {
        const bool branch_taken_0x366950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366950u;
            // 0x366954: 0x8ea30054  lw          $v1, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366950) {
            ctx->pc = 0x36697Cu;
            goto label_36697c;
        }
    }
    ctx->pc = 0x366958u;
label_366958:
    // 0x366958: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x366958u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x36695c: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x36695cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x366960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366964: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x366964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366968: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x366968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x36696c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x36696cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x366970: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x366970u;
    SET_GPR_U32(ctx, 31, 0x366978u);
    ctx->pc = 0x366974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366970u;
            // 0x366974: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366978u; }
        if (ctx->pc != 0x366978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366978u; }
        if (ctx->pc != 0x366978u) { return; }
    }
    ctx->pc = 0x366978u;
label_366978:
    // 0x366978: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x366978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_36697c:
    // 0x36697c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x36697cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x366980: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x366980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x366984: 0x50400069  beql        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x366984u;
    {
        const bool branch_taken_0x366984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366984) {
            ctx->pc = 0x366988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366984u;
            // 0x366988: 0x8ea70054  lw          $a3, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366B2Cu;
            goto label_366b2c;
        }
    }
    ctx->pc = 0x36698Cu;
    // 0x36698c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x36698cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x366990: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x366990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x366994: 0xc4621884  lwc1        $f2, 0x1884($v1)
    ctx->pc = 0x366994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x366998: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x366998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36699c: 0xc4411888  lwc1        $f1, 0x1888($v0)
    ctx->pc = 0x36699cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3669a0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3669a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3669a4: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3669a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3669a8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3669a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3669ac: 0xc460188c  lwc1        $f0, 0x188C($v1)
    ctx->pc = 0x3669acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3669b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3669b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3669b4: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x3669b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x3669b8: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x3669b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x3669bc: 0x8c431880  lw          $v1, 0x1880($v0)
    ctx->pc = 0x3669bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6272)));
    // 0x3669c0: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x3669c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x3669c4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3669c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3669c8: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x3669c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x3669cc: 0xc44a1890  lwc1        $f10, 0x1890($v0)
    ctx->pc = 0x3669ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3669d0: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x3669d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3669d4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3669d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3669d8: 0xc4401894  lwc1        $f0, 0x1894($v0)
    ctx->pc = 0x3669d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3669dc: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x3669dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x3669e0: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x3669e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3669e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3669e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3669e8: 0xc4491898  lwc1        $f9, 0x1898($v0)
    ctx->pc = 0x3669e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3669ec: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x3669ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x3669f0: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x3669f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3669f4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3669f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3669f8: 0xc448189c  lwc1        $f8, 0x189C($v0)
    ctx->pc = 0x3669f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3669fc: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x3669fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x366a00: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x366a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x366a04: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x366a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x366a08: 0xc44718a0  lwc1        $f7, 0x18A0($v0)
    ctx->pc = 0x366a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x366a0c: 0xe7aa0120  swc1        $f10, 0x120($sp)
    ctx->pc = 0x366a0cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x366a10: 0xe7a90128  swc1        $f9, 0x128($sp)
    ctx->pc = 0x366a10u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x366a14: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x366a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x366a18: 0xc44618a4  lwc1        $f6, 0x18A4($v0)
    ctx->pc = 0x366a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x366a1c: 0xe7a8012c  swc1        $f8, 0x12C($sp)
    ctx->pc = 0x366a1cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x366a20: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x366a20u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x366a24: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x366a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x366a28: 0xc44518a8  lwc1        $f5, 0x18A8($v0)
    ctx->pc = 0x366a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x366a2c: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x366a2cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x366a30: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x366a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x366a34: 0xc44418ac  lwc1        $f4, 0x18AC($v0)
    ctx->pc = 0x366a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x366a38: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x366a38u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x366a3c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x366a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x366a40: 0xc44318b0  lwc1        $f3, 0x18B0($v0)
    ctx->pc = 0x366a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x366a44: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x366a44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x366a48: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x366a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x366a4c: 0xc44218b4  lwc1        $f2, 0x18B4($v0)
    ctx->pc = 0x366a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x366a50: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x366a50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x366a54: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x366a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x366a58: 0xc44118b8  lwc1        $f1, 0x18B8($v0)
    ctx->pc = 0x366a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366a5c: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x366a5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x366a60: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x366a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x366a64: 0xc44018bc  lwc1        $f0, 0x18BC($v0)
    ctx->pc = 0x366a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366a68: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x366a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x366a6c: 0xc04cc90  jal         func_133240
    ctx->pc = 0x366A6Cu;
    SET_GPR_U32(ctx, 31, 0x366A74u);
    ctx->pc = 0x366A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366A6Cu;
            // 0x366a70: 0xe7a0010c  swc1        $f0, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366A74u; }
        if (ctx->pc != 0x366A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366A74u; }
        if (ctx->pc != 0x366A74u) { return; }
    }
    ctx->pc = 0x366A74u;
label_366a74:
    // 0x366a74: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x366a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x366a78: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x366a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x366a7c: 0xc04cc90  jal         func_133240
    ctx->pc = 0x366A7Cu;
    SET_GPR_U32(ctx, 31, 0x366A84u);
    ctx->pc = 0x366A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366A7Cu;
            // 0x366a80: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366A84u; }
        if (ctx->pc != 0x366A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366A84u; }
        if (ctx->pc != 0x366A84u) { return; }
    }
    ctx->pc = 0x366A84u;
label_366a84:
    // 0x366a84: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x366a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x366a88: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x366a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x366a8c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x366a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a90: 0xc04cc44  jal         func_133110
    ctx->pc = 0x366A90u;
    SET_GPR_U32(ctx, 31, 0x366A98u);
    ctx->pc = 0x366A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366A90u;
            // 0x366a94: 0xafa00124  sw          $zero, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366A98u; }
        if (ctx->pc != 0x366A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366A98u; }
        if (ctx->pc != 0x366A98u) { return; }
    }
    ctx->pc = 0x366A98u;
label_366a98:
    // 0x366a98: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x366a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x366a9c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x366A9Cu;
    SET_GPR_U32(ctx, 31, 0x366AA4u);
    ctx->pc = 0x366AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366A9Cu;
            // 0x366aa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366AA4u; }
        if (ctx->pc != 0x366AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366AA4u; }
        if (ctx->pc != 0x366AA4u) { return; }
    }
    ctx->pc = 0x366AA4u;
label_366aa4:
    // 0x366aa4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x366aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x366aa8: 0xc04cc08  jal         func_133020
    ctx->pc = 0x366AA8u;
    SET_GPR_U32(ctx, 31, 0x366AB0u);
    ctx->pc = 0x366AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366AA8u;
            // 0x366aac: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366AB0u; }
        if (ctx->pc != 0x366AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366AB0u; }
        if (ctx->pc != 0x366AB0u) { return; }
    }
    ctx->pc = 0x366AB0u;
label_366ab0:
    // 0x366ab0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x366ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x366ab4: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x366ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x366ab8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x366ab8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x366abc: 0x3c024463  lui         $v0, 0x4463
    ctx->pc = 0x366abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17507 << 16));
    // 0x366ac0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x366ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x366ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x366ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366ac8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x366ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x366acc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x366accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x366ad0: 0xc4410194  lwc1        $f1, 0x194($v0)
    ctx->pc = 0x366ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366ad4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x366ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x366ad8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x366ad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x366adc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x366adcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x366ae0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x366ae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x366ae4: 0xc04ceac  jal         func_133AB0
    ctx->pc = 0x366AE4u;
    SET_GPR_U32(ctx, 31, 0x366AECu);
    ctx->pc = 0x133AB0u;
    if (runtime->hasFunction(0x133AB0u)) {
        auto targetFn = runtime->lookupFunction(0x133AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366AECu; }
        if (ctx->pc != 0x366AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AB0_0x133ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366AECu; }
        if (ctx->pc != 0x366AECu) { return; }
    }
    ctx->pc = 0x366AECu;
label_366aec:
    // 0x366aec: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x366aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366af0: 0x4503007c  bc1tl       . + 4 + (0x7C << 2)
    ctx->pc = 0x366AF0u;
    {
        const bool branch_taken_0x366af0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x366af0) {
            ctx->pc = 0x366AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366AF0u;
            // 0x366af4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366CE4u;
            goto label_366ce4;
        }
    }
    ctx->pc = 0x366AF8u;
    // 0x366af8: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x366af8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x366afc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x366afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x366b00: 0xc04cc90  jal         func_133240
    ctx->pc = 0x366B00u;
    SET_GPR_U32(ctx, 31, 0x366B08u);
    ctx->pc = 0x366B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366B00u;
            // 0x366b04: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366B08u; }
        if (ctx->pc != 0x366B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366B08u; }
        if (ctx->pc != 0x366B08u) { return; }
    }
    ctx->pc = 0x366B08u;
label_366b08:
    // 0x366b08: 0xc04cc2c  jal         func_1330B0
    ctx->pc = 0x366B08u;
    SET_GPR_U32(ctx, 31, 0x366B10u);
    ctx->pc = 0x366B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366B08u;
            // 0x366b0c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366B10u; }
        if (ctx->pc != 0x366B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366B10u; }
        if (ctx->pc != 0x366B10u) { return; }
    }
    ctx->pc = 0x366B10u;
label_366b10:
    // 0x366b10: 0x3c0345c8  lui         $v1, 0x45C8
    ctx->pc = 0x366b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17864 << 16));
    // 0x366b14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x366b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x366b18: 0x0  nop
    ctx->pc = 0x366b18u;
    // NOP
    // 0x366b1c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x366b1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366b20: 0x4500006f  bc1f        . + 4 + (0x6F << 2)
    ctx->pc = 0x366B20u;
    {
        const bool branch_taken_0x366b20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x366b20) {
            ctx->pc = 0x366CE0u;
            goto label_366ce0;
        }
    }
    ctx->pc = 0x366B28u;
    // 0x366b28: 0x8ea70054  lw          $a3, 0x54($s5)
    ctx->pc = 0x366b28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_366b2c:
    // 0x366b2c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x366b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x366b30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x366b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x366b34: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x366b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x366b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b3c: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x366b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x366b40: 0xaea30054  sw          $v1, 0x54($s5)
    ctx->pc = 0x366b40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 3));
    // 0x366b44: 0x8c47e390  lw          $a3, -0x1C70($v0)
    ctx->pc = 0x366b44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
    // 0x366b48: 0xc04e4cc  jal         func_139330
    ctx->pc = 0x366B48u;
    SET_GPR_U32(ctx, 31, 0x366B50u);
    ctx->pc = 0x366B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366B48u;
            // 0x366b4c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139330u;
    if (runtime->hasFunction(0x139330u)) {
        auto targetFn = runtime->lookupFunction(0x139330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366B50u; }
        if (ctx->pc != 0x366B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139330_0x139330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366B50u; }
        if (ctx->pc != 0x366B50u) { return; }
    }
    ctx->pc = 0x366B50u;
label_366b50:
    // 0x366b50: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x366B50u;
    {
        const bool branch_taken_0x366b50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x366b50) {
            ctx->pc = 0x366B88u;
            goto label_366b88;
        }
    }
    ctx->pc = 0x366B58u;
    // 0x366b58: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x366b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
    // 0x366b5c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x366b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x366b60: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x366b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x366b64: 0xc054c00  jal         func_153000
    ctx->pc = 0x366B64u;
    SET_GPR_U32(ctx, 31, 0x366B6Cu);
    ctx->pc = 0x366B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366B64u;
            // 0x366b68: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153000u;
    if (runtime->hasFunction(0x153000u)) {
        auto targetFn = runtime->lookupFunction(0x153000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366B6Cu; }
        if (ctx->pc != 0x366B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153000_0x153000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366B6Cu; }
        if (ctx->pc != 0x366B6Cu) { return; }
    }
    ctx->pc = 0x366B6Cu;
label_366b6c:
    // 0x366b6c: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x366b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
    // 0x366b70: 0xc6ac01d0  lwc1        $f12, 0x1D0($s5)
    ctx->pc = 0x366b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x366b74: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x366b74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x366b78: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x366b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x366b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x366b80: 0xc054bdc  jal         func_152F70
    ctx->pc = 0x366B80u;
    SET_GPR_U32(ctx, 31, 0x366B88u);
    ctx->pc = 0x366B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366B80u;
            // 0x366b84: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152F70u;
    if (runtime->hasFunction(0x152F70u)) {
        auto targetFn = runtime->lookupFunction(0x152F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366B88u; }
        if (ctx->pc != 0x366B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152F70_0x152f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366B88u; }
        if (ctx->pc != 0x366B88u) { return; }
    }
    ctx->pc = 0x366B88u;
label_366b88:
    // 0x366b88: 0x52600019  beql        $s3, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x366B88u;
    {
        const bool branch_taken_0x366b88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x366b88) {
            ctx->pc = 0x366B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366B88u;
            // 0x366b8c: 0x8ea30054  lw          $v1, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366BF0u;
            goto label_366bf0;
        }
    }
    ctx->pc = 0x366B90u;
    // 0x366b90: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x366b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
    // 0x366b94: 0xc6ac01d4  lwc1        $f12, 0x1D4($s5)
    ctx->pc = 0x366b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x366b98: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x366b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b9c: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x366b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x366ba0: 0xc0525e0  jal         func_149780
    ctx->pc = 0x366BA0u;
    SET_GPR_U32(ctx, 31, 0x366BA8u);
    ctx->pc = 0x366BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366BA0u;
            // 0x366ba4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149780u;
    if (runtime->hasFunction(0x149780u)) {
        auto targetFn = runtime->lookupFunction(0x149780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366BA8u; }
        if (ctx->pc != 0x366BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149780_0x149780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366BA8u; }
        if (ctx->pc != 0x366BA8u) { return; }
    }
    ctx->pc = 0x366BA8u;
label_366ba8:
    // 0x366ba8: 0x5280000a  beql        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x366BA8u;
    {
        const bool branch_taken_0x366ba8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x366ba8) {
            ctx->pc = 0x366BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366BA8u;
            // 0x366bac: 0x8ea20104  lw          $v0, 0x104($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366BD4u;
            goto label_366bd4;
        }
    }
    ctx->pc = 0x366BB0u;
    // 0x366bb0: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x366bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
    // 0x366bb4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x366bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366bb8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x366bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366bbc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x366bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366bc0: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x366bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x366bc4: 0xc052398  jal         func_148E60
    ctx->pc = 0x366BC4u;
    SET_GPR_U32(ctx, 31, 0x366BCCu);
    ctx->pc = 0x366BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366BC4u;
            // 0x366bc8: 0x240803ff  addiu       $t0, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148E60u;
    if (runtime->hasFunction(0x148E60u)) {
        auto targetFn = runtime->lookupFunction(0x148E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366BCCu; }
        if (ctx->pc != 0x366BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00148E60_0x148e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366BCCu; }
        if (ctx->pc != 0x366BCCu) { return; }
    }
    ctx->pc = 0x366BCCu;
label_366bcc:
    // 0x366bcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x366BCCu;
    {
        const bool branch_taken_0x366bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366bcc) {
            ctx->pc = 0x366BECu;
            goto label_366bec;
        }
    }
    ctx->pc = 0x366BD4u;
label_366bd4:
    // 0x366bd4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x366bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366bd8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x366bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366bdc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x366bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x366be0: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x366be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x366be4: 0xc052398  jal         func_148E60
    ctx->pc = 0x366BE4u;
    SET_GPR_U32(ctx, 31, 0x366BECu);
    ctx->pc = 0x366BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366BE4u;
            // 0x366be8: 0x240803ff  addiu       $t0, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148E60u;
    if (runtime->hasFunction(0x148E60u)) {
        auto targetFn = runtime->lookupFunction(0x148E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366BECu; }
        if (ctx->pc != 0x366BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00148E60_0x148e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366BECu; }
        if (ctx->pc != 0x366BECu) { return; }
    }
    ctx->pc = 0x366BECu;
label_366bec:
    // 0x366bec: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x366becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_366bf0:
    // 0x366bf0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x366bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x366bf4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x366bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x366bf8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x366BF8u;
    {
        const bool branch_taken_0x366bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366bf8) {
            ctx->pc = 0x366C04u;
            goto label_366c04;
        }
    }
    ctx->pc = 0x366C00u;
    // 0x366c00: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x366c00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
label_366c04:
    // 0x366c04: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x366C04u;
    {
        const bool branch_taken_0x366c04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x366c04) {
            ctx->pc = 0x366C2Cu;
            goto label_366c2c;
        }
    }
    ctx->pc = 0x366C0Cu;
    // 0x366c0c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x366c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x366c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x366c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c18: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x366c18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c1c: 0xc0525a4  jal         func_149690
    ctx->pc = 0x366C1Cu;
    SET_GPR_U32(ctx, 31, 0x366C24u);
    ctx->pc = 0x366C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366C1Cu;
            // 0x366c20: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149690u;
    if (runtime->hasFunction(0x149690u)) {
        auto targetFn = runtime->lookupFunction(0x149690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366C24u; }
        if (ctx->pc != 0x366C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149690_0x149690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366C24u; }
        if (ctx->pc != 0x366C24u) { return; }
    }
    ctx->pc = 0x366C24u;
label_366c24:
    // 0x366c24: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x366C24u;
    {
        const bool branch_taken_0x366c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366C24u;
            // 0x366c28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366c24) {
            ctx->pc = 0x366C98u;
            goto label_366c98;
        }
    }
    ctx->pc = 0x366C2Cu;
label_366c2c:
    // 0x366c2c: 0x52800009  beql        $s4, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x366C2Cu;
    {
        const bool branch_taken_0x366c2c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x366c2c) {
            ctx->pc = 0x366C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366C2Cu;
            // 0x366c30: 0x8ea30104  lw          $v1, 0x104($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366C54u;
            goto label_366c54;
        }
    }
    ctx->pc = 0x366C34u;
    // 0x366c34: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x366c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x366c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x366c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c40: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x366c40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c44: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x366C44u;
    SET_GPR_U32(ctx, 31, 0x366C4Cu);
    ctx->pc = 0x366C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366C44u;
            // 0x366c48: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366C4Cu; }
        if (ctx->pc != 0x366C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366C4Cu; }
        if (ctx->pc != 0x366C4Cu) { return; }
    }
    ctx->pc = 0x366C4Cu;
label_366c4c:
    // 0x366c4c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x366C4Cu;
    {
        const bool branch_taken_0x366c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366c4c) {
            ctx->pc = 0x366C94u;
            goto label_366c94;
        }
    }
    ctx->pc = 0x366C54u;
label_366c54:
    // 0x366c54: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x366c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x366c58: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x366c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x366c5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x366C5Cu;
    {
        const bool branch_taken_0x366c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x366C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366C5Cu;
            // 0x366c60: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366c5c) {
            ctx->pc = 0x366C80u;
            goto label_366c80;
        }
    }
    ctx->pc = 0x366C64u;
    // 0x366c64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x366c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x366c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c6c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x366c6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c70: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x366C70u;
    SET_GPR_U32(ctx, 31, 0x366C78u);
    ctx->pc = 0x366C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366C70u;
            // 0x366c74: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366C78u; }
        if (ctx->pc != 0x366C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366C78u; }
        if (ctx->pc != 0x366C78u) { return; }
    }
    ctx->pc = 0x366C78u;
label_366c78:
    // 0x366c78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x366C78u;
    {
        const bool branch_taken_0x366c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366c78) {
            ctx->pc = 0x366C94u;
            goto label_366c94;
        }
    }
    ctx->pc = 0x366C80u;
label_366c80:
    // 0x366c80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x366c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x366c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c88: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x366c88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c8c: 0xc050044  jal         func_140110
    ctx->pc = 0x366C8Cu;
    SET_GPR_U32(ctx, 31, 0x366C94u);
    ctx->pc = 0x366C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366C8Cu;
            // 0x366c90: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366C94u; }
        if (ctx->pc != 0x366C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366C94u; }
        if (ctx->pc != 0x366C94u) { return; }
    }
    ctx->pc = 0x366C94u;
label_366c94:
    // 0x366c94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x366c94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_366c98:
    // 0x366c98: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x366c98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c9c: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x366c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_366ca0:
    // 0x366ca0: 0x8ce60108  lw          $a2, 0x108($a3)
    ctx->pc = 0x366ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 264)));
    // 0x366ca4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x366CA4u;
    {
        const bool branch_taken_0x366ca4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x366ca4) {
            ctx->pc = 0x366CD0u;
            goto label_366cd0;
        }
    }
    ctx->pc = 0x366CACu;
    // 0x366cac: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x366cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x366cb0: 0x1052004  sllv        $a0, $a1, $t0
    ctx->pc = 0x366cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
    // 0x366cb4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x366cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x366cb8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x366CB8u;
    {
        const bool branch_taken_0x366cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366cb8) {
            ctx->pc = 0x366CD0u;
            goto label_366cd0;
        }
    }
    ctx->pc = 0x366CC0u;
    // 0x366cc0: 0x94c30064  lhu         $v1, 0x64($a2)
    ctx->pc = 0x366cc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 100)));
    // 0x366cc4: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x366cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x366cc8: 0xa4c30064  sh          $v1, 0x64($a2)
    ctx->pc = 0x366cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x366ccc: 0x0  nop
    ctx->pc = 0x366cccu;
    // NOP
label_366cd0:
    // 0x366cd0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x366cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x366cd4: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x366cd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x366cd8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x366CD8u;
    {
        const bool branch_taken_0x366cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x366CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366CD8u;
            // 0x366cdc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366cd8) {
            ctx->pc = 0x366CA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_366ca0;
        }
    }
    ctx->pc = 0x366CE0u;
label_366ce0:
    // 0x366ce0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x366ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_366ce4:
    // 0x366ce4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x366ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x366ce8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x366ce8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x366cec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x366cecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x366cf0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x366cf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x366cf4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x366cf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x366cf8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x366cf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x366cfc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x366cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x366d00: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x366d00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x366d04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x366d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366d08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x366d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x366D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366D0Cu;
            // 0x366d10: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x366D14u;
    // 0x366d14: 0x0  nop
    ctx->pc = 0x366d14u;
    // NOP
    // 0x366d18: 0x0  nop
    ctx->pc = 0x366d18u;
    // NOP
    // 0x366d1c: 0x0  nop
    ctx->pc = 0x366d1cu;
    // NOP
    // 0x366d20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x366d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x366d24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x366d24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x366d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x366d2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x366d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x366d30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x366d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x366d34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x366d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x366d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x366d3c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x366d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d40: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x366d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_366d44:
    // 0x366d44: 0x8ce60108  lw          $a2, 0x108($a3)
    ctx->pc = 0x366d44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 264)));
    // 0x366d48: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x366D48u;
    {
        const bool branch_taken_0x366d48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x366d48) {
            ctx->pc = 0x366D80u;
            goto label_366d80;
        }
    }
    ctx->pc = 0x366D50u;
    // 0x366d50: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x366d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x366d54: 0x1052004  sllv        $a0, $a1, $t0
    ctx->pc = 0x366d54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
    // 0x366d58: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x366d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x366d5c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x366D5Cu;
    {
        const bool branch_taken_0x366d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366d5c) {
            ctx->pc = 0x366D80u;
            goto label_366d80;
        }
    }
    ctx->pc = 0x366D64u;
    // 0x366d64: 0x94c30064  lhu         $v1, 0x64($a2)
    ctx->pc = 0x366d64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 100)));
    // 0x366d68: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x366d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x366d6c: 0xa4c30064  sh          $v1, 0x64($a2)
    ctx->pc = 0x366d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x366d70: 0x8ce40108  lw          $a0, 0x108($a3)
    ctx->pc = 0x366d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 264)));
    // 0x366d74: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x366d74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x366d78: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x366d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x366d7c: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x366d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_366d80:
    // 0x366d80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x366d80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x366d84: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x366d84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x366d88: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x366D88u;
    {
        const bool branch_taken_0x366d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x366D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366D88u;
            // 0x366d8c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366d88) {
            ctx->pc = 0x366D44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_366d44;
        }
    }
    ctx->pc = 0x366D90u;
    // 0x366d90: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x366d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x366d94: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x366d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x366d98: 0x50600039  beql        $v1, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x366D98u;
    {
        const bool branch_taken_0x366d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366d98) {
            ctx->pc = 0x366D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366D98u;
            // 0x366d9c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366E80u;
            goto label_366e80;
        }
    }
    ctx->pc = 0x366DA0u;
    // 0x366da0: 0x8e430100  lw          $v1, 0x100($s2)
    ctx->pc = 0x366da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x366da4: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x366DA4u;
    {
        const bool branch_taken_0x366da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366da4) {
            ctx->pc = 0x366DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366DA4u;
            // 0x366da8: 0xc64100b4  lwc1        $f1, 0xB4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x366DD4u;
            goto label_366dd4;
        }
    }
    ctx->pc = 0x366DACu;
    // 0x366dac: 0x8c640790  lw          $a0, 0x790($v1)
    ctx->pc = 0x366dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1936)));
    // 0x366db0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x366db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x366db4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x366db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x366db8: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x366DB8u;
    {
        const bool branch_taken_0x366db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x366db8) {
            ctx->pc = 0x366E7Cu;
            goto label_366e7c;
        }
    }
    ctx->pc = 0x366DC0u;
    // 0x366dc0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x366dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x366dc4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x366dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x366dc8: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x366DC8u;
    {
        const bool branch_taken_0x366dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x366dc8) {
            ctx->pc = 0x366E7Cu;
            goto label_366e7c;
        }
    }
    ctx->pc = 0x366DD0u;
    // 0x366dd0: 0xc64100b4  lwc1        $f1, 0xB4($s2)
    ctx->pc = 0x366dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_366dd4:
    // 0x366dd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366dd8: 0x0  nop
    ctx->pc = 0x366dd8u;
    // NOP
    // 0x366ddc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x366ddcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366de0: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x366DE0u;
    {
        const bool branch_taken_0x366de0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x366de0) {
            ctx->pc = 0x366DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366DE0u;
            // 0x366de4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366E00u;
            goto label_366e00;
        }
    }
    ctx->pc = 0x366DE8u;
    // 0x366de8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x366de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x366dec: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x366decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x366df0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x366df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366df4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x366df4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x366df8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x366DF8u;
    {
        const bool branch_taken_0x366df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366DF8u;
            // 0x366dfc: 0xe64000b4  swc1        $f0, 0xB4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x366df8) {
            ctx->pc = 0x366E7Cu;
            goto label_366e7c;
        }
    }
    ctx->pc = 0x366E00u;
label_366e00:
    // 0x366e00: 0xc0d9bfc  jal         func_366FF0
    ctx->pc = 0x366E00u;
    SET_GPR_U32(ctx, 31, 0x366E08u);
    ctx->pc = 0x366FF0u;
    if (runtime->hasFunction(0x366FF0u)) {
        auto targetFn = runtime->lookupFunction(0x366FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366E08u; }
        if (ctx->pc != 0x366E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00366FF0_0x366ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366E08u; }
        if (ctx->pc != 0x366E08u) { return; }
    }
    ctx->pc = 0x366E08u;
label_366e08:
    // 0x366e08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x366e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e0c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x366e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_366e10:
    // 0x366e10: 0x8e240108  lw          $a0, 0x108($s1)
    ctx->pc = 0x366e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x366e14: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x366E14u;
    {
        const bool branch_taken_0x366e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x366e14) {
            ctx->pc = 0x366E50u;
            goto label_366e50;
        }
    }
    ctx->pc = 0x366E1Cu;
    // 0x366e1c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x366e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x366e20: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x366e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x366e24: 0x2052804  sllv        $a1, $a1, $s0
    ctx->pc = 0x366e24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x366e28: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x366e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x366e2c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x366E2Cu;
    {
        const bool branch_taken_0x366e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366e2c) {
            ctx->pc = 0x366E50u;
            goto label_366e50;
        }
    }
    ctx->pc = 0x366E34u;
    // 0x366e34: 0xc0c3df4  jal         func_30F7D0
    ctx->pc = 0x366E34u;
    SET_GPR_U32(ctx, 31, 0x366E3Cu);
    ctx->pc = 0x30F7D0u;
    if (runtime->hasFunction(0x30F7D0u)) {
        auto targetFn = runtime->lookupFunction(0x30F7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366E3Cu; }
        if (ctx->pc != 0x366E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030F7D0_0x30f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366E3Cu; }
        if (ctx->pc != 0x366E3Cu) { return; }
    }
    ctx->pc = 0x366E3Cu;
label_366e3c:
    // 0x366e3c: 0x8e240108  lw          $a0, 0x108($s1)
    ctx->pc = 0x366e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x366e40: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x366e40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x366e44: 0x3063ff7f  andi        $v1, $v1, 0xFF7F
    ctx->pc = 0x366e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65407);
    // 0x366e48: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x366e48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x366e4c: 0x0  nop
    ctx->pc = 0x366e4cu;
    // NOP
label_366e50:
    // 0x366e50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x366e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x366e54: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x366e54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x366e58: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x366E58u;
    {
        const bool branch_taken_0x366e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x366E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366E58u;
            // 0x366e5c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366e58) {
            ctx->pc = 0x366E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_366e10;
        }
    }
    ctx->pc = 0x366E60u;
    // 0x366e60: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x366e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x366e64: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x366e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x366e68: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x366E68u;
    {
        const bool branch_taken_0x366e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366e68) {
            ctx->pc = 0x366E7Cu;
            goto label_366e7c;
        }
    }
    ctx->pc = 0x366E70u;
    // 0x366e70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e74: 0xc0d9ba8  jal         func_366EA0
    ctx->pc = 0x366E74u;
    SET_GPR_U32(ctx, 31, 0x366E7Cu);
    ctx->pc = 0x366E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366E74u;
            // 0x366e78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x366EA0u;
    if (runtime->hasFunction(0x366EA0u)) {
        auto targetFn = runtime->lookupFunction(0x366EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366E7Cu; }
        if (ctx->pc != 0x366E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00366EA0_0x366ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366E7Cu; }
        if (ctx->pc != 0x366E7Cu) { return; }
    }
    ctx->pc = 0x366E7Cu;
label_366e7c:
    // 0x366e7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x366e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_366e80:
    // 0x366e80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x366e80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366e84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x366e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366e88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x366e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x366E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366E8Cu;
            // 0x366e90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x366E94u;
    // 0x366e94: 0x0  nop
    ctx->pc = 0x366e94u;
    // NOP
    // 0x366e98: 0x0  nop
    ctx->pc = 0x366e98u;
    // NOP
    // 0x366e9c: 0x0  nop
    ctx->pc = 0x366e9cu;
    // NOP
}
