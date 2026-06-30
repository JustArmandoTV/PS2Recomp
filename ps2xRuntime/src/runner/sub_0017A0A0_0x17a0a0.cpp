#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A0A0
// Address: 0x17a0a0 - 0x17a0f0
void sub_0017A0A0_0x17a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A0A0_0x17a0a0");
#endif

    switch (ctx->pc) {
        case 0x17a0a0u: goto label_17a0a0;
        case 0x17a0a4u: goto label_17a0a4;
        case 0x17a0a8u: goto label_17a0a8;
        case 0x17a0acu: goto label_17a0ac;
        case 0x17a0b0u: goto label_17a0b0;
        case 0x17a0b4u: goto label_17a0b4;
        case 0x17a0b8u: goto label_17a0b8;
        case 0x17a0bcu: goto label_17a0bc;
        case 0x17a0c0u: goto label_17a0c0;
        case 0x17a0c4u: goto label_17a0c4;
        case 0x17a0c8u: goto label_17a0c8;
        case 0x17a0ccu: goto label_17a0cc;
        case 0x17a0d0u: goto label_17a0d0;
        case 0x17a0d4u: goto label_17a0d4;
        case 0x17a0d8u: goto label_17a0d8;
        case 0x17a0dcu: goto label_17a0dc;
        case 0x17a0e0u: goto label_17a0e0;
        case 0x17a0e4u: goto label_17a0e4;
        case 0x17a0e8u: goto label_17a0e8;
        case 0x17a0ecu: goto label_17a0ec;
        default: break;
    }

    ctx->pc = 0x17a0a0u;

label_17a0a0:
    // 0x17a0a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17a0a4:
    // 0x17a0a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17a0a8:
    // 0x17a0a8: 0xc05e158  jal         func_178560
label_17a0ac:
    if (ctx->pc == 0x17A0ACu) {
        ctx->pc = 0x17A0B0u;
        goto label_17a0b0;
    }
    ctx->pc = 0x17A0A8u;
    SET_GPR_U32(ctx, 31, 0x17A0B0u);
    ctx->pc = 0x178560u;
    if (runtime->hasFunction(0x178560u)) {
        auto targetFn = runtime->lookupFunction(0x178560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A0B0u; }
        if (ctx->pc != 0x17A0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178560_0x178560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A0B0u; }
        if (ctx->pc != 0x17A0B0u) { return; }
    }
    ctx->pc = 0x17A0B0u;
label_17a0b0:
    // 0x17a0b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17a0b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a0b4:
    // 0x17a0b4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_17a0b8:
    if (ctx->pc == 0x17A0B8u) {
        ctx->pc = 0x17A0B8u;
            // 0x17a0b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x17A0BCu;
        goto label_17a0bc;
    }
    ctx->pc = 0x17A0B4u;
    {
        const bool branch_taken_0x17a0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A0B4u;
            // 0x17a0b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0b4) {
            ctx->pc = 0x17A0E8u;
            goto label_17a0e8;
        }
    }
    ctx->pc = 0x17A0BCu;
label_17a0bc:
    // 0x17a0bc: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x17a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_17a0c0:
    // 0x17a0c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_17a0c4:
    if (ctx->pc == 0x17A0C4u) {
        ctx->pc = 0x17A0C4u;
            // 0x17a0c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A0C8u;
        goto label_17a0c8;
    }
    ctx->pc = 0x17A0C0u;
    {
        const bool branch_taken_0x17a0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A0C0u;
            // 0x17a0c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0c0) {
            ctx->pc = 0x17A0E0u;
            goto label_17a0e0;
        }
    }
    ctx->pc = 0x17A0C8u;
label_17a0c8:
    // 0x17a0c8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x17a0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_17a0cc:
    // 0x17a0cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a0d0:
    // 0x17a0d0: 0x40f809  jalr        $v0
label_17a0d4:
    if (ctx->pc == 0x17A0D4u) {
        ctx->pc = 0x17A0D4u;
            // 0x17a0d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A0D8u;
        goto label_17a0d8;
    }
    ctx->pc = 0x17A0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A0D8u);
        ctx->pc = 0x17A0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A0D0u;
            // 0x17a0d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A0D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A0D8u; }
            if (ctx->pc != 0x17A0D8u) { return; }
        }
        }
    }
    ctx->pc = 0x17A0D8u;
label_17a0d8:
    // 0x17a0d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_17a0dc:
    if (ctx->pc == 0x17A0DCu) {
        ctx->pc = 0x17A0DCu;
            // 0x17a0dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x17A0E0u;
        goto label_17a0e0;
    }
    ctx->pc = 0x17A0D8u;
    {
        const bool branch_taken_0x17a0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A0D8u;
            // 0x17a0dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0d8) {
            ctx->pc = 0x17A0E8u;
            goto label_17a0e8;
        }
    }
    ctx->pc = 0x17A0E0u;
label_17a0e0:
    // 0x17a0e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a0e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a0e4:
    // 0x17a0e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a0e8:
    // 0x17a0e8: 0x3e00008  jr          $ra
label_17a0ec:
    if (ctx->pc == 0x17A0ECu) {
        ctx->pc = 0x17A0ECu;
            // 0x17a0ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17A0F0u;
        goto label_fallthrough_0x17a0e8;
    }
    ctx->pc = 0x17A0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A0E8u;
            // 0x17a0ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x17a0e8:
    ctx->pc = 0x17A0F0u;
}
