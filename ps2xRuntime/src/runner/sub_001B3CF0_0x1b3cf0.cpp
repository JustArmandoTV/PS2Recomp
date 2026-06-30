#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3CF0
// Address: 0x1b3cf0 - 0x1b3d48
void sub_001B3CF0_0x1b3cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3CF0_0x1b3cf0");
#endif

    switch (ctx->pc) {
        case 0x1b3d04u: goto label_1b3d04;
        case 0x1b3d30u: goto label_1b3d30;
        default: break;
    }

    ctx->pc = 0x1b3cf0u;

    // 0x1b3cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3cf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b3cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b3cf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b3cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b3cfc: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B3CFCu;
    SET_GPR_U32(ctx, 31, 0x1B3D04u);
    ctx->pc = 0x1B3D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3CFCu;
            // 0x1b3d00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D04u; }
        if (ctx->pc != 0x1B3D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D04u; }
        if (ctx->pc != 0x1B3D04u) { return; }
    }
    ctx->pc = 0x1B3D04u;
label_1b3d04:
    // 0x1b3d04: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b3d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b3d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3D0Cu;
    {
        const bool branch_taken_0x1b3d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D0Cu;
            // 0x1b3d10: 0x34a50133  ori         $a1, $a1, 0x133 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)307);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d0c) {
            ctx->pc = 0x1B3D28u;
            goto label_1b3d28;
        }
    }
    ctx->pc = 0x1B3D14u;
    // 0x1b3d14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3d18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b3d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b3d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3d20: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B3D20u;
    ctx->pc = 0x1B3D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D20u;
            // 0x1b3d24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B3D28u;
label_1b3d28:
    // 0x1b3d28: 0xc06cf52  jal         func_1B3D48
    ctx->pc = 0x1B3D28u;
    SET_GPR_U32(ctx, 31, 0x1B3D30u);
    ctx->pc = 0x1B3D48u;
    if (runtime->hasFunction(0x1B3D48u)) {
        auto targetFn = runtime->lookupFunction(0x1B3D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D30u; }
        if (ctx->pc != 0x1B3D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3D48_0x1b3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D30u; }
        if (ctx->pc != 0x1B3D30u) { return; }
    }
    ctx->pc = 0x1B3D30u;
label_1b3d30:
    // 0x1b3d30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3d34: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1b3d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1b3d38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3d3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b3d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3d40: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D40u;
            // 0x1b3d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3D48u;
}
