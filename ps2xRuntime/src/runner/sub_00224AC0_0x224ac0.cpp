#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224AC0
// Address: 0x224ac0 - 0x224b00
void sub_00224AC0_0x224ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224AC0_0x224ac0");
#endif

    switch (ctx->pc) {
        case 0x224ac0u: goto label_224ac0;
        case 0x224ac4u: goto label_224ac4;
        case 0x224ac8u: goto label_224ac8;
        case 0x224accu: goto label_224acc;
        case 0x224ad0u: goto label_224ad0;
        case 0x224ad4u: goto label_224ad4;
        case 0x224ad8u: goto label_224ad8;
        case 0x224adcu: goto label_224adc;
        case 0x224ae0u: goto label_224ae0;
        case 0x224ae4u: goto label_224ae4;
        case 0x224ae8u: goto label_224ae8;
        case 0x224aecu: goto label_224aec;
        case 0x224af0u: goto label_224af0;
        case 0x224af4u: goto label_224af4;
        case 0x224af8u: goto label_224af8;
        case 0x224afcu: goto label_224afc;
        default: break;
    }

    ctx->pc = 0x224ac0u;

label_224ac0:
    // 0x224ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_224ac4:
    // 0x224ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_224ac8:
    // 0x224ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_224acc:
    // 0x224acc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_224ad0:
    // 0x224ad0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x224ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_224ad4:
    // 0x224ad4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x224ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_224ad8:
    // 0x224ad8: 0x320f809  jalr        $t9
label_224adc:
    if (ctx->pc == 0x224ADCu) {
        ctx->pc = 0x224ADCu;
            // 0x224adc: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x224AE0u;
        goto label_224ae0;
    }
    ctx->pc = 0x224AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x224AE0u);
        ctx->pc = 0x224ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224AD8u;
            // 0x224adc: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x224AE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x224AE0u; }
            if (ctx->pc != 0x224AE0u) { return; }
        }
        }
    }
    ctx->pc = 0x224AE0u;
label_224ae0:
    // 0x224ae0: 0xc08923c  jal         func_2248F0
label_224ae4:
    if (ctx->pc == 0x224AE4u) {
        ctx->pc = 0x224AE4u;
            // 0x224ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224AE8u;
        goto label_224ae8;
    }
    ctx->pc = 0x224AE0u;
    SET_GPR_U32(ctx, 31, 0x224AE8u);
    ctx->pc = 0x224AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224AE0u;
            // 0x224ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2248F0u;
    if (runtime->hasFunction(0x2248F0u)) {
        auto targetFn = runtime->lookupFunction(0x2248F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AE8u; }
        if (ctx->pc != 0x224AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002248F0_0x2248f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AE8u; }
        if (ctx->pc != 0x224AE8u) { return; }
    }
    ctx->pc = 0x224AE8u;
label_224ae8:
    // 0x224ae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_224aec:
    // 0x224aec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224af0:
    // 0x224af0: 0x3e00008  jr          $ra
label_224af4:
    if (ctx->pc == 0x224AF4u) {
        ctx->pc = 0x224AF4u;
            // 0x224af4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x224AF8u;
        goto label_224af8;
    }
    ctx->pc = 0x224AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224AF0u;
            // 0x224af4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224AF8u;
label_224af8:
    // 0x224af8: 0x0  nop
    ctx->pc = 0x224af8u;
    // NOP
label_224afc:
    // 0x224afc: 0x0  nop
    ctx->pc = 0x224afcu;
    // NOP
}
