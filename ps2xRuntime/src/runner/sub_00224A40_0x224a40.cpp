#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224A40
// Address: 0x224a40 - 0x224a80
void sub_00224A40_0x224a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224A40_0x224a40");
#endif

    switch (ctx->pc) {
        case 0x224a40u: goto label_224a40;
        case 0x224a44u: goto label_224a44;
        case 0x224a48u: goto label_224a48;
        case 0x224a4cu: goto label_224a4c;
        case 0x224a50u: goto label_224a50;
        case 0x224a54u: goto label_224a54;
        case 0x224a58u: goto label_224a58;
        case 0x224a5cu: goto label_224a5c;
        case 0x224a60u: goto label_224a60;
        case 0x224a64u: goto label_224a64;
        case 0x224a68u: goto label_224a68;
        case 0x224a6cu: goto label_224a6c;
        case 0x224a70u: goto label_224a70;
        case 0x224a74u: goto label_224a74;
        case 0x224a78u: goto label_224a78;
        case 0x224a7cu: goto label_224a7c;
        default: break;
    }

    ctx->pc = 0x224a40u;

label_224a40:
    // 0x224a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_224a44:
    // 0x224a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_224a48:
    // 0x224a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_224a4c:
    // 0x224a4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_224a50:
    // 0x224a50: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x224a50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_224a54:
    // 0x224a54: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x224a54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_224a58:
    // 0x224a58: 0x320f809  jalr        $t9
label_224a5c:
    if (ctx->pc == 0x224A5Cu) {
        ctx->pc = 0x224A5Cu;
            // 0x224a5c: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x224A60u;
        goto label_224a60;
    }
    ctx->pc = 0x224A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x224A60u);
        ctx->pc = 0x224A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224A58u;
            // 0x224a5c: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x224A60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x224A60u; }
            if (ctx->pc != 0x224A60u) { return; }
        }
        }
    }
    ctx->pc = 0x224A60u;
label_224a60:
    // 0x224a60: 0xc08923c  jal         func_2248F0
label_224a64:
    if (ctx->pc == 0x224A64u) {
        ctx->pc = 0x224A64u;
            // 0x224a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224A68u;
        goto label_224a68;
    }
    ctx->pc = 0x224A60u;
    SET_GPR_U32(ctx, 31, 0x224A68u);
    ctx->pc = 0x224A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224A60u;
            // 0x224a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2248F0u;
    if (runtime->hasFunction(0x2248F0u)) {
        auto targetFn = runtime->lookupFunction(0x2248F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A68u; }
        if (ctx->pc != 0x224A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002248F0_0x2248f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A68u; }
        if (ctx->pc != 0x224A68u) { return; }
    }
    ctx->pc = 0x224A68u;
label_224a68:
    // 0x224a68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_224a6c:
    // 0x224a6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224a70:
    // 0x224a70: 0x3e00008  jr          $ra
label_224a74:
    if (ctx->pc == 0x224A74u) {
        ctx->pc = 0x224A74u;
            // 0x224a74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x224A78u;
        goto label_224a78;
    }
    ctx->pc = 0x224A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224A70u;
            // 0x224a74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224A78u;
label_224a78:
    // 0x224a78: 0x0  nop
    ctx->pc = 0x224a78u;
    // NOP
label_224a7c:
    // 0x224a7c: 0x0  nop
    ctx->pc = 0x224a7cu;
    // NOP
}
