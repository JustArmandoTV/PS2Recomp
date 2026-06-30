#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F41A0
// Address: 0x3f41a0 - 0x3f4200
void sub_003F41A0_0x3f41a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F41A0_0x3f41a0");
#endif

    switch (ctx->pc) {
        case 0x3f41a0u: goto label_3f41a0;
        case 0x3f41a4u: goto label_3f41a4;
        case 0x3f41a8u: goto label_3f41a8;
        case 0x3f41acu: goto label_3f41ac;
        case 0x3f41b0u: goto label_3f41b0;
        case 0x3f41b4u: goto label_3f41b4;
        case 0x3f41b8u: goto label_3f41b8;
        case 0x3f41bcu: goto label_3f41bc;
        case 0x3f41c0u: goto label_3f41c0;
        case 0x3f41c4u: goto label_3f41c4;
        case 0x3f41c8u: goto label_3f41c8;
        case 0x3f41ccu: goto label_3f41cc;
        case 0x3f41d0u: goto label_3f41d0;
        case 0x3f41d4u: goto label_3f41d4;
        case 0x3f41d8u: goto label_3f41d8;
        case 0x3f41dcu: goto label_3f41dc;
        case 0x3f41e0u: goto label_3f41e0;
        case 0x3f41e4u: goto label_3f41e4;
        case 0x3f41e8u: goto label_3f41e8;
        case 0x3f41ecu: goto label_3f41ec;
        case 0x3f41f0u: goto label_3f41f0;
        case 0x3f41f4u: goto label_3f41f4;
        case 0x3f41f8u: goto label_3f41f8;
        case 0x3f41fcu: goto label_3f41fc;
        default: break;
    }

    ctx->pc = 0x3f41a0u;

label_3f41a0:
    // 0x3f41a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f41a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f41a4:
    // 0x3f41a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f41a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f41a8:
    // 0x3f41a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f41a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f41ac:
    // 0x3f41ac: 0x8c85039c  lw          $a1, 0x39C($a0)
    ctx->pc = 0x3f41acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 924)));
label_3f41b0:
    // 0x3f41b0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_3f41b4:
    if (ctx->pc == 0x3F41B4u) {
        ctx->pc = 0x3F41B4u;
            // 0x3f41b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F41B8u;
        goto label_3f41b8;
    }
    ctx->pc = 0x3F41B0u;
    {
        const bool branch_taken_0x3f41b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F41B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F41B0u;
            // 0x3f41b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f41b0) {
            ctx->pc = 0x3F41C8u;
            goto label_3f41c8;
        }
    }
    ctx->pc = 0x3F41B8u;
label_3f41b8:
    // 0x3f41b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f41bc:
    // 0x3f41bc: 0xc0fe48c  jal         func_3F9230
label_3f41c0:
    if (ctx->pc == 0x3F41C0u) {
        ctx->pc = 0x3F41C0u;
            // 0x3f41c0: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x3F41C4u;
        goto label_3f41c4;
    }
    ctx->pc = 0x3F41BCu;
    SET_GPR_U32(ctx, 31, 0x3F41C4u);
    ctx->pc = 0x3F41C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F41BCu;
            // 0x3f41c0: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F41C4u; }
        if (ctx->pc != 0x3F41C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F41C4u; }
        if (ctx->pc != 0x3F41C4u) { return; }
    }
    ctx->pc = 0x3F41C4u;
label_3f41c4:
    // 0x3f41c4: 0xae00039c  sw          $zero, 0x39C($s0)
    ctx->pc = 0x3f41c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
label_3f41c8:
    // 0x3f41c8: 0x8e040398  lw          $a0, 0x398($s0)
    ctx->pc = 0x3f41c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 920)));
label_3f41cc:
    // 0x3f41cc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f41d0:
    if (ctx->pc == 0x3F41D0u) {
        ctx->pc = 0x3F41D0u;
            // 0x3f41d0: 0xae000398  sw          $zero, 0x398($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
        ctx->pc = 0x3F41D4u;
        goto label_3f41d4;
    }
    ctx->pc = 0x3F41CCu;
    {
        const bool branch_taken_0x3f41cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f41cc) {
            ctx->pc = 0x3F41D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F41CCu;
            // 0x3f41d0: 0xae000398  sw          $zero, 0x398($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F41E8u;
            goto label_3f41e8;
        }
    }
    ctx->pc = 0x3F41D4u;
label_3f41d4:
    // 0x3f41d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f41d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f41d8:
    // 0x3f41d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f41d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f41dc:
    // 0x3f41dc: 0x320f809  jalr        $t9
label_3f41e0:
    if (ctx->pc == 0x3F41E0u) {
        ctx->pc = 0x3F41E0u;
            // 0x3f41e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F41E4u;
        goto label_3f41e4;
    }
    ctx->pc = 0x3F41DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F41E4u);
        ctx->pc = 0x3F41E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F41DCu;
            // 0x3f41e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F41E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F41E4u; }
            if (ctx->pc != 0x3F41E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3F41E4u;
label_3f41e4:
    // 0x3f41e4: 0xae000398  sw          $zero, 0x398($s0)
    ctx->pc = 0x3f41e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
label_3f41e8:
    // 0x3f41e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f41e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f41ec:
    // 0x3f41ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f41ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f41f0:
    // 0x3f41f0: 0x3e00008  jr          $ra
label_3f41f4:
    if (ctx->pc == 0x3F41F4u) {
        ctx->pc = 0x3F41F4u;
            // 0x3f41f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F41F8u;
        goto label_3f41f8;
    }
    ctx->pc = 0x3F41F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F41F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F41F0u;
            // 0x3f41f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F41F8u;
label_3f41f8:
    // 0x3f41f8: 0x0  nop
    ctx->pc = 0x3f41f8u;
    // NOP
label_3f41fc:
    // 0x3f41fc: 0x0  nop
    ctx->pc = 0x3f41fcu;
    // NOP
}
