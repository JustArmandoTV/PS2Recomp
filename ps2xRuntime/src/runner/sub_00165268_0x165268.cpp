#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00165268
// Address: 0x165268 - 0x1652b0
void sub_00165268_0x165268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165268_0x165268");
#endif

    switch (ctx->pc) {
        case 0x165268u: goto label_165268;
        case 0x16526cu: goto label_16526c;
        case 0x165270u: goto label_165270;
        case 0x165274u: goto label_165274;
        case 0x165278u: goto label_165278;
        case 0x16527cu: goto label_16527c;
        case 0x165280u: goto label_165280;
        case 0x165284u: goto label_165284;
        case 0x165288u: goto label_165288;
        case 0x16528cu: goto label_16528c;
        case 0x165290u: goto label_165290;
        case 0x165294u: goto label_165294;
        case 0x165298u: goto label_165298;
        case 0x16529cu: goto label_16529c;
        case 0x1652a0u: goto label_1652a0;
        case 0x1652a4u: goto label_1652a4;
        case 0x1652a8u: goto label_1652a8;
        case 0x1652acu: goto label_1652ac;
        default: break;
    }

    ctx->pc = 0x165268u;

label_165268:
    // 0x165268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x165268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16526c:
    // 0x16526c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16526cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_165270:
    // 0x165270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_165274:
    // 0x165274: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x165274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_165278:
    // 0x165278: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x165278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_16527c:
    // 0x16527c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_165280:
    if (ctx->pc == 0x165280u) {
        ctx->pc = 0x165280u;
            // 0x165280: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->pc = 0x165284u;
        goto label_165284;
    }
    ctx->pc = 0x16527Cu;
    {
        const bool branch_taken_0x16527c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16527Cu;
            // 0x165280: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16527c) {
            ctx->pc = 0x165290u;
            goto label_165290;
        }
    }
    ctx->pc = 0x165284u;
label_165284:
    // 0x165284: 0x8c4361f0  lw          $v1, 0x61F0($v0)
    ctx->pc = 0x165284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25072)));
label_165288:
    // 0x165288: 0x60f809  jalr        $v1
label_16528c:
    if (ctx->pc == 0x16528Cu) {
        ctx->pc = 0x165290u;
        goto label_165290;
    }
    ctx->pc = 0x165288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x165290u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x165290u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x165290u; }
            if (ctx->pc != 0x165290u) { return; }
        }
        }
    }
    ctx->pc = 0x165290u;
label_165290:
    // 0x165290: 0xc05df9c  jal         func_177E70
label_165294:
    if (ctx->pc == 0x165294u) {
        ctx->pc = 0x165294u;
            // 0x165294: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x165298u;
        goto label_165298;
    }
    ctx->pc = 0x165290u;
    SET_GPR_U32(ctx, 31, 0x165298u);
    ctx->pc = 0x165294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165290u;
            // 0x165294: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177E70u;
    if (runtime->hasFunction(0x177E70u)) {
        auto targetFn = runtime->lookupFunction(0x177E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165298u; }
        if (ctx->pc != 0x165298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177E70_0x177e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165298u; }
        if (ctx->pc != 0x165298u) { return; }
    }
    ctx->pc = 0x165298u;
label_165298:
    // 0x165298: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x165298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_16529c:
    // 0x16529c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16529cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1652a0:
    // 0x1652a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1652a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1652a4:
    // 0x1652a4: 0x3e00008  jr          $ra
label_1652a8:
    if (ctx->pc == 0x1652A8u) {
        ctx->pc = 0x1652A8u;
            // 0x1652a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1652ACu;
        goto label_1652ac;
    }
    ctx->pc = 0x1652A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1652A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1652A4u;
            // 0x1652a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1652ACu;
label_1652ac:
    // 0x1652ac: 0x0  nop
    ctx->pc = 0x1652acu;
    // NOP
}
