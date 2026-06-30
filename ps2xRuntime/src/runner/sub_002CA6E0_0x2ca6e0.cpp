#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CA6E0
// Address: 0x2ca6e0 - 0x2ca820
void sub_002CA6E0_0x2ca6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA6E0_0x2ca6e0");
#endif

    switch (ctx->pc) {
        case 0x2ca700u: goto label_2ca700;
        case 0x2ca720u: goto label_2ca720;
        case 0x2ca750u: goto label_2ca750;
        case 0x2ca7b0u: goto label_2ca7b0;
        case 0x2ca7bcu: goto label_2ca7bc;
        case 0x2ca7c8u: goto label_2ca7c8;
        case 0x2ca7d4u: goto label_2ca7d4;
        case 0x2ca7e0u: goto label_2ca7e0;
        case 0x2ca7ecu: goto label_2ca7ec;
        case 0x2ca804u: goto label_2ca804;
        default: break;
    }

    ctx->pc = 0x2ca6e0u;

    // 0x2ca6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca6e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2ca6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2ca6e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ca6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ca6ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ca6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ca6f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca6f4: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2ca6f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2ca6f8: 0xc0b2ab4  jal         func_2CAAD0
    ctx->pc = 0x2CA6F8u;
    SET_GPR_U32(ctx, 31, 0x2CA700u);
    ctx->pc = 0x2CA6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA6F8u;
            // 0x2ca6fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CAAD0u;
    if (runtime->hasFunction(0x2CAAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CAAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA700u; }
        if (ctx->pc != 0x2CA700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CAAD0_0x2caad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA700u; }
        if (ctx->pc != 0x2CA700u) { return; }
    }
    ctx->pc = 0x2CA700u;
label_2ca700:
    // 0x2ca700: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ca700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ca704: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca708: 0x24630310  addiu       $v1, $v1, 0x310
    ctx->pc = 0x2ca708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 784));
    // 0x2ca70c: 0x24420348  addiu       $v0, $v0, 0x348
    ctx->pc = 0x2ca70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 840));
    // 0x2ca710: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ca710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ca714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca718: 0xc0b2ab0  jal         func_2CAAC0
    ctx->pc = 0x2CA718u;
    SET_GPR_U32(ctx, 31, 0x2CA720u);
    ctx->pc = 0x2CA71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA718u;
            // 0x2ca71c: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CAAC0u;
    if (runtime->hasFunction(0x2CAAC0u)) {
        auto targetFn = runtime->lookupFunction(0x2CAAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA720u; }
        if (ctx->pc != 0x2CA720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CAAC0_0x2caac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA720u; }
        if (ctx->pc != 0x2CA720u) { return; }
    }
    ctx->pc = 0x2CA720u;
label_2ca720:
    // 0x2ca720: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2ca720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2ca724: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca728: 0x24425d70  addiu       $v0, $v0, 0x5D70
    ctx->pc = 0x2ca728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23920));
    // 0x2ca72c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ca72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ca730: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca734: 0x24425da8  addiu       $v0, $v0, 0x5DA8
    ctx->pc = 0x2ca734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23976));
    // 0x2ca738: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2ca738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2ca73c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ca73cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ca740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca748: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA748u;
            // 0x2ca74c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA750u;
label_2ca750:
    // 0x2ca750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ca754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ca754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ca758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca75c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ca760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca764: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2CA764u;
    {
        const bool branch_taken_0x2ca764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA764u;
            // 0x2ca768: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca764) {
            ctx->pc = 0x2CA804u;
            goto label_2ca804;
        }
    }
    ctx->pc = 0x2CA76Cu;
    // 0x2ca76c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ca76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ca770: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca774: 0x24630310  addiu       $v1, $v1, 0x310
    ctx->pc = 0x2ca774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 784));
    // 0x2ca778: 0x24420348  addiu       $v0, $v0, 0x348
    ctx->pc = 0x2ca778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 840));
    // 0x2ca77c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ca77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ca780: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CA780u;
    {
        const bool branch_taken_0x2ca780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA780u;
            // 0x2ca784: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca780) {
            ctx->pc = 0x2CA7ECu;
            goto label_2ca7ec;
        }
    }
    ctx->pc = 0x2CA788u;
    // 0x2ca788: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ca788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ca78c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca790: 0x246302c0  addiu       $v1, $v1, 0x2C0
    ctx->pc = 0x2ca790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x2ca794: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2ca794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2ca798: 0x244202f8  addiu       $v0, $v0, 0x2F8
    ctx->pc = 0x2ca798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 760));
    // 0x2ca79c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ca79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ca7a0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2ca7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2ca7a4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2ca7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2ca7a8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2CA7A8u;
    SET_GPR_U32(ctx, 31, 0x2CA7B0u);
    ctx->pc = 0x2CA7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA7A8u;
            // 0x2ca7ac: 0x24a5a8f0  addiu       $a1, $a1, -0x5710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA7B0u; }
        if (ctx->pc != 0x2CA7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA7B0u; }
        if (ctx->pc != 0x2CA7B0u) { return; }
    }
    ctx->pc = 0x2CA7B0u;
label_2ca7b0:
    // 0x2ca7b0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2ca7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2ca7b4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x2CA7B4u;
    SET_GPR_U32(ctx, 31, 0x2CA7BCu);
    ctx->pc = 0x2CA7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA7B4u;
            // 0x2ca7b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA7BCu; }
        if (ctx->pc != 0x2CA7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA7BCu; }
        if (ctx->pc != 0x2CA7BCu) { return; }
    }
    ctx->pc = 0x2CA7BCu;
label_2ca7bc:
    // 0x2ca7bc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2ca7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2ca7c0: 0xc0b2a20  jal         func_2CA880
    ctx->pc = 0x2CA7C0u;
    SET_GPR_U32(ctx, 31, 0x2CA7C8u);
    ctx->pc = 0x2CA7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA7C0u;
            // 0x2ca7c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA880u;
    if (runtime->hasFunction(0x2CA880u)) {
        auto targetFn = runtime->lookupFunction(0x2CA880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA7C8u; }
        if (ctx->pc != 0x2CA7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA880_0x2ca880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA7C8u; }
        if (ctx->pc != 0x2CA7C8u) { return; }
    }
    ctx->pc = 0x2CA7C8u;
label_2ca7c8:
    // 0x2ca7c8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2ca7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2ca7cc: 0xc0b2a20  jal         func_2CA880
    ctx->pc = 0x2CA7CCu;
    SET_GPR_U32(ctx, 31, 0x2CA7D4u);
    ctx->pc = 0x2CA7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA7CCu;
            // 0x2ca7d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA880u;
    if (runtime->hasFunction(0x2CA880u)) {
        auto targetFn = runtime->lookupFunction(0x2CA880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA7D4u; }
        if (ctx->pc != 0x2CA7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA880_0x2ca880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA7D4u; }
        if (ctx->pc != 0x2CA7D4u) { return; }
    }
    ctx->pc = 0x2CA7D4u;
label_2ca7d4:
    // 0x2ca7d4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2ca7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2ca7d8: 0xc0b2a08  jal         func_2CA820
    ctx->pc = 0x2CA7D8u;
    SET_GPR_U32(ctx, 31, 0x2CA7E0u);
    ctx->pc = 0x2CA7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA7D8u;
            // 0x2ca7dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA820u;
    if (runtime->hasFunction(0x2CA820u)) {
        auto targetFn = runtime->lookupFunction(0x2CA820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA7E0u; }
        if (ctx->pc != 0x2CA7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA820_0x2ca820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA7E0u; }
        if (ctx->pc != 0x2CA7E0u) { return; }
    }
    ctx->pc = 0x2CA7E0u;
label_2ca7e0:
    // 0x2ca7e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca7e4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2CA7E4u;
    SET_GPR_U32(ctx, 31, 0x2CA7ECu);
    ctx->pc = 0x2CA7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA7E4u;
            // 0x2ca7e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA7ECu; }
        if (ctx->pc != 0x2CA7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA7ECu; }
        if (ctx->pc != 0x2CA7ECu) { return; }
    }
    ctx->pc = 0x2CA7ECu;
label_2ca7ec:
    // 0x2ca7ec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2ca7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2ca7f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ca7f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ca7f4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA7F4u;
    {
        const bool branch_taken_0x2ca7f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ca7f4) {
            ctx->pc = 0x2CA7F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA7F4u;
            // 0x2ca7f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA808u;
            goto label_2ca808;
        }
    }
    ctx->pc = 0x2CA7FCu;
    // 0x2ca7fc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CA7FCu;
    SET_GPR_U32(ctx, 31, 0x2CA804u);
    ctx->pc = 0x2CA800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA7FCu;
            // 0x2ca800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA804u; }
        if (ctx->pc != 0x2CA804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA804u; }
        if (ctx->pc != 0x2CA804u) { return; }
    }
    ctx->pc = 0x2CA804u;
label_2ca804:
    // 0x2ca804: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ca804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca808:
    // 0x2ca808: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ca808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca80c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca80cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca814: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA814u;
            // 0x2ca818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA81Cu;
    // 0x2ca81c: 0x0  nop
    ctx->pc = 0x2ca81cu;
    // NOP
}
