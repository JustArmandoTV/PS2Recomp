#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C93F8
// Address: 0x1c93f8 - 0x1c9808
void sub_001C93F8_0x1c93f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C93F8_0x1c93f8");
#endif

    switch (ctx->pc) {
        case 0x1c9428u: goto label_1c9428;
        case 0x1c9488u: goto label_1c9488;
        case 0x1c94bcu: goto label_1c94bc;
        case 0x1c94e0u: goto label_1c94e0;
        case 0x1c95f0u: goto label_1c95f0;
        case 0x1c9684u: goto label_1c9684;
        case 0x1c96c8u: goto label_1c96c8;
        case 0x1c96d8u: goto label_1c96d8;
        case 0x1c96e0u: goto label_1c96e0;
        case 0x1c96e8u: goto label_1c96e8;
        case 0x1c96f0u: goto label_1c96f0;
        case 0x1c9748u: goto label_1c9748;
        case 0x1c9758u: goto label_1c9758;
        case 0x1c9760u: goto label_1c9760;
        case 0x1c9768u: goto label_1c9768;
        case 0x1c9770u: goto label_1c9770;
        case 0x1c97b4u: goto label_1c97b4;
        default: break;
    }

    ctx->pc = 0x1c93f8u;

    // 0x1c93f8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c93fc: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1c93fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1c9400: 0x8c43a708  lw          $v1, -0x58F8($v0)
    ctx->pc = 0x1c9400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944520)));
    // 0x1c9404: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x1c9404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1c9408: 0xffb00180  sd          $s0, 0x180($sp)
    ctx->pc = 0x1c9408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 16));
    // 0x1c940c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c940cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9410: 0xffbf0188  sd          $ra, 0x188($sp)
    ctx->pc = 0x1c9410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 31));
    // 0x1c9414: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C9414u;
    {
        const bool branch_taken_0x1c9414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9414u;
            // 0x1c9418: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9414) {
            ctx->pc = 0x1C9508u;
            goto label_1c9508;
        }
    }
    ctx->pc = 0x1C941Cu;
    // 0x1c941c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C941Cu;
    {
        const bool branch_taken_0x1c941c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C941Cu;
            // 0x1c9420: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c941c) {
            ctx->pc = 0x1C9448u;
            goto label_1c9448;
        }
    }
    ctx->pc = 0x1C9424u;
    // 0x1c9424: 0x0  nop
    ctx->pc = 0x1c9424u;
    // NOP
label_1c9428:
    // 0x1c9428: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x1c9428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1c942c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C942Cu;
    {
        const bool branch_taken_0x1c942c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C942Cu;
            // 0x1c9430: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c942c) {
            ctx->pc = 0x1C943Cu;
            goto label_1c943c;
        }
    }
    ctx->pc = 0x1C9434u;
    // 0x1c9434: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9434u;
    {
        const bool branch_taken_0x1c9434 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C9438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9434u;
            // 0x1c9438: 0x28e20030  slti        $v0, $a3, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9434) {
            ctx->pc = 0x1C944Cu;
            goto label_1c944c;
        }
    }
    ctx->pc = 0x1C943Cu;
label_1c943c:
    // 0x1c943c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C943Cu;
    {
        const bool branch_taken_0x1c943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C943Cu;
            // 0x1c9440: 0x2408fffc  addiu       $t0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c943c) {
            ctx->pc = 0x1C9474u;
            goto label_1c9474;
        }
    }
    ctx->pc = 0x1C9444u;
    // 0x1c9444: 0x0  nop
    ctx->pc = 0x1c9444u;
    // NOP
label_1c9448:
    // 0x1c9448: 0x28e20030  slti        $v0, $a3, 0x30
    ctx->pc = 0x1c9448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)48) ? 1 : 0);
label_1c944c:
    // 0x1c944c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C944Cu;
    {
        const bool branch_taken_0x1c944c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C944Cu;
            // 0x1c9450: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c944c) {
            ctx->pc = 0x1C9474u;
            goto label_1c9474;
        }
    }
    ctx->pc = 0x1C9454u;
    // 0x1c9454: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c9454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c9458: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x1c9458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1c945c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C945Cu;
    {
        const bool branch_taken_0x1c945c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c945c) {
            ctx->pc = 0x1C9460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C945Cu;
            // 0x1c9460: 0x2408fffd  addiu       $t0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9474u;
            goto label_1c9474;
        }
    }
    ctx->pc = 0x1C9464u;
    // 0x1c9464: 0x0  nop
    ctx->pc = 0x1c9464u;
    // NOP
    // 0x1c9468: 0x463ffef  bgezl       $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1C9468u;
    {
        const bool branch_taken_0x1c9468 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1c9468) {
            ctx->pc = 0x1C946Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9468u;
            // 0x1c946c: 0x8c8300c0  lw          $v1, 0xC0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9428;
        }
    }
    ctx->pc = 0x1C9470u;
    // 0x1c9470: 0x2408fffd  addiu       $t0, $zero, -0x3
    ctx->pc = 0x1c9470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1c9474:
    // 0x1c9474: 0x15000024  bnez        $t0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C9474u;
    {
        const bool branch_taken_0x1c9474 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9474u;
            // 0x1c9478: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9474) {
            ctx->pc = 0x1C9508u;
            goto label_1c9508;
        }
    }
    ctx->pc = 0x1C947Cu;
    // 0x1c947c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c947cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9484: 0x2407002f  addiu       $a3, $zero, 0x2F
    ctx->pc = 0x1c9484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_1c9488:
    // 0x1c9488: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c9488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c948c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c948cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c9490: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x1c9490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x1c9494: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1c9494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1c9498: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1c9498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1c949c: 0xaca200c0  sw          $v0, 0xC0($a1)
    ctx->pc = 0x1c949cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 2));
    // 0x1c94a0: 0x4e1fff9  bgez        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C94A0u;
    {
        const bool branch_taken_0x1c94a0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1C94A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C94A0u;
            // 0x1c94a4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94a0) {
            ctx->pc = 0x1C9488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9488;
        }
    }
    ctx->pc = 0x1C94A8u;
    // 0x1c94a8: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x1c94a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1c94ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c94acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c94b0: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1c94b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1c94b4: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1C94B4u;
    SET_GPR_U32(ctx, 31, 0x1C94BCu);
    ctx->pc = 0x1C94B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C94B4u;
            // 0x1c94b8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C94BCu; }
        if (ctx->pc != 0x1C94BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA340_0x1ca340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C94BCu; }
        if (ctx->pc != 0x1C94BCu) { return; }
    }
    ctx->pc = 0x1C94BCu;
label_1c94bc:
    // 0x1c94bc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c94bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c94c0: 0x15000011  bnez        $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C94C0u;
    {
        const bool branch_taken_0x1c94c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C94C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C94C0u;
            // 0x1c94c4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94c0) {
            ctx->pc = 0x1C9508u;
            goto label_1c9508;
        }
    }
    ctx->pc = 0x1C94C8u;
    // 0x1c94c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c94cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c94ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c94d0: 0x8c43a70c  lw          $v1, -0x58F4($v0)
    ctx->pc = 0x1c94d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944524)));
    // 0x1c94d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c94d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c94d8: 0x24651948  addiu       $a1, $v1, 0x1948
    ctx->pc = 0x1c94d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6472));
    // 0x1c94dc: 0x0  nop
    ctx->pc = 0x1c94dcu;
    // NOP
label_1c94e0:
    // 0x1c94e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c94e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c94e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1c94e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1c94e8: 0x28e40030  slti        $a0, $a3, 0x30
    ctx->pc = 0x1c94e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1c94ec: 0xaca2ff40  sw          $v0, -0xC0($a1)
    ctx->pc = 0x1c94ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967104), GPR_U32(ctx, 2));
    // 0x1c94f0: 0x8cc300c0  lw          $v1, 0xC0($a2)
    ctx->pc = 0x1c94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x1c94f4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1c94f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1c94f8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1c94f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1c94fc: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C94FCu;
    {
        const bool branch_taken_0x1c94fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C94FCu;
            // 0x1c9500: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94fc) {
            ctx->pc = 0x1C94E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c94e0;
        }
    }
    ctx->pc = 0x1C9504u;
    // 0x1c9504: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1c9504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1c9508:
    // 0x1c9508: 0xdfb00180  ld          $s0, 0x180($sp)
    ctx->pc = 0x1c9508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1c950c: 0xdfbf0188  ld          $ra, 0x188($sp)
    ctx->pc = 0x1c950cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1c9510: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9510u;
            // 0x1c9514: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9518u;
    // 0x1c9518: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c9518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c951c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c951cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c9520: 0x8c43a708  lw          $v1, -0x58F8($v0)
    ctx->pc = 0x1c9520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944520)));
    // 0x1c9524: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x1c9524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1c9528: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c9528u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c952c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c952cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1c9530: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1c9530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1c9534: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c9534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9538: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1c9538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1c953c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1c953cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9540: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1c9540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1c9544: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c9544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9548: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1c9548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1c954c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c954cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9550: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1c9550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1c9554: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1c9554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9558: 0x14690035  bne         $v1, $t1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1C9558u;
    {
        const bool branch_taken_0x1c9558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x1C955Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9558u;
            // 0x1c955c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9558) {
            ctx->pc = 0x1C9630u;
            goto label_1c9630;
        }
    }
    ctx->pc = 0x1C9560u;
    // 0x1c9560: 0x3222001f  andi        $v0, $s1, 0x1F
    ctx->pc = 0x1c9560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x1c9564: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9564u;
    {
        const bool branch_taken_0x1c9564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9564) {
            ctx->pc = 0x1C9568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9564u;
            // 0x1c9568: 0x2407fffd  addiu       $a3, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9594u;
            goto label_1c9594;
        }
    }
    ctx->pc = 0x1C956Cu;
    // 0x1c956c: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C956Cu;
    {
        const bool branch_taken_0x1c956c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1C9570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C956Cu;
            // 0x1c9570: 0x3202003f  andi        $v0, $s0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c956c) {
            ctx->pc = 0x1C9580u;
            goto label_1c9580;
        }
    }
    ctx->pc = 0x1C9574u;
    // 0x1c9574: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9574u;
    {
        const bool branch_taken_0x1c9574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9574u;
            // 0x1c9578: 0x2407fffd  addiu       $a3, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9574) {
            ctx->pc = 0x1C9594u;
            goto label_1c9594;
        }
    }
    ctx->pc = 0x1C957Cu;
    // 0x1c957c: 0x0  nop
    ctx->pc = 0x1c957cu;
    // NOP
label_1c9580:
    // 0x1c9580: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9580u;
    {
        const bool branch_taken_0x1c9580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9580) {
            ctx->pc = 0x1C9584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9580u;
            // 0x1c9584: 0x2407fffc  addiu       $a3, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9594u;
            goto label_1c9594;
        }
    }
    ctx->pc = 0x1C9588u;
    // 0x1c9588: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9588u;
    {
        const bool branch_taken_0x1c9588 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9588u;
            // 0x1c958c: 0x3262001f  andi        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9588) {
            ctx->pc = 0x1C9598u;
            goto label_1c9598;
        }
    }
    ctx->pc = 0x1C9590u;
    // 0x1c9590: 0x2407fffc  addiu       $a3, $zero, -0x4
    ctx->pc = 0x1c9590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1c9594:
    // 0x1c9594: 0x3262001f  andi        $v0, $s3, 0x1F
    ctx->pc = 0x1c9594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
label_1c9598:
    // 0x1c9598: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9598u;
    {
        const bool branch_taken_0x1c9598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9598) {
            ctx->pc = 0x1C959Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9598u;
            // 0x1c959c: 0x2407fff9  addiu       $a3, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C95C0u;
            goto label_1c95c0;
        }
    }
    ctx->pc = 0x1C95A0u;
    // 0x1c95a0: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C95A0u;
    {
        const bool branch_taken_0x1c95a0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1C95A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95A0u;
            // 0x1c95a4: 0x3242003f  andi        $v0, $s2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c95a0) {
            ctx->pc = 0x1C95B0u;
            goto label_1c95b0;
        }
    }
    ctx->pc = 0x1C95A8u;
    // 0x1c95a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C95A8u;
    {
        const bool branch_taken_0x1c95a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C95ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95A8u;
            // 0x1c95ac: 0x2407fff9  addiu       $a3, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c95a8) {
            ctx->pc = 0x1C95C0u;
            goto label_1c95c0;
        }
    }
    ctx->pc = 0x1C95B0u;
label_1c95b0:
    // 0x1c95b0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C95B0u;
    {
        const bool branch_taken_0x1c95b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c95b0) {
            ctx->pc = 0x1C95B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95B0u;
            // 0x1c95b4: 0x2407fff8  addiu       $a3, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C95C0u;
            goto label_1c95c0;
        }
    }
    ctx->pc = 0x1C95B8u;
    // 0x1c95b8: 0x6420001  bltzl       $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C95B8u;
    {
        const bool branch_taken_0x1c95b8 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1c95b8) {
            ctx->pc = 0x1C95BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95B8u;
            // 0x1c95bc: 0x2407fff8  addiu       $a3, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C95C0u;
            goto label_1c95c0;
        }
    }
    ctx->pc = 0x1C95C0u;
label_1c95c0:
    // 0x1c95c0: 0x14e0001b  bnez        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C95C0u;
    {
        const bool branch_taken_0x1c95c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C95C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95C0u;
            // 0x1c95c4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c95c0) {
            ctx->pc = 0x1C9630u;
            goto label_1c9630;
        }
    }
    ctx->pc = 0x1C95C8u;
    // 0x1c95c8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1c95c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c95cc: 0x24041e00  addiu       $a0, $zero, 0x1E00
    ctx->pc = 0x1c95ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x1c95d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c95d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c95d4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1c95d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c95d8: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1c95d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x1c95dc: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x1c95dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    // 0x1c95e0: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1c95e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x1c95e4: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x1c95e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x1c95e8: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1C95E8u;
    SET_GPR_U32(ctx, 31, 0x1C95F0u);
    ctx->pc = 0x1C95ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95E8u;
            // 0x1c95ec: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C95F0u; }
        if (ctx->pc != 0x1C95F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA340_0x1ca340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C95F0u; }
        if (ctx->pc != 0x1C95F0u) { return; }
    }
    ctx->pc = 0x1C95F0u;
label_1c95f0:
    // 0x1c95f0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c95f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c95f4: 0x14e0000e  bnez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x1C95F4u;
    {
        const bool branch_taken_0x1c95f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C95F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95F4u;
            // 0x1c95f8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c95f4) {
            ctx->pc = 0x1C9630u;
            goto label_1c9630;
        }
    }
    ctx->pc = 0x1C95FCu;
    // 0x1c95fc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c95fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c9600: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1c9600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1c9604: 0x8c82a70c  lw          $v0, -0x58F4($a0)
    ctx->pc = 0x1c9604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944524)));
    // 0x1c9608: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1c9608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c960c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1c960cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c9610: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1c9610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9614: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c9614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9618: 0xac911880  sw          $s1, 0x1880($a0)
    ctx->pc = 0x1c9618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6272), GPR_U32(ctx, 17));
    // 0x1c961c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1c961cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9620: 0xacb01940  sw          $s0, 0x1940($a1)
    ctx->pc = 0x1c9620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6464), GPR_U32(ctx, 16));
    // 0x1c9624: 0xac731a00  sw          $s3, 0x1A00($v1)
    ctx->pc = 0x1c9624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6656), GPR_U32(ctx, 19));
    // 0x1c9628: 0xacd21ac0  sw          $s2, 0x1AC0($a2)
    ctx->pc = 0x1c9628u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6848), GPR_U32(ctx, 18));
    // 0x1c962c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1c962cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c9630:
    // 0x1c9630: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c9630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9634: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1c9634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c9638: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c9638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c963c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1c963cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c9640: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1c9640u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9644: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1c9644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c9648: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C964Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9648u;
            // 0x1c964c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9650u;
    // 0x1c9650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9654: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c9654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c9658: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c965c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c965cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9660: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9664: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c9664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9668: 0x8c44a70c  lw          $a0, -0x58F4($v0)
    ctx->pc = 0x1c9668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944524)));
    // 0x1c966c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9670: 0x8c830ac4  lw          $v1, 0xAC4($a0)
    ctx->pc = 0x1c9670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2756)));
    // 0x1c9674: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C9674u;
    {
        const bool branch_taken_0x1c9674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9674u;
            // 0x1c9678: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9674) {
            ctx->pc = 0x1C9700u;
            goto label_1c9700;
        }
    }
    ctx->pc = 0x1C967Cu;
    // 0x1c967c: 0xc0452c2  jal         func_114B08
    ctx->pc = 0x1C967Cu;
    SET_GPR_U32(ctx, 31, 0x1C9684u);
    ctx->pc = 0x114B08u;
    if (runtime->hasFunction(0x114B08u)) {
        auto targetFn = runtime->lookupFunction(0x114B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9684u; }
        if (ctx->pc != 0x1C9684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114B08_0x114b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9684u; }
        if (ctx->pc != 0x1C9684u) { return; }
    }
    ctx->pc = 0x1C9684u;
label_1c9684:
    // 0x1c9684: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c9684u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9688: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c9688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c968c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C968Cu;
    {
        const bool branch_taken_0x1c968c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C968Cu;
            // 0x1c9690: 0x34068000  ori         $a2, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c968c) {
            ctx->pc = 0x1C96A4u;
            goto label_1c96a4;
        }
    }
    ctx->pc = 0x1C9694u;
    // 0x1c9694: 0x312c2  srl         $v0, $v1, 11
    ctx->pc = 0x1c9694u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x1c9698: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1c9698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1c969c: 0xc2182b  sltu        $v1, $a2, $v0
    ctx->pc = 0x1c969cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c96a0: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1c96a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_1c96a4:
    // 0x1c96a4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1c96a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x1c96a8: 0x3c070010  lui         $a3, 0x10
    ctx->pc = 0x1c96a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16 << 16));
    // 0x1c96ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c96acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c96b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c96b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c96b4: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x1c96b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c96b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c96b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c96bc: 0xc2380a  movz        $a3, $a2, $v0
    ctx->pc = 0x1c96bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x1c96c0: 0xc072602  jal         func_1C9808
    ctx->pc = 0x1C96C0u;
    SET_GPR_U32(ctx, 31, 0x1C96C8u);
    ctx->pc = 0x1C96C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96C0u;
            // 0x1c96c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9808u;
    if (runtime->hasFunction(0x1C9808u)) {
        auto targetFn = runtime->lookupFunction(0x1C9808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96C8u; }
        if (ctx->pc != 0x1C96C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9808_0x1c9808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96C8u; }
        if (ctx->pc != 0x1C96C8u) { return; }
    }
    ctx->pc = 0x1C96C8u;
label_1c96c8:
    // 0x1c96c8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1C96C8u;
    {
        const bool branch_taken_0x1c96c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c96c8) {
            ctx->pc = 0x1C96CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96C8u;
            // 0x1c96cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9704u;
            goto label_1c9704;
        }
    }
    ctx->pc = 0x1C96D0u;
    // 0x1c96d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C96D0u;
    {
        const bool branch_taken_0x1c96d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C96D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96D0u;
            // 0x1c96d4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c96d0) {
            ctx->pc = 0x1C96E0u;
            goto label_1c96e0;
        }
    }
    ctx->pc = 0x1C96D8u;
label_1c96d8:
    // 0x1c96d8: 0xc0434f6  jal         func_10D3D8
    ctx->pc = 0x1C96D8u;
    SET_GPR_U32(ctx, 31, 0x1C96E0u);
    ctx->pc = 0x10D3D8u;
    if (runtime->hasFunction(0x10D3D8u)) {
        auto targetFn = runtime->lookupFunction(0x10D3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96E0u; }
        if (ctx->pc != 0x1C96E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D3D8_0x10d3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96E0u; }
        if (ctx->pc != 0x1C96E0u) { return; }
    }
    ctx->pc = 0x1C96E0u;
label_1c96e0:
    // 0x1c96e0: 0xc072c1e  jal         func_1CB078
    ctx->pc = 0x1C96E0u;
    SET_GPR_U32(ctx, 31, 0x1C96E8u);
    ctx->pc = 0x1C96E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96E0u;
            // 0x1c96e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB078u;
    if (runtime->hasFunction(0x1CB078u)) {
        auto targetFn = runtime->lookupFunction(0x1CB078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96E8u; }
        if (ctx->pc != 0x1C96E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB078_0x1cb078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96E8u; }
        if (ctx->pc != 0x1C96E8u) { return; }
    }
    ctx->pc = 0x1C96E8u;
label_1c96e8:
    // 0x1c96e8: 0xc072bca  jal         func_1CAF28
    ctx->pc = 0x1C96E8u;
    SET_GPR_U32(ctx, 31, 0x1C96F0u);
    ctx->pc = 0x1C96ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96E8u;
            // 0x1c96ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAF28u;
    if (runtime->hasFunction(0x1CAF28u)) {
        auto targetFn = runtime->lookupFunction(0x1CAF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96F0u; }
        if (ctx->pc != 0x1C96F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAF28_0x1caf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96F0u; }
        if (ctx->pc != 0x1C96F0u) { return; }
    }
    ctx->pc = 0x1C96F0u;
label_1c96f0:
    // 0x1c96f0: 0x1051fff9  beq         $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C96F0u;
    {
        const bool branch_taken_0x1c96f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C96F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96F0u;
            // 0x1c96f4: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c96f0) {
            ctx->pc = 0x1C96D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c96d8;
        }
    }
    ctx->pc = 0x1C96F8u;
    // 0x1c96f8: 0x38430002  xori        $v1, $v0, 0x2
    ctx->pc = 0x1c96f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1c96fc: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1c96fcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1c9700:
    // 0x1c9700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9704:
    // 0x1c9704: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9708: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c970c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C970Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C970Cu;
            // 0x1c9710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9714u;
    // 0x1c9714: 0x0  nop
    ctx->pc = 0x1c9714u;
    // NOP
    // 0x1c9718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c971c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c971cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c9720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9724: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9728: 0x8c48a70c  lw          $t0, -0x58F4($v0)
    ctx->pc = 0x1c9728u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944524)));
    // 0x1c972c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9730: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9734: 0x8d030ac4  lw          $v1, 0xAC4($t0)
    ctx->pc = 0x1c9734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2756)));
    // 0x1c9738: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C9738u;
    {
        const bool branch_taken_0x1c9738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C973Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9738u;
            // 0x1c973c: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9738) {
            ctx->pc = 0x1C9780u;
            goto label_1c9780;
        }
    }
    ctx->pc = 0x1C9740u;
    // 0x1c9740: 0xc072602  jal         func_1C9808
    ctx->pc = 0x1C9740u;
    SET_GPR_U32(ctx, 31, 0x1C9748u);
    ctx->pc = 0x1C9808u;
    if (runtime->hasFunction(0x1C9808u)) {
        auto targetFn = runtime->lookupFunction(0x1C9808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9748u; }
        if (ctx->pc != 0x1C9748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9808_0x1c9808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9748u; }
        if (ctx->pc != 0x1C9748u) { return; }
    }
    ctx->pc = 0x1C9748u;
label_1c9748:
    // 0x1c9748: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1C9748u;
    {
        const bool branch_taken_0x1c9748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9748) {
            ctx->pc = 0x1C974Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9748u;
            // 0x1c974c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9784u;
            goto label_1c9784;
        }
    }
    ctx->pc = 0x1C9750u;
    // 0x1c9750: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9750u;
    {
        const bool branch_taken_0x1c9750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9750u;
            // 0x1c9754: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9750) {
            ctx->pc = 0x1C9760u;
            goto label_1c9760;
        }
    }
    ctx->pc = 0x1C9758u;
label_1c9758:
    // 0x1c9758: 0xc0434f6  jal         func_10D3D8
    ctx->pc = 0x1C9758u;
    SET_GPR_U32(ctx, 31, 0x1C9760u);
    ctx->pc = 0x10D3D8u;
    if (runtime->hasFunction(0x10D3D8u)) {
        auto targetFn = runtime->lookupFunction(0x10D3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9760u; }
        if (ctx->pc != 0x1C9760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D3D8_0x10d3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9760u; }
        if (ctx->pc != 0x1C9760u) { return; }
    }
    ctx->pc = 0x1C9760u;
label_1c9760:
    // 0x1c9760: 0xc072c1e  jal         func_1CB078
    ctx->pc = 0x1C9760u;
    SET_GPR_U32(ctx, 31, 0x1C9768u);
    ctx->pc = 0x1C9764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9760u;
            // 0x1c9764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB078u;
    if (runtime->hasFunction(0x1CB078u)) {
        auto targetFn = runtime->lookupFunction(0x1CB078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9768u; }
        if (ctx->pc != 0x1C9768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB078_0x1cb078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9768u; }
        if (ctx->pc != 0x1C9768u) { return; }
    }
    ctx->pc = 0x1C9768u;
label_1c9768:
    // 0x1c9768: 0xc072bca  jal         func_1CAF28
    ctx->pc = 0x1C9768u;
    SET_GPR_U32(ctx, 31, 0x1C9770u);
    ctx->pc = 0x1C976Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9768u;
            // 0x1c976c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAF28u;
    if (runtime->hasFunction(0x1CAF28u)) {
        auto targetFn = runtime->lookupFunction(0x1CAF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9770u; }
        if (ctx->pc != 0x1C9770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAF28_0x1caf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9770u; }
        if (ctx->pc != 0x1C9770u) { return; }
    }
    ctx->pc = 0x1C9770u;
label_1c9770:
    // 0x1c9770: 0x1051fff9  beq         $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C9770u;
    {
        const bool branch_taken_0x1c9770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C9774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9770u;
            // 0x1c9774: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9770) {
            ctx->pc = 0x1C9758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9758;
        }
    }
    ctx->pc = 0x1C9778u;
    // 0x1c9778: 0x38430002  xori        $v1, $v0, 0x2
    ctx->pc = 0x1c9778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1c977c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1c977cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1c9780:
    // 0x1c9780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9784:
    // 0x1c9784: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c978c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C978Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C978Cu;
            // 0x1c9790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9794u;
    // 0x1c9794: 0x0  nop
    ctx->pc = 0x1c9794u;
    // NOP
    // 0x1c9798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c979c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c979cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c97a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c97a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c97a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c97a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c97a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c97a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c97ac: 0xc0452c2  jal         func_114B08
    ctx->pc = 0x1C97ACu;
    SET_GPR_U32(ctx, 31, 0x1C97B4u);
    ctx->pc = 0x1C97B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97ACu;
            // 0x1c97b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B08u;
    if (runtime->hasFunction(0x114B08u)) {
        auto targetFn = runtime->lookupFunction(0x114B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C97B4u; }
        if (ctx->pc != 0x1C97B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114B08_0x114b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C97B4u; }
        if (ctx->pc != 0x1C97B4u) { return; }
    }
    ctx->pc = 0x1C97B4u;
label_1c97b4:
    // 0x1c97b4: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x1c97b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x1c97b8: 0x3c09000f  lui         $t1, 0xF
    ctx->pc = 0x1c97b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15 << 16));
    // 0x1c97bc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1c97bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c97c0: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1c97c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1c97c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c97c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c97c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c97c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c97cc: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x1c97ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x1c97d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c97d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c97d4: 0x10470003  beq         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C97D4u;
    {
        const bool branch_taken_0x1c97d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1C97D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97D4u;
            // 0x1c97d8: 0x34088000  ori         $t0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97d4) {
            ctx->pc = 0x1C97E4u;
            goto label_1c97e4;
        }
    }
    ctx->pc = 0x1C97DCu;
    // 0x1c97dc: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x1c97dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c97e0: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x1c97e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_1c97e4:
    // 0x1c97e4: 0x128102b  sltu        $v0, $t1, $t0
    ctx->pc = 0x1c97e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c97e8: 0x3c070010  lui         $a3, 0x10
    ctx->pc = 0x1c97e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16 << 16));
    // 0x1c97ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c97ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c97f0: 0x102380a  movz        $a3, $t0, $v0
    ctx->pc = 0x1c97f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x1c97f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c97f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c97f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c97f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c97fc: 0x8072602  j           func_1C9808
    ctx->pc = 0x1C97FCu;
    ctx->pc = 0x1C9800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97FCu;
            // 0x1c9800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9808u;
    if (runtime->hasFunction(0x1C9808u)) {
        auto targetFn = runtime->lookupFunction(0x1C9808u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C9808_0x1c9808(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C9804u;
    // 0x1c9804: 0x0  nop
    ctx->pc = 0x1c9804u;
    // NOP
}
