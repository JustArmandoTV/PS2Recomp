#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F0490
// Address: 0x4f0490 - 0x4f05d0
void sub_004F0490_0x4f0490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0490_0x4f0490");
#endif

    switch (ctx->pc) {
        case 0x4f04acu: goto label_4f04ac;
        case 0x4f04ccu: goto label_4f04cc;
        case 0x4f0500u: goto label_4f0500;
        case 0x4f0560u: goto label_4f0560;
        case 0x4f056cu: goto label_4f056c;
        case 0x4f0578u: goto label_4f0578;
        case 0x4f0584u: goto label_4f0584;
        case 0x4f0590u: goto label_4f0590;
        case 0x4f059cu: goto label_4f059c;
        case 0x4f05b4u: goto label_4f05b4;
        default: break;
    }

    ctx->pc = 0x4f0490u;

    // 0x4f0490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f0490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f0494: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4f0494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4f0498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f0498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f049c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4f049cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4f04a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f04a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f04a4: 0xc13c1ac  jal         func_4F06B0
    ctx->pc = 0x4F04A4u;
    SET_GPR_U32(ctx, 31, 0x4F04ACu);
    ctx->pc = 0x4F04A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F04A4u;
            // 0x4f04a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F06B0u;
    if (runtime->hasFunction(0x4F06B0u)) {
        auto targetFn = runtime->lookupFunction(0x4F06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F04ACu; }
        if (ctx->pc != 0x4F04ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F06B0_0x4f06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F04ACu; }
        if (ctx->pc != 0x4F04ACu) { return; }
    }
    ctx->pc = 0x4F04ACu;
label_4f04ac:
    // 0x4f04ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f04acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f04b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f04b4: 0x24633f60  addiu       $v1, $v1, 0x3F60
    ctx->pc = 0x4f04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16224));
    // 0x4f04b8: 0x24423f98  addiu       $v0, $v0, 0x3F98
    ctx->pc = 0x4f04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16280));
    // 0x4f04bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f04bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f04c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f04c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f04c4: 0xc13c1a8  jal         func_4F06A0
    ctx->pc = 0x4F04C4u;
    SET_GPR_U32(ctx, 31, 0x4F04CCu);
    ctx->pc = 0x4F04C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F04C4u;
            // 0x4f04c8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F06A0u;
    if (runtime->hasFunction(0x4F06A0u)) {
        auto targetFn = runtime->lookupFunction(0x4F06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F04CCu; }
        if (ctx->pc != 0x4F04CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F06A0_0x4f06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F04CCu; }
        if (ctx->pc != 0x4F04CCu) { return; }
    }
    ctx->pc = 0x4F04CCu;
label_4f04cc:
    // 0x4f04cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4f04ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4f04d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f04d4: 0x24423eb0  addiu       $v0, $v0, 0x3EB0
    ctx->pc = 0x4f04d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16048));
    // 0x4f04d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f04d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4f04dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f04e0: 0x24423ee8  addiu       $v0, $v0, 0x3EE8
    ctx->pc = 0x4f04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16104));
    // 0x4f04e4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4f04e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4f04e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f04e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f04ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f04ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f04f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f04f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f04f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F04F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F04F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F04F4u;
            // 0x4f04f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F04FCu;
    // 0x4f04fc: 0x0  nop
    ctx->pc = 0x4f04fcu;
    // NOP
label_4f0500:
    // 0x4f0500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f0500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f0504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f0504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f0508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f0508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f050c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f050cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f0510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f0510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0514: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4F0514u;
    {
        const bool branch_taken_0x4f0514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0514u;
            // 0x4f0518: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0514) {
            ctx->pc = 0x4F05B4u;
            goto label_4f05b4;
        }
    }
    ctx->pc = 0x4F051Cu;
    // 0x4f051c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f051cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f0520: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f0520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f0524: 0x24633f60  addiu       $v1, $v1, 0x3F60
    ctx->pc = 0x4f0524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16224));
    // 0x4f0528: 0x24423f98  addiu       $v0, $v0, 0x3F98
    ctx->pc = 0x4f0528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16280));
    // 0x4f052c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f052cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f0530: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4F0530u;
    {
        const bool branch_taken_0x4f0530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0530u;
            // 0x4f0534: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0530) {
            ctx->pc = 0x4F059Cu;
            goto label_4f059c;
        }
    }
    ctx->pc = 0x4F0538u;
    // 0x4f0538: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f0538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f053c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f053cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f0540: 0x24633f10  addiu       $v1, $v1, 0x3F10
    ctx->pc = 0x4f0540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16144));
    // 0x4f0544: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4f0544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x4f0548: 0x24423f48  addiu       $v0, $v0, 0x3F48
    ctx->pc = 0x4f0548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16200));
    // 0x4f054c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f054cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f0550: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4f0550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4f0554: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4f0554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4f0558: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4F0558u;
    SET_GPR_U32(ctx, 31, 0x4F0560u);
    ctx->pc = 0x4F055Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0558u;
            // 0x4f055c: 0x24a50170  addiu       $a1, $a1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0560u; }
        if (ctx->pc != 0x4F0560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0560u; }
        if (ctx->pc != 0x4F0560u) { return; }
    }
    ctx->pc = 0x4F0560u;
label_4f0560:
    // 0x4f0560: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4f0560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4f0564: 0xc0aeacc  jal         func_2BAB30
    ctx->pc = 0x4F0564u;
    SET_GPR_U32(ctx, 31, 0x4F056Cu);
    ctx->pc = 0x4F0568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0564u;
            // 0x4f0568: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB30u;
    if (runtime->hasFunction(0x2BAB30u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F056Cu; }
        if (ctx->pc != 0x4F056Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB30_0x2bab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F056Cu; }
        if (ctx->pc != 0x4F056Cu) { return; }
    }
    ctx->pc = 0x4F056Cu;
label_4f056c:
    // 0x4f056c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4f056cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4f0570: 0xc13c18c  jal         func_4F0630
    ctx->pc = 0x4F0570u;
    SET_GPR_U32(ctx, 31, 0x4F0578u);
    ctx->pc = 0x4F0574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0570u;
            // 0x4f0574: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F0630u;
    if (runtime->hasFunction(0x4F0630u)) {
        auto targetFn = runtime->lookupFunction(0x4F0630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0578u; }
        if (ctx->pc != 0x4F0578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F0630_0x4f0630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0578u; }
        if (ctx->pc != 0x4F0578u) { return; }
    }
    ctx->pc = 0x4F0578u;
label_4f0578:
    // 0x4f0578: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4f0578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4f057c: 0xc13c18c  jal         func_4F0630
    ctx->pc = 0x4F057Cu;
    SET_GPR_U32(ctx, 31, 0x4F0584u);
    ctx->pc = 0x4F0580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F057Cu;
            // 0x4f0580: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F0630u;
    if (runtime->hasFunction(0x4F0630u)) {
        auto targetFn = runtime->lookupFunction(0x4F0630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0584u; }
        if (ctx->pc != 0x4F0584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F0630_0x4f0630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0584u; }
        if (ctx->pc != 0x4F0584u) { return; }
    }
    ctx->pc = 0x4F0584u;
label_4f0584:
    // 0x4f0584: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4f0584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4f0588: 0xc13c174  jal         func_4F05D0
    ctx->pc = 0x4F0588u;
    SET_GPR_U32(ctx, 31, 0x4F0590u);
    ctx->pc = 0x4F058Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0588u;
            // 0x4f058c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F05D0u;
    if (runtime->hasFunction(0x4F05D0u)) {
        auto targetFn = runtime->lookupFunction(0x4F05D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0590u; }
        if (ctx->pc != 0x4F0590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F05D0_0x4f05d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0590u; }
        if (ctx->pc != 0x4F0590u) { return; }
    }
    ctx->pc = 0x4F0590u;
label_4f0590:
    // 0x4f0590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f0590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0594: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4F0594u;
    SET_GPR_U32(ctx, 31, 0x4F059Cu);
    ctx->pc = 0x4F0598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0594u;
            // 0x4f0598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F059Cu; }
        if (ctx->pc != 0x4F059Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F059Cu; }
        if (ctx->pc != 0x4F059Cu) { return; }
    }
    ctx->pc = 0x4F059Cu;
label_4f059c:
    // 0x4f059c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4f059cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4f05a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f05a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4f05a4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F05A4u;
    {
        const bool branch_taken_0x4f05a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f05a4) {
            ctx->pc = 0x4F05A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F05A4u;
            // 0x4f05a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F05B8u;
            goto label_4f05b8;
        }
    }
    ctx->pc = 0x4F05ACu;
    // 0x4f05ac: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F05ACu;
    SET_GPR_U32(ctx, 31, 0x4F05B4u);
    ctx->pc = 0x4F05B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F05ACu;
            // 0x4f05b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F05B4u; }
        if (ctx->pc != 0x4F05B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F05B4u; }
        if (ctx->pc != 0x4F05B4u) { return; }
    }
    ctx->pc = 0x4F05B4u;
label_4f05b4:
    // 0x4f05b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f05b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f05b8:
    // 0x4f05b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f05b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f05bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f05bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f05c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f05c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f05c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F05C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F05C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F05C4u;
            // 0x4f05c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F05CCu;
    // 0x4f05cc: 0x0  nop
    ctx->pc = 0x4f05ccu;
    // NOP
}
