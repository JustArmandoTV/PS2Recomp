#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CA460
// Address: 0x3ca460 - 0x3ca4d0
void sub_003CA460_0x3ca460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA460_0x3ca460");
#endif

    switch (ctx->pc) {
        case 0x3ca49cu: goto label_3ca49c;
        case 0x3ca4c4u: goto label_3ca4c4;
        default: break;
    }

    ctx->pc = 0x3ca460u;

    // 0x3ca460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ca460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ca464: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x3CA464u;
    {
        const bool branch_taken_0x3ca464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA464u;
            // 0x3ca468: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca464) {
            ctx->pc = 0x3CA4A4u;
            goto label_3ca4a4;
        }
    }
    ctx->pc = 0x3CA46Cu;
    // 0x3ca46c: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x3ca46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3ca470: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3ca470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3ca474: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ca474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3ca478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ca478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca47c: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x3ca47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x3ca480: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ca480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3ca484: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3ca484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3ca488: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3ca488u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x3ca48c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3ca48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3ca490: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3ca490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3ca494: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3CA494u;
    SET_GPR_U32(ctx, 31, 0x3CA49Cu);
    ctx->pc = 0x3CA498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA494u;
            // 0x3ca498: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA49Cu; }
        if (ctx->pc != 0x3CA49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA49Cu; }
        if (ctx->pc != 0x3CA49Cu) { return; }
    }
    ctx->pc = 0x3CA49Cu;
label_3ca49c:
    // 0x3ca49c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3CA49Cu;
    {
        const bool branch_taken_0x3ca49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA49Cu;
            // 0x3ca4a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca49c) {
            ctx->pc = 0x3CA4C8u;
            goto label_3ca4c8;
        }
    }
    ctx->pc = 0x3CA4A4u;
label_3ca4a4:
    // 0x3ca4a4: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x3ca4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3ca4a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ca4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3ca4ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ca4acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca4b0: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x3ca4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x3ca4b4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3ca4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3ca4b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3ca4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3ca4bc: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3CA4BCu;
    SET_GPR_U32(ctx, 31, 0x3CA4C4u);
    ctx->pc = 0x3CA4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA4BCu;
            // 0x3ca4c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA4C4u; }
        if (ctx->pc != 0x3CA4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA4C4u; }
        if (ctx->pc != 0x3CA4C4u) { return; }
    }
    ctx->pc = 0x3CA4C4u;
label_3ca4c4:
    // 0x3ca4c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ca4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ca4c8:
    // 0x3ca4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA4C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA4C8u;
            // 0x3ca4cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CA4D0u;
}
