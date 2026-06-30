#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C9330
// Address: 0x2c9330 - 0x2c9470
void sub_002C9330_0x2c9330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9330_0x2c9330");
#endif

    switch (ctx->pc) {
        case 0x2c934cu: goto label_2c934c;
        case 0x2c936cu: goto label_2c936c;
        case 0x2c93a0u: goto label_2c93a0;
        case 0x2c9400u: goto label_2c9400;
        case 0x2c940cu: goto label_2c940c;
        case 0x2c9418u: goto label_2c9418;
        case 0x2c9424u: goto label_2c9424;
        case 0x2c9430u: goto label_2c9430;
        case 0x2c943cu: goto label_2c943c;
        case 0x2c9454u: goto label_2c9454;
        default: break;
    }

    ctx->pc = 0x2c9330u;

    // 0x2c9330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c9330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c9334: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c9334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c9338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c9338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c933c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2c933cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2c9340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c9344: 0xc0b25ec  jal         func_2C97B0
    ctx->pc = 0x2C9344u;
    SET_GPR_U32(ctx, 31, 0x2C934Cu);
    ctx->pc = 0x2C9348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9344u;
            // 0x2c9348: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C97B0u;
    if (runtime->hasFunction(0x2C97B0u)) {
        auto targetFn = runtime->lookupFunction(0x2C97B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C934Cu; }
        if (ctx->pc != 0x2C934Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C97B0_0x2c97b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C934Cu; }
        if (ctx->pc != 0x2C934Cu) { return; }
    }
    ctx->pc = 0x2C934Cu;
label_2c934c:
    // 0x2c934c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c934cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c9350: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c9354: 0x24630560  addiu       $v1, $v1, 0x560
    ctx->pc = 0x2c9354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1376));
    // 0x2c9358: 0x24420598  addiu       $v0, $v0, 0x598
    ctx->pc = 0x2c9358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1432));
    // 0x2c935c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c935cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c9360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9364: 0xc0b25e8  jal         func_2C97A0
    ctx->pc = 0x2C9364u;
    SET_GPR_U32(ctx, 31, 0x2C936Cu);
    ctx->pc = 0x2C9368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9364u;
            // 0x2c9368: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C97A0u;
    if (runtime->hasFunction(0x2C97A0u)) {
        auto targetFn = runtime->lookupFunction(0x2C97A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C936Cu; }
        if (ctx->pc != 0x2C936Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C97A0_0x2c97a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C936Cu; }
        if (ctx->pc != 0x2C936Cu) { return; }
    }
    ctx->pc = 0x2C936Cu;
label_2c936c:
    // 0x2c936c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2c936cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c9370: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c9374: 0x24427bf0  addiu       $v0, $v0, 0x7BF0
    ctx->pc = 0x2c9374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
    // 0x2c9378: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c9378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c937c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c937cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c9380: 0x24427c28  addiu       $v0, $v0, 0x7C28
    ctx->pc = 0x2c9380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31784));
    // 0x2c9384: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c9384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c9388: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c9388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c938c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c938cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9394: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9394u;
            // 0x2c9398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C939Cu;
    // 0x2c939c: 0x0  nop
    ctx->pc = 0x2c939cu;
    // NOP
label_2c93a0:
    // 0x2c93a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c93a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c93a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c93a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c93a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c93a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c93ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c93acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c93b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c93b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c93b4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C93B4u;
    {
        const bool branch_taken_0x2c93b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C93B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C93B4u;
            // 0x2c93b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c93b4) {
            ctx->pc = 0x2C9454u;
            goto label_2c9454;
        }
    }
    ctx->pc = 0x2C93BCu;
    // 0x2c93bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c93bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c93c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c93c4: 0x24630560  addiu       $v1, $v1, 0x560
    ctx->pc = 0x2c93c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1376));
    // 0x2c93c8: 0x24420598  addiu       $v0, $v0, 0x598
    ctx->pc = 0x2c93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1432));
    // 0x2c93cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c93ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c93d0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C93D0u;
    {
        const bool branch_taken_0x2c93d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C93D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C93D0u;
            // 0x2c93d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c93d0) {
            ctx->pc = 0x2C943Cu;
            goto label_2c943c;
        }
    }
    ctx->pc = 0x2C93D8u;
    // 0x2c93d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c93d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c93dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c93dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c93e0: 0x24630510  addiu       $v1, $v1, 0x510
    ctx->pc = 0x2c93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x2c93e4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2c93e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2c93e8: 0x24420548  addiu       $v0, $v0, 0x548
    ctx->pc = 0x2c93e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1352));
    // 0x2c93ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c93ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c93f0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c93f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c93f4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c93f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c93f8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C93F8u;
    SET_GPR_U32(ctx, 31, 0x2C9400u);
    ctx->pc = 0x2C93FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C93F8u;
            // 0x2c93fc: 0x24a59540  addiu       $a1, $a1, -0x6AC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9400u; }
        if (ctx->pc != 0x2C9400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9400u; }
        if (ctx->pc != 0x2C9400u) { return; }
    }
    ctx->pc = 0x2C9400u;
label_2c9400:
    // 0x2c9400: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c9400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c9404: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x2C9404u;
    SET_GPR_U32(ctx, 31, 0x2C940Cu);
    ctx->pc = 0x2C9408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9404u;
            // 0x2c9408: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C940Cu; }
        if (ctx->pc != 0x2C940Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C940Cu; }
        if (ctx->pc != 0x2C940Cu) { return; }
    }
    ctx->pc = 0x2C940Cu;
label_2c940c:
    // 0x2c940c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c940cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c9410: 0xc0b2534  jal         func_2C94D0
    ctx->pc = 0x2C9410u;
    SET_GPR_U32(ctx, 31, 0x2C9418u);
    ctx->pc = 0x2C9414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9410u;
            // 0x2c9414: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C94D0u;
    if (runtime->hasFunction(0x2C94D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C94D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9418u; }
        if (ctx->pc != 0x2C9418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C94D0_0x2c94d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9418u; }
        if (ctx->pc != 0x2C9418u) { return; }
    }
    ctx->pc = 0x2C9418u;
label_2c9418:
    // 0x2c9418: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c9418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c941c: 0xc0b2534  jal         func_2C94D0
    ctx->pc = 0x2C941Cu;
    SET_GPR_U32(ctx, 31, 0x2C9424u);
    ctx->pc = 0x2C9420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C941Cu;
            // 0x2c9420: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C94D0u;
    if (runtime->hasFunction(0x2C94D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C94D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9424u; }
        if (ctx->pc != 0x2C9424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C94D0_0x2c94d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9424u; }
        if (ctx->pc != 0x2C9424u) { return; }
    }
    ctx->pc = 0x2C9424u;
label_2c9424:
    // 0x2c9424: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c9424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c9428: 0xc0b251c  jal         func_2C9470
    ctx->pc = 0x2C9428u;
    SET_GPR_U32(ctx, 31, 0x2C9430u);
    ctx->pc = 0x2C942Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9428u;
            // 0x2c942c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9470u;
    if (runtime->hasFunction(0x2C9470u)) {
        auto targetFn = runtime->lookupFunction(0x2C9470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9430u; }
        if (ctx->pc != 0x2C9430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C9470_0x2c9470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9430u; }
        if (ctx->pc != 0x2C9430u) { return; }
    }
    ctx->pc = 0x2C9430u;
label_2c9430:
    // 0x2c9430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9434: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C9434u;
    SET_GPR_U32(ctx, 31, 0x2C943Cu);
    ctx->pc = 0x2C9438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9434u;
            // 0x2c9438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C943Cu; }
        if (ctx->pc != 0x2C943Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C943Cu; }
        if (ctx->pc != 0x2C943Cu) { return; }
    }
    ctx->pc = 0x2C943Cu;
label_2c943c:
    // 0x2c943c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c943cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c9440: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c9440u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c9444: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9444u;
    {
        const bool branch_taken_0x2c9444 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c9444) {
            ctx->pc = 0x2C9448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9444u;
            // 0x2c9448: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9458u;
            goto label_2c9458;
        }
    }
    ctx->pc = 0x2C944Cu;
    // 0x2c944c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C944Cu;
    SET_GPR_U32(ctx, 31, 0x2C9454u);
    ctx->pc = 0x2C9450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C944Cu;
            // 0x2c9450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9454u; }
        if (ctx->pc != 0x2C9454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9454u; }
        if (ctx->pc != 0x2C9454u) { return; }
    }
    ctx->pc = 0x2C9454u;
label_2c9454:
    // 0x2c9454: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c9454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9458:
    // 0x2c9458: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c9458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c945c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c945cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9464: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9464u;
            // 0x2c9468: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C946Cu;
    // 0x2c946c: 0x0  nop
    ctx->pc = 0x2c946cu;
    // NOP
}
