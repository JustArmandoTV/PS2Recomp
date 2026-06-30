#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CF330
// Address: 0x4cf330 - 0x4cf470
void sub_004CF330_0x4cf330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CF330_0x4cf330");
#endif

    switch (ctx->pc) {
        case 0x4cf34cu: goto label_4cf34c;
        case 0x4cf36cu: goto label_4cf36c;
        case 0x4cf3a0u: goto label_4cf3a0;
        case 0x4cf400u: goto label_4cf400;
        case 0x4cf40cu: goto label_4cf40c;
        case 0x4cf418u: goto label_4cf418;
        case 0x4cf424u: goto label_4cf424;
        case 0x4cf430u: goto label_4cf430;
        case 0x4cf43cu: goto label_4cf43c;
        case 0x4cf454u: goto label_4cf454;
        default: break;
    }

    ctx->pc = 0x4cf330u;

    // 0x4cf330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cf330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4cf334: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4cf334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4cf338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4cf338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4cf33c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4cf33cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4cf340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cf340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4cf344: 0xc133d54  jal         func_4CF550
    ctx->pc = 0x4CF344u;
    SET_GPR_U32(ctx, 31, 0x4CF34Cu);
    ctx->pc = 0x4CF348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF344u;
            // 0x4cf348: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CF550u;
    if (runtime->hasFunction(0x4CF550u)) {
        auto targetFn = runtime->lookupFunction(0x4CF550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF34Cu; }
        if (ctx->pc != 0x4CF34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CF550_0x4cf550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF34Cu; }
        if (ctx->pc != 0x4CF34Cu) { return; }
    }
    ctx->pc = 0x4CF34Cu;
label_4cf34c:
    // 0x4cf34c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cf34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4cf350: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cf350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4cf354: 0x24631e40  addiu       $v1, $v1, 0x1E40
    ctx->pc = 0x4cf354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7744));
    // 0x4cf358: 0x24421e78  addiu       $v0, $v0, 0x1E78
    ctx->pc = 0x4cf358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7800));
    // 0x4cf35c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cf35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cf360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cf360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf364: 0xc133d50  jal         func_4CF540
    ctx->pc = 0x4CF364u;
    SET_GPR_U32(ctx, 31, 0x4CF36Cu);
    ctx->pc = 0x4CF368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF364u;
            // 0x4cf368: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CF540u;
    if (runtime->hasFunction(0x4CF540u)) {
        auto targetFn = runtime->lookupFunction(0x4CF540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF36Cu; }
        if (ctx->pc != 0x4CF36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CF540_0x4cf540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF36Cu; }
        if (ctx->pc != 0x4CF36Cu) { return; }
    }
    ctx->pc = 0x4CF36Cu;
label_4cf36c:
    // 0x4cf36c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4cf36cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4cf370: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cf370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4cf374: 0x24421d90  addiu       $v0, $v0, 0x1D90
    ctx->pc = 0x4cf374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7568));
    // 0x4cf378: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4cf378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4cf37c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cf37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4cf380: 0x24421dc8  addiu       $v0, $v0, 0x1DC8
    ctx->pc = 0x4cf380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7624));
    // 0x4cf384: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4cf384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4cf388: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4cf388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf38c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cf38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cf390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cf390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cf394: 0x3e00008  jr          $ra
    ctx->pc = 0x4CF394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF394u;
            // 0x4cf398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CF39Cu;
    // 0x4cf39c: 0x0  nop
    ctx->pc = 0x4cf39cu;
    // NOP
label_4cf3a0:
    // 0x4cf3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cf3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4cf3a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cf3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4cf3a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cf3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4cf3ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cf3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4cf3b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cf3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf3b4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4CF3B4u;
    {
        const bool branch_taken_0x4cf3b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF3B4u;
            // 0x4cf3b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf3b4) {
            ctx->pc = 0x4CF454u;
            goto label_4cf454;
        }
    }
    ctx->pc = 0x4CF3BCu;
    // 0x4cf3bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cf3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4cf3c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cf3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4cf3c4: 0x24631e40  addiu       $v1, $v1, 0x1E40
    ctx->pc = 0x4cf3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7744));
    // 0x4cf3c8: 0x24421e78  addiu       $v0, $v0, 0x1E78
    ctx->pc = 0x4cf3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7800));
    // 0x4cf3cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cf3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cf3d0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4CF3D0u;
    {
        const bool branch_taken_0x4cf3d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF3D0u;
            // 0x4cf3d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf3d0) {
            ctx->pc = 0x4CF43Cu;
            goto label_4cf43c;
        }
    }
    ctx->pc = 0x4CF3D8u;
    // 0x4cf3d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cf3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4cf3dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cf3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4cf3e0: 0x24631df0  addiu       $v1, $v1, 0x1DF0
    ctx->pc = 0x4cf3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7664));
    // 0x4cf3e4: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4cf3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x4cf3e8: 0x24421e28  addiu       $v0, $v0, 0x1E28
    ctx->pc = 0x4cf3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7720));
    // 0x4cf3ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cf3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cf3f0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4cf3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4cf3f4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4cf3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4cf3f8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4CF3F8u;
    SET_GPR_U32(ctx, 31, 0x4CF400u);
    ctx->pc = 0x4CF3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF3F8u;
            // 0x4cf3fc: 0x24a5eff0  addiu       $a1, $a1, -0x1010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF400u; }
        if (ctx->pc != 0x4CF400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF400u; }
        if (ctx->pc != 0x4CF400u) { return; }
    }
    ctx->pc = 0x4CF400u;
label_4cf400:
    // 0x4cf400: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4cf400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4cf404: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4CF404u;
    SET_GPR_U32(ctx, 31, 0x4CF40Cu);
    ctx->pc = 0x4CF408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF404u;
            // 0x4cf408: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF40Cu; }
        if (ctx->pc != 0x4CF40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF40Cu; }
        if (ctx->pc != 0x4CF40Cu) { return; }
    }
    ctx->pc = 0x4CF40Cu;
label_4cf40c:
    // 0x4cf40c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4cf40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4cf410: 0xc133d34  jal         func_4CF4D0
    ctx->pc = 0x4CF410u;
    SET_GPR_U32(ctx, 31, 0x4CF418u);
    ctx->pc = 0x4CF414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF410u;
            // 0x4cf414: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CF4D0u;
    if (runtime->hasFunction(0x4CF4D0u)) {
        auto targetFn = runtime->lookupFunction(0x4CF4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF418u; }
        if (ctx->pc != 0x4CF418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CF4D0_0x4cf4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF418u; }
        if (ctx->pc != 0x4CF418u) { return; }
    }
    ctx->pc = 0x4CF418u;
label_4cf418:
    // 0x4cf418: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4cf418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4cf41c: 0xc133d34  jal         func_4CF4D0
    ctx->pc = 0x4CF41Cu;
    SET_GPR_U32(ctx, 31, 0x4CF424u);
    ctx->pc = 0x4CF420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF41Cu;
            // 0x4cf420: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CF4D0u;
    if (runtime->hasFunction(0x4CF4D0u)) {
        auto targetFn = runtime->lookupFunction(0x4CF4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF424u; }
        if (ctx->pc != 0x4CF424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CF4D0_0x4cf4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF424u; }
        if (ctx->pc != 0x4CF424u) { return; }
    }
    ctx->pc = 0x4CF424u;
label_4cf424:
    // 0x4cf424: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4cf424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4cf428: 0xc133d1c  jal         func_4CF470
    ctx->pc = 0x4CF428u;
    SET_GPR_U32(ctx, 31, 0x4CF430u);
    ctx->pc = 0x4CF42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF428u;
            // 0x4cf42c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CF470u;
    if (runtime->hasFunction(0x4CF470u)) {
        auto targetFn = runtime->lookupFunction(0x4CF470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF430u; }
        if (ctx->pc != 0x4CF430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CF470_0x4cf470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF430u; }
        if (ctx->pc != 0x4CF430u) { return; }
    }
    ctx->pc = 0x4CF430u;
label_4cf430:
    // 0x4cf430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cf430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf434: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4CF434u;
    SET_GPR_U32(ctx, 31, 0x4CF43Cu);
    ctx->pc = 0x4CF438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF434u;
            // 0x4cf438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF43Cu; }
        if (ctx->pc != 0x4CF43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF43Cu; }
        if (ctx->pc != 0x4CF43Cu) { return; }
    }
    ctx->pc = 0x4CF43Cu;
label_4cf43c:
    // 0x4cf43c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4cf43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4cf440: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4cf440u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4cf444: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CF444u;
    {
        const bool branch_taken_0x4cf444 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4cf444) {
            ctx->pc = 0x4CF448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF444u;
            // 0x4cf448: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CF458u;
            goto label_4cf458;
        }
    }
    ctx->pc = 0x4CF44Cu;
    // 0x4cf44c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4CF44Cu;
    SET_GPR_U32(ctx, 31, 0x4CF454u);
    ctx->pc = 0x4CF450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF44Cu;
            // 0x4cf450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF454u; }
        if (ctx->pc != 0x4CF454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF454u; }
        if (ctx->pc != 0x4CF454u) { return; }
    }
    ctx->pc = 0x4CF454u;
label_4cf454:
    // 0x4cf454: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4cf454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cf458:
    // 0x4cf458: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cf458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cf45c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cf45cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cf460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cf460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cf464: 0x3e00008  jr          $ra
    ctx->pc = 0x4CF464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF464u;
            // 0x4cf468: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CF46Cu;
    // 0x4cf46c: 0x0  nop
    ctx->pc = 0x4cf46cu;
    // NOP
}
