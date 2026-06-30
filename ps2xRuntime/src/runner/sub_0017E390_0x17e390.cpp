#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E390
// Address: 0x17e390 - 0x17e3c0
void sub_0017E390_0x17e390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E390_0x17e390");
#endif

    switch (ctx->pc) {
        case 0x17e390u: goto label_17e390;
        case 0x17e394u: goto label_17e394;
        case 0x17e398u: goto label_17e398;
        case 0x17e39cu: goto label_17e39c;
        case 0x17e3a0u: goto label_17e3a0;
        case 0x17e3a4u: goto label_17e3a4;
        case 0x17e3a8u: goto label_17e3a8;
        case 0x17e3acu: goto label_17e3ac;
        case 0x17e3b0u: goto label_17e3b0;
        case 0x17e3b4u: goto label_17e3b4;
        case 0x17e3b8u: goto label_17e3b8;
        case 0x17e3bcu: goto label_17e3bc;
        default: break;
    }

    ctx->pc = 0x17e390u;

label_17e390:
    // 0x17e390: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17e390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_17e394:
    // 0x17e394: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e394u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17e398:
    // 0x17e398: 0x8c4366ec  lw          $v1, 0x66EC($v0)
    ctx->pc = 0x17e398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26348)));
label_17e39c:
    // 0x17e39c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x17e39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17e3a0:
    // 0x17e3a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_17e3a4:
    if (ctx->pc == 0x17E3A4u) {
        ctx->pc = 0x17E3A4u;
            // 0x17e3a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x17E3A8u;
        goto label_17e3a8;
    }
    ctx->pc = 0x17E3A0u;
    {
        const bool branch_taken_0x17e3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E3A0u;
            // 0x17e3a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3a0) {
            ctx->pc = 0x17E3B4u;
            goto label_17e3b4;
        }
    }
    ctx->pc = 0x17E3A8u;
label_17e3a8:
    // 0x17e3a8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_17e3ac:
    // 0x17e3ac: 0x60f809  jalr        $v1
label_17e3b0:
    if (ctx->pc == 0x17E3B0u) {
        ctx->pc = 0x17E3B0u;
            // 0x17e3b0: 0x8c4466f0  lw          $a0, 0x66F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26352)));
        ctx->pc = 0x17E3B4u;
        goto label_17e3b4;
    }
    ctx->pc = 0x17E3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17E3B4u);
        ctx->pc = 0x17E3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E3ACu;
            // 0x17e3b0: 0x8c4466f0  lw          $a0, 0x66F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26352)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17E3B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17E3B4u; }
            if (ctx->pc != 0x17E3B4u) { return; }
        }
        }
    }
    ctx->pc = 0x17E3B4u;
label_17e3b4:
    // 0x17e3b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17e3b8:
    // 0x17e3b8: 0x3e00008  jr          $ra
label_17e3bc:
    if (ctx->pc == 0x17E3BCu) {
        ctx->pc = 0x17E3BCu;
            // 0x17e3bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17E3C0u;
        goto label_fallthrough_0x17e3b8;
    }
    ctx->pc = 0x17E3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E3B8u;
            // 0x17e3bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x17e3b8:
    ctx->pc = 0x17E3C0u;
}
