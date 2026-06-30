#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028C300
// Address: 0x28c300 - 0x28c4e0
void sub_0028C300_0x28c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C300_0x28c300");
#endif

    switch (ctx->pc) {
        case 0x28c36cu: goto label_28c36c;
        case 0x28c3b8u: goto label_28c3b8;
        case 0x28c3f8u: goto label_28c3f8;
        case 0x28c470u: goto label_28c470;
        case 0x28c4acu: goto label_28c4ac;
        default: break;
    }

    ctx->pc = 0x28c300u;

    // 0x28c300: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28c304: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x28c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28c308: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28c308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28c30c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28c30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28c310: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28c310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28c314: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28c314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28c318: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28c318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28c31c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x28c31cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c320: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28c320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28c324: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28c324u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c328: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28c328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28c32c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28c32cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c330: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28c330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28c334: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28c338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28c33c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x28c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x28c340: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28C340u;
    {
        const bool branch_taken_0x28c340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28C344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C340u;
            // 0x28c344: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c340) {
            ctx->pc = 0x28C378u;
            goto label_28c378;
        }
    }
    ctx->pc = 0x28C348u;
    // 0x28c348: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x28c348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28c34c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x28c34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x28c350: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28C350u;
    {
        const bool branch_taken_0x28c350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c350) {
            ctx->pc = 0x28C378u;
            goto label_28c378;
        }
    }
    ctx->pc = 0x28C358u;
    // 0x28c358: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x28c358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x28c35c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28c35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c360: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28c360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c364: 0xc0a05f4  jal         func_2817D0
    ctx->pc = 0x28C364u;
    SET_GPR_U32(ctx, 31, 0x28C36Cu);
    ctx->pc = 0x28C368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C364u;
            // 0x28c368: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2817D0u;
    if (runtime->hasFunction(0x2817D0u)) {
        auto targetFn = runtime->lookupFunction(0x2817D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C36Cu; }
        if (ctx->pc != 0x28C36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002817D0_0x2817d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C36Cu; }
        if (ctx->pc != 0x28C36Cu) { return; }
    }
    ctx->pc = 0x28C36Cu;
label_28c36c:
    // 0x28c36c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x28C36Cu;
    {
        const bool branch_taken_0x28c36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c36c) {
            ctx->pc = 0x28C4B0u;
            goto label_28c4b0;
        }
    }
    ctx->pc = 0x28C374u;
    // 0x28c374: 0x0  nop
    ctx->pc = 0x28c374u;
    // NOP
label_28c378:
    // 0x28c378: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x28c378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x28c37c: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x28c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x28c380: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28c380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28c384: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28c384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28c388: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x28c388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x28c38c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28c390: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x28c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x28c394: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C394u;
    {
        const bool branch_taken_0x28c394 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28C398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C394u;
            // 0x28c398: 0x2f083  sra         $fp, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c394) {
            ctx->pc = 0x28C3A4u;
            goto label_28c3a4;
        }
    }
    ctx->pc = 0x28C39Cu;
    // 0x28c39c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x28c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x28c3a0: 0x2f083  sra         $fp, $v0, 2
    ctx->pc = 0x28c3a0u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 2));
label_28c3a4:
    // 0x28c3a4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x28c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x28c3a8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28c3a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28c3ac: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x28C3ACu;
    {
        const bool branch_taken_0x28c3ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3ACu;
            // 0x28c3b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3ac) {
            ctx->pc = 0x28C458u;
            goto label_28c458;
        }
    }
    ctx->pc = 0x28C3B4u;
    // 0x28c3b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28c3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c3b8:
    // 0x28c3b8: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x28c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x28c3bc: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x28c3bcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c3c0: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x28c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x28c3c4: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x28c3c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28c3c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c3cc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x28c3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x28c3d0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x28c3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x28c3d4: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x28c3d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x28c3d8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x28C3D8u;
    {
        const bool branch_taken_0x28c3d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c3d8) {
            ctx->pc = 0x28C3F8u;
            goto label_28c3f8;
        }
    }
    ctx->pc = 0x28C3E0u;
    // 0x28c3e0: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x28c3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x28c3e4: 0x225082a  slt         $at, $s1, $a1
    ctx->pc = 0x28c3e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28c3e8: 0x221280a  movz        $a1, $s1, $at
    ctx->pc = 0x28c3e8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x28c3ec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x28c3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x28c3f0: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x28C3F0u;
    SET_GPR_U32(ctx, 31, 0x28C3F8u);
    ctx->pc = 0x28C3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3F0u;
            // 0x28c3f4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C3F8u; }
        if (ctx->pc != 0x28C3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C3F8u; }
        if (ctx->pc != 0x28C3F8u) { return; }
    }
    ctx->pc = 0x28C3F8u;
label_28c3f8:
    // 0x28c3f8: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x28c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x28c3fc: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x28c3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x28c400: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x28c400u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28c404: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x28c404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28c408: 0x172100  sll         $a0, $s7, 4
    ctx->pc = 0x28c408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x28c40c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x28c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28c410: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28c410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28c414: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28c414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28c418: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28c418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c41c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28c420: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x28c420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x28c424: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x28c424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28c428: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28c428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28c42c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x28c42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c430: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x28c430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28c434: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x28c434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28c438: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28c438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28c43c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c440: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28c440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x28c444: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x28c444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x28c448: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x28c448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28c44c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x28C44Cu;
    {
        const bool branch_taken_0x28c44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C44Cu;
            // 0x28c450: 0x21e8021  addu        $s0, $s0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c44c) {
            ctx->pc = 0x28C3B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28c3b8;
        }
    }
    ctx->pc = 0x28C454u;
    // 0x28c454: 0x0  nop
    ctx->pc = 0x28c454u;
    // NOP
label_28c458:
    // 0x28c458: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x28c458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x28c45c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x28c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28c460: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28c460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c464: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28c464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c468: 0xc0a05f4  jal         func_2817D0
    ctx->pc = 0x28C468u;
    SET_GPR_U32(ctx, 31, 0x28C470u);
    ctx->pc = 0x28C46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C468u;
            // 0x28c46c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2817D0u;
    if (runtime->hasFunction(0x2817D0u)) {
        auto targetFn = runtime->lookupFunction(0x2817D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C470u; }
        if (ctx->pc != 0x28C470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002817D0_0x2817d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C470u; }
        if (ctx->pc != 0x28C470u) { return; }
    }
    ctx->pc = 0x28C470u;
label_28c470:
    // 0x28c470: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x28c470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x28c474: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28c474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c478: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28c478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28c47c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x28c47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x28c480: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x28C480u;
    {
        const bool branch_taken_0x28c480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c480) {
            ctx->pc = 0x28C4B0u;
            goto label_28c4b0;
        }
    }
    ctx->pc = 0x28C488u;
    // 0x28c488: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x28c488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x28c48c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x28c48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x28c490: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x28c490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x28c494: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x28c494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x28c498: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x28c498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28c49c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x28c49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x28c4a0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x28c4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x28c4a4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x28C4A4u;
    SET_GPR_U32(ctx, 31, 0x28C4ACu);
    ctx->pc = 0x28C4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C4A4u;
            // 0x28c4a8: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C4ACu; }
        if (ctx->pc != 0x28C4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C4ACu; }
        if (ctx->pc != 0x28C4ACu) { return; }
    }
    ctx->pc = 0x28C4ACu;
label_28c4ac:
    // 0x28c4ac: 0x0  nop
    ctx->pc = 0x28c4acu;
    // NOP
label_28c4b0:
    // 0x28c4b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28c4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28c4b4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28c4b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28c4b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28c4b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28c4bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28c4bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28c4c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28c4c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28c4c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28c4c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c4c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28c4c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c4cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28c4ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c4d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c4d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x28C4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C4D8u;
            // 0x28c4dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C4E0u;
}
