#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A5B0
// Address: 0x18a5b0 - 0x18a600
void sub_0018A5B0_0x18a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A5B0_0x18a5b0");
#endif

    switch (ctx->pc) {
        case 0x18a5b0u: goto label_18a5b0;
        case 0x18a5b4u: goto label_18a5b4;
        case 0x18a5b8u: goto label_18a5b8;
        case 0x18a5bcu: goto label_18a5bc;
        case 0x18a5c0u: goto label_18a5c0;
        case 0x18a5c4u: goto label_18a5c4;
        case 0x18a5c8u: goto label_18a5c8;
        case 0x18a5ccu: goto label_18a5cc;
        case 0x18a5d0u: goto label_18a5d0;
        case 0x18a5d4u: goto label_18a5d4;
        case 0x18a5d8u: goto label_18a5d8;
        case 0x18a5dcu: goto label_18a5dc;
        case 0x18a5e0u: goto label_18a5e0;
        case 0x18a5e4u: goto label_18a5e4;
        case 0x18a5e8u: goto label_18a5e8;
        case 0x18a5ecu: goto label_18a5ec;
        case 0x18a5f0u: goto label_18a5f0;
        case 0x18a5f4u: goto label_18a5f4;
        case 0x18a5f8u: goto label_18a5f8;
        case 0x18a5fcu: goto label_18a5fc;
        default: break;
    }

    ctx->pc = 0x18a5b0u;

label_18a5b0:
    // 0x18a5b0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a5b4:
    // 0x18a5b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a5b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a5b8:
    // 0x18a5b8: 0x8c426a38  lw          $v0, 0x6A38($v0)
    ctx->pc = 0x18a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27192)));
label_18a5bc:
    // 0x18a5bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a5c0:
    if (ctx->pc == 0x18A5C0u) {
        ctx->pc = 0x18A5C0u;
            // 0x18a5c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A5C4u;
        goto label_18a5c4;
    }
    ctx->pc = 0x18A5BCu;
    {
        const bool branch_taken_0x18a5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A5BCu;
            // 0x18a5c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5bc) {
            ctx->pc = 0x18A5CCu;
            goto label_18a5cc;
        }
    }
    ctx->pc = 0x18A5C4u;
label_18a5c4:
    // 0x18a5c4: 0x40f809  jalr        $v0
label_18a5c8:
    if (ctx->pc == 0x18A5C8u) {
        ctx->pc = 0x18A5CCu;
        goto label_18a5cc;
    }
    ctx->pc = 0x18A5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A5CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A5CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A5CCu; }
            if (ctx->pc != 0x18A5CCu) { return; }
        }
        }
    }
    ctx->pc = 0x18A5CCu;
label_18a5cc:
    // 0x18a5cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a5d0:
    // 0x18a5d0: 0x3e00008  jr          $ra
label_18a5d4:
    if (ctx->pc == 0x18A5D4u) {
        ctx->pc = 0x18A5D4u;
            // 0x18a5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A5D8u;
        goto label_18a5d8;
    }
    ctx->pc = 0x18A5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A5D0u;
            // 0x18a5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A5D8u;
label_18a5d8:
    // 0x18a5d8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a5dc:
    // 0x18a5dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a5dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a5e0:
    // 0x18a5e0: 0x8c426a3c  lw          $v0, 0x6A3C($v0)
    ctx->pc = 0x18a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27196)));
label_18a5e4:
    // 0x18a5e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a5e8:
    if (ctx->pc == 0x18A5E8u) {
        ctx->pc = 0x18A5E8u;
            // 0x18a5e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A5ECu;
        goto label_18a5ec;
    }
    ctx->pc = 0x18A5E4u;
    {
        const bool branch_taken_0x18a5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A5E4u;
            // 0x18a5e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5e4) {
            ctx->pc = 0x18A5F4u;
            goto label_18a5f4;
        }
    }
    ctx->pc = 0x18A5ECu;
label_18a5ec:
    // 0x18a5ec: 0x40f809  jalr        $v0
label_18a5f0:
    if (ctx->pc == 0x18A5F0u) {
        ctx->pc = 0x18A5F4u;
        goto label_18a5f4;
    }
    ctx->pc = 0x18A5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A5F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A5F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A5F4u; }
            if (ctx->pc != 0x18A5F4u) { return; }
        }
        }
    }
    ctx->pc = 0x18A5F4u;
label_18a5f4:
    // 0x18a5f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a5f8:
    // 0x18a5f8: 0x3e00008  jr          $ra
label_18a5fc:
    if (ctx->pc == 0x18A5FCu) {
        ctx->pc = 0x18A5FCu;
            // 0x18a5fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A600u;
        goto label_fallthrough_0x18a5f8;
    }
    ctx->pc = 0x18A5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A5F8u;
            // 0x18a5fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x18a5f8:
    ctx->pc = 0x18A600u;
}
