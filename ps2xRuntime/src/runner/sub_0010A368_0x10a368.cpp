#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010A368
// Address: 0x10a368 - 0x10a5f8
void sub_0010A368_0x10a368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A368_0x10a368");
#endif

    switch (ctx->pc) {
        case 0x10a450u: goto label_10a450;
        case 0x10a460u: goto label_10a460;
        case 0x10a468u: goto label_10a468;
        case 0x10a4acu: goto label_10a4ac;
        case 0x10a4c0u: goto label_10a4c0;
        case 0x10a4e4u: goto label_10a4e4;
        case 0x10a528u: goto label_10a528;
        case 0x10a538u: goto label_10a538;
        case 0x10a560u: goto label_10a560;
        default: break;
    }

    ctx->pc = 0x10a368u;

    // 0x10a368: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10a368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10a36c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10a370: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x10a370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x10a374: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10a378: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10a378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10a37c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x10a37cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a380: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10a380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10a384: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x10a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x10a388: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x10a388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x10a38c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x10a38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x10a390: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x10a390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x10a394: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x10a394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10a398: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x10a398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x10a39c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10a39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10a3a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10a3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10a3a4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x10a3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a3a8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x10a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x10a3ac: 0x8c8400ec  lw          $a0, 0xEC($a0)
    ctx->pc = 0x10a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x10a3b0: 0x8cc50184  lw          $a1, 0x184($a2)
    ctx->pc = 0x10a3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 388)));
    // 0x10a3b4: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x10a3b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10a3b8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x10a3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10a3bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a3c0: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A3C0u;
    {
        const bool branch_taken_0x10a3c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10A3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A3C0u;
            // 0x10a3c4: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3c0) {
            ctx->pc = 0x10A3DCu;
            goto label_10a3dc;
        }
    }
    ctx->pc = 0x10A3C8u;
    // 0x10a3c8: 0x8cc400f4  lw          $a0, 0xF4($a2)
    ctx->pc = 0x10a3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 244)));
    // 0x10a3cc: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10A3CCu;
    {
        const bool branch_taken_0x10a3cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A3CCu;
            // 0x10a3d0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3cc) {
            ctx->pc = 0x10A414u;
            goto label_10a414;
        }
    }
    ctx->pc = 0x10A3D4u;
    // 0x10a3d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10A3D4u;
    {
        const bool branch_taken_0x10a3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A3D4u;
            // 0x10a3d8: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3d4) {
            ctx->pc = 0x10A3E8u;
            goto label_10a3e8;
        }
    }
    ctx->pc = 0x10A3DCu;
label_10a3dc:
    // 0x10a3dc: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x10a3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a3e0: 0x8ce300f4  lw          $v1, 0xF4($a3)
    ctx->pc = 0x10a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
    // 0x10a3e4: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x10a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_10a3e8:
    // 0x10a3e8: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x10a3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x10a3ec: 0x44a818  mult        $s5, $v0, $a0
    ctx->pc = 0x10a3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x10a3f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A3F0u;
    {
        const bool branch_taken_0x10a3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A3F0u;
            // 0x10a3f4: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3f0) {
            ctx->pc = 0x10A404u;
            goto label_10a404;
        }
    }
    ctx->pc = 0x10A3F8u;
    // 0x10a3f8: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x10a3f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x10a3fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10A3FCu;
    {
        const bool branch_taken_0x10a3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A3FCu;
            // 0x10a400: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3fc) {
            ctx->pc = 0x10A408u;
            goto label_10a408;
        }
    }
    ctx->pc = 0x10A404u;
label_10a404:
    // 0x10a404: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x10a404u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10a408:
    // 0x10a408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a40c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10A40Cu;
    {
        const bool branch_taken_0x10a40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A40Cu;
            // 0x10a410: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a40c) {
            ctx->pc = 0x10A43Cu;
            goto label_10a43c;
        }
    }
    ctx->pc = 0x10A414u;
label_10a414:
    // 0x10a414: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x10a414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x10a418: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x10a418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x10a41c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x10a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x10a420: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x10a420u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x10a424: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10a424u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10a428: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x10a428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x10a42c: 0x7045a818  mult1       $s5, $v0, $a1
    ctx->pc = 0x10a42cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x10a430: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10a430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a434: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x10a434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x10a438: 0x15a103  sra         $s4, $s5, 4
    ctx->pc = 0x10a438u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
label_10a43c:
    // 0x10a43c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x10a43cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10a440: 0x10c00061  beqz        $a2, . + 4 + (0x61 << 2)
    ctx->pc = 0x10A440u;
    {
        const bool branch_taken_0x10a440 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A440u;
            // 0x10a444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a440) {
            ctx->pc = 0x10A5C8u;
            goto label_10a5c8;
        }
    }
    ctx->pc = 0x10A448u;
    // 0x10a448: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x10a448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x10a44c: 0x0  nop
    ctx->pc = 0x10a44cu;
    // NOP
label_10a450:
    // 0x10a450: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x10a450u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a454: 0x18c0004f  blez        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x10A454u;
    {
        const bool branch_taken_0x10a454 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x10A458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A454u;
            // 0x10a458: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a454) {
            ctx->pc = 0x10A594u;
            goto label_10a594;
        }
    }
    ctx->pc = 0x10A45Cu;
    // 0x10a45c: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x10a45cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_10a460:
    // 0x10a460: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10A460u;
    SET_GPR_U32(ctx, 31, 0x10A468u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A468u; }
        if (ctx->pc != 0x10A468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A468u; }
        if (ctx->pc != 0x10A468u) { return; }
    }
    ctx->pc = 0x10A468u;
label_10a468:
    // 0x10a468: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10a468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10a46c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10a46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10a470: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x10a470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x10a474: 0x34a5d410  ori         $a1, $a1, 0xD410
    ctx->pc = 0x10a474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54288);
    // 0x10a478: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10a478u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x10a47c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10a47cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10a480: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x10a480u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x10a484: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x10a484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x10a488: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10a488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10a48c: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x10a48cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x10a490: 0x34a5d400  ori         $a1, $a1, 0xD400
    ctx->pc = 0x10a490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54272);
    // 0x10a494: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x10a494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10a498: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10a498u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10a49c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A49Cu;
    {
        const bool branch_taken_0x10a49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A49Cu;
            // 0x10a4a0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a49c) {
            ctx->pc = 0x10A4B0u;
            goto label_10a4b0;
        }
    }
    ctx->pc = 0x10A4A4u;
    // 0x10a4a4: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10A4A4u;
    SET_GPR_U32(ctx, 31, 0x10A4ACu);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A4ACu; }
        if (ctx->pc != 0x10A4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A4ACu; }
        if (ctx->pc != 0x10A4ACu) { return; }
    }
    ctx->pc = 0x10A4ACu;
label_10a4ac:
    // 0x10a4ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_10a4b0:
    // 0x10a4b0: 0x2559821  addu        $s3, $s2, $s5
    ctx->pc = 0x10a4b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x10a4b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10a4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10a4b8: 0x23e9021  addu        $s2, $s1, $fp
    ctx->pc = 0x10a4b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x10a4bc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x10a4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_10a4c0:
    // 0x10a4c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10a4c4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10a4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10a4c8: 0x0  nop
    ctx->pc = 0x10a4c8u;
    // NOP
    // 0x10a4cc: 0x0  nop
    ctx->pc = 0x10a4ccu;
    // NOP
    // 0x10a4d0: 0x0  nop
    ctx->pc = 0x10a4d0u;
    // NOP
    // 0x10a4d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10A4D4u;
    {
        const bool branch_taken_0x10a4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a4d4) {
            ctx->pc = 0x10A4C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10a4c0;
        }
    }
    ctx->pc = 0x10A4DCu;
    // 0x10a4dc: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10A4DCu;
    SET_GPR_U32(ctx, 31, 0x10A4E4u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A4E4u; }
        if (ctx->pc != 0x10A4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A4E4u; }
        if (ctx->pc != 0x10A4E4u) { return; }
    }
    ctx->pc = 0x10A4E4u;
label_10a4e4:
    // 0x10a4e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10a4e8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10a4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10a4ec: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x10a4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x10a4f0: 0x34a5d010  ori         $a1, $a1, 0xD010
    ctx->pc = 0x10a4f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53264);
    // 0x10a4f4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10a4f4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x10a4f8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10a4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10a4fc: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x10a4fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x10a500: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x10a500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x10a504: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10a504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10a508: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x10a508u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x10a50c: 0x34a5d000  ori         $a1, $a1, 0xD000
    ctx->pc = 0x10a50cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53248);
    // 0x10a510: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x10a510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10a514: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10a514u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10a518: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A518u;
    {
        const bool branch_taken_0x10a518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A518u;
            // 0x10a51c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a518) {
            ctx->pc = 0x10A52Cu;
            goto label_10a52c;
        }
    }
    ctx->pc = 0x10A520u;
    // 0x10a520: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10A520u;
    SET_GPR_U32(ctx, 31, 0x10A528u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A528u; }
        if (ctx->pc != 0x10A528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A528u; }
        if (ctx->pc != 0x10A528u) { return; }
    }
    ctx->pc = 0x10A528u;
label_10a528:
    // 0x10a528: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10a528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_10a52c:
    // 0x10a52c: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x10a52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x10a530: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x10a530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x10a534: 0x0  nop
    ctx->pc = 0x10a534u;
    // NOP
label_10a538:
    // 0x10a538: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10a538u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10a53c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10a53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10a540: 0x0  nop
    ctx->pc = 0x10a540u;
    // NOP
    // 0x10a544: 0x0  nop
    ctx->pc = 0x10a544u;
    // NOP
    // 0x10a548: 0x0  nop
    ctx->pc = 0x10a548u;
    // NOP
    // 0x10a54c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10A54Cu;
    {
        const bool branch_taken_0x10a54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a54c) {
            ctx->pc = 0x10A538u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10a538;
        }
    }
    ctx->pc = 0x10A554u;
    // 0x10a554: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10a554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10a558: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x10a558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x10a55c: 0x0  nop
    ctx->pc = 0x10a55cu;
    // NOP
label_10a560:
    // 0x10a560: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10a560u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10a564: 0x0  nop
    ctx->pc = 0x10a564u;
    // NOP
    // 0x10a568: 0x0  nop
    ctx->pc = 0x10a568u;
    // NOP
    // 0x10a56c: 0x0  nop
    ctx->pc = 0x10a56cu;
    // NOP
    // 0x10a570: 0x0  nop
    ctx->pc = 0x10a570u;
    // NOP
    // 0x10a574: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10A574u;
    {
        const bool branch_taken_0x10a574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a574) {
            ctx->pc = 0x10A560u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10a560;
        }
    }
    ctx->pc = 0x10A57Cu;
    // 0x10a57c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x10a57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a580: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x10a580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x10a584: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x10A584u;
    {
        const bool branch_taken_0x10a584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A584u;
            // 0x10a588: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a584) {
            ctx->pc = 0x10A460u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10a460;
        }
    }
    ctx->pc = 0x10A58Cu;
    // 0x10a58c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10A58Cu;
    {
        const bool branch_taken_0x10a58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A58Cu;
            // 0x10a590: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a58c) {
            ctx->pc = 0x10A59Cu;
            goto label_10a59c;
        }
    }
    ctx->pc = 0x10A594u;
label_10a594:
    // 0x10a594: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x10a594u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10a598: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x10a598u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10a59c:
    // 0x10a59c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x10a59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5a0: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x10a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x10a5a4: 0x8ce200f8  lw          $v0, 0xF8($a3)
    ctx->pc = 0x10a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 248)));
    // 0x10a5a8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x10a5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10a5ac: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x10a5acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x10a5b0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x10a5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a5b4: 0xe00013  mtlo        $a3
    ctx->pc = 0x10a5b4u;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x10a5b8: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x10a5b8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x10a5bc: 0x3812  mflo        $a3
    ctx->pc = 0x10a5bcu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x10a5c0: 0x1480ffa3  bnez        $a0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x10A5C0u;
    {
        const bool branch_taken_0x10a5c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A5C0u;
            // 0x10a5c4: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a5c0) {
            ctx->pc = 0x10A450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10a450;
        }
    }
    ctx->pc = 0x10A5C8u;
label_10a5c8:
    // 0x10a5c8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x10a5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10a5cc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x10a5ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10a5d0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x10a5d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10a5d4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x10a5d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10a5d8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x10a5d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10a5dc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x10a5dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a5e0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x10a5e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a5e4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10a5e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a5e8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10a5e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a5ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10a5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x10A5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A5F0u;
            // 0x10a5f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A5F8u;
}
