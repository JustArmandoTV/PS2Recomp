#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5798
// Address: 0x1c5798 - 0x1c57f8
void sub_001C5798_0x1c5798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5798_0x1c5798");
#endif

    switch (ctx->pc) {
        case 0x1c5798u: goto label_1c5798;
        case 0x1c579cu: goto label_1c579c;
        case 0x1c57a0u: goto label_1c57a0;
        case 0x1c57a4u: goto label_1c57a4;
        case 0x1c57a8u: goto label_1c57a8;
        case 0x1c57acu: goto label_1c57ac;
        case 0x1c57b0u: goto label_1c57b0;
        case 0x1c57b4u: goto label_1c57b4;
        case 0x1c57b8u: goto label_1c57b8;
        case 0x1c57bcu: goto label_1c57bc;
        case 0x1c57c0u: goto label_1c57c0;
        case 0x1c57c4u: goto label_1c57c4;
        case 0x1c57c8u: goto label_1c57c8;
        case 0x1c57ccu: goto label_1c57cc;
        case 0x1c57d0u: goto label_1c57d0;
        case 0x1c57d4u: goto label_1c57d4;
        case 0x1c57d8u: goto label_1c57d8;
        case 0x1c57dcu: goto label_1c57dc;
        case 0x1c57e0u: goto label_1c57e0;
        case 0x1c57e4u: goto label_1c57e4;
        case 0x1c57e8u: goto label_1c57e8;
        case 0x1c57ecu: goto label_1c57ec;
        case 0x1c57f0u: goto label_1c57f0;
        case 0x1c57f4u: goto label_1c57f4;
        default: break;
    }

    ctx->pc = 0x1c5798u;

label_1c5798:
    // 0x1c5798: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c5798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c579c:
    // 0x1c579c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c579cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c57a0:
    // 0x1c57a0: 0x8c42a5e0  lw          $v0, -0x5A20($v0)
    ctx->pc = 0x1c57a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944224)));
label_1c57a4:
    // 0x1c57a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c57a8:
    if (ctx->pc == 0x1C57A8u) {
        ctx->pc = 0x1C57A8u;
            // 0x1c57a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C57ACu;
        goto label_1c57ac;
    }
    ctx->pc = 0x1C57A4u;
    {
        const bool branch_taken_0x1c57a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C57A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C57A4u;
            // 0x1c57a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57a4) {
            ctx->pc = 0x1C57C8u;
            goto label_1c57c8;
        }
    }
    ctx->pc = 0x1C57ACu;
label_1c57ac:
    // 0x1c57ac: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1c57acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1c57b0:
    // 0x1c57b0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1c57b4:
    if (ctx->pc == 0x1C57B4u) {
        ctx->pc = 0x1C57B4u;
            // 0x1c57b4: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x1C57B8u;
        goto label_1c57b8;
    }
    ctx->pc = 0x1C57B0u;
    {
        const bool branch_taken_0x1c57b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c57b0) {
            ctx->pc = 0x1C57B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C57B0u;
            // 0x1c57b4: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C57CCu;
            goto label_1c57cc;
        }
    }
    ctx->pc = 0x1C57B8u;
label_1c57b8:
    // 0x1c57b8: 0x40f809  jalr        $v0
label_1c57bc:
    if (ctx->pc == 0x1C57BCu) {
        ctx->pc = 0x1C57C0u;
        goto label_1c57c0;
    }
    ctx->pc = 0x1C57B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C57C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C57C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C57C0u; }
            if (ctx->pc != 0x1C57C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C57C0u;
label_1c57c0:
    // 0x1c57c0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1c57c4:
    if (ctx->pc == 0x1C57C4u) {
        ctx->pc = 0x1C57C4u;
            // 0x1c57c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C57C8u;
        goto label_1c57c8;
    }
    ctx->pc = 0x1C57C0u;
    {
        const bool branch_taken_0x1c57c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C57C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C57C0u;
            // 0x1c57c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57c0) {
            ctx->pc = 0x1C57F0u;
            goto label_1c57f0;
        }
    }
    ctx->pc = 0x1C57C8u;
label_1c57c8:
    // 0x1c57c8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c57c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c57cc:
    // 0x1c57cc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c57ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c57d0:
    // 0x1c57d0: 0x2484bee8  addiu       $a0, $a0, -0x4118
    ctx->pc = 0x1c57d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
label_1c57d4:
    // 0x1c57d4: 0x24c6bf20  addiu       $a2, $a2, -0x40E0
    ctx->pc = 0x1c57d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950688));
label_1c57d8:
    // 0x1c57d8: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1c57d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_1c57dc:
    // 0x1c57dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c57dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c57e0:
    // 0x1c57e0: 0xc0711fe  jal         func_1C47F8
label_1c57e4:
    if (ctx->pc == 0x1C57E4u) {
        ctx->pc = 0x1C57E4u;
            // 0x1c57e4: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C57E8u;
        goto label_1c57e8;
    }
    ctx->pc = 0x1C57E0u;
    SET_GPR_U32(ctx, 31, 0x1C57E8u);
    ctx->pc = 0x1C57E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C57E0u;
            // 0x1c57e4: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C57E8u; }
        if (ctx->pc != 0x1C57E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C57E8u; }
        if (ctx->pc != 0x1C57E8u) { return; }
    }
    ctx->pc = 0x1C57E8u;
label_1c57e8:
    // 0x1c57e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c57ec:
    // 0x1c57ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c57ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c57f0:
    // 0x1c57f0: 0x3e00008  jr          $ra
label_1c57f4:
    if (ctx->pc == 0x1C57F4u) {
        ctx->pc = 0x1C57F4u;
            // 0x1c57f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C57F8u;
        goto label_fallthrough_0x1c57f0;
    }
    ctx->pc = 0x1C57F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C57F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C57F0u;
            // 0x1c57f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1c57f0:
    ctx->pc = 0x1C57F8u;
}
