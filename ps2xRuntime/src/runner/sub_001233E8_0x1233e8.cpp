#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001233E8
// Address: 0x1233e8 - 0x123478
void sub_001233E8_0x1233e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001233E8_0x1233e8");
#endif

    switch (ctx->pc) {
        case 0x123408u: goto label_123408;
        case 0x12341cu: goto label_12341c;
        case 0x12342cu: goto label_12342c;
        case 0x123438u: goto label_123438;
        case 0x123444u: goto label_123444;
        case 0x12344cu: goto label_12344c;
        case 0x12346cu: goto label_12346c;
        default: break;
    }

    ctx->pc = 0x1233e8u;

    // 0x1233e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1233e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1233ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1233ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1233f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1233f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233f4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1233f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1233f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1233f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1233fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1233fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123400: 0xc049776  jal         func_125DD8
    ctx->pc = 0x123400u;
    SET_GPR_U32(ctx, 31, 0x123408u);
    ctx->pc = 0x123404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123400u;
            // 0x123404: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123408u; }
        if (ctx->pc != 0x123408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123408u; }
        if (ctx->pc != 0x123408u) { return; }
    }
    ctx->pc = 0x123408u;
label_123408:
    // 0x123408: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x123408u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x12340c: 0x2405040f  addiu       $a1, $zero, 0x40F
    ctx->pc = 0x12340cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x123410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123414: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x123414u;
    SET_GPR_U32(ctx, 31, 0x12341Cu);
    ctx->pc = 0x123418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123414u;
            // 0x123418: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12341Cu; }
        if (ctx->pc != 0x12341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12341Cu; }
        if (ctx->pc != 0x12341Cu) { return; }
    }
    ctx->pc = 0x12341Cu;
label_12341c:
    // 0x12341c: 0x2405040f  addiu       $a1, $zero, 0x40F
    ctx->pc = 0x12341cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x123420: 0x52d3c  dsll32      $a1, $a1, 20
    ctx->pc = 0x123420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    // 0x123424: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x123424u;
    SET_GPR_U32(ctx, 31, 0x12342Cu);
    ctx->pc = 0x123428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123424u;
            // 0x123428: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12342Cu; }
        if (ctx->pc != 0x12342Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12342Cu; }
        if (ctx->pc != 0x12342Cu) { return; }
    }
    ctx->pc = 0x12342Cu;
label_12342c:
    // 0x12342c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12342cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123430: 0xc049776  jal         func_125DD8
    ctx->pc = 0x123430u;
    SET_GPR_U32(ctx, 31, 0x123438u);
    ctx->pc = 0x123434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123430u;
            // 0x123434: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123438u; }
        if (ctx->pc != 0x123438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123438u; }
        if (ctx->pc != 0x123438u) { return; }
    }
    ctx->pc = 0x123438u;
label_123438:
    // 0x123438: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x123438u;
    {
        const bool branch_taken_0x123438 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x12343Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123438u;
            // 0x12343c: 0x2405041f  addiu       $a1, $zero, 0x41F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123438) {
            ctx->pc = 0x123460u;
            goto label_123460;
        }
    }
    ctx->pc = 0x123440u;
    // 0x123440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123444:
    // 0x123444: 0xc04960a  jal         func_125828
    ctx->pc = 0x123444u;
    SET_GPR_U32(ctx, 31, 0x12344Cu);
    ctx->pc = 0x123448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123444u;
            // 0x123448: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12344Cu; }
        if (ctx->pc != 0x12344Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12344Cu; }
        if (ctx->pc != 0x12344Cu) { return; }
    }
    ctx->pc = 0x12344Cu;
label_12344c:
    // 0x12344c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12344cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123454: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123458: 0x3e00008  jr          $ra
    ctx->pc = 0x123458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12345Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123458u;
            // 0x12345c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123460u;
label_123460:
    // 0x123460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123464: 0xc04960a  jal         func_125828
    ctx->pc = 0x123464u;
    SET_GPR_U32(ctx, 31, 0x12346Cu);
    ctx->pc = 0x123468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123464u;
            // 0x123468: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12346Cu; }
        if (ctx->pc != 0x12346Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12346Cu; }
        if (ctx->pc != 0x12346Cu) { return; }
    }
    ctx->pc = 0x12346Cu;
label_12346c:
    // 0x12346c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x12346Cu;
    {
        const bool branch_taken_0x12346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12346Cu;
            // 0x123470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12346c) {
            ctx->pc = 0x123444u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123444;
        }
    }
    ctx->pc = 0x123474u;
    // 0x123474: 0x0  nop
    ctx->pc = 0x123474u;
    // NOP
}
