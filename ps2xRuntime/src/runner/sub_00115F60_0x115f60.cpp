#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00115F60
// Address: 0x115f60 - 0x116040
void sub_00115F60_0x115f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115F60_0x115f60");
#endif

    switch (ctx->pc) {
        case 0x115f94u: goto label_115f94;
        case 0x116000u: goto label_116000;
        case 0x116010u: goto label_116010;
        case 0x116024u: goto label_116024;
        case 0x116034u: goto label_116034;
        default: break;
    }

    ctx->pc = 0x115f60u;

label_115f60:
    // 0x115f60: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x115f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x115f64: 0xc  syscall     0
    ctx->pc = 0x115f64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x115f68: 0x3e00008  jr          $ra
    ctx->pc = 0x115F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115F70u;
    // 0x115f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115f74: 0x2482fff3  addiu       $v0, $a0, -0xD
    ctx->pc = 0x115f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
    // 0x115f78: 0x2c420023  sltiu       $v0, $v0, 0x23
    ctx->pc = 0x115f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x115f7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115F7Cu;
    {
        const bool branch_taken_0x115f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115F7Cu;
            // 0x115f80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f7c) {
            ctx->pc = 0x115F8Cu;
            goto label_115f8c;
        }
    }
    ctx->pc = 0x115F84u;
    // 0x115f84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115F84u;
    {
        const bool branch_taken_0x115f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115F84u;
            // 0x115f88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f84) {
            ctx->pc = 0x115F94u;
            goto label_115f94;
        }
    }
    ctx->pc = 0x115F8Cu;
label_115f8c:
    // 0x115f8c: 0xc0457d8  jal         func_115F60
    ctx->pc = 0x115F8Cu;
    SET_GPR_U32(ctx, 31, 0x115F94u);
    ctx->pc = 0x115F60u;
    goto label_115f60;
    ctx->pc = 0x115F94u;
label_115f94:
    // 0x115f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115f98: 0x3e00008  jr          $ra
    ctx->pc = 0x115F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115F98u;
            // 0x115f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115FA0u;
    // 0x115fa0: 0x2403ffaa  addiu       $v1, $zero, -0x56
    ctx->pc = 0x115fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967210));
    // 0x115fa4: 0xc  syscall     0
    ctx->pc = 0x115fa4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x115fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x115FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115FB0u;
    // 0x115fb0: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x115fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x115fb4: 0xc  syscall     0
    ctx->pc = 0x115fb4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x115fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x115FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115FC0u;
    // 0x115fc0: 0x2403ffa9  addiu       $v1, $zero, -0x57
    ctx->pc = 0x115fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967209));
    // 0x115fc4: 0xc  syscall     0
    ctx->pc = 0x115fc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x115fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x115FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115FD0u;
    // 0x115fd0: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x115fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x115fd4: 0xc  syscall     0
    ctx->pc = 0x115fd4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x115fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x115FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115FE0u;
    // 0x115fe0: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x115fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x115fe4: 0xc  syscall     0
    ctx->pc = 0x115fe4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x115fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x115FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115FF0u;
    // 0x115ff0: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x115ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x115ff4: 0xc  syscall     0
    ctx->pc = 0x115ff4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x115ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x115FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116000u;
label_116000:
    // 0x116000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x116004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x116004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116008: 0xc0431f0  jal         func_10C7C0
    ctx->pc = 0x116008u;
    SET_GPR_U32(ctx, 31, 0x116010u);
    ctx->pc = 0x10C7C0u;
    if (runtime->hasFunction(0x10C7C0u)) {
        auto targetFn = runtime->lookupFunction(0x10C7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116010u; }
        if (ctx->pc != 0x116010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C7C0_0x10c7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116010u; }
        if (ctx->pc != 0x116010u) { return; }
    }
    ctx->pc = 0x116010u;
label_116010:
    // 0x116010: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x116010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x116014: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x116014u;
    {
        const bool branch_taken_0x116014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x116014) {
            ctx->pc = 0x11602Cu;
            goto label_11602c;
        }
    }
    ctx->pc = 0x11601Cu;
    // 0x11601c: 0xc045810  jal         func_116040
    ctx->pc = 0x11601Cu;
    SET_GPR_U32(ctx, 31, 0x116024u);
    ctx->pc = 0x116040u;
    if (runtime->hasFunction(0x116040u)) {
        auto targetFn = runtime->lookupFunction(0x116040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116024u; }
        if (ctx->pc != 0x116024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116040_0x116040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116024u; }
        if (ctx->pc != 0x116024u) { return; }
    }
    ctx->pc = 0x116024u;
label_116024:
    // 0x116024: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116024u;
    {
        const bool branch_taken_0x116024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116024u;
            // 0x116028: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116024) {
            ctx->pc = 0x116038u;
            goto label_116038;
        }
    }
    ctx->pc = 0x11602Cu;
label_11602c:
    // 0x11602c: 0xc0431f4  jal         func_10C7D0
    ctx->pc = 0x11602Cu;
    SET_GPR_U32(ctx, 31, 0x116034u);
    ctx->pc = 0x10C7D0u;
    if (runtime->hasFunction(0x10C7D0u)) {
        auto targetFn = runtime->lookupFunction(0x10C7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116034u; }
        if (ctx->pc != 0x116034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C7D0_0x10c7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116034u; }
        if (ctx->pc != 0x116034u) { return; }
    }
    ctx->pc = 0x116034u;
label_116034:
    // 0x116034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_116038:
    // 0x116038: 0x3e00008  jr          $ra
    ctx->pc = 0x116038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11603Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116038u;
            // 0x11603c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116040u;
}
