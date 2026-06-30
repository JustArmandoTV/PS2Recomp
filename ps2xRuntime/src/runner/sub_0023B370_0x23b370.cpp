#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023B370
// Address: 0x23b370 - 0x23b590
void sub_0023B370_0x23b370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B370_0x23b370");
#endif

    switch (ctx->pc) {
        case 0x23b3e4u: goto label_23b3e4;
        case 0x23b424u: goto label_23b424;
        case 0x23b4d4u: goto label_23b4d4;
        default: break;
    }

    ctx->pc = 0x23b370u;

    // 0x23b370: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23b370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23b374: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23b374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x23b378: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23b378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x23b37c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23b37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23b380: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23b380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23b384: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23b384u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b388: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23b388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23b38c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23b38cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23b390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23b394: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23b394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23b398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23b39c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x23b39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b3a0: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x23b3a0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23b3a4: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x23b3a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x23b3a8: 0x2258021  addu        $s0, $s1, $a1
    ctx->pc = 0x23b3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x23b3ac: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x23b3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x23b3b0: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x23b3b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x23b3b4: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x23B3B4u;
    {
        const bool branch_taken_0x23b3b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B3B4u;
            // 0x23b3b8: 0xb3a823  subu        $s5, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3b4) {
            ctx->pc = 0x23B3E4u;
            goto label_23b3e4;
        }
    }
    ctx->pc = 0x23B3BCu;
    // 0x23b3bc: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x23b3bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x23b3c0: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23B3C0u;
    {
        const bool branch_taken_0x23b3c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b3c0) {
            ctx->pc = 0x23B3C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B3C0u;
            // 0x23b3c4: 0x1318c0  sll         $v1, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B3E8u;
            goto label_23b3e8;
        }
    }
    ctx->pc = 0x23B3C8u;
    // 0x23b3c8: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x23b3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23b3cc: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x23b3ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x23b3d0: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23B3D0u;
    {
        const bool branch_taken_0x23b3d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b3d0) {
            ctx->pc = 0x23B3D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B3D0u;
            // 0x23b3d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B3D8u;
            goto label_23b3d8;
        }
    }
    ctx->pc = 0x23B3D8u;
label_23b3d8:
    // 0x23b3d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23b3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b3dc: 0xc0a763c  jal         func_29D8F0
    ctx->pc = 0x23B3DCu;
    SET_GPR_U32(ctx, 31, 0x23B3E4u);
    ctx->pc = 0x23B3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B3DCu;
            // 0x23b3e0: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B3E4u; }
        if (ctx->pc != 0x23B3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D8F0_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B3E4u; }
        if (ctx->pc != 0x23B3E4u) { return; }
    }
    ctx->pc = 0x23B3E4u;
label_23b3e4:
    // 0x23b3e4: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x23b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_23b3e8:
    // 0x23b3e8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x23b3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23b3ec: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x23b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x23b3f0: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x23b3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x23b3f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23b3f8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x23b3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x23b3fc: 0x26a4ffff  addiu       $a0, $s5, -0x1
    ctx->pc = 0x23b3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x23b400: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x23b400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x23b404: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x23b404u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23b408: 0x4800029  bltz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x23B408u;
    {
        const bool branch_taken_0x23b408 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23B40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B408u;
            // 0x23b40c: 0xe53021  addu        $a2, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b408) {
            ctx->pc = 0x23B4B0u;
            goto label_23b4b0;
        }
    }
    ctx->pc = 0x23B410u;
    // 0x23b410: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x23b410u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23b414: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x23b414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x23b418: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x23b418u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23b41c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x23b41cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x23b420: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x23b420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_23b424:
    // 0x23b424: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x23b424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23b428: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23b428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23b42c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x23b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x23b430: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x23b430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b434: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x23b434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b438: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x23b438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x23b43c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x23b43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x23b440: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x23b440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x23b444: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x23b444u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x23b448: 0x94e50010  lhu         $a1, 0x10($a3)
    ctx->pc = 0x23b448u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x23b44c: 0xa4c50010  sh          $a1, 0x10($a2)
    ctx->pc = 0x23b44cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 5));
    // 0x23b450: 0x90e50012  lbu         $a1, 0x12($a3)
    ctx->pc = 0x23b450u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x23b454: 0xa0c50012  sb          $a1, 0x12($a2)
    ctx->pc = 0x23b454u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 18), (uint8_t)GPR_U32(ctx, 5));
    // 0x23b458: 0x90e50013  lbu         $a1, 0x13($a3)
    ctx->pc = 0x23b458u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 19)));
    // 0x23b45c: 0xa0c50013  sb          $a1, 0x13($a2)
    ctx->pc = 0x23b45cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 19), (uint8_t)GPR_U32(ctx, 5));
    // 0x23b460: 0x94e50014  lhu         $a1, 0x14($a3)
    ctx->pc = 0x23b460u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x23b464: 0xa4c50014  sh          $a1, 0x14($a2)
    ctx->pc = 0x23b464u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 5));
    // 0x23b468: 0x94e50016  lhu         $a1, 0x16($a3)
    ctx->pc = 0x23b468u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 22)));
    // 0x23b46c: 0xa4c50016  sh          $a1, 0x16($a2)
    ctx->pc = 0x23b46cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 22), (uint16_t)GPR_U32(ctx, 5));
    // 0x23b470: 0x94e50018  lhu         $a1, 0x18($a3)
    ctx->pc = 0x23b470u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x23b474: 0xa4c50018  sh          $a1, 0x18($a2)
    ctx->pc = 0x23b474u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 5));
    // 0x23b478: 0x90e5001a  lbu         $a1, 0x1A($a3)
    ctx->pc = 0x23b478u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x23b47c: 0xa0c5001a  sb          $a1, 0x1A($a2)
    ctx->pc = 0x23b47cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 5));
    // 0x23b480: 0x90e5001b  lbu         $a1, 0x1B($a3)
    ctx->pc = 0x23b480u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 27)));
    // 0x23b484: 0xa0c5001b  sb          $a1, 0x1B($a2)
    ctx->pc = 0x23b484u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 27), (uint8_t)GPR_U32(ctx, 5));
    // 0x23b488: 0x8ce5001c  lw          $a1, 0x1C($a3)
    ctx->pc = 0x23b488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x23b48c: 0xacc5001c  sw          $a1, 0x1C($a2)
    ctx->pc = 0x23b48cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 5));
    // 0x23b490: 0x94e50020  lhu         $a1, 0x20($a3)
    ctx->pc = 0x23b490u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x23b494: 0xa4c50020  sh          $a1, 0x20($a2)
    ctx->pc = 0x23b494u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23b498: 0x94e50022  lhu         $a1, 0x22($a3)
    ctx->pc = 0x23b498u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 34)));
    // 0x23b49c: 0xa4c50022  sh          $a1, 0x22($a2)
    ctx->pc = 0x23b49cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 34), (uint16_t)GPR_U32(ctx, 5));
    // 0x23b4a0: 0x24e7ffdc  addiu       $a3, $a3, -0x24
    ctx->pc = 0x23b4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967260));
    // 0x23b4a4: 0x481ffdf  bgez        $a0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x23B4A4u;
    {
        const bool branch_taken_0x23b4a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x23B4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B4A4u;
            // 0x23b4a8: 0x24c6ffdc  addiu       $a2, $a2, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4a4) {
            ctx->pc = 0x23B424u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23b424;
        }
    }
    ctx->pc = 0x23B4ACu;
    // 0x23b4ac: 0x0  nop
    ctx->pc = 0x23b4acu;
    // NOP
label_23b4b0:
    // 0x23b4b0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x23b4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23b4b4: 0x2624ffff  addiu       $a0, $s1, -0x1
    ctx->pc = 0x23b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x23b4b8: 0x4800029  bltz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x23B4B8u;
    {
        const bool branch_taken_0x23b4b8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23B4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B4B8u;
            // 0x23b4bc: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4b8) {
            ctx->pc = 0x23B560u;
            goto label_23b560;
        }
    }
    ctx->pc = 0x23B4C0u;
    // 0x23b4c0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x23b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23b4c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23b4c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23b4cc: 0x2433021  addu        $a2, $s2, $v1
    ctx->pc = 0x23b4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x23b4d0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23b4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_23b4d4:
    // 0x23b4d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x23b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23b4d8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23b4dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x23b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x23b4e0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x23b4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b4e4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x23b4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b4e8: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x23b4e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x23b4ec: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x23b4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x23b4f0: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x23b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x23b4f4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x23b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x23b4f8: 0x94c30010  lhu         $v1, 0x10($a2)
    ctx->pc = 0x23b4f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x23b4fc: 0xa4a30010  sh          $v1, 0x10($a1)
    ctx->pc = 0x23b4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x23b500: 0x90c30012  lbu         $v1, 0x12($a2)
    ctx->pc = 0x23b500u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x23b504: 0xa0a30012  sb          $v1, 0x12($a1)
    ctx->pc = 0x23b504u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x23b508: 0x90c30013  lbu         $v1, 0x13($a2)
    ctx->pc = 0x23b508u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 19)));
    // 0x23b50c: 0xa0a30013  sb          $v1, 0x13($a1)
    ctx->pc = 0x23b50cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x23b510: 0x94c30014  lhu         $v1, 0x14($a2)
    ctx->pc = 0x23b510u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x23b514: 0xa4a30014  sh          $v1, 0x14($a1)
    ctx->pc = 0x23b514u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x23b518: 0x94c30016  lhu         $v1, 0x16($a2)
    ctx->pc = 0x23b518u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x23b51c: 0xa4a30016  sh          $v1, 0x16($a1)
    ctx->pc = 0x23b51cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x23b520: 0x94c30018  lhu         $v1, 0x18($a2)
    ctx->pc = 0x23b520u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x23b524: 0xa4a30018  sh          $v1, 0x18($a1)
    ctx->pc = 0x23b524u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x23b528: 0x90c3001a  lbu         $v1, 0x1A($a2)
    ctx->pc = 0x23b528u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x23b52c: 0xa0a3001a  sb          $v1, 0x1A($a1)
    ctx->pc = 0x23b52cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x23b530: 0x90c3001b  lbu         $v1, 0x1B($a2)
    ctx->pc = 0x23b530u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 27)));
    // 0x23b534: 0xa0a3001b  sb          $v1, 0x1B($a1)
    ctx->pc = 0x23b534u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 27), (uint8_t)GPR_U32(ctx, 3));
    // 0x23b538: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x23b538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x23b53c: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x23b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x23b540: 0x94c30020  lhu         $v1, 0x20($a2)
    ctx->pc = 0x23b540u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x23b544: 0xa4a30020  sh          $v1, 0x20($a1)
    ctx->pc = 0x23b544u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x23b548: 0x94c30022  lhu         $v1, 0x22($a2)
    ctx->pc = 0x23b548u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 34)));
    // 0x23b54c: 0xa4a30022  sh          $v1, 0x22($a1)
    ctx->pc = 0x23b54cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x23b550: 0x24c6ffdc  addiu       $a2, $a2, -0x24
    ctx->pc = 0x23b550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967260));
    // 0x23b554: 0x481ffdf  bgez        $a0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x23B554u;
    {
        const bool branch_taken_0x23b554 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x23B558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B554u;
            // 0x23b558: 0x24a5ffdc  addiu       $a1, $a1, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b554) {
            ctx->pc = 0x23B4D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23b4d4;
        }
    }
    ctx->pc = 0x23B55Cu;
    // 0x23b55c: 0x0  nop
    ctx->pc = 0x23b55cu;
    // NOP
label_23b560:
    // 0x23b560: 0xa6900004  sh          $s0, 0x4($s4)
    ctx->pc = 0x23b560u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x23b564: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23b564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23b568: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23b568u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23b56c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23b56cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23b570: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23b570u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b574: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23b574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23b578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b57c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23b57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b580: 0x3e00008  jr          $ra
    ctx->pc = 0x23B580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B580u;
            // 0x23b584: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B588u;
    // 0x23b588: 0x0  nop
    ctx->pc = 0x23b588u;
    // NOP
    // 0x23b58c: 0x0  nop
    ctx->pc = 0x23b58cu;
    // NOP
}
