#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017D280
// Address: 0x17d280 - 0x17d3f8
void sub_0017D280_0x17d280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D280_0x17d280");
#endif

    switch (ctx->pc) {
        case 0x17d29cu: goto label_17d29c;
        case 0x17d2dcu: goto label_17d2dc;
        case 0x17d310u: goto label_17d310;
        case 0x17d330u: goto label_17d330;
        case 0x17d350u: goto label_17d350;
        case 0x17d360u: goto label_17d360;
        case 0x17d37cu: goto label_17d37c;
        case 0x17d39cu: goto label_17d39c;
        case 0x17d3a4u: goto label_17d3a4;
        case 0x17d3acu: goto label_17d3ac;
        case 0x17d3b4u: goto label_17d3b4;
        case 0x17d3c0u: goto label_17d3c0;
        case 0x17d3d8u: goto label_17d3d8;
        default: break;
    }

    ctx->pc = 0x17d280u;

    // 0x17d280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d284: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17d284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d288: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D288u;
    {
        const bool branch_taken_0x17d288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D288u;
            // 0x17d28c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d288) {
            ctx->pc = 0x17D2A8u;
            goto label_17d2a8;
        }
    }
    ctx->pc = 0x17D290u;
    // 0x17d290: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17d290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17d294: 0xc05f242  jal         func_17C908
    ctx->pc = 0x17D294u;
    SET_GPR_U32(ctx, 31, 0x17D29Cu);
    ctx->pc = 0x17D298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D294u;
            // 0x17d298: 0x24a55f98  addiu       $a1, $a1, 0x5F98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C908u;
    if (runtime->hasFunction(0x17C908u)) {
        auto targetFn = runtime->lookupFunction(0x17C908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D29Cu; }
        if (ctx->pc != 0x17D29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C908_0x17c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D29Cu; }
        if (ctx->pc != 0x17D29Cu) { return; }
    }
    ctx->pc = 0x17D29Cu;
label_17d29c:
    // 0x17d29c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17D29Cu;
    {
        const bool branch_taken_0x17d29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D29Cu;
            // 0x17d2a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d29c) {
            ctx->pc = 0x17D2ACu;
            goto label_17d2ac;
        }
    }
    ctx->pc = 0x17D2A4u;
    // 0x17d2a4: 0x0  nop
    ctx->pc = 0x17d2a4u;
    // NOP
label_17d2a8:
    // 0x17d2a8: 0x80420002  lb          $v0, 0x2($v0)
    ctx->pc = 0x17d2a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_17d2ac:
    // 0x17d2ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x17D2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D2B0u;
            // 0x17d2b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D2B8u;
    // 0x17d2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x17D2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D2B8u;
            // 0x17d2bc: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D2C0u;
    // 0x17d2c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d2c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17d2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2c8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D2C8u;
    {
        const bool branch_taken_0x17d2c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D2C8u;
            // 0x17d2cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2c8) {
            ctx->pc = 0x17D2E8u;
            goto label_17d2e8;
        }
    }
    ctx->pc = 0x17D2D0u;
    // 0x17d2d0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17d2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17d2d4: 0xc05f242  jal         func_17C908
    ctx->pc = 0x17D2D4u;
    SET_GPR_U32(ctx, 31, 0x17D2DCu);
    ctx->pc = 0x17D2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D2D4u;
            // 0x17d2d8: 0x24a55f98  addiu       $a1, $a1, 0x5F98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C908u;
    if (runtime->hasFunction(0x17C908u)) {
        auto targetFn = runtime->lookupFunction(0x17C908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D2DCu; }
        if (ctx->pc != 0x17D2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C908_0x17c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D2DCu; }
        if (ctx->pc != 0x17D2DCu) { return; }
    }
    ctx->pc = 0x17D2DCu;
label_17d2dc:
    // 0x17d2dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D2DCu;
    {
        const bool branch_taken_0x17d2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D2DCu;
            // 0x17d2e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2dc) {
            ctx->pc = 0x17D300u;
            goto label_17d300;
        }
    }
    ctx->pc = 0x17D2E4u;
    // 0x17d2e4: 0x0  nop
    ctx->pc = 0x17d2e4u;
    // NOP
label_17d2e8:
    // 0x17d2e8: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x17d2e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x17d2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d2f0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D2F0u;
    {
        const bool branch_taken_0x17d2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17d2f0) {
            ctx->pc = 0x17D2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17D2F0u;
            // 0x17d2f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17D300u;
            goto label_17d300;
        }
    }
    ctx->pc = 0x17D2F8u;
    // 0x17d2f8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x17d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x17d2fc: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x17d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_17d300:
    // 0x17d300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d304: 0x3e00008  jr          $ra
    ctx->pc = 0x17D304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D304u;
            // 0x17d308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D30Cu;
    // 0x17d30c: 0x0  nop
    ctx->pc = 0x17d30cu;
    // NOP
label_17d310:
    // 0x17d310: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17d310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17d314: 0x3e00008  jr          $ra
    ctx->pc = 0x17D314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D314u;
            // 0x17d318: 0xac446558  sw          $a0, 0x6558($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 25944), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D31Cu;
    // 0x17d31c: 0x0  nop
    ctx->pc = 0x17d31cu;
    // NOP
    // 0x17d320: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17d320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17d324: 0x3e00008  jr          $ra
    ctx->pc = 0x17D324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D324u;
            // 0x17d328: 0x8c626558  lw          $v0, 0x6558($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25944)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D32Cu;
    // 0x17d32c: 0x0  nop
    ctx->pc = 0x17d32cu;
    // NOP
label_17d330:
    // 0x17d330: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17d330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17d334: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x17d334u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17d338: 0x2442585c  addiu       $v0, $v0, 0x585C
    ctx->pc = 0x17d338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22620));
    // 0x17d33c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17D33Cu;
    {
        const bool branch_taken_0x17d33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D33Cu;
            // 0x17d340: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d33c) {
            ctx->pc = 0x17D348u;
            goto label_17d348;
        }
    }
    ctx->pc = 0x17D344u;
    // 0x17d344: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17d344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_17d348:
    // 0x17d348: 0x3e00008  jr          $ra
    ctx->pc = 0x17D348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D350u;
label_17d350:
    // 0x17d350: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17d350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17d354: 0x3e00008  jr          $ra
    ctx->pc = 0x17D354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D354u;
            // 0x17d358: 0x8c62585c  lw          $v0, 0x585C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22620)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D35Cu;
    // 0x17d35c: 0x0  nop
    ctx->pc = 0x17d35cu;
    // NOP
label_17d360:
    // 0x17d360: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17d364: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17d364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d368: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x17d368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x17d36c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x17d36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x17d370: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17d370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17d374: 0xc05f77a  jal         func_17DDE8
    ctx->pc = 0x17D374u;
    SET_GPR_U32(ctx, 31, 0x17D37Cu);
    ctx->pc = 0x17D378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D374u;
            // 0x17d378: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDE8u;
    if (runtime->hasFunction(0x17DDE8u)) {
        auto targetFn = runtime->lookupFunction(0x17DDE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D37Cu; }
        if (ctx->pc != 0x17D37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDE8_0x17dde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D37Cu; }
        if (ctx->pc != 0x17D37Cu) { return; }
    }
    ctx->pc = 0x17D37Cu;
label_17d37c:
    // 0x17d37c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x17d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17d380: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17d380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17d384: 0x24716410  addiu       $s1, $v1, 0x6410
    ctx->pc = 0x17d384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25616));
    // 0x17d388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d38c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17D38Cu;
    {
        const bool branch_taken_0x17d38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D38Cu;
            // 0x17d390: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d38c) {
            ctx->pc = 0x17D3E4u;
            goto label_17d3e4;
        }
    }
    ctx->pc = 0x17D394u;
    // 0x17d394: 0xc05f55e  jal         func_17D578
    ctx->pc = 0x17D394u;
    SET_GPR_U32(ctx, 31, 0x17D39Cu);
    ctx->pc = 0x17D578u;
    if (runtime->hasFunction(0x17D578u)) {
        auto targetFn = runtime->lookupFunction(0x17D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D39Cu; }
        if (ctx->pc != 0x17D39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D578_0x17d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D39Cu; }
        if (ctx->pc != 0x17D39Cu) { return; }
    }
    ctx->pc = 0x17D39Cu;
label_17d39c:
    // 0x17d39c: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17D39Cu;
    SET_GPR_U32(ctx, 31, 0x17D3A4u);
    ctx->pc = 0x17D3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D39Cu;
            // 0x17d3a0: 0x34048400  ori         $a0, $zero, 0x8400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33792);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3A4u; }
        if (ctx->pc != 0x17D3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3A4u; }
        if (ctx->pc != 0x17D3A4u) { return; }
    }
    ctx->pc = 0x17D3A4u;
label_17d3a4:
    // 0x17d3a4: 0xc047aee  jal         func_11EBB8
    ctx->pc = 0x17D3A4u;
    SET_GPR_U32(ctx, 31, 0x17D3ACu);
    ctx->pc = 0x17D3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D3A4u;
            // 0x17d3a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBB8u;
    if (runtime->hasFunction(0x11EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3ACu; }
        if (ctx->pc != 0x17D3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBB8_0x11ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3ACu; }
        if (ctx->pc != 0x17D3ACu) { return; }
    }
    ctx->pc = 0x17D3ACu;
label_17d3ac:
    // 0x17d3ac: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17D3ACu;
    SET_GPR_U32(ctx, 31, 0x17D3B4u);
    ctx->pc = 0x17D3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D3ACu;
            // 0x17d3b0: 0x34048401  ori         $a0, $zero, 0x8401 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33793);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3B4u; }
        if (ctx->pc != 0x17D3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3B4u; }
        if (ctx->pc != 0x17D3B4u) { return; }
    }
    ctx->pc = 0x17D3B4u;
label_17d3b4:
    // 0x17d3b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17d3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3b8: 0xc05f24e  jal         func_17C938
    ctx->pc = 0x17D3B8u;
    SET_GPR_U32(ctx, 31, 0x17D3C0u);
    ctx->pc = 0x17D3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D3B8u;
            // 0x17d3bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C938u;
    if (runtime->hasFunction(0x17C938u)) {
        auto targetFn = runtime->lookupFunction(0x17C938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3C0u; }
        if (ctx->pc != 0x17D3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C938_0x17c938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3C0u; }
        if (ctx->pc != 0x17D3C0u) { return; }
    }
    ctx->pc = 0x17D3C0u;
label_17d3c0:
    // 0x17d3c0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17d3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17d3c4: 0x24845e68  addiu       $a0, $a0, 0x5E68
    ctx->pc = 0x17d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24168));
    // 0x17d3c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D3C8u;
    {
        const bool branch_taken_0x17d3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D3C8u;
            // 0x17d3cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d3c8) {
            ctx->pc = 0x17D3E0u;
            goto label_17d3e0;
        }
    }
    ctx->pc = 0x17D3D0u;
    // 0x17d3d0: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17D3D0u;
    SET_GPR_U32(ctx, 31, 0x17D3D8u);
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3D8u; }
        if (ctx->pc != 0x17D3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3D8u; }
        if (ctx->pc != 0x17D3D8u) { return; }
    }
    ctx->pc = 0x17D3D8u;
label_17d3d8:
    // 0x17d3d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17D3D8u;
    {
        const bool branch_taken_0x17d3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D3D8u;
            // 0x17d3dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d3d8) {
            ctx->pc = 0x17D3E4u;
            goto label_17d3e4;
        }
    }
    ctx->pc = 0x17D3E0u;
label_17d3e0:
    // 0x17d3e0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x17d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_17d3e4:
    // 0x17d3e4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x17d3e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d3e8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x17d3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17d3ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17d3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x17D3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D3F0u;
            // 0x17d3f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D3F8u;
}
