#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1180
// Address: 0x1a1180 - 0x1a11c8
void sub_001A1180_0x1a1180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1180_0x1a1180");
#endif

    switch (ctx->pc) {
        case 0x1a1180u: goto label_1a1180;
        case 0x1a1184u: goto label_1a1184;
        case 0x1a1188u: goto label_1a1188;
        case 0x1a118cu: goto label_1a118c;
        case 0x1a1190u: goto label_1a1190;
        case 0x1a1194u: goto label_1a1194;
        case 0x1a1198u: goto label_1a1198;
        case 0x1a119cu: goto label_1a119c;
        case 0x1a11a0u: goto label_1a11a0;
        case 0x1a11a4u: goto label_1a11a4;
        case 0x1a11a8u: goto label_1a11a8;
        case 0x1a11acu: goto label_1a11ac;
        case 0x1a11b0u: goto label_1a11b0;
        case 0x1a11b4u: goto label_1a11b4;
        case 0x1a11b8u: goto label_1a11b8;
        case 0x1a11bcu: goto label_1a11bc;
        case 0x1a11c0u: goto label_1a11c0;
        case 0x1a11c4u: goto label_1a11c4;
        default: break;
    }

    ctx->pc = 0x1a1180u;

label_1a1180:
    // 0x1a1180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a1184:
    // 0x1a1184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1188:
    // 0x1a1188: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a1188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a118c:
    // 0x1a118c: 0xc0685c8  jal         func_1A1720
label_1a1190:
    if (ctx->pc == 0x1A1190u) {
        ctx->pc = 0x1A1190u;
            // 0x1a1190: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1194u;
        goto label_1a1194;
    }
    ctx->pc = 0x1A118Cu;
    SET_GPR_U32(ctx, 31, 0x1A1194u);
    ctx->pc = 0x1A1190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A118Cu;
            // 0x1a1190: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1720u;
    if (runtime->hasFunction(0x1A1720u)) {
        auto targetFn = runtime->lookupFunction(0x1A1720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1194u; }
        if (ctx->pc != 0x1A1194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1720_0x1a1720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1194u; }
        if (ctx->pc != 0x1A1194u) { return; }
    }
    ctx->pc = 0x1A1194u;
label_1a1194:
    // 0x1a1194: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_1a1198:
    if (ctx->pc == 0x1A1198u) {
        ctx->pc = 0x1A1198u;
            // 0x1a1198: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A119Cu;
        goto label_1a119c;
    }
    ctx->pc = 0x1A1194u;
    {
        const bool branch_taken_0x1a1194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1194) {
            ctx->pc = 0x1A1198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1194u;
            // 0x1a1198: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A11BCu;
            goto label_1a11bc;
        }
    }
    ctx->pc = 0x1A119Cu;
label_1a119c:
    // 0x1a119c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1a11a0:
    if (ctx->pc == 0x1A11A0u) {
        ctx->pc = 0x1A11A0u;
            // 0x1a11a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A11A4u;
        goto label_1a11a4;
    }
    ctx->pc = 0x1A119Cu;
    {
        const bool branch_taken_0x1a119c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a119c) {
            ctx->pc = 0x1A11A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A119Cu;
            // 0x1a11a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A11BCu;
            goto label_1a11bc;
        }
    }
    ctx->pc = 0x1A11A4u;
label_1a11a4:
    // 0x1a11a4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1a11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1a11a8:
    // 0x1a11a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a11ac:
    if (ctx->pc == 0x1A11ACu) {
        ctx->pc = 0x1A11ACu;
            // 0x1a11ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A11B0u;
        goto label_1a11b0;
    }
    ctx->pc = 0x1A11A8u;
    {
        const bool branch_taken_0x1a11a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11a8) {
            ctx->pc = 0x1A11ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A11A8u;
            // 0x1a11ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A11BCu;
            goto label_1a11bc;
        }
    }
    ctx->pc = 0x1A11B0u;
label_1a11b0:
    // 0x1a11b0: 0x40f809  jalr        $v0
label_1a11b4:
    if (ctx->pc == 0x1A11B4u) {
        ctx->pc = 0x1A11B4u;
            // 0x1a11b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A11B8u;
        goto label_1a11b8;
    }
    ctx->pc = 0x1A11B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A11B8u);
        ctx->pc = 0x1A11B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A11B0u;
            // 0x1a11b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A11B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A11B8u; }
            if (ctx->pc != 0x1A11B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A11B8u;
label_1a11b8:
    // 0x1a11b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a11b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a11bc:
    // 0x1a11bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a11bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a11c0:
    // 0x1a11c0: 0x3e00008  jr          $ra
label_1a11c4:
    if (ctx->pc == 0x1A11C4u) {
        ctx->pc = 0x1A11C4u;
            // 0x1a11c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A11C8u;
        goto label_fallthrough_0x1a11c0;
    }
    ctx->pc = 0x1A11C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A11C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A11C0u;
            // 0x1a11c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a11c0:
    ctx->pc = 0x1A11C8u;
}
