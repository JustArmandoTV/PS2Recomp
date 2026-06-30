#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00123478
// Address: 0x123478 - 0x123548
void sub_00123478_0x123478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123478_0x123478");
#endif

    switch (ctx->pc) {
        case 0x1234ccu: goto label_1234cc;
        case 0x1234e0u: goto label_1234e0;
        case 0x1234f0u: goto label_1234f0;
        case 0x1234fcu: goto label_1234fc;
        case 0x123508u: goto label_123508;
        case 0x123510u: goto label_123510;
        case 0x123518u: goto label_123518;
        case 0x12353cu: goto label_12353c;
        default: break;
    }

    ctx->pc = 0x123478u;

    // 0x123478: 0x240ff800  addiu       $t7, $zero, -0x800
    ctx->pc = 0x123478u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x12347c: 0x240ef800  addiu       $t6, $zero, -0x800
    ctx->pc = 0x12347cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x123480: 0xf7afa  dsrl        $t7, $t7, 11
    ctx->pc = 0x123480u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 11);
    // 0x123484: 0xe72ba  dsrl        $t6, $t6, 10
    ctx->pc = 0x123484u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 10);
    // 0x123488: 0x8f782d  daddu       $t7, $a0, $t7
    ctx->pc = 0x123488u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 15));
    // 0x12348c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12348cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123490: 0x1cf702b  sltu        $t6, $t6, $t7
    ctx->pc = 0x123490u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x123494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123498: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12349c: 0x308f07ff  andi        $t7, $a0, 0x7FF
    ctx->pc = 0x12349cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x1234a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1234a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1234a4: 0x11c00006  beqz        $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1234A4u;
    {
        const bool branch_taken_0x1234a4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1234A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1234A4u;
            // 0x1234a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234a4) {
            ctx->pc = 0x1234C0u;
            goto label_1234c0;
        }
    }
    ctx->pc = 0x1234ACu;
    // 0x1234ac: 0x51e00005  beql        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1234ACu;
    {
        const bool branch_taken_0x1234ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1234ac) {
            ctx->pc = 0x1234B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1234ACu;
            // 0x1234b0: 0x10203f  dsra32      $a0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1234C4u;
            goto label_1234c4;
        }
    }
    ctx->pc = 0x1234B4u;
    // 0x1234b4: 0x240ff800  addiu       $t7, $zero, -0x800
    ctx->pc = 0x1234b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x1234b8: 0x8f8024  and         $s0, $a0, $t7
    ctx->pc = 0x1234b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x1234bc: 0x36100800  ori         $s0, $s0, 0x800
    ctx->pc = 0x1234bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2048);
label_1234c0:
    // 0x1234c0: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x1234c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
label_1234c4:
    // 0x1234c4: 0xc049776  jal         func_125DD8
    ctx->pc = 0x1234C4u;
    SET_GPR_U32(ctx, 31, 0x1234CCu);
    ctx->pc = 0x1234C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1234C4u;
            // 0x1234c8: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1234CCu; }
        if (ctx->pc != 0x1234CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1234CCu; }
        if (ctx->pc != 0x1234CCu) { return; }
    }
    ctx->pc = 0x1234CCu;
label_1234cc:
    // 0x1234cc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1234ccu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1234d0: 0x2405040f  addiu       $a1, $zero, 0x40F
    ctx->pc = 0x1234d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x1234d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1234d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1234d8: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1234D8u;
    SET_GPR_U32(ctx, 31, 0x1234E0u);
    ctx->pc = 0x1234DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1234D8u;
            // 0x1234dc: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1234E0u; }
        if (ctx->pc != 0x1234E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1234E0u; }
        if (ctx->pc != 0x1234E0u) { return; }
    }
    ctx->pc = 0x1234E0u;
label_1234e0:
    // 0x1234e0: 0x2405040f  addiu       $a1, $zero, 0x40F
    ctx->pc = 0x1234e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x1234e4: 0x52d3c  dsll32      $a1, $a1, 20
    ctx->pc = 0x1234e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    // 0x1234e8: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1234E8u;
    SET_GPR_U32(ctx, 31, 0x1234F0u);
    ctx->pc = 0x1234ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1234E8u;
            // 0x1234ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1234F0u; }
        if (ctx->pc != 0x1234F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1234F0u; }
        if (ctx->pc != 0x1234F0u) { return; }
    }
    ctx->pc = 0x1234F0u;
label_1234f0:
    // 0x1234f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1234f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1234f4: 0xc049776  jal         func_125DD8
    ctx->pc = 0x1234F4u;
    SET_GPR_U32(ctx, 31, 0x1234FCu);
    ctx->pc = 0x1234F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1234F4u;
            // 0x1234f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1234FCu; }
        if (ctx->pc != 0x1234FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1234FCu; }
        if (ctx->pc != 0x1234FCu) { return; }
    }
    ctx->pc = 0x1234FCu;
label_1234fc:
    // 0x1234fc: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1234FCu;
    {
        const bool branch_taken_0x1234fc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x123500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1234FCu;
            // 0x123500: 0x2405041f  addiu       $a1, $zero, 0x41F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234fc) {
            ctx->pc = 0x123530u;
            goto label_123530;
        }
    }
    ctx->pc = 0x123504u;
    // 0x123504: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x123504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123508:
    // 0x123508: 0xc04960a  jal         func_125828
    ctx->pc = 0x123508u;
    SET_GPR_U32(ctx, 31, 0x123510u);
    ctx->pc = 0x12350Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123508u;
            // 0x12350c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123510u; }
        if (ctx->pc != 0x123510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123510u; }
        if (ctx->pc != 0x123510u) { return; }
    }
    ctx->pc = 0x123510u;
label_123510:
    // 0x123510: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x123510u;
    SET_GPR_U32(ctx, 31, 0x123518u);
    ctx->pc = 0x123514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123510u;
            // 0x123514: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123518u; }
        if (ctx->pc != 0x123518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123518u; }
        if (ctx->pc != 0x123518u) { return; }
    }
    ctx->pc = 0x123518u;
label_123518:
    // 0x123518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x123518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12351c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12351cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123520: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123524: 0x3e00008  jr          $ra
    ctx->pc = 0x123524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123524u;
            // 0x123528: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12352Cu;
    // 0x12352c: 0x0  nop
    ctx->pc = 0x12352cu;
    // NOP
label_123530:
    // 0x123530: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123534: 0xc04960a  jal         func_125828
    ctx->pc = 0x123534u;
    SET_GPR_U32(ctx, 31, 0x12353Cu);
    ctx->pc = 0x123538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123534u;
            // 0x123538: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12353Cu; }
        if (ctx->pc != 0x12353Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12353Cu; }
        if (ctx->pc != 0x12353Cu) { return; }
    }
    ctx->pc = 0x12353Cu;
label_12353c:
    // 0x12353c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x12353Cu;
    {
        const bool branch_taken_0x12353c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12353Cu;
            // 0x123540: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12353c) {
            ctx->pc = 0x123508u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123508;
        }
    }
    ctx->pc = 0x123544u;
    // 0x123544: 0x0  nop
    ctx->pc = 0x123544u;
    // NOP
}
