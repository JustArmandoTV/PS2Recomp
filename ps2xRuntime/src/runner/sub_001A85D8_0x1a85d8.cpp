#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A85D8
// Address: 0x1a85d8 - 0x1a8680
void sub_001A85D8_0x1a85d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A85D8_0x1a85d8");
#endif

    switch (ctx->pc) {
        case 0x1a8600u: goto label_1a8600;
        case 0x1a8614u: goto label_1a8614;
        case 0x1a8634u: goto label_1a8634;
        case 0x1a863cu: goto label_1a863c;
        case 0x1a8644u: goto label_1a8644;
        case 0x1a864cu: goto label_1a864c;
        case 0x1a8654u: goto label_1a8654;
        case 0x1a865cu: goto label_1a865c;
        default: break;
    }

    ctx->pc = 0x1a85d8u;

    // 0x1a85d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a85d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a85dc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1a85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1a85e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a85e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a85e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a85e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a85e8: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x1a85e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a85ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a85ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a85f0: 0x24519b8c  addiu       $s1, $v0, -0x6474
    ctx->pc = 0x1a85f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941580));
    // 0x1a85f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a85f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a85f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a85f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a8600:
    // 0x1a8600: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1a8600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1a8604: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8604u;
    {
        const bool branch_taken_0x1a8604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8604u;
            // 0x1a8608: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8604) {
            ctx->pc = 0x1A8618u;
            goto label_1a8618;
        }
    }
    ctx->pc = 0x1A860Cu;
    // 0x1a860c: 0xc06cedc  jal         func_1B3B70
    ctx->pc = 0x1A860Cu;
    SET_GPR_U32(ctx, 31, 0x1A8614u);
    ctx->pc = 0x1B3B70u;
    if (runtime->hasFunction(0x1B3B70u)) {
        auto targetFn = runtime->lookupFunction(0x1B3B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8614u; }
        if (ctx->pc != 0x1A8614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3B70_0x1b3b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8614u; }
        if (ctx->pc != 0x1A8614u) { return; }
    }
    ctx->pc = 0x1A8614u;
label_1a8614:
    // 0x1a8614: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a8614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8618:
    // 0x1a8618: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a8618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a861c: 0x603fff8  bgezl       $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A861Cu;
    {
        const bool branch_taken_0x1a861c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1a861c) {
            ctx->pc = 0x1A8620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A861Cu;
            // 0x1a8620: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A8600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a8600;
        }
    }
    ctx->pc = 0x1A8624u;
    // 0x1a8624: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1a8624u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1a8628: 0x26109b30  addiu       $s0, $s0, -0x64D0
    ctx->pc = 0x1a8628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941488));
    // 0x1a862c: 0xc06d956  jal         func_1B6558
    ctx->pc = 0x1A862Cu;
    SET_GPR_U32(ctx, 31, 0x1A8634u);
    ctx->pc = 0x1A8630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A862Cu;
            // 0x1a8630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6558u;
    if (runtime->hasFunction(0x1B6558u)) {
        auto targetFn = runtime->lookupFunction(0x1B6558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8634u; }
        if (ctx->pc != 0x1A8634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6558_0x1b6558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8634u; }
        if (ctx->pc != 0x1A8634u) { return; }
    }
    ctx->pc = 0x1A8634u;
label_1a8634:
    // 0x1a8634: 0xc0693d8  jal         func_1A4F60
    ctx->pc = 0x1A8634u;
    SET_GPR_U32(ctx, 31, 0x1A863Cu);
    ctx->pc = 0x1A8638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8634u;
            // 0x1a8638: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F60u;
    if (runtime->hasFunction(0x1A4F60u)) {
        auto targetFn = runtime->lookupFunction(0x1A4F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A863Cu; }
        if (ctx->pc != 0x1A863Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4F60_0x1a4f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A863Cu; }
        if (ctx->pc != 0x1A863Cu) { return; }
    }
    ctx->pc = 0x1A863Cu;
label_1a863c:
    // 0x1a863c: 0xc06e1b6  jal         func_1B86D8
    ctx->pc = 0x1A863Cu;
    SET_GPR_U32(ctx, 31, 0x1A8644u);
    ctx->pc = 0x1A8640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A863Cu;
            // 0x1a8640: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B86D8u;
    if (runtime->hasFunction(0x1B86D8u)) {
        auto targetFn = runtime->lookupFunction(0x1B86D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8644u; }
        if (ctx->pc != 0x1A8644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B86D8_0x1b86d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8644u; }
        if (ctx->pc != 0x1A8644u) { return; }
    }
    ctx->pc = 0x1A8644u;
label_1a8644:
    // 0x1a8644: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x1A8644u;
    SET_GPR_U32(ctx, 31, 0x1A864Cu);
    ctx->pc = 0x1A8648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8644u;
            // 0x1a8648: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (runtime->hasFunction(0x1A8968u)) {
        auto targetFn = runtime->lookupFunction(0x1A8968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A864Cu; }
        if (ctx->pc != 0x1A864Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8968_0x1a8968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A864Cu; }
        if (ctx->pc != 0x1A864Cu) { return; }
    }
    ctx->pc = 0x1A864Cu;
label_1a864c:
    // 0x1a864c: 0xc06a252  jal         func_1A8948
    ctx->pc = 0x1A864Cu;
    SET_GPR_U32(ctx, 31, 0x1A8654u);
    ctx->pc = 0x1A8948u;
    if (runtime->hasFunction(0x1A8948u)) {
        auto targetFn = runtime->lookupFunction(0x1A8948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8654u; }
        if (ctx->pc != 0x1A8654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8948_0x1a8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8654u; }
        if (ctx->pc != 0x1A8654u) { return; }
    }
    ctx->pc = 0x1A8654u;
label_1a8654:
    // 0x1a8654: 0xc06a244  jal         func_1A8910
    ctx->pc = 0x1A8654u;
    SET_GPR_U32(ctx, 31, 0x1A865Cu);
    ctx->pc = 0x1A8910u;
    if (runtime->hasFunction(0x1A8910u)) {
        auto targetFn = runtime->lookupFunction(0x1A8910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A865Cu; }
        if (ctx->pc != 0x1A865Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8910_0x1a8910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A865Cu; }
        if (ctx->pc != 0x1A865Cu) { return; }
    }
    ctx->pc = 0x1A865Cu;
label_1a865c:
    // 0x1a865c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a865cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8664: 0x250100a  movz        $v0, $s2, $s0
    ctx->pc = 0x1a8664u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x1a8668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a866c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a866cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8670: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a8670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8674: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8674u;
            // 0x1a8678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A867Cu;
    // 0x1a867c: 0x0  nop
    ctx->pc = 0x1a867cu;
    // NOP
}
