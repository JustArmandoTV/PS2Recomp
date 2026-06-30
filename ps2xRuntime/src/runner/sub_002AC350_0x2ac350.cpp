#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AC350
// Address: 0x2ac350 - 0x2ac7c0
void sub_002AC350_0x2ac350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC350_0x2ac350");
#endif

    switch (ctx->pc) {
        case 0x2ac3f4u: goto label_2ac3f4;
        case 0x2ac3fcu: goto label_2ac3fc;
        case 0x2ac424u: goto label_2ac424;
        case 0x2ac448u: goto label_2ac448;
        case 0x2ac450u: goto label_2ac450;
        case 0x2ac488u: goto label_2ac488;
        case 0x2ac520u: goto label_2ac520;
        case 0x2ac534u: goto label_2ac534;
        case 0x2ac544u: goto label_2ac544;
        case 0x2ac580u: goto label_2ac580;
        case 0x2ac5a8u: goto label_2ac5a8;
        case 0x2ac618u: goto label_2ac618;
        case 0x2ac638u: goto label_2ac638;
        case 0x2ac64cu: goto label_2ac64c;
        case 0x2ac684u: goto label_2ac684;
        case 0x2ac6a8u: goto label_2ac6a8;
        case 0x2ac6b0u: goto label_2ac6b0;
        case 0x2ac6c4u: goto label_2ac6c4;
        case 0x2ac730u: goto label_2ac730;
        default: break;
    }

    ctx->pc = 0x2ac350u;

    // 0x2ac350: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2ac350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2ac354: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ac354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ac358: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ac358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ac35c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ac35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ac360: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ac360u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac364: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ac364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ac368: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ac368u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac36c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ac36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ac370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ac370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ac374: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x2ac374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ac378: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2ac378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ac37c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2ac37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ac380: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC380u;
    {
        const bool branch_taken_0x2ac380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC380u;
            // 0x2ac384: 0xc59021  addu        $s2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac380) {
            ctx->pc = 0x2AC390u;
            goto label_2ac390;
        }
    }
    ctx->pc = 0x2AC388u;
    // 0x2ac388: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC388u;
    {
        const bool branch_taken_0x2ac388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC388u;
            // 0x2ac38c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac388) {
            ctx->pc = 0x2AC398u;
            goto label_2ac398;
        }
    }
    ctx->pc = 0x2AC390u;
label_2ac390:
    // 0x2ac390: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ac390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ac394: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ac394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2ac398:
    // 0x2ac398: 0x564300cb  bnel        $s2, $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x2AC398u;
    {
        const bool branch_taken_0x2ac398 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ac398) {
            ctx->pc = 0x2AC39Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC398u;
            // 0x2ac39c: 0x8e870008  lw          $a3, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC6C8u;
            goto label_2ac6c8;
        }
    }
    ctx->pc = 0x2AC3A0u;
    // 0x2ac3a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ac3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ac3a4: 0x80420c68  lb          $v0, 0xC68($v0)
    ctx->pc = 0x2ac3a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3176)));
    // 0x2ac3a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC3A8u;
    {
        const bool branch_taken_0x2ac3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac3a8) {
            ctx->pc = 0x2AC3C8u;
            goto label_2ac3c8;
        }
    }
    ctx->pc = 0x2AC3B0u;
    // 0x2ac3b0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2ac3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2ac3b4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2ac3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2ac3b8: 0xac431068  sw          $v1, 0x1068($v0)
    ctx->pc = 0x2ac3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4200), GPR_U32(ctx, 3));
    // 0x2ac3bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ac3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac3c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ac3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ac3c4: 0xa0430c68  sb          $v1, 0xC68($v0)
    ctx->pc = 0x2ac3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3176), (uint8_t)GPR_U32(ctx, 3));
label_2ac3c8:
    // 0x2ac3c8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2ac3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2ac3cc: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x2ac3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2ac3d0: 0x8c421068  lw          $v0, 0x1068($v0)
    ctx->pc = 0x2ac3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4200)));
    // 0x2ac3d4: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AC3D4u;
    {
        const bool branch_taken_0x2ac3d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ac3d4) {
            ctx->pc = 0x2AC3D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC3D4u;
            // 0x2ac3d8: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC400u;
            goto label_2ac400;
        }
    }
    ctx->pc = 0x2AC3DCu;
    // 0x2ac3dc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2ac3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2ac3e0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2ac3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2ac3e4: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2ac3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2ac3e8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2ac3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ac3ec: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2AC3ECu;
    SET_GPR_U32(ctx, 31, 0x2AC3F4u);
    ctx->pc = 0x2AC3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC3ECu;
            // 0x2ac3f0: 0x24a51070  addiu       $a1, $a1, 0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC3F4u; }
        if (ctx->pc != 0x2AC3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC3F4u; }
        if (ctx->pc != 0x2AC3F4u) { return; }
    }
    ctx->pc = 0x2AC3F4u;
label_2ac3f4:
    // 0x2ac3f4: 0xc04981a  jal         func_126068
    ctx->pc = 0x2AC3F4u;
    SET_GPR_U32(ctx, 31, 0x2AC3FCu);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC3FCu; }
        if (ctx->pc != 0x2AC3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC3FCu; }
        if (ctx->pc != 0x2AC3FCu) { return; }
    }
    ctx->pc = 0x2AC3FCu;
label_2ac3fc:
    // 0x2ac3fc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2ac3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ac400:
    // 0x2ac400: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC400u;
    {
        const bool branch_taken_0x2ac400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC400u;
            // 0x2ac404: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac400) {
            ctx->pc = 0x2AC410u;
            goto label_2ac410;
        }
    }
    ctx->pc = 0x2AC408u;
    // 0x2ac408: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AC408u;
    {
        const bool branch_taken_0x2ac408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC408u;
            // 0x2ac40c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac408) {
            ctx->pc = 0x2AC414u;
            goto label_2ac414;
        }
    }
    ctx->pc = 0x2AC410u;
label_2ac410:
    // 0x2ac410: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ac410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ac414:
    // 0x2ac414: 0x54620090  bnel        $v1, $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x2AC414u;
    {
        const bool branch_taken_0x2ac414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ac414) {
            ctx->pc = 0x2AC418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC414u;
            // 0x2ac418: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC658u;
            goto label_2ac658;
        }
    }
    ctx->pc = 0x2AC41Cu;
    // 0x2ac41c: 0xc040180  jal         func_100600
    ctx->pc = 0x2AC41Cu;
    SET_GPR_U32(ctx, 31, 0x2AC424u);
    ctx->pc = 0x2AC420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC41Cu;
            // 0x2ac420: 0x24040320  addiu       $a0, $zero, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC424u; }
        if (ctx->pc != 0x2AC424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC424u; }
        if (ctx->pc != 0x2AC424u) { return; }
    }
    ctx->pc = 0x2AC424u;
label_2ac424:
    // 0x2ac424: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ac424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac428: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2AC428u;
    {
        const bool branch_taken_0x2ac428 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac428) {
            ctx->pc = 0x2AC42Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC428u;
            // 0x2ac42c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC454u;
            goto label_2ac454;
        }
    }
    ctx->pc = 0x2AC430u;
    // 0x2ac430: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2ac430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2ac434: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2ac434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2ac438: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2ac438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2ac43c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2ac43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ac440: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2AC440u;
    SET_GPR_U32(ctx, 31, 0x2AC448u);
    ctx->pc = 0x2AC444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC440u;
            // 0x2ac444: 0x24a51110  addiu       $a1, $a1, 0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC448u; }
        if (ctx->pc != 0x2AC448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC448u; }
        if (ctx->pc != 0x2AC448u) { return; }
    }
    ctx->pc = 0x2AC448u;
label_2ac448:
    // 0x2ac448: 0xc04981a  jal         func_126068
    ctx->pc = 0x2AC448u;
    SET_GPR_U32(ctx, 31, 0x2AC450u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC450u; }
        if (ctx->pc != 0x2AC450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC450u; }
        if (ctx->pc != 0x2AC450u) { return; }
    }
    ctx->pc = 0x2AC450u;
label_2ac450:
    // 0x2ac450: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2ac450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ac454:
    // 0x2ac454: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x2ac454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x2ac458: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2ac458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x2ac45c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2ac45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ac460: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2ac460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2ac464: 0x27a600ac  addiu       $a2, $sp, 0xAC
    ctx->pc = 0x2ac464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2ac468: 0xafb40090  sw          $s4, 0x90($sp)
    ctx->pc = 0x2ac468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 20));
    // 0x2ac46c: 0xafb00098  sw          $s0, 0x98($sp)
    ctx->pc = 0x2ac46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 16));
    // 0x2ac470: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2ac470u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ac474: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2ac474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2ac478: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2ac478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2ac47c: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2ac47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x2ac480: 0xc0ab45c  jal         func_2AD170
    ctx->pc = 0x2AC480u;
    SET_GPR_U32(ctx, 31, 0x2AC488u);
    ctx->pc = 0x2AC484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC480u;
            // 0x2ac484: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD170u;
    if (runtime->hasFunction(0x2AD170u)) {
        auto targetFn = runtime->lookupFunction(0x2AD170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC488u; }
        if (ctx->pc != 0x2AC488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD170_0x2ad170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC488u; }
        if (ctx->pc != 0x2AC488u) { return; }
    }
    ctx->pc = 0x2AC488u;
label_2ac488:
    // 0x2ac488: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2ac488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2ac48c: 0x50800027  beql        $a0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2AC48Cu;
    {
        const bool branch_taken_0x2ac48c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac48c) {
            ctx->pc = 0x2AC490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC48Cu;
            // 0x2ac490: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC52Cu;
            goto label_2ac52c;
        }
    }
    ctx->pc = 0x2AC494u;
    // 0x2ac494: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2ac494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ac498: 0x5054002b  beql        $v0, $s4, . + 4 + (0x2B << 2)
    ctx->pc = 0x2AC498u;
    {
        const bool branch_taken_0x2ac498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2ac498) {
            ctx->pc = 0x2AC49Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC498u;
            // 0x2ac49c: 0x8fa70088  lw          $a3, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC548u;
            goto label_2ac548;
        }
    }
    ctx->pc = 0x2AC4A0u;
    // 0x2ac4a0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2ac4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ac4a4: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC4A4u;
    {
        const bool branch_taken_0x2ac4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac4a4) {
            ctx->pc = 0x2AC4A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC4A4u;
            // 0x2ac4a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC4C8u;
            goto label_2ac4c8;
        }
    }
    ctx->pc = 0x2AC4ACu;
    // 0x2ac4ac: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2ac4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2ac4b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ac4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ac4b4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2ac4b4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2ac4b8: 0x1010  mfhi        $v0
    ctx->pc = 0x2ac4b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2ac4bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC4BCu;
    {
        const bool branch_taken_0x2ac4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC4BCu;
            // 0x2ac4c0: 0x8e88000c  lw          $t0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac4bc) {
            ctx->pc = 0x2AC4CCu;
            goto label_2ac4cc;
        }
    }
    ctx->pc = 0x2AC4C4u;
    // 0x2ac4c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ac4c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ac4c8:
    // 0x2ac4c8: 0x8e88000c  lw          $t0, 0xC($s4)
    ctx->pc = 0x2ac4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2ac4cc:
    // 0x2ac4cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac4d0: 0x83a7009c  lb          $a3, 0x9C($sp)
    ctx->pc = 0x2ac4d0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2ac4d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2ac4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ac4d8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2ac4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ac4dc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2ac4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ac4e0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2ac4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ac4e4: 0xafa80064  sw          $t0, 0x64($sp)
    ctx->pc = 0x2ac4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 8));
    // 0x2ac4e8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2ac4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x2ac4ec: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2ac4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2ac4f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac4f4: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x2ac4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ac4f8: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x2ac4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x2ac4fc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2ac4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ac500: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac504: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x2ac504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x2ac508: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2ac508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ac50c: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x2ac50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x2ac510: 0xafa80074  sw          $t0, 0x74($sp)
    ctx->pc = 0x2ac510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 8));
    // 0x2ac514: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2ac514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x2ac518: 0xc0ab320  jal         func_2ACC80
    ctx->pc = 0x2AC518u;
    SET_GPR_U32(ctx, 31, 0x2AC520u);
    ctx->pc = 0x2AC51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC518u;
            // 0x2ac51c: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACC80u;
    if (runtime->hasFunction(0x2ACC80u)) {
        auto targetFn = runtime->lookupFunction(0x2ACC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC520u; }
        if (ctx->pc != 0x2AC520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACC80_0x2acc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC520u; }
        if (ctx->pc != 0x2AC520u) { return; }
    }
    ctx->pc = 0x2AC520u;
label_2ac520:
    // 0x2ac520: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC520u;
    {
        const bool branch_taken_0x2ac520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac520) {
            ctx->pc = 0x2AC544u;
            goto label_2ac544;
        }
    }
    ctx->pc = 0x2AC528u;
    // 0x2ac528: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2ac528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2ac52c:
    // 0x2ac52c: 0xc0ab408  jal         func_2AD020
    ctx->pc = 0x2AC52Cu;
    SET_GPR_U32(ctx, 31, 0x2AC534u);
    ctx->pc = 0x2AC530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC52Cu;
            // 0x2ac530: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD020u;
    if (runtime->hasFunction(0x2AD020u)) {
        auto targetFn = runtime->lookupFunction(0x2AD020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC534u; }
        if (ctx->pc != 0x2AC534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD020_0x2ad020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC534u; }
        if (ctx->pc != 0x2AC534u) { return; }
    }
    ctx->pc = 0x2AC534u;
label_2ac534:
    // 0x2ac534: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2ac534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ac538: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x2ac538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2ac53c: 0xc0ab3a8  jal         func_2ACEA0
    ctx->pc = 0x2AC53Cu;
    SET_GPR_U32(ctx, 31, 0x2AC544u);
    ctx->pc = 0x2AC540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC53Cu;
            // 0x2ac540: 0xafa000a8  sw          $zero, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEA0u;
    if (runtime->hasFunction(0x2ACEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ACEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC544u; }
        if (ctx->pc != 0x2AC544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACEA0_0x2acea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC544u; }
        if (ctx->pc != 0x2AC544u) { return; }
    }
    ctx->pc = 0x2AC544u;
label_2ac544:
    // 0x2ac544: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x2ac544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2ac548:
    // 0x2ac548: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2ac548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ac54c: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x2ac54cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2ac550: 0x27a500a4  addiu       $a1, $sp, 0xA4
    ctx->pc = 0x2ac550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x2ac554: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2ac554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ac558: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x2ac558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2ac55c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x2ac55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2ac560: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2ac560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2ac564: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x2ac564u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x2ac568: 0x1810  mfhi        $v1
    ctx->pc = 0x2ac568u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ac56c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ac56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ac570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ac570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ac574: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2ac574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2ac578: 0xc0ab3a8  jal         func_2ACEA0
    ctx->pc = 0x2AC578u;
    SET_GPR_U32(ctx, 31, 0x2AC580u);
    ctx->pc = 0x2AC57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC578u;
            // 0x2ac57c: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEA0u;
    if (runtime->hasFunction(0x2ACEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ACEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC580u; }
        if (ctx->pc != 0x2AC580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACEA0_0x2acea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC580u; }
        if (ctx->pc != 0x2AC580u) { return; }
    }
    ctx->pc = 0x2AC580u;
label_2ac580:
    // 0x2ac580: 0x52000022  beql        $s0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2AC580u;
    {
        const bool branch_taken_0x2ac580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac580) {
            ctx->pc = 0x2AC584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC580u;
            // 0x2ac584: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC60Cu;
            goto label_2ac60c;
        }
    }
    ctx->pc = 0x2AC588u;
    // 0x2ac588: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ac588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ac58c: 0x26660008  addiu       $a2, $s3, 0x8
    ctx->pc = 0x2ac58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2ac590: 0x2442fd88  addiu       $v0, $v0, -0x278
    ctx->pc = 0x2ac590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966664));
    // 0x2ac594: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x2ac594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2ac598: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ac598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ac59c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2ac59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ac5a0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2ac5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2ac5a4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2ac5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2ac5a8:
    // 0x2ac5a8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2ac5a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ac5ac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2ac5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2ac5b0: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x2ac5b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2ac5b4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2ac5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac5b8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2ac5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2ac5bc: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x2ac5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ac5c0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AC5C0u;
    {
        const bool branch_taken_0x2ac5c0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2AC5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC5C0u;
            // 0x2ac5c4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac5c0) {
            ctx->pc = 0x2AC5A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac5a8;
        }
    }
    ctx->pc = 0x2AC5C8u;
    // 0x2ac5c8: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x2ac5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2ac5cc: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2ac5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2ac5d0: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x2ac5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2ac5d4: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x2ac5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x2ac5d8: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x2ac5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac5dc: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ac5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ac5e0: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x2ac5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2ac5e4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2ac5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2ac5e8: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2ac5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2ac5ec: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x2ac5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x2ac5f0: 0x8662005c  lh          $v0, 0x5C($s3)
    ctx->pc = 0x2ac5f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2ac5f4: 0xa602005c  sh          $v0, 0x5C($s0)
    ctx->pc = 0x2ac5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ac5f8: 0x8662005e  lh          $v0, 0x5E($s3)
    ctx->pc = 0x2ac5f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 94)));
    // 0x2ac5fc: 0xa602005e  sh          $v0, 0x5E($s0)
    ctx->pc = 0x2ac5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ac600: 0x92620060  lbu         $v0, 0x60($s3)
    ctx->pc = 0x2ac600u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2ac604: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x2ac604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ac608: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2ac608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2ac60c:
    // 0x2ac60c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ac60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac610: 0xc0ab394  jal         func_2ACE50
    ctx->pc = 0x2AC610u;
    SET_GPR_U32(ctx, 31, 0x2AC618u);
    ctx->pc = 0x2AC614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC610u;
            // 0x2ac614: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE50u;
    if (runtime->hasFunction(0x2ACE50u)) {
        auto targetFn = runtime->lookupFunction(0x2ACE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC618u; }
        if (ctx->pc != 0x2AC618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACE50_0x2ace50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC618u; }
        if (ctx->pc != 0x2AC618u) { return; }
    }
    ctx->pc = 0x2AC618u;
label_2ac618:
    // 0x2ac618: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x2ac618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2ac61c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ac61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ac620: 0xae830014  sw          $v1, 0x14($s4)
    ctx->pc = 0x2ac620u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
    // 0x2ac624: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x2ac624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2ac628: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC628u;
    {
        const bool branch_taken_0x2ac628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac628) {
            ctx->pc = 0x2AC62Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC628u;
            // 0x2ac62c: 0x8fa40098  lw          $a0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC63Cu;
            goto label_2ac63c;
        }
    }
    ctx->pc = 0x2AC630u;
    // 0x2ac630: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2AC630u;
    SET_GPR_U32(ctx, 31, 0x2AC638u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC638u; }
        if (ctx->pc != 0x2AC638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC638u; }
        if (ctx->pc != 0x2AC638u) { return; }
    }
    ctx->pc = 0x2AC638u;
label_2ac638:
    // 0x2ac638: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2ac638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2ac63c:
    // 0x2ac63c: 0x50800058  beql        $a0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x2AC63Cu;
    {
        const bool branch_taken_0x2ac63c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac63c) {
            ctx->pc = 0x2AC640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC63Cu;
            // 0x2ac640: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC7A0u;
            goto label_2ac7a0;
        }
    }
    ctx->pc = 0x2AC644u;
    // 0x2ac644: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2AC644u;
    SET_GPR_U32(ctx, 31, 0x2AC64Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC64Cu; }
        if (ctx->pc != 0x2AC64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC64Cu; }
        if (ctx->pc != 0x2AC64Cu) { return; }
    }
    ctx->pc = 0x2AC64Cu;
label_2ac64c:
    // 0x2ac64c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2AC64Cu;
    {
        const bool branch_taken_0x2ac64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac64c) {
            ctx->pc = 0x2AC79Cu;
            goto label_2ac79c;
        }
    }
    ctx->pc = 0x2AC654u;
    // 0x2ac654: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x2ac654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2ac658:
    // 0x2ac658: 0x24040320  addiu       $a0, $zero, 0x320
    ctx->pc = 0x2ac658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x2ac65c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x2ac65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2ac660: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2ac660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ac664: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2ac664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2ac668: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2ac668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ac66c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2ac66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2ac670: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x2ac670u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2ac674: 0x1810  mfhi        $v1
    ctx->pc = 0x2ac674u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ac678: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ac678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ac67c: 0xc040180  jal         func_100600
    ctx->pc = 0x2AC67Cu;
    SET_GPR_U32(ctx, 31, 0x2AC684u);
    ctx->pc = 0x2AC680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC67Cu;
            // 0x2ac680: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC684u; }
        if (ctx->pc != 0x2AC684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC684u; }
        if (ctx->pc != 0x2AC684u) { return; }
    }
    ctx->pc = 0x2AC684u;
label_2ac684:
    // 0x2ac684: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ac684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac688: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2AC688u;
    {
        const bool branch_taken_0x2ac688 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac688) {
            ctx->pc = 0x2AC68Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC688u;
            // 0x2ac68c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC6B4u;
            goto label_2ac6b4;
        }
    }
    ctx->pc = 0x2AC690u;
    // 0x2ac690: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2ac690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2ac694: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2ac694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2ac698: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2ac698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2ac69c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2ac69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ac6a0: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2AC6A0u;
    SET_GPR_U32(ctx, 31, 0x2AC6A8u);
    ctx->pc = 0x2AC6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC6A0u;
            // 0x2ac6a4: 0x24a51110  addiu       $a1, $a1, 0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC6A8u; }
        if (ctx->pc != 0x2AC6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC6A8u; }
        if (ctx->pc != 0x2AC6A8u) { return; }
    }
    ctx->pc = 0x2AC6A8u;
label_2ac6a8:
    // 0x2ac6a8: 0xc04981a  jal         func_126068
    ctx->pc = 0x2AC6A8u;
    SET_GPR_U32(ctx, 31, 0x2AC6B0u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC6B0u; }
        if (ctx->pc != 0x2AC6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC6B0u; }
        if (ctx->pc != 0x2AC6B0u) { return; }
    }
    ctx->pc = 0x2AC6B0u;
label_2ac6b0:
    // 0x2ac6b0: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2ac6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2ac6b4:
    // 0x2ac6b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ac6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac6b8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2ac6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ac6bc: 0xc0ab3a8  jal         func_2ACEA0
    ctx->pc = 0x2AC6BCu;
    SET_GPR_U32(ctx, 31, 0x2AC6C4u);
    ctx->pc = 0x2AC6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC6BCu;
            // 0x2ac6c0: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEA0u;
    if (runtime->hasFunction(0x2ACEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ACEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC6C4u; }
        if (ctx->pc != 0x2AC6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACEA0_0x2acea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC6C4u; }
        if (ctx->pc != 0x2AC6C4u) { return; }
    }
    ctx->pc = 0x2AC6C4u;
label_2ac6c4:
    // 0x2ac6c4: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x2ac6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2ac6c8:
    // 0x2ac6c8: 0x1240c2  srl         $t0, $s2, 3
    ctx->pc = 0x2ac6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
    // 0x2ac6cc: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2ac6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ac6d0: 0x32440007  andi        $a0, $s2, 0x7
    ctx->pc = 0x2ac6d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x2ac6d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac6d8: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x2ac6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2ac6dc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2ac6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2ac6e0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ac6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac6e4: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x2ac6e4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2ac6e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac6ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ac6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ac6f0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2ac6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ac6f4: 0x1810  mfhi        $v1
    ctx->pc = 0x2ac6f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ac6f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ac6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ac6fc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ac6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac700: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ac700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac704: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x2ac704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac708: 0x51000022  beql        $t0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2AC708u;
    {
        const bool branch_taken_0x2ac708 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac708) {
            ctx->pc = 0x2AC70Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC708u;
            // 0x2ac70c: 0x8e830014  lw          $v1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC794u;
            goto label_2ac794;
        }
    }
    ctx->pc = 0x2AC710u;
    // 0x2ac710: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ac710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ac714: 0x26670008  addiu       $a3, $s3, 0x8
    ctx->pc = 0x2ac714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2ac718: 0x2463fd88  addiu       $v1, $v1, -0x278
    ctx->pc = 0x2ac718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966664));
    // 0x2ac71c: 0x25060008  addiu       $a2, $t0, 0x8
    ctx->pc = 0x2ac71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2ac720: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2ac720u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x2ac724: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2ac724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ac728: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2ac728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2ac72c: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x2ac72cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_2ac730:
    // 0x2ac730: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x2ac730u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ac734: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2ac734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2ac738: 0x80e30001  lb          $v1, 0x1($a3)
    ctx->pc = 0x2ac738u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x2ac73c: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x2ac73cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ac740: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x2ac740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x2ac744: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x2ac744u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac748: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AC748u;
    {
        const bool branch_taken_0x2ac748 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2AC74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC748u;
            // 0x2ac74c: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac748) {
            ctx->pc = 0x2AC730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac730;
        }
    }
    ctx->pc = 0x2AC750u;
    // 0x2ac750: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x2ac750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2ac754: 0xad030048  sw          $v1, 0x48($t0)
    ctx->pc = 0x2ac754u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 3));
    // 0x2ac758: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x2ac758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2ac75c: 0xad03004c  sw          $v1, 0x4C($t0)
    ctx->pc = 0x2ac75cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
    // 0x2ac760: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x2ac760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac764: 0xe5000050  swc1        $f0, 0x50($t0)
    ctx->pc = 0x2ac764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 80), bits); }
    // 0x2ac768: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x2ac768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2ac76c: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x2ac76cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
    // 0x2ac770: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x2ac770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2ac774: 0xad030058  sw          $v1, 0x58($t0)
    ctx->pc = 0x2ac774u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 3));
    // 0x2ac778: 0x8663005c  lh          $v1, 0x5C($s3)
    ctx->pc = 0x2ac778u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2ac77c: 0xa503005c  sh          $v1, 0x5C($t0)
    ctx->pc = 0x2ac77cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ac780: 0x8663005e  lh          $v1, 0x5E($s3)
    ctx->pc = 0x2ac780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 94)));
    // 0x2ac784: 0xa503005e  sh          $v1, 0x5E($t0)
    ctx->pc = 0x2ac784u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ac788: 0x92630060  lbu         $v1, 0x60($s3)
    ctx->pc = 0x2ac788u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2ac78c: 0xa1030060  sb          $v1, 0x60($t0)
    ctx->pc = 0x2ac78cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac790: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x2ac790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2ac794:
    // 0x2ac794: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ac794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ac798: 0xae830014  sw          $v1, 0x14($s4)
    ctx->pc = 0x2ac798u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
label_2ac79c:
    // 0x2ac79c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ac79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ac7a0:
    // 0x2ac7a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ac7a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ac7a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ac7a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac7a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ac7a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac7ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ac7acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac7b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ac7b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC7B4u;
            // 0x2ac7b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AC7BCu;
    // 0x2ac7bc: 0x0  nop
    ctx->pc = 0x2ac7bcu;
    // NOP
}
