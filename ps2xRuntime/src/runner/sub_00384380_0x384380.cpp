#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384380
// Address: 0x384380 - 0x3843f0
void sub_00384380_0x384380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384380_0x384380");
#endif

    switch (ctx->pc) {
        case 0x384380u: goto label_384380;
        case 0x384384u: goto label_384384;
        case 0x384388u: goto label_384388;
        case 0x38438cu: goto label_38438c;
        case 0x384390u: goto label_384390;
        case 0x384394u: goto label_384394;
        case 0x384398u: goto label_384398;
        case 0x38439cu: goto label_38439c;
        case 0x3843a0u: goto label_3843a0;
        case 0x3843a4u: goto label_3843a4;
        case 0x3843a8u: goto label_3843a8;
        case 0x3843acu: goto label_3843ac;
        case 0x3843b0u: goto label_3843b0;
        case 0x3843b4u: goto label_3843b4;
        case 0x3843b8u: goto label_3843b8;
        case 0x3843bcu: goto label_3843bc;
        case 0x3843c0u: goto label_3843c0;
        case 0x3843c4u: goto label_3843c4;
        case 0x3843c8u: goto label_3843c8;
        case 0x3843ccu: goto label_3843cc;
        case 0x3843d0u: goto label_3843d0;
        case 0x3843d4u: goto label_3843d4;
        case 0x3843d8u: goto label_3843d8;
        case 0x3843dcu: goto label_3843dc;
        case 0x3843e0u: goto label_3843e0;
        case 0x3843e4u: goto label_3843e4;
        case 0x3843e8u: goto label_3843e8;
        case 0x3843ecu: goto label_3843ec;
        default: break;
    }

    ctx->pc = 0x384380u;

label_384380:
    // 0x384380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x384380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_384384:
    // 0x384384: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x384384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_384388:
    // 0x384388: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x384388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_38438c:
    // 0x38438c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38438cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_384390:
    // 0x384390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x384390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_384394:
    // 0x384394: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x384394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_384398:
    // 0x384398: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x384398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38439c:
    // 0x38439c: 0x8c7289e8  lw          $s2, -0x7618($v1)
    ctx->pc = 0x38439cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_3843a0:
    // 0x3843a0: 0x24900004  addiu       $s0, $a0, 0x4
    ctx->pc = 0x3843a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3843a4:
    // 0x3843a4: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3843a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3843a8:
    // 0x3843a8: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
label_3843ac:
    if (ctx->pc == 0x3843ACu) {
        ctx->pc = 0x3843B0u;
        goto label_3843b0;
    }
    ctx->pc = 0x3843A8u;
    {
        const bool branch_taken_0x3843a8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3843a8) {
            ctx->pc = 0x3843C8u;
            goto label_3843c8;
        }
    }
    ctx->pc = 0x3843B0u;
label_3843b0:
    // 0x3843b0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3843b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3843b4:
    // 0x3843b4: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x3843b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_3843b8:
    // 0x3843b8: 0x320f809  jalr        $t9
label_3843bc:
    if (ctx->pc == 0x3843BCu) {
        ctx->pc = 0x3843BCu;
            // 0x3843bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3843C0u;
        goto label_3843c0;
    }
    ctx->pc = 0x3843B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3843C0u);
        ctx->pc = 0x3843BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3843B8u;
            // 0x3843bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3843C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3843C0u; }
            if (ctx->pc != 0x3843C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3843C0u;
label_3843c0:
    // 0x3843c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3843c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3843c4:
    // 0x3843c4: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x3843c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_3843c8:
    // 0x3843c8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3843c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3843cc:
    // 0x3843cc: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
label_3843d0:
    if (ctx->pc == 0x3843D0u) {
        ctx->pc = 0x3843D0u;
            // 0x3843d0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x3843D4u;
        goto label_3843d4;
    }
    ctx->pc = 0x3843CCu;
    {
        const bool branch_taken_0x3843cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3843D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3843CCu;
            // 0x3843d0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3843cc) {
            ctx->pc = 0x3843A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3843a4;
        }
    }
    ctx->pc = 0x3843D4u;
label_3843d4:
    // 0x3843d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3843d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3843d8:
    // 0x3843d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3843d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3843dc:
    // 0x3843dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3843dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3843e0:
    // 0x3843e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3843e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3843e4:
    // 0x3843e4: 0x3e00008  jr          $ra
label_3843e8:
    if (ctx->pc == 0x3843E8u) {
        ctx->pc = 0x3843E8u;
            // 0x3843e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3843ECu;
        goto label_3843ec;
    }
    ctx->pc = 0x3843E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3843E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3843E4u;
            // 0x3843e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3843ECu;
label_3843ec:
    // 0x3843ec: 0x0  nop
    ctx->pc = 0x3843ecu;
    // NOP
}
