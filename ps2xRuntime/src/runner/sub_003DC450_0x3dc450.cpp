#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DC450
// Address: 0x3dc450 - 0x3dc590
void sub_003DC450_0x3dc450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC450_0x3dc450");
#endif

    switch (ctx->pc) {
        case 0x3dc46cu: goto label_3dc46c;
        case 0x3dc48cu: goto label_3dc48c;
        case 0x3dc4c0u: goto label_3dc4c0;
        case 0x3dc520u: goto label_3dc520;
        case 0x3dc52cu: goto label_3dc52c;
        case 0x3dc538u: goto label_3dc538;
        case 0x3dc544u: goto label_3dc544;
        case 0x3dc550u: goto label_3dc550;
        case 0x3dc55cu: goto label_3dc55c;
        case 0x3dc574u: goto label_3dc574;
        default: break;
    }

    ctx->pc = 0x3dc450u;

    // 0x3dc450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dc450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dc454: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3dc454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3dc458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dc458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dc45c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x3dc45cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x3dc460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dc460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dc464: 0xc0f719c  jal         func_3DC670
    ctx->pc = 0x3DC464u;
    SET_GPR_U32(ctx, 31, 0x3DC46Cu);
    ctx->pc = 0x3DC468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC464u;
            // 0x3dc468: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DC670u;
    if (runtime->hasFunction(0x3DC670u)) {
        auto targetFn = runtime->lookupFunction(0x3DC670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC46Cu; }
        if (ctx->pc != 0x3DC46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DC670_0x3dc670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC46Cu; }
        if (ctx->pc != 0x3DC46Cu) { return; }
    }
    ctx->pc = 0x3DC46Cu;
label_3dc46c:
    // 0x3dc46c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3dc46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3dc470: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3dc470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3dc474: 0x246399e0  addiu       $v1, $v1, -0x6620
    ctx->pc = 0x3dc474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941152));
    // 0x3dc478: 0x24429a18  addiu       $v0, $v0, -0x65E8
    ctx->pc = 0x3dc478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941208));
    // 0x3dc47c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3dc47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3dc480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dc480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc484: 0xc0f7198  jal         func_3DC660
    ctx->pc = 0x3DC484u;
    SET_GPR_U32(ctx, 31, 0x3DC48Cu);
    ctx->pc = 0x3DC488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC484u;
            // 0x3dc488: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DC660u;
    if (runtime->hasFunction(0x3DC660u)) {
        auto targetFn = runtime->lookupFunction(0x3DC660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC48Cu; }
        if (ctx->pc != 0x3DC48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DC660_0x3dc660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC48Cu; }
        if (ctx->pc != 0x3DC48Cu) { return; }
    }
    ctx->pc = 0x3DC48Cu;
label_3dc48c:
    // 0x3dc48c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3dc48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3dc490: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3dc490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3dc494: 0x24429920  addiu       $v0, $v0, -0x66E0
    ctx->pc = 0x3dc494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940960));
    // 0x3dc498: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3dc498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3dc49c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3dc49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3dc4a0: 0x24429958  addiu       $v0, $v0, -0x66A8
    ctx->pc = 0x3dc4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941016));
    // 0x3dc4a4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3dc4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3dc4a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3dc4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc4ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dc4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dc4b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dc4b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC4B4u;
            // 0x3dc4b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DC4BCu;
    // 0x3dc4bc: 0x0  nop
    ctx->pc = 0x3dc4bcu;
    // NOP
label_3dc4c0:
    // 0x3dc4c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dc4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3dc4c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dc4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3dc4c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dc4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dc4cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dc4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dc4d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dc4d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc4d4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3DC4D4u;
    {
        const bool branch_taken_0x3dc4d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC4D4u;
            // 0x3dc4d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc4d4) {
            ctx->pc = 0x3DC574u;
            goto label_3dc574;
        }
    }
    ctx->pc = 0x3DC4DCu;
    // 0x3dc4dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3dc4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3dc4e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3dc4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3dc4e4: 0x246399e0  addiu       $v1, $v1, -0x6620
    ctx->pc = 0x3dc4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941152));
    // 0x3dc4e8: 0x24429a18  addiu       $v0, $v0, -0x65E8
    ctx->pc = 0x3dc4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941208));
    // 0x3dc4ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3dc4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3dc4f0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3DC4F0u;
    {
        const bool branch_taken_0x3dc4f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC4F0u;
            // 0x3dc4f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc4f0) {
            ctx->pc = 0x3DC55Cu;
            goto label_3dc55c;
        }
    }
    ctx->pc = 0x3DC4F8u;
    // 0x3dc4f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3dc4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3dc4fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3dc4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3dc500: 0x24639990  addiu       $v1, $v1, -0x6670
    ctx->pc = 0x3dc500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941072));
    // 0x3dc504: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3dc504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x3dc508: 0x244299c8  addiu       $v0, $v0, -0x6638
    ctx->pc = 0x3dc508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941128));
    // 0x3dc50c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3dc50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3dc510: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3dc510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3dc514: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3dc514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3dc518: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x3DC518u;
    SET_GPR_U32(ctx, 31, 0x3DC520u);
    ctx->pc = 0x3DC51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC518u;
            // 0x3dc51c: 0x24a5b640  addiu       $a1, $a1, -0x49C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC520u; }
        if (ctx->pc != 0x3DC520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC520u; }
        if (ctx->pc != 0x3DC520u) { return; }
    }
    ctx->pc = 0x3DC520u;
label_3dc520:
    // 0x3dc520: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3dc520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x3dc524: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x3DC524u;
    SET_GPR_U32(ctx, 31, 0x3DC52Cu);
    ctx->pc = 0x3DC528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC524u;
            // 0x3dc528: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC52Cu; }
        if (ctx->pc != 0x3DC52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC52Cu; }
        if (ctx->pc != 0x3DC52Cu) { return; }
    }
    ctx->pc = 0x3DC52Cu;
label_3dc52c:
    // 0x3dc52c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x3dc52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x3dc530: 0xc0f717c  jal         func_3DC5F0
    ctx->pc = 0x3DC530u;
    SET_GPR_U32(ctx, 31, 0x3DC538u);
    ctx->pc = 0x3DC534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC530u;
            // 0x3dc534: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DC5F0u;
    if (runtime->hasFunction(0x3DC5F0u)) {
        auto targetFn = runtime->lookupFunction(0x3DC5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC538u; }
        if (ctx->pc != 0x3DC538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DC5F0_0x3dc5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC538u; }
        if (ctx->pc != 0x3DC538u) { return; }
    }
    ctx->pc = 0x3DC538u;
label_3dc538:
    // 0x3dc538: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3dc538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x3dc53c: 0xc0f717c  jal         func_3DC5F0
    ctx->pc = 0x3DC53Cu;
    SET_GPR_U32(ctx, 31, 0x3DC544u);
    ctx->pc = 0x3DC540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC53Cu;
            // 0x3dc540: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DC5F0u;
    if (runtime->hasFunction(0x3DC5F0u)) {
        auto targetFn = runtime->lookupFunction(0x3DC5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC544u; }
        if (ctx->pc != 0x3DC544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DC5F0_0x3dc5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC544u; }
        if (ctx->pc != 0x3DC544u) { return; }
    }
    ctx->pc = 0x3DC544u;
label_3dc544:
    // 0x3dc544: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x3dc544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x3dc548: 0xc0f7164  jal         func_3DC590
    ctx->pc = 0x3DC548u;
    SET_GPR_U32(ctx, 31, 0x3DC550u);
    ctx->pc = 0x3DC54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC548u;
            // 0x3dc54c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DC590u;
    if (runtime->hasFunction(0x3DC590u)) {
        auto targetFn = runtime->lookupFunction(0x3DC590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC550u; }
        if (ctx->pc != 0x3DC550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DC590_0x3dc590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC550u; }
        if (ctx->pc != 0x3DC550u) { return; }
    }
    ctx->pc = 0x3DC550u;
label_3dc550:
    // 0x3dc550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dc550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc554: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x3DC554u;
    SET_GPR_U32(ctx, 31, 0x3DC55Cu);
    ctx->pc = 0x3DC558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC554u;
            // 0x3dc558: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC55Cu; }
        if (ctx->pc != 0x3DC55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC55Cu; }
        if (ctx->pc != 0x3DC55Cu) { return; }
    }
    ctx->pc = 0x3DC55Cu;
label_3dc55c:
    // 0x3dc55c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3dc55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3dc560: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3dc560u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3dc564: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC564u;
    {
        const bool branch_taken_0x3dc564 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3dc564) {
            ctx->pc = 0x3DC568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC564u;
            // 0x3dc568: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DC578u;
            goto label_3dc578;
        }
    }
    ctx->pc = 0x3DC56Cu;
    // 0x3dc56c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3DC56Cu;
    SET_GPR_U32(ctx, 31, 0x3DC574u);
    ctx->pc = 0x3DC570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC56Cu;
            // 0x3dc570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC574u; }
        if (ctx->pc != 0x3DC574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC574u; }
        if (ctx->pc != 0x3DC574u) { return; }
    }
    ctx->pc = 0x3DC574u;
label_3dc574:
    // 0x3dc574: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3dc574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dc578:
    // 0x3dc578: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dc578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dc57c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dc57cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dc580: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dc580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc584: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC584u;
            // 0x3dc588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DC58Cu;
    // 0x3dc58c: 0x0  nop
    ctx->pc = 0x3dc58cu;
    // NOP
}
