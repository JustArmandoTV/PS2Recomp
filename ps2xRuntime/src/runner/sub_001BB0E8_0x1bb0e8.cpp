#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB0E8
// Address: 0x1bb0e8 - 0x1bb280
void sub_001BB0E8_0x1bb0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB0E8_0x1bb0e8");
#endif

    switch (ctx->pc) {
        case 0x1bb120u: goto label_1bb120;
        case 0x1bb130u: goto label_1bb130;
        case 0x1bb178u: goto label_1bb178;
        case 0x1bb188u: goto label_1bb188;
        case 0x1bb1d0u: goto label_1bb1d0;
        case 0x1bb1e0u: goto label_1bb1e0;
        case 0x1bb220u: goto label_1bb220;
        case 0x1bb268u: goto label_1bb268;
        default: break;
    }

    ctx->pc = 0x1bb0e8u;

    // 0x1bb0e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb0ec: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1bb0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb0f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb0f4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb0f8: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x1bb0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bb0fc: 0x11020006  beq         $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB0FCu;
    {
        const bool branch_taken_0x1bb0fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0FCu;
            // 0x1bb100: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0fc) {
            ctx->pc = 0x1BB118u;
            goto label_1bb118;
        }
    }
    ctx->pc = 0x1BB104u;
    // 0x1bb104: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb108: 0x11020007  beq         $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB108u;
    {
        const bool branch_taken_0x1bb108 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB108u;
            // 0x1bb10c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb108) {
            ctx->pc = 0x1BB128u;
            goto label_1bb128;
        }
    }
    ctx->pc = 0x1BB110u;
    // 0x1bb110: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB110u;
    {
        const bool branch_taken_0x1bb110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB110u;
            // 0x1bb114: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb110) {
            ctx->pc = 0x1BB134u;
            goto label_1bb134;
        }
    }
    ctx->pc = 0x1BB118u;
label_1bb118:
    // 0x1bb118: 0xc06f00c  jal         func_1BC030
    ctx->pc = 0x1BB118u;
    SET_GPR_U32(ctx, 31, 0x1BB120u);
    ctx->pc = 0x1BC030u;
    if (runtime->hasFunction(0x1BC030u)) {
        auto targetFn = runtime->lookupFunction(0x1BC030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB120u; }
        if (ctx->pc != 0x1BB120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC030_0x1bc030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB120u; }
        if (ctx->pc != 0x1BB120u) { return; }
    }
    ctx->pc = 0x1BB120u;
label_1bb120:
    // 0x1bb120: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB120u;
    {
        const bool branch_taken_0x1bb120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB120u;
            // 0x1bb124: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb120) {
            ctx->pc = 0x1BB134u;
            goto label_1bb134;
        }
    }
    ctx->pc = 0x1BB128u;
label_1bb128:
    // 0x1bb128: 0xc06f3e4  jal         func_1BCF90
    ctx->pc = 0x1BB128u;
    SET_GPR_U32(ctx, 31, 0x1BB130u);
    ctx->pc = 0x1BB12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB128u;
            // 0x1bb12c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCF90u;
    if (runtime->hasFunction(0x1BCF90u)) {
        auto targetFn = runtime->lookupFunction(0x1BCF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB130u; }
        if (ctx->pc != 0x1BB130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCF90_0x1bcf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB130u; }
        if (ctx->pc != 0x1BB130u) { return; }
    }
    ctx->pc = 0x1BB130u;
label_1bb130:
    // 0x1bb130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb134:
    // 0x1bb134: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB134u;
            // 0x1bb138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB13Cu;
    // 0x1bb13c: 0x0  nop
    ctx->pc = 0x1bb13cu;
    // NOP
    // 0x1bb140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb144: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1bb144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb14c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb150: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1bb150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bb154: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB154u;
    {
        const bool branch_taken_0x1bb154 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB154u;
            // 0x1bb158: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb154) {
            ctx->pc = 0x1BB170u;
            goto label_1bb170;
        }
    }
    ctx->pc = 0x1BB15Cu;
    // 0x1bb15c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb160: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB160u;
    {
        const bool branch_taken_0x1bb160 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB160u;
            // 0x1bb164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb160) {
            ctx->pc = 0x1BB180u;
            goto label_1bb180;
        }
    }
    ctx->pc = 0x1BB168u;
    // 0x1bb168: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB168u;
    {
        const bool branch_taken_0x1bb168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB168u;
            // 0x1bb16c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb168) {
            ctx->pc = 0x1BB18Cu;
            goto label_1bb18c;
        }
    }
    ctx->pc = 0x1BB170u;
label_1bb170:
    // 0x1bb170: 0xc06f02c  jal         func_1BC0B0
    ctx->pc = 0x1BB170u;
    SET_GPR_U32(ctx, 31, 0x1BB178u);
    ctx->pc = 0x1BC0B0u;
    if (runtime->hasFunction(0x1BC0B0u)) {
        auto targetFn = runtime->lookupFunction(0x1BC0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB178u; }
        if (ctx->pc != 0x1BB178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC0B0_0x1bc0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB178u; }
        if (ctx->pc != 0x1BB178u) { return; }
    }
    ctx->pc = 0x1BB178u;
label_1bb178:
    // 0x1bb178: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB178u;
    {
        const bool branch_taken_0x1bb178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB178u;
            // 0x1bb17c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb178) {
            ctx->pc = 0x1BB18Cu;
            goto label_1bb18c;
        }
    }
    ctx->pc = 0x1BB180u;
label_1bb180:
    // 0x1bb180: 0xc06f41c  jal         func_1BD070
    ctx->pc = 0x1BB180u;
    SET_GPR_U32(ctx, 31, 0x1BB188u);
    ctx->pc = 0x1BB184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB180u;
            // 0x1bb184: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD070u;
    if (runtime->hasFunction(0x1BD070u)) {
        auto targetFn = runtime->lookupFunction(0x1BD070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB188u; }
        if (ctx->pc != 0x1BB188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD070_0x1bd070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB188u; }
        if (ctx->pc != 0x1BB188u) { return; }
    }
    ctx->pc = 0x1BB188u;
label_1bb188:
    // 0x1bb188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb18c:
    // 0x1bb18c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB18Cu;
            // 0x1bb190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB194u;
    // 0x1bb194: 0x0  nop
    ctx->pc = 0x1bb194u;
    // NOP
    // 0x1bb198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb19c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1bb19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb1a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb1a4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb1a8: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1bb1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bb1ac: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB1ACu;
    {
        const bool branch_taken_0x1bb1ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1ACu;
            // 0x1bb1b0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1ac) {
            ctx->pc = 0x1BB1C8u;
            goto label_1bb1c8;
        }
    }
    ctx->pc = 0x1BB1B4u;
    // 0x1bb1b4: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb1b8: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB1B8u;
    {
        const bool branch_taken_0x1bb1b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1B8u;
            // 0x1bb1bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1b8) {
            ctx->pc = 0x1BB1D8u;
            goto label_1bb1d8;
        }
    }
    ctx->pc = 0x1BB1C0u;
    // 0x1bb1c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB1C0u;
    {
        const bool branch_taken_0x1bb1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1C0u;
            // 0x1bb1c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1c0) {
            ctx->pc = 0x1BB1E4u;
            goto label_1bb1e4;
        }
    }
    ctx->pc = 0x1BB1C8u;
label_1bb1c8:
    // 0x1bb1c8: 0xc06effa  jal         func_1BBFE8
    ctx->pc = 0x1BB1C8u;
    SET_GPR_U32(ctx, 31, 0x1BB1D0u);
    ctx->pc = 0x1BBFE8u;
    if (runtime->hasFunction(0x1BBFE8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBFE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1D0u; }
        if (ctx->pc != 0x1BB1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBFE8_0x1bbfe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1D0u; }
        if (ctx->pc != 0x1BB1D0u) { return; }
    }
    ctx->pc = 0x1BB1D0u;
label_1bb1d0:
    // 0x1bb1d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB1D0u;
    {
        const bool branch_taken_0x1bb1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1D0u;
            // 0x1bb1d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1d0) {
            ctx->pc = 0x1BB1E4u;
            goto label_1bb1e4;
        }
    }
    ctx->pc = 0x1BB1D8u;
label_1bb1d8:
    // 0x1bb1d8: 0xc06f3ac  jal         func_1BCEB0
    ctx->pc = 0x1BB1D8u;
    SET_GPR_U32(ctx, 31, 0x1BB1E0u);
    ctx->pc = 0x1BB1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1D8u;
            // 0x1bb1dc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCEB0u;
    if (runtime->hasFunction(0x1BCEB0u)) {
        auto targetFn = runtime->lookupFunction(0x1BCEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1E0u; }
        if (ctx->pc != 0x1BB1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCEB0_0x1bceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1E0u; }
        if (ctx->pc != 0x1BB1E0u) { return; }
    }
    ctx->pc = 0x1BB1E0u;
label_1bb1e0:
    // 0x1bb1e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb1e4:
    // 0x1bb1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1E4u;
            // 0x1bb1e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB1ECu;
    // 0x1bb1ec: 0x0  nop
    ctx->pc = 0x1bb1ecu;
    // NOP
    // 0x1bb1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb1f4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb1f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb1fc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bb1fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb200: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1bb200u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bb204: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB204u;
    {
        const bool branch_taken_0x1bb204 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB204u;
            // 0x1bb208: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb204) {
            ctx->pc = 0x1BB224u;
            goto label_1bb224;
        }
    }
    ctx->pc = 0x1BB20Cu;
    // 0x1bb20c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb210: 0x54e20005  bnel        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB210u;
    {
        const bool branch_taken_0x1bb210 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bb210) {
            ctx->pc = 0x1BB214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB210u;
            // 0x1bb214: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB228u;
            goto label_1bb228;
        }
    }
    ctx->pc = 0x1BB218u;
    // 0x1bb218: 0xc06f3c8  jal         func_1BCF20
    ctx->pc = 0x1BB218u;
    SET_GPR_U32(ctx, 31, 0x1BB220u);
    ctx->pc = 0x1BCF20u;
    if (runtime->hasFunction(0x1BCF20u)) {
        auto targetFn = runtime->lookupFunction(0x1BCF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB220u; }
        if (ctx->pc != 0x1BB220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCF20_0x1bcf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB220u; }
        if (ctx->pc != 0x1BB220u) { return; }
    }
    ctx->pc = 0x1BB220u;
label_1bb220:
    // 0x1bb220: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bb220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb224:
    // 0x1bb224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb228:
    // 0x1bb228: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bb228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb22c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB22Cu;
            // 0x1bb230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB234u;
    // 0x1bb234: 0x0  nop
    ctx->pc = 0x1bb234u;
    // NOP
    // 0x1bb238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb23c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb244: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bb244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb248: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1bb248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bb24c: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB24Cu;
    {
        const bool branch_taken_0x1bb24c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB24Cu;
            // 0x1bb250: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb24c) {
            ctx->pc = 0x1BB26Cu;
            goto label_1bb26c;
        }
    }
    ctx->pc = 0x1BB254u;
    // 0x1bb254: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb258: 0x54e20005  bnel        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB258u;
    {
        const bool branch_taken_0x1bb258 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bb258) {
            ctx->pc = 0x1BB25Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB258u;
            // 0x1bb25c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB270u;
            goto label_1bb270;
        }
    }
    ctx->pc = 0x1BB260u;
    // 0x1bb260: 0xc06f402  jal         func_1BD008
    ctx->pc = 0x1BB260u;
    SET_GPR_U32(ctx, 31, 0x1BB268u);
    ctx->pc = 0x1BD008u;
    if (runtime->hasFunction(0x1BD008u)) {
        auto targetFn = runtime->lookupFunction(0x1BD008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB268u; }
        if (ctx->pc != 0x1BB268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD008_0x1bd008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB268u; }
        if (ctx->pc != 0x1BB268u) { return; }
    }
    ctx->pc = 0x1BB268u;
label_1bb268:
    // 0x1bb268: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bb268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb26c:
    // 0x1bb26c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb270:
    // 0x1bb270: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bb270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb274: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB274u;
            // 0x1bb278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB27Cu;
    // 0x1bb27c: 0x0  nop
    ctx->pc = 0x1bb27cu;
    // NOP
}
