#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00335E80
// Address: 0x335e80 - 0x335f10
void sub_00335E80_0x335e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335E80_0x335e80");
#endif

    switch (ctx->pc) {
        case 0x335ec8u: goto label_335ec8;
        case 0x335ee4u: goto label_335ee4;
        case 0x335ef4u: goto label_335ef4;
        default: break;
    }

    ctx->pc = 0x335e80u;

    // 0x335e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335e84: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x335e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x335e88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x335e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x335e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x335e90: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x335e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x335e94: 0x90630080  lbu         $v1, 0x80($v1)
    ctx->pc = 0x335e94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x335e98: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x335E98u;
    {
        const bool branch_taken_0x335e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x335E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335E98u;
            // 0x335e9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335e98) {
            ctx->pc = 0x335EB4u;
            goto label_335eb4;
        }
    }
    ctx->pc = 0x335EA0u;
    // 0x335ea0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x335ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x335ea4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x335ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335ea8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x335ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x335eac: 0x50830012  beql        $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x335EACu;
    {
        const bool branch_taken_0x335eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x335eac) {
            ctx->pc = 0x335EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335EACu;
            // 0x335eb0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335EF8u;
            goto label_335ef8;
        }
    }
    ctx->pc = 0x335EB4u;
label_335eb4:
    // 0x335eb4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x335eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x335eb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x335eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335ebc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x335ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x335ec0: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x335EC0u;
    SET_GPR_U32(ctx, 31, 0x335EC8u);
    ctx->pc = 0x335EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335EC0u;
            // 0x335ec4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335EC8u; }
        if (ctx->pc != 0x335EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335EC8u; }
        if (ctx->pc != 0x335EC8u) { return; }
    }
    ctx->pc = 0x335EC8u;
label_335ec8:
    // 0x335ec8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x335ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x335ecc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x335eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335ed0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x335ED0u;
    {
        const bool branch_taken_0x335ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335ed0) {
            ctx->pc = 0x335ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335ED0u;
            // 0x335ed4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335EECu;
            goto label_335eec;
        }
    }
    ctx->pc = 0x335ED8u;
    // 0x335ed8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x335ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x335edc: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x335EDCu;
    SET_GPR_U32(ctx, 31, 0x335EE4u);
    ctx->pc = 0x335EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335EDCu;
            // 0x335ee0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335EE4u; }
        if (ctx->pc != 0x335EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335EE4u; }
        if (ctx->pc != 0x335EE4u) { return; }
    }
    ctx->pc = 0x335EE4u;
label_335ee4:
    // 0x335ee4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x335EE4u;
    {
        const bool branch_taken_0x335ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335ee4) {
            ctx->pc = 0x335EF4u;
            goto label_335ef4;
        }
    }
    ctx->pc = 0x335EECu;
label_335eec:
    // 0x335eec: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x335EECu;
    SET_GPR_U32(ctx, 31, 0x335EF4u);
    ctx->pc = 0x335EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335EECu;
            // 0x335ef0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335EF4u; }
        if (ctx->pc != 0x335EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335EF4u; }
        if (ctx->pc != 0x335EF4u) { return; }
    }
    ctx->pc = 0x335EF4u;
label_335ef4:
    // 0x335ef4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_335ef8:
    // 0x335ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x335ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335efc: 0x3e00008  jr          $ra
    ctx->pc = 0x335EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335EFCu;
            // 0x335f00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x335F04u;
    // 0x335f04: 0x0  nop
    ctx->pc = 0x335f04u;
    // NOP
    // 0x335f08: 0x0  nop
    ctx->pc = 0x335f08u;
    // NOP
    // 0x335f0c: 0x0  nop
    ctx->pc = 0x335f0cu;
    // NOP
}
