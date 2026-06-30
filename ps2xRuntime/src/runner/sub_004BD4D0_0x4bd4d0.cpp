#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BD4D0
// Address: 0x4bd4d0 - 0x4bd610
void sub_004BD4D0_0x4bd4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BD4D0_0x4bd4d0");
#endif

    switch (ctx->pc) {
        case 0x4bd4ecu: goto label_4bd4ec;
        case 0x4bd50cu: goto label_4bd50c;
        case 0x4bd540u: goto label_4bd540;
        case 0x4bd5a0u: goto label_4bd5a0;
        case 0x4bd5acu: goto label_4bd5ac;
        case 0x4bd5b8u: goto label_4bd5b8;
        case 0x4bd5c4u: goto label_4bd5c4;
        case 0x4bd5d0u: goto label_4bd5d0;
        case 0x4bd5dcu: goto label_4bd5dc;
        case 0x4bd5f4u: goto label_4bd5f4;
        default: break;
    }

    ctx->pc = 0x4bd4d0u;

    // 0x4bd4d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bd4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4bd4d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4bd4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4bd4d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bd4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4bd4dc: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x4bd4dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x4bd4e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bd4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4bd4e4: 0xc12f5bc  jal         func_4BD6F0
    ctx->pc = 0x4BD4E4u;
    SET_GPR_U32(ctx, 31, 0x4BD4ECu);
    ctx->pc = 0x4BD4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD4E4u;
            // 0x4bd4e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BD6F0u;
    if (runtime->hasFunction(0x4BD6F0u)) {
        auto targetFn = runtime->lookupFunction(0x4BD6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD4ECu; }
        if (ctx->pc != 0x4BD4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BD6F0_0x4bd6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD4ECu; }
        if (ctx->pc != 0x4BD4ECu) { return; }
    }
    ctx->pc = 0x4BD4ECu;
label_4bd4ec:
    // 0x4bd4ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bd4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4bd4f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bd4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bd4f4: 0x24630f70  addiu       $v1, $v1, 0xF70
    ctx->pc = 0x4bd4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3952));
    // 0x4bd4f8: 0x24420fa8  addiu       $v0, $v0, 0xFA8
    ctx->pc = 0x4bd4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4008));
    // 0x4bd4fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bd4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4bd500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bd500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd504: 0xc12f5b8  jal         func_4BD6E0
    ctx->pc = 0x4BD504u;
    SET_GPR_U32(ctx, 31, 0x4BD50Cu);
    ctx->pc = 0x4BD508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD504u;
            // 0x4bd508: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BD6E0u;
    if (runtime->hasFunction(0x4BD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x4BD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD50Cu; }
        if (ctx->pc != 0x4BD50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BD6E0_0x4bd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD50Cu; }
        if (ctx->pc != 0x4BD50Cu) { return; }
    }
    ctx->pc = 0x4BD50Cu;
label_4bd50c:
    // 0x4bd50c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4bd50cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4bd510: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bd510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bd514: 0x24420ec0  addiu       $v0, $v0, 0xEC0
    ctx->pc = 0x4bd514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
    // 0x4bd518: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4bd518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4bd51c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bd51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bd520: 0x24420ef8  addiu       $v0, $v0, 0xEF8
    ctx->pc = 0x4bd520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3832));
    // 0x4bd524: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4bd524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4bd528: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4bd528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd52c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bd52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bd530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bd530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bd534: 0x3e00008  jr          $ra
    ctx->pc = 0x4BD534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BD538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD534u;
            // 0x4bd538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BD53Cu;
    // 0x4bd53c: 0x0  nop
    ctx->pc = 0x4bd53cu;
    // NOP
label_4bd540:
    // 0x4bd540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bd540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4bd544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bd544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4bd548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bd548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4bd54c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bd54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4bd550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bd550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd554: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4BD554u;
    {
        const bool branch_taken_0x4bd554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD554u;
            // 0x4bd558: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd554) {
            ctx->pc = 0x4BD5F4u;
            goto label_4bd5f4;
        }
    }
    ctx->pc = 0x4BD55Cu;
    // 0x4bd55c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bd55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4bd560: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bd560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bd564: 0x24630f70  addiu       $v1, $v1, 0xF70
    ctx->pc = 0x4bd564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3952));
    // 0x4bd568: 0x24420fa8  addiu       $v0, $v0, 0xFA8
    ctx->pc = 0x4bd568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4008));
    // 0x4bd56c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bd56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4bd570: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4BD570u;
    {
        const bool branch_taken_0x4bd570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD570u;
            // 0x4bd574: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd570) {
            ctx->pc = 0x4BD5DCu;
            goto label_4bd5dc;
        }
    }
    ctx->pc = 0x4BD578u;
    // 0x4bd578: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bd578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4bd57c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bd57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bd580: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x4bd580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x4bd584: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4bd584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x4bd588: 0x24420f58  addiu       $v0, $v0, 0xF58
    ctx->pc = 0x4bd588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3928));
    // 0x4bd58c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bd58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4bd590: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4bd590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4bd594: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4bd594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4bd598: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4BD598u;
    SET_GPR_U32(ctx, 31, 0x4BD5A0u);
    ctx->pc = 0x4BD59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD598u;
            // 0x4bd59c: 0x24a5d0b0  addiu       $a1, $a1, -0x2F50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD5A0u; }
        if (ctx->pc != 0x4BD5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD5A0u; }
        if (ctx->pc != 0x4BD5A0u) { return; }
    }
    ctx->pc = 0x4BD5A0u;
label_4bd5a0:
    // 0x4bd5a0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4bd5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4bd5a4: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x4BD5A4u;
    SET_GPR_U32(ctx, 31, 0x4BD5ACu);
    ctx->pc = 0x4BD5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD5A4u;
            // 0x4bd5a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD5ACu; }
        if (ctx->pc != 0x4BD5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD5ACu; }
        if (ctx->pc != 0x4BD5ACu) { return; }
    }
    ctx->pc = 0x4BD5ACu;
label_4bd5ac:
    // 0x4bd5ac: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4bd5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4bd5b0: 0xc12f59c  jal         func_4BD670
    ctx->pc = 0x4BD5B0u;
    SET_GPR_U32(ctx, 31, 0x4BD5B8u);
    ctx->pc = 0x4BD5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD5B0u;
            // 0x4bd5b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BD670u;
    if (runtime->hasFunction(0x4BD670u)) {
        auto targetFn = runtime->lookupFunction(0x4BD670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD5B8u; }
        if (ctx->pc != 0x4BD5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BD670_0x4bd670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD5B8u; }
        if (ctx->pc != 0x4BD5B8u) { return; }
    }
    ctx->pc = 0x4BD5B8u;
label_4bd5b8:
    // 0x4bd5b8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4bd5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4bd5bc: 0xc12f59c  jal         func_4BD670
    ctx->pc = 0x4BD5BCu;
    SET_GPR_U32(ctx, 31, 0x4BD5C4u);
    ctx->pc = 0x4BD5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD5BCu;
            // 0x4bd5c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BD670u;
    if (runtime->hasFunction(0x4BD670u)) {
        auto targetFn = runtime->lookupFunction(0x4BD670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD5C4u; }
        if (ctx->pc != 0x4BD5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BD670_0x4bd670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD5C4u; }
        if (ctx->pc != 0x4BD5C4u) { return; }
    }
    ctx->pc = 0x4BD5C4u;
label_4bd5c4:
    // 0x4bd5c4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4bd5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4bd5c8: 0xc12f584  jal         func_4BD610
    ctx->pc = 0x4BD5C8u;
    SET_GPR_U32(ctx, 31, 0x4BD5D0u);
    ctx->pc = 0x4BD5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD5C8u;
            // 0x4bd5cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BD610u;
    if (runtime->hasFunction(0x4BD610u)) {
        auto targetFn = runtime->lookupFunction(0x4BD610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD5D0u; }
        if (ctx->pc != 0x4BD5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BD610_0x4bd610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD5D0u; }
        if (ctx->pc != 0x4BD5D0u) { return; }
    }
    ctx->pc = 0x4BD5D0u;
label_4bd5d0:
    // 0x4bd5d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bd5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd5d4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4BD5D4u;
    SET_GPR_U32(ctx, 31, 0x4BD5DCu);
    ctx->pc = 0x4BD5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD5D4u;
            // 0x4bd5d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD5DCu; }
        if (ctx->pc != 0x4BD5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD5DCu; }
        if (ctx->pc != 0x4BD5DCu) { return; }
    }
    ctx->pc = 0x4BD5DCu;
label_4bd5dc:
    // 0x4bd5dc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4bd5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4bd5e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4bd5e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4bd5e4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BD5E4u;
    {
        const bool branch_taken_0x4bd5e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4bd5e4) {
            ctx->pc = 0x4BD5E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD5E4u;
            // 0x4bd5e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BD5F8u;
            goto label_4bd5f8;
        }
    }
    ctx->pc = 0x4BD5ECu;
    // 0x4bd5ec: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4BD5ECu;
    SET_GPR_U32(ctx, 31, 0x4BD5F4u);
    ctx->pc = 0x4BD5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD5ECu;
            // 0x4bd5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD5F4u; }
        if (ctx->pc != 0x4BD5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD5F4u; }
        if (ctx->pc != 0x4BD5F4u) { return; }
    }
    ctx->pc = 0x4BD5F4u;
label_4bd5f4:
    // 0x4bd5f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4bd5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bd5f8:
    // 0x4bd5f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bd5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bd5fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bd5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bd600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bd600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bd604: 0x3e00008  jr          $ra
    ctx->pc = 0x4BD604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BD608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD604u;
            // 0x4bd608: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BD60Cu;
    // 0x4bd60c: 0x0  nop
    ctx->pc = 0x4bd60cu;
    // NOP
}
