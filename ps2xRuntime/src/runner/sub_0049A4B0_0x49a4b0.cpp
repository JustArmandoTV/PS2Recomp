#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049A4B0
// Address: 0x49a4b0 - 0x49a5f0
void sub_0049A4B0_0x49a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A4B0_0x49a4b0");
#endif

    switch (ctx->pc) {
        case 0x49a4ccu: goto label_49a4cc;
        case 0x49a4ecu: goto label_49a4ec;
        case 0x49a520u: goto label_49a520;
        case 0x49a580u: goto label_49a580;
        case 0x49a58cu: goto label_49a58c;
        case 0x49a598u: goto label_49a598;
        case 0x49a5a4u: goto label_49a5a4;
        case 0x49a5b0u: goto label_49a5b0;
        case 0x49a5bcu: goto label_49a5bc;
        case 0x49a5d4u: goto label_49a5d4;
        default: break;
    }

    ctx->pc = 0x49a4b0u;

    // 0x49a4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49a4b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x49a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x49a4b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49a4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49a4bc: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x49a4bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x49a4c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49a4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49a4c4: 0xc1269b4  jal         func_49A6D0
    ctx->pc = 0x49A4C4u;
    SET_GPR_U32(ctx, 31, 0x49A4CCu);
    ctx->pc = 0x49A4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A4C4u;
            // 0x49a4c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49A6D0u;
    if (runtime->hasFunction(0x49A6D0u)) {
        auto targetFn = runtime->lookupFunction(0x49A6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A4CCu; }
        if (ctx->pc != 0x49A4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049A6D0_0x49a6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A4CCu; }
        if (ctx->pc != 0x49A4CCu) { return; }
    }
    ctx->pc = 0x49A4CCu;
label_49a4cc:
    // 0x49a4cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49a4d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49a4d4: 0x2463fb90  addiu       $v1, $v1, -0x470
    ctx->pc = 0x49a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966160));
    // 0x49a4d8: 0x2442fbc8  addiu       $v0, $v0, -0x438
    ctx->pc = 0x49a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966216));
    // 0x49a4dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49a4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49a4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49a4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a4e4: 0xc1269b0  jal         func_49A6C0
    ctx->pc = 0x49A4E4u;
    SET_GPR_U32(ctx, 31, 0x49A4ECu);
    ctx->pc = 0x49A4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A4E4u;
            // 0x49a4e8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49A6C0u;
    if (runtime->hasFunction(0x49A6C0u)) {
        auto targetFn = runtime->lookupFunction(0x49A6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A4ECu; }
        if (ctx->pc != 0x49A4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049A6C0_0x49a6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A4ECu; }
        if (ctx->pc != 0x49A4ECu) { return; }
    }
    ctx->pc = 0x49A4ECu;
label_49a4ec:
    // 0x49a4ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x49a4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x49a4f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49a4f4: 0x2442fae0  addiu       $v0, $v0, -0x520
    ctx->pc = 0x49a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965984));
    // 0x49a4f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49a4fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49a500: 0x2442fb18  addiu       $v0, $v0, -0x4E8
    ctx->pc = 0x49a500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966040));
    // 0x49a504: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x49a504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x49a508: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49a508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a50c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49a50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49a510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a514: 0x3e00008  jr          $ra
    ctx->pc = 0x49A514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A514u;
            // 0x49a518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49A51Cu;
    // 0x49a51c: 0x0  nop
    ctx->pc = 0x49a51cu;
    // NOP
label_49a520:
    // 0x49a520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49a524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49a524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49a528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49a528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49a52c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49a52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49a530: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49a530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a534: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x49A534u;
    {
        const bool branch_taken_0x49a534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A534u;
            // 0x49a538: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a534) {
            ctx->pc = 0x49A5D4u;
            goto label_49a5d4;
        }
    }
    ctx->pc = 0x49A53Cu;
    // 0x49a53c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49a540: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49a540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49a544: 0x2463fb90  addiu       $v1, $v1, -0x470
    ctx->pc = 0x49a544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966160));
    // 0x49a548: 0x2442fbc8  addiu       $v0, $v0, -0x438
    ctx->pc = 0x49a548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966216));
    // 0x49a54c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49a54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49a550: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x49A550u;
    {
        const bool branch_taken_0x49a550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A550u;
            // 0x49a554: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a550) {
            ctx->pc = 0x49A5BCu;
            goto label_49a5bc;
        }
    }
    ctx->pc = 0x49A558u;
    // 0x49a558: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49a558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49a55c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49a560: 0x2463fb40  addiu       $v1, $v1, -0x4C0
    ctx->pc = 0x49a560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966080));
    // 0x49a564: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x49a564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x49a568: 0x2442fb78  addiu       $v0, $v0, -0x488
    ctx->pc = 0x49a568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966136));
    // 0x49a56c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49a570: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x49a570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x49a574: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x49a574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x49a578: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x49A578u;
    SET_GPR_U32(ctx, 31, 0x49A580u);
    ctx->pc = 0x49A57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A578u;
            // 0x49a57c: 0x24a5a170  addiu       $a1, $a1, -0x5E90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A580u; }
        if (ctx->pc != 0x49A580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A580u; }
        if (ctx->pc != 0x49A580u) { return; }
    }
    ctx->pc = 0x49A580u;
label_49a580:
    // 0x49a580: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x49a580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x49a584: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x49A584u;
    SET_GPR_U32(ctx, 31, 0x49A58Cu);
    ctx->pc = 0x49A588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A584u;
            // 0x49a588: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A58Cu; }
        if (ctx->pc != 0x49A58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A58Cu; }
        if (ctx->pc != 0x49A58Cu) { return; }
    }
    ctx->pc = 0x49A58Cu;
label_49a58c:
    // 0x49a58c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x49a58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x49a590: 0xc126994  jal         func_49A650
    ctx->pc = 0x49A590u;
    SET_GPR_U32(ctx, 31, 0x49A598u);
    ctx->pc = 0x49A594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A590u;
            // 0x49a594: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49A650u;
    if (runtime->hasFunction(0x49A650u)) {
        auto targetFn = runtime->lookupFunction(0x49A650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A598u; }
        if (ctx->pc != 0x49A598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049A650_0x49a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A598u; }
        if (ctx->pc != 0x49A598u) { return; }
    }
    ctx->pc = 0x49A598u;
label_49a598:
    // 0x49a598: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x49a598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x49a59c: 0xc126994  jal         func_49A650
    ctx->pc = 0x49A59Cu;
    SET_GPR_U32(ctx, 31, 0x49A5A4u);
    ctx->pc = 0x49A5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A59Cu;
            // 0x49a5a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49A650u;
    if (runtime->hasFunction(0x49A650u)) {
        auto targetFn = runtime->lookupFunction(0x49A650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A5A4u; }
        if (ctx->pc != 0x49A5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049A650_0x49a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A5A4u; }
        if (ctx->pc != 0x49A5A4u) { return; }
    }
    ctx->pc = 0x49A5A4u;
label_49a5a4:
    // 0x49a5a4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x49a5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x49a5a8: 0xc12697c  jal         func_49A5F0
    ctx->pc = 0x49A5A8u;
    SET_GPR_U32(ctx, 31, 0x49A5B0u);
    ctx->pc = 0x49A5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A5A8u;
            // 0x49a5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49A5F0u;
    if (runtime->hasFunction(0x49A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x49A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A5B0u; }
        if (ctx->pc != 0x49A5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049A5F0_0x49a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A5B0u; }
        if (ctx->pc != 0x49A5B0u) { return; }
    }
    ctx->pc = 0x49A5B0u;
label_49a5b0:
    // 0x49a5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49a5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a5b4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x49A5B4u;
    SET_GPR_U32(ctx, 31, 0x49A5BCu);
    ctx->pc = 0x49A5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A5B4u;
            // 0x49a5b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A5BCu; }
        if (ctx->pc != 0x49A5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A5BCu; }
        if (ctx->pc != 0x49A5BCu) { return; }
    }
    ctx->pc = 0x49A5BCu;
label_49a5bc:
    // 0x49a5bc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x49a5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x49a5c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49a5c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x49a5c4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49A5C4u;
    {
        const bool branch_taken_0x49a5c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49a5c4) {
            ctx->pc = 0x49A5C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A5C4u;
            // 0x49a5c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A5D8u;
            goto label_49a5d8;
        }
    }
    ctx->pc = 0x49A5CCu;
    // 0x49a5cc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x49A5CCu;
    SET_GPR_U32(ctx, 31, 0x49A5D4u);
    ctx->pc = 0x49A5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A5CCu;
            // 0x49a5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A5D4u; }
        if (ctx->pc != 0x49A5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A5D4u; }
        if (ctx->pc != 0x49A5D4u) { return; }
    }
    ctx->pc = 0x49A5D4u;
label_49a5d4:
    // 0x49a5d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49a5d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a5d8:
    // 0x49a5d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49a5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49a5dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49a5dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a5e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49a5e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x49A5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A5E4u;
            // 0x49a5e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49A5ECu;
    // 0x49a5ec: 0x0  nop
    ctx->pc = 0x49a5ecu;
    // NOP
}
